# 245 Command Prompt Commands Reference

Welcome to the Command Prompt Commands Reference repository! This repository serves as a handy guide to various useful Command Prompt commands that can be used on Windows systems. Whether you are a beginner or an experienced user, these commands can help you perform a wide range of tasks efficiently.

## Introduction

The Command Prompt (CMD) is a powerful command-line interpreter available in Windows operating systems. It allows you to interact with the system using text commands, providing a flexible and efficient way to perform tasks and troubleshoot issues.

## How to Use

To use these commands, follow these steps:

1. **Open the Command Prompt:** Press `Win + R`, type `cmd`, and press `Enter`. This will open the Command Prompt window.
2. **Navigate to a Directory (Optional):** You can change the current working directory using the `cd` command. For example, `cd C:\Users\YourUsername\Documents` will take you to the "Documents" folder.
3. **Enter a Command:** Type the command you wish to execute and press `Enter`. The command will be executed, and you'll see the output on the screen.

Please note that some commands may require administrative privileges. In such cases, run the Command Prompt as an administrator.

## Command List

Below is a list of essential Command Prompt commands along with a brief explanation of what each command does:

1. assoc: Displays or modifies file associations. It shows the file type associated with a particular file extension.

2. attrib: Displays or changes file attributes, such as hidden, read-only, and system attributes.

3. chkdsk: Checks a disk for errors and attempts to fix them. It's used to ensure the integrity of the file system.

4. dir: Lists the files and directories in the current directory. It provides information about file sizes, dates, and attributes.

5. ipconfig: Displays information about the computer's network configuration. It shows the IP address, subnet mask, and default gateway.

6. ping: Sends a network request to check if a remote host is reachable. It also measures the round-trip time for packets sent to the host.

7. shutdown: Shuts down or restarts the computer. You can use options like `/s` to shut down and `/r` to restart.

8. systeminfo: Displays detailed system information, including the OS version, manufacturer, and system uptime.

9. tasklist: Lists all running processes with detailed information such as process ID, memory usage, and CPU time.

10. taskkill: Terminates a running process using its process ID or image name. Use with caution as it forcefully ends a process.

11. netstat: Displays network statistics, including active network connections, listening ports, and protocol statistics.

12. powercfg: Manages power settings and configurations, allowing you to control power plans and energy efficiency settings.

13. reg: Interacts with the Windows registry, enabling you to add, modify, or delete registry keys and values.

14. sfc: System File Checker is a utility that scans and repairs corrupted or missing system files on Windows.

15. chcp: Displays or sets the active code page number used in the Command Prompt window. It is used for character encoding.

16. diskpart: A command-line disk partitioning utility that allows you to manage disks, partitions, and volumes.

17. mkdir: Creates a new directory or folder with the specified name.

18. copy: Copies one or more files from one location to another.

19. move: Moves one or more files from one location to another. It is similar to the `cut` command in graphical interfaces.

20. del: Deletes one or more files. Use with caution, as it permanently removes files.

21. cacls: Displays or modifies access control lists (ACLs) of files.

22. cipher: Displays or alters the encryption of folders and files on NTFS drives. It can be used to securely encrypt data.

23. compact: Compresses files and directories to save disk space.

24. defrag: Defragments a disk to optimize disk performance.

25. fsutil: Performs various file and volume-related operations, such as querying file system information and managing sparse files.

26. find: Searches for a specific string of text in files.

27. findstr: Searches for strings in files using regular expressions.

28. fc: Compares two text files and displays the differences.

29. more: Displays the output one screen at a time.

30. sort: Sorts the lines of a text file in alphabetical order.

31. xcopy: An extended version of the copy command, capable of copying entire directories and their subdirectories.

32. tree: Displays a graphical representation of the folder structure.

33. type: Displays the contents of a text file on the screen.

34. cls: Clears the Command Prompt screen, making it easier to read and work with.

35. echo: Displays messages or enables and disables the display of Command Prompt commands.

36. pause: Suspends the execution of a batch program and displays the "Press any key to continue" message.

