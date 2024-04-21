#include <ESP8266WiFi.h>
#include <PubSubClient.h>
// Update these with values suitable for your network.

const char* ssid = "Tuan";
const char* password = "tuan@6789";
const char* mqtt_server = "test.mosquitto.org";

WiFiClient espClient;
PubSubClient client(espClient);// khoi tao 1 doi tuong wificlient co ten la espclient . su dung de quan ly ket noi wifi
unsigned long lastMsg = 0; // lastmsg de theo doi thoi diem cuoi cung ma tin nhan mqttduoc gui di
#define MSG_BUFFER_SIZE	(50)// kich thuoc mang msg = 50
char msg[MSG_BUFFER_SIZE];// mang dung de luu tru du lieu tin nhan truoc khi gui di
int value = 0; // tang gia tri theo thoi gian va gui noi dung tin nhan di
int count = 0;

void setup_wifi() {// ket noi wifi

  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA); // esp8266  ve che do station . ket noi voi 1 wifi cho truoc 
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");// moi lan liem tra ket noi khong thanh cong se in ra 1 dau .
  }

  randomSeed(micros());// ham micros de lay gia tri microgiay hien tai tu thoi diem khoi dong

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

}
void callback(char* topic, byte* payload, unsigned int length) {// de xu ly du lieu khi 1 tin nhan mqtt duoc nhan,xu ly cac tin nhan den
  // topic : chu de tin nhan mqtt
  //byte : mang byte chua du lieu tin nhan
  //length : do daicua du lieu
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}

void reconnect() {// khi bi mat ket noi hoac chua ket noi ban dau
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    String clientId = "ESP8266Client-";// tao 1 chuoi clientid de xac dinh 1 cah duuy nhat cho thiet bi trong mang mqtt
    clientId += String(random(0xffff), HEX);// noi them 1 so hexa ngay nhien vao day de cho no la duy nhat
    // Attempt to connect
    if (client.connect(clientId.c_str())) {// neu ket noi thanh cong
      Serial.println("connected");// in ra neu ket noi thanh cong
      // Once connected, publish an announcement...
      client.publish("controlData", "hello IoT Node...");// dui len chu de controldata tin nhan voi noi dung..
      // ... and resubscribe
      client.subscribe("sensingData");// nhan tin nhan tu chu de sensing data khi ket noi thanh cong
    } else { //neu fail
      Serial.print("failed, rc=");
      Serial.print(client.state());//In ra mã trạng thái của đối tượng client để biết lý do kết nối không thành công.
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);// thiet lap may chu mqtt va port 
  client.setCallback(callback);// khi tin nhan den ham call back duoc goi de xu ly du lieu tin nhan
}

void loop() {

  if (!client.connected()) {// kiem tra ket noi mqtt co duoc thiet lap k . neu k goi ham reconnet
    reconnect();
  }
  client.loop();

  unsigned long now = millis();// lay thoi dian hien tai tinh bang milisecond tinh tu khhi thiet bi khoi dong
  if (now - lastMsg > 2000) { // kiem tra neu da qua 2s tu lan gui tin nhan truoc
    lastMsg = now;// cap nhat gia tri last msg de theo doi làn gui tin nhan cuoi cung
    ++value;// tang gia tri bien value
    if (!(value%2)){
      snprintf (msg, MSG_BUFFER_SIZE, "1");
      Serial.print("Publish message: ");
      Serial.println(msg);
      client.publish("controlData", msg);// gui tin nhan len chu de controldata
    }else{
      snprintf (msg, MSG_BUFFER_SIZE, "0");
      Serial.print("Publish message: ");
      Serial.println(msg);
      client.publish("controlData", msg);
    }
  }
}
