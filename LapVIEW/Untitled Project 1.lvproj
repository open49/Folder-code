<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="20008000">
	<Property Name="varPersistentID:{2A76AE85-07FE-4DF8-8742-B7828DDC2DDC}" Type="Ref">/My Computer/Untitled 1.vi/Count Up/error out</Property>
	<Property Name="varPersistentID:{39F613CA-DA8A-465D-A471-81EA1F057CCC}" Type="Ref">/My Computer/Untitled 1.vi/Count Up/reset</Property>
	<Property Name="varPersistentID:{448578EC-8F11-46C3-B020-8E562DA46BAE}" Type="Ref">/My Computer/Untitled 1.vi/Count Up/error in</Property>
	<Property Name="varPersistentID:{5852C827-7A99-4D70-B07C-142D82A5BFA7}" Type="Ref">/My Computer/Untitled 1.vi/Count Up/counter value</Property>
	<Property Name="varPersistentID:{B87E6EFE-9839-4B9E-B4FD-14AFEAA67EDA}" Type="Ref">/My Computer/Untitled 1.vi/Count Up/done</Property>
	<Property Name="varPersistentID:{BC0E110F-7926-4485-AE62-07C3917BDA7C}" Type="Ref">/My Computer/Untitled 1.vi/Count Up/preset value</Property>
	<Property Name="varPersistentID:{E4CBBE8D-79CD-43A1-92CB-9FECFE89D697}" Type="Ref">/My Computer/Untitled 1.vi/Count Up/count up</Property>
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
		<Item Name="Untitled 1.vi" Type="VI" URL="../Untitled 1.vi">
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