37. taskmgr: Opens the Task Manager, allowing you to monitor and manage running processes and system performance.

38. msconfig: Opens the System Configuration utility to manage startup programs and services.

39. dxdiag: Opens the DirectX Diagnostic Tool, which provides detailed information about DirectX components and drivers.

40. diskmgmt.msc: Opens the Disk Management tool to manage disks, partitions, and volumes.

41. devmgmt.msc: Opens the Device Manager to view and manage hardware devices and drivers.

42. eventvwr.msc: Opens the Event Viewer, which logs system, security, and application events.

43. services.msc: Opens the Services Manager to start, stop, and configure Windows services.

44. compmgmt.msc: Opens the Computer Management console, providing access to various system tools and utilities.

45. control: Opens the Control Panel, allowing you to access various system settings and configurations.

46. gpedit.msc: Opens the Local Group Policy Editor, which lets you configure various Windows settings and policies.

47. notepad: Opens the Notepad text editor.

48. calc: Opens the Calculator application.

49. msinfo32: Opens the System Information utility, providing comprehensive system details.

50. winver: Displays the Windows version and build number.

51. dxdiag: Opens the DirectX Diagnostic Tool to provide detailed information about DirectX components and drivers.

52. ver: Shows the Windows version information.

53. hostname: Displays the name of the computer.

54. echo %username%: Shows the currently logged-in user's username.

55. echo %userprofile%: Prints the path to the current user's profile folder.

56. echo %cd%: Displays the current directory.

57. whoami: Shows the current user and their security privileges.

58. systeminfo | find "System Boot Time": Displays the system boot time.

59. systeminfo | find "Total Physical Memory": Shows the total RAM installed on the system.

60. systeminfo | findstr /C:"Host Name" /C:"Domain": Shows the host name and domain information.

61. systeminfo | findstr /C:"System Boot Time" /C:"System Up Time": Shows the system boot time and uptime.

62. systeminfo | findstr /C:"System Boot Time" /C:"System Manufacturer" /C:"System Model" /C:"System Type" /C:"Processor(s)": Displays system information.

63. systeminfo | findstr /C:"OS Name" /C:"OS Version": Shows the operating system name and version.

64. wmic bios get serialnumber: Displays the computer's serial number (BIOS).

65. wmic cpu get caption: Lists the CPU (processor) information.

66. wmic path softwarelicensingservice get OA3xOriginalProductKey: Shows the Windows product key.

67. wmic os get osarchitecture: Displays the operating system's architecture (32-bit or 64-bit).

68. wmic path win32_videocontroller get caption: Lists the installed video/graphics cards.

69. wmic path win32_physicalmemory get capacity: Displays the capacity of the installed RAM.

70. wmic process list full: Lists all running processes with detailed information.

71. wmic useraccount list full: Shows details of all user accounts on the system.

72. wmic qfe list: Lists all installed Windows updates.

73. wmic logicaldisk list brief: Displays a brief summary of all logical disks (drives) on the system.

74. wmic partition list brief: Lists brief information about all partitions on all disks.

75. wmic product list brief: Shows a brief list of installed software products.

76. wmic startup list full: Lists all startup programs.

77. wmic startup get caption,command: Displays the caption and command of each startup program.

78. wmic service list brief: Lists all services with brief information.

79. wmic service get caption,displayname,startmode,state: Displays information about services, including their start mode and state.

80. wmic nicconfig get caption,ipaddress,macaddress: Shows the network adapter information, including IP address and MAC address.

81. wmic os get installdate: Displays the OS installation date and time.

82. wmic printer get name: Lists all installed printers.

83. wmic product where "Name like 'Microsoft%'" get name,version: Lists all Microsoft products installed on the system.

84. wmic useraccount list brief | findstr /I /C:"Built-in" /C:"Local" /C:"Administrator": Shows all local built-in administrator accounts.

85. wmic qfe list brief /format:table: Lists installed Windows updates in a table format.

