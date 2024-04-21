<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="20008000">
	<Property Name="varPersistentID:{3861437B-644A-4752-A6D2-FC79AF6E4C14}" Type="Ref">/My Computer/dem san pham vi.vi/Count Up/reset</Property>
	<Property Name="varPersistentID:{5450B103-19D2-4422-82FF-9835D2923F7B}" Type="Ref">/My Computer/dem san pham vi.vi/Count Up/done</Property>
	<Property Name="varPersistentID:{6427AB24-9E36-4CBD-90F0-4B28F3A9CDD4}" Type="Ref">/My Computer/dem san pham vi.vi/Count Up/counter value</Property>
	<Property Name="varPersistentID:{8528377B-7DF0-42E2-BCB5-235AA2ABAAF4}" Type="Ref">/My Computer/dem san pham vi.vi/Count Up/preset value</Property>
	<Property Name="varPersistentID:{E9EB5EB1-A82A-4CD3-A852-B247BC7B0848}" Type="Ref">/My Computer/dem san pham vi.vi/Count Up/error out</Property>
	<Property Name="varPersistentID:{EB503E00-97BB-48E8-B8F6-8CB73B66932D}" Type="Ref">/My Computer/dem san pham vi.vi/Count Up/error in</Property>
	<Property Name="varPersistentID:{F28E168E-ED91-4A19-8556-3FEA593984A5}" Type="Ref">/My Computer/dem san pham vi.vi/Count Up/count up</Property>
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="dem san pham vi.vi" Type="VI" URL="../dem san pham vi.vi">
			<Item Name="Count Up" Type="IIO Function Block">
				<Item Name="count up" Type="Variable"/>
				<Item Name="counter value" Type="Variable"/>
				<Item Name="done" Type="Variable"/>
				<Item Name="error in" Type="Variable"/>
				<Item Name="error out" Type="Variable"/>
				<Item Name="preset value" Type="Variable"/>
				<Item Name="reset" Type="Variable"/>
			</Item>
		</Item>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="liblinxdevice.dll" Type="Document" URL="/&lt;vilib&gt;/MakerHub/LINX/Resources/liblinxdevice.dll"/>
				<Item Name="LMH-LINX.lvlib" Type="Library" URL="/&lt;vilib&gt;/MakerHub/LINX/LMH-LINX.lvlib"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="VISA Configure Serial Port" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port"/>
				<Item Name="VISA Configure Serial Port (Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Instr).vi"/>
				<Item Name="VISA Configure Serial Port (Serial Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Serial Instr).vi"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
			</Item>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
