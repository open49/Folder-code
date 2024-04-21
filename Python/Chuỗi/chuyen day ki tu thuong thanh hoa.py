'''
cach dung chuoi trong python

co the dung 3 cap nhay don hoac 3 cap nhay doi de khai bao chuoi nhieu dong trong python
'''
s = '''
nguyen
anh 
tuan
'''
print(s)

#ham len() : tra ve do dai cua chuoi
x = 'abc'
print(len(x))
x = "abcd"
print(len(x))

#phuong thuc lower dung de chuyen 1 chuoi ve dang in thuong 

y = 'CODELEARN123'
print(y.lower())

#phuong thuc uper dung de chuyen 1 chuoi ve dang in hoa 

z = 'codelearn123'
print(z.upper())

#phuong thuc isalnum dung de kiem tra xem co phai chuoi chi co moi ki tu chu va so k 
#neu chi co ki tu chu  va so thi hien true , neu co ki tu dac biet khac thi hien false

s1 = 'codelearnio'
print(s1.isalnum())

s2 = 'codelearn.io'

print(s2.isalnum())

# phuong thuc isalpha dung de kiem tra xem co phai la 1 chuoi toan ki tu chu khong
s3 = 'codelearn'

print(s3.isalpha())

s4 = 'codelearn200222'

print(s4.isalpha())

#phuong thuc inumeric kiem tra xem chuoi co phai toan ki tu so hay khong 


s5 = '20001394i901'

print(s5.isnumeric())

s6 = '123123123123'
print(s6.isnumeric())
'''
7. Phương thức split()

Phương thức này được dùng để cắt một chuỗi ra thành list các chuỗi khác dựa trên một phần tử trong chuỗi đầu vào:
'''
s = "Welcome to Codelearn.io!"
print(s.split(" "))
s = "A1B1C1D1E1"
print(s.split("1"))
'''Kết quả khi chạy chương trình:

['Welcome', 'to', 'Codelearn.io!']
['A', 'B', 'C', 'D', 'E', '']

8. Phương thức join()

Phương thức này được dùng để nối một tập hợp thành một chuỗi sử dụng kí tự cho trước. Ví dụ:
'''
lst = ["Welcome", "to", "Codelearn.io!"]
print(" ".join(lst))
lst = ["A", "B", "C"]
print("-".join(lst))

'''
Kết quả khi chạy chương trình:

Welcome to Codelearn.io!
A-B-C

'''
#Bạn có thể sử dụng hàm split() và hàm join() để loại bỏ các khoảng trắng thừa trong chuỗi. Ví dụ:

message = "   Welcome   to Codelearn.io!   "
print(" ".join(message.split()))
'''
Kết quả khi chạy chương trình:

Welcome to Codelearn.io!

'''
'''
9. Phương thức replace()

Phương thức này được dùng để thay thế các chuỗi con tìm thấy thành chuỗi con mới. Ví dụ:
'''
name = "Cod3l3arn"
print(name.replace("3", "e"))

#Kết quả khi chạy chương trình:

#Codelearn