86. wmic qfe where "HotfixID = 'KB123456'" call uninstall: Uninstalls a specific Windows update by its KB number.

87. wmic cpu get caption, maxclockspeed, currentclockspeed: Shows the CPU's maximum and current clock speeds.

88. wmic cpu get caption, caption, deviceid, name: Displays detailed CPU information, including its device ID.

89. wmic memorychip get capacity, caption, devicelocator, speed: Lists detailed information about installed memory chips.

90. wmic logicaldisk where drivetype=3 get caption: Shows all connected hard drives (excluding floppy drives and optical drives).

91. wmic volume get caption, capacity, freespace: Lists information about all volumes (partitions) on all disks.

92. wmic process where name="processname" get commandline: Displays the command line used to launch a specific process.

93. wmic process where "name='processname.exe'" delete: Terminates a process by its name.

94. wmic process where "processid='1234'" delete: Terminates a process by its process ID.

95. wmic process where "name='processname.exe'" call setpriority "priority": Sets the priority of a process to "idle," "below normal," "normal," "above normal," "high," or "real-time."

96. wmic process where "name='processname.exe'" call setpriority 128: Sets the priority of a process using priority numbers (0-256).

97. wmic process where "name='processname.exe'" get processid: Shows the process ID (PID) of a specific process.

98. wmic process get caption, commandline, processid: Displays the caption, command line, and process ID of all running processes.

99. wmic path win32_process call create "cmd.exe /c command": Executes a command via WMI (Windows Management Instrumentation).

100. wmic process list brief | find "processname": Checks if a specific process is running.

101. wmic process where "name='processname'" get parentprocessid: Shows the parent process ID (PPID) of a specific process.

102. wmic process where "name='processname.exe'" get executablepath: Displays the path of the executable file of a specific process.

103. wmic path win32_process get commandline: Shows the command line used to launch all running processes.

104. wmic useraccount where name="username" set passwordexpires=true: Enables password expiration for a specific user account.

105. wmic service where "name='servicename'" call startservice: Starts a specific Windows service.

106. wmic service where "name='servicename'" call stopservice: Stops a specific Windows service.

107. wmic service where "name='servicename'" call changestartmode "startmode": Changes the start mode of a Windows service to "auto," "disabled," or "manual."

108. wmic service list brief | find "running": Lists all running services.

109. wmic service list brief | find "stopped": Lists all stopped services.

110. wmic service list brief | find "auto": Lists all services set to start automatically.

111. wmic service list brief | find "manual": Lists all services set to start manually.

112. wmic service list brief | find "disabled": Lists all services set to disabled.

113. wmic service list brief | find "disabled" | find /v "Manual": Lists all disabled services that are not set to start manually.

114. wmic service where (state="running" or state="stopped") get caption, state: Lists running and stopped services.

115. wmic service where (startmode="auto" or startmode="manual") get caption, startmode: Lists services set to start automatically or manually.

116. wmic service where caption="servicename" get startmode: Shows the start mode of a specific service.

117. wmic nicconfig where index=1 call enablestatic "IPAddress", "SubnetMask": Sets a static IP address and subnet mask for the first network adapter.

118. wmic nicconfig where index=1 call enabledhcp: Sets the first network adapter to obtain an IP address automatically.

119. wmic nicconfig where index=1 call enablestatic "IPAddress", "SubnetMask", "DefaultGateway": Sets a static IP address, subnet mask, and default gateway for the first network adapter.

120. wmic nicconfig where index=1 call setdnsserversearchorder "DNSserver1, DNSserver2": Sets the DNS servers for the first network adapter.

121. wmic process where "caption='processname.exe'" get processid, commandline: Displays the process ID (PID) and command line of a specific process.

122. wmic process get caption,commandline,processid | findstr "processname": Searches for a specific process by name and shows its details.

123. wmic process where "name='processname.exe'" get caption,processid,commandline: Shows the caption, process ID, and command line of a specific process.

124. wmic process get caption,executablepath,commandline,processid: Shows the caption, executable path, command line, and process ID of all running processes.

