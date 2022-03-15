#  SP-Python-Essentials-DP
 

916 C:\Users\n97802\AppData\Local\Programs\Python\Python310\Scripts\pip.exe 

```
Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

Try the new cross-platform PowerShell https://aka.ms/pscore6

PS D:\GitHub\-SP-Python-Essentials-DP> [System.Environment]::GetEnvironmentVariable("Path","User") -Split ";"                        
C:\Users\n97802\AppData\Local\Programs\Python\Python310\Scripts\
C:\Users\n97802\AppData\Local\Programs\Python\Python310\        
C:\Users\n97802\AppData\Local\Programs\Python\Launcher\
C:\Program Files (x86)\Common Files\Oracle\Java\javapath        
C:\WINDOWS\system32
C:\WINDOWS\System32\Wbem
C:\WINDOWS\System32\WindowsPowerShell\v1.0\
C:\WINDOWS\System32\OpenSSH\
C:\Program Files (x86)\Intel\Intel(R) Management Engine Components\DAL
C:\Program Files\Intel\Intel(R) Management Engine Components\DAL
C:\Program Files\Git\cmd
C:\Program Files\Microsoft VS Code\bin
C:\Users\n97802\AppData\Local\Microsoft\WindowsApps
D:\Users\cost\AppData\Local\Programs\Microsoft VS Code\Microsoft VS Code\bin
C:\Users\n97802\AppData\Local\atom-beta\bin
D:\User\n97802\AppData\Local\Programs\Python\Python39\Scripts
C:\Users\n97802\AppData\Local\Programs\Python\Python310\Scripts
PS D:\GitHub\-SP-Python-Essentials-DP> ls
```

```
PS D:\GitHub\-SP-Python-Essentials-DP> [Environment]::SetEnvironmentVariable(
>>     "Path",
>>     [Environment]::GetEnvironmentVariable("Path", [EnvironmentVariableTarget]::User) + ";C:\Users\n97802\AppData\Local\Programs\Python\Python310",   
```

acc: TNJ9UPTJ