125. wmic path win32_process call create "notepad.exe": Executes Notepad via WMI.

126. wmic path win32_process where "name='processname.exe'" call terminate: Terminates a specific process by name.

127. wmic qfe list full /format:htable: Lists installed Windows updates in an HTML table format.

128. wmic os get installdate /value: Shows the OS installation date and time in a machine-readable format.

129. wmic memorychip get capacity, caption, devicelocator, speed /format:csv: Exports installed memory chip details to a CSV file.

130. wmic logicaldisk where drivetype=3 get caption /format:csv: Exports connected hard drives to a CSV file.

131. wmic path softwarelicensingservice get OA3xOriginalProductKey /format:list: Shows the Windows product key in a list format.

132. wmic process where "name='processname.exe'" get processid /format:list: Shows the process ID (PID) of a specific process in a list format.

133. wmic process where "name='processname.exe'" get commandline /format:list: Displays the command line used to launch a specific process in a list format.

134. wmic process list brief /format:list | find "processname": Checks if a specific process is running using a list format.

135. wmic process where "name='processname'" get parentprocessid /format:list: Shows the parent process ID (PPID) of a specific process in a list format.

136. wmic cpu get caption, maxclockspeed, currentclockspeed /format:table: Displays the CPU's maximum and current clock speeds in a table format.

137. wmic memorychip get capacity, caption, devicelocator, speed /format:table: Lists detailed information about installed memory chips in a table format.

138. wmic logicaldisk where drivetype=3 get caption /format:table: Shows all connected hard drives (excluding floppy drives and optical drives) in a table format.

139. wmic service where "name='servicename'" call startservice /format:list: Starts a specific Windows service using a list format.

140. wmic service where "name='servicename'" call stopservice /format:list: Stops a specific Windows service using a list format.

141. wmic service where "name='servicename'" call changestartmode "startmode" /format:list: Changes the start mode of a Windows service using a list format.

142. wmic service list brief /format:list | find "running": Lists all running services using a list format.

143. wmic service list brief /format:list | find "stopped": Lists all stopped services using a list format.

144. wmic service list brief /format:list | find "auto": Lists all services set to start automatically using a list format.

145. wmic service list brief /format:list | find "manual": Lists all services set to start manually using a list format.

146. wmic service list brief /format:list | find "disabled": Lists all services set to disabled using a list format.

147. wmic nicconfig where index=1 call enablestatic "IPAddress", "SubnetMask" /format:list: Sets a static IP address and subnet mask for the first network adapter using a list format.

148. wmic nicconfig where index=1 call enabledhcp /format:list: Sets the first network adapter to obtain an IP address automatically using a list format.

149. wmic nicconfig where index=1 call enablestatic "IPAddress", "SubnetMask", "DefaultGateway" /format:list: Sets a static IP address, subnet mask, and default gateway for the first network adapter using a list format.

150. wmic nicconfig where index=1 call setdnsserversearchorder "DNSserver1, DNSserver2" /format:list: Sets the DNS servers for the first network adapter using a list format.

150.	schtasks /create /sc daily /tn "TaskName" /tr "C:\script.bat" /st 12:00: Creates a daily scheduled task to run a batch script at 12:00 PM.
151.	schtasks /delete /tn "TaskName" /f: Deletes a scheduled task (replace TaskName with the task's name).
152.	schtasks /query /fo csv &gt; tasks.csv: Exports a list of scheduled tasks to a CSV file.
153.	schtasks /query /fo list /v: Lists scheduled tasks with detailed information, including triggers and actions.
154.	schtasks /query /fo list: Lists all scheduled tasks with detailed information.
155.	schtasks /run /tn "TaskName": Runs a scheduled task immediately (replace TaskName with the task's name).
156.	schtasks: Allows you to view and manage scheduled tasks on the system.
157.	set: Shows all environment variables.
158.	setx VAR "value": Sets an environment variable named VAR with the specified value.
159.	sfc /scanfile=C:\file.dll: Scans a specific system file for integrity violations.
160.	sfc /scannow: Initiates a system file integrity scan and repairs corrupted files.
161.	sfc /scannow: Initiates a system file scan and repairs any corrupted files.
162.	sfc: System File Checker is a utility that scans and repairs corrupted or missing system files on Windows. For example, sfc /scannow will start the scanning process.
163.	shutdown /a: Aborts a system shutdown that has been initiated.
164.	shutdown /h: Puts the computer into hibernation.
165.	shutdown /i: Opens the Remote Shutdown Dialog for remote computer shutdown.
166.	shutdown /l: Logs off the current user.
167.	shutdown /s /t 0: Initiates an immediate system shutdown.
168.	shutdown: Shuts down or restarts the computer. Use with caution, as it immediately initiates the shutdown or restart process. For example, shutdown /s will shut down the computer, and shutdown /r will restart it.
169.	Sure, I'll arrange the commands with their descriptions and remove the duplicates:
170.	systeminfo | find "System Boot Time": Displays the system boot time.
171.	systeminfo | find "Total Physical Memory": Shows the total RAM installed on the system.
172.	systeminfo | findstr /C:"Host Name" /C:"Domain": Shows the host name and domain information.
173.	systeminfo | findstr /C:"System Boot Time" /C:"System Up Time": Shows the system boot time and uptime.
174.	systeminfo | findstr /C:"System Boot Time": Shows the system boot time concisely.
175.	systeminfo | findstr /C:"System Manufacturer" /C:"System Model" /C:"BIOS Version": Shows system manufacturer, model, and BIOS version.
176.	systeminfo | findstr /C:"Total Physical Memory" /C:"Available Physical Memory": Shows total and available physical memory.
177.	systeminfo: Displays detailed system information, including OS version, installed hotfixes, hardware details, and more.
178.	systeminfo: Displays detailed system information, including OS version, memory, and processor details.
179.	takeown /f C:\file.txt /a: Takes ownership of a file, granting administrative access.
180.	takeown /f C:\file.txt /r /d y: Takes ownership of a file and its subdirectories, automatically granting permission.
181.	takeown /f C:\file.txt: Takes ownership of a file, granting full access rights.
182.	taskkill /f /fi "username eq USERNAME": Terminates all processes owned by a specific user (replace USERNAME with the actual username).
183.	taskkill /f /im process.exe: Terminates a process forcefully.
184.	taskkill /im process.exe /f: Forcefully terminates a specific process by name.
185.	taskkill /pid 1234 /f: Forcefully terminates a specific process by its process ID (replace "1234" with the actual process ID).
186.	taskkill: Terminates a running process. Be careful when using this command, as terminating critical processes can cause system issues. Use with caution.
187.	tasklist /fi "imagename eq process.exe": Checks if a specific process is running.
188.	tasklist /fi "status eq running": Lists currently running processes.
189.	tasklist /fi "username eq USERNAME": Lists processes owned by a specific user (replace USERNAME with the actual username).
190.	tasklist /m: Displays the DLL files associated with each running process.
191.	tasklist /svc /fi "status eq running": Lists running processes along with their associated services.
192.	tasklist /svc | find "services.exe": Shows services running under the services.exe process.
193.	tasklist /svc: Lists all running processes along with the services they are associated with.
194.	tasklist /v /fi "memusage gt 1000000": Lists processes consuming more than 1MB of memory.
195.	tasklist /v: Lists running processes along with additional information.
196.	tasklist /v: Provides more detailed information about running processes.
197.	tasklist: Lists all running processes.
198.	taskmgr: Opens the Task Manager, allowing you to monitor and manage running processes and system performance.
199.	tree: Displays a graphical representation of the folder structure.
200.	type C:\path\to\file.txt | find /c /v "": Counts the number of lines in a text file.
201.	type: Displays the contents of a text file on the screen. For example, type myfile.txt will display the contents of "myfile.txt" in the Command Prompt window.
202.	User
203.	ver | findstr /C:"Version": Displays the Windows version number.
204.	ver: Shows the Windows version information.
205.	verifier: Opens Driver Verifier Manager to detect driver issues.
206.	whoami /groups /fo table: Lists the security groups the current user belongs to in a table format.
207.	whoami /groups: Displays the security groups the current user belongs to.
208.	whoami: Shows the current user and their security privileges.
209.	whoami: Shows the current username.
210.	wmic bios get serialnumber: Retrieves the computer's BIOS serial number.
211.	wmic cpu get caption, maxclockspeed: Displays the CPU model and its maximum clock speed.
212.	wmic cpu get caption, numberofcores: Displays the CPU model and the number of cores.
213.	wmic cpu get caption: Retrieves the CPU model information.
214.	wmic diskdrive get caption: Lists all the disk drives on the computer.
215.	wmic logicaldisk get caption, description, freespace: Lists information about all logical disk drives, including their captions, descriptions, and free space in bytes.
216.	wmic logicaldisk get caption, description, volumename: Displays the captions, descriptions, and volume names of all logical disk drives.
217.	wmic logicaldisk get caption, size: Shows the size of all logical disk drives.
218.	wmic memorychip get capacity: Retrieves the capacity of the computer's physical memory chips.
219.	wmic memorychip get devicelocator: Lists the device locators of all physical memory chips.
220.	wmic nic get caption, macaddress: Displays the captions and MAC addresses of network adapters.
221.	wmic nic get caption, netconnectionid: Lists the captions and network connection IDs of network adapters.
222.	wmic nic get netconnectionid, speed: Shows the network connection IDs and speeds of network adapters.
223.	wmic os get caption, version: Retrieves the operating system's caption and version.
224.	wmic os get lastbootuptime: Shows the date and time when the operating system was last booted.
225.	wmic os get localdatetime: Displays the current date and time in the local time zone.
226.	wmic os get osarchitecture: Retrieves the operating system architecture (32-bit or 64-bit).
227.	wmic os get totalvisiblememorysize: Shows the total visible memory available in the system.
228.	wmic os get version: Displays the operating system's version.
229.	wmic path softwarelicensingservice get OA3xOriginalProductKey: Retrieves the Windows product key (works on OA3 pre-installed Windows versions).
230.	wmic printer get name: Lists all installed printers on the computer.
231.	wmic process get caption, processid: Displays the captions and process IDs of all running processes.
232.	wmic process get caption, processid, commandline: Lists the captions, process IDs, and command lines of all running processes.
233.	wmic process get caption, processid, threadcount, commandline: Shows the captions, process IDs, thread counts, and command lines of running processes.
234.	wmic process get description: Retrieves the descriptions of all running processes.
235.	wmic product get name, version: Lists the names and versions of all installed software.
236.	wmic product get name: Displays the names of all installed software on the computer.
237.	wmic qfe get caption, description, hotfixid, installedon: Retrieves information about all installed Windows updates.
238.	wmic service get caption, name, startmode: Lists the captions, names, and start modes of all services.
239.	wmic service get caption, name, startmode, state: Displays the captions, names, start modes, and states of all services.
240.	wmic startup get caption, command: Shows the captions and command lines of programs set to run at startup.
241.	wmic startup get caption, location, command: Lists the captions, locations, and command lines of startup programs.
242.	wmic useraccount get name, sid: Retrieves the names and Security Identifiers (SIDs) of all user accounts on the system.
243.	wmic useraccount get name: Displays the names of all user accounts on the computer.
244.	wmic volume get caption, label, capacity: Lists information about all volumes, including captions, labels, and capacities.
245.	wmic volume get caption, label: Shows the captions and labels of all volumes.

## Conclusion

This concludes the list of 245 Command Prompt commands along with their explanations. These commands are powerful tools that can help you manage your Windows system efficiently and perform various tasks with ease. Feel free to explore and use these commands as needed.

If you have any suggestions or would like to contribute to this repository, please feel free to open an issue or submit a pull request.

Happy coding!
