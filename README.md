# Deployment Task – HelloWorld (WiX + MSIX)

This repository contains my Software Deployment Assignment project 1.  


- **Pass (Task 1.1):** Sample C# Windows Forms app packaged with WiX MSI  
- **Credit (Task 1.2):** Custom C++ console app deployed with WiX  
- **Distinction (Task 1.3):** C++ app with multiple DLL dependencies (`MathLib`, `TextLib`) packaged into MSI  
- **High Distinction (Task 1.4):** MSI converted into MSIX, signed with a certificate, and explained Microsoft Store submission process  

## How to Build
1. Open the solution `HelloWorld.sln` in **Visual Studio 2022**.  
2. Build order (all x64):  
   - `MathLib`  
   - `TextLib`  
   - `HelloWorld`  
   - `HelloWorld.Setup` (WiX installer project)  
3. MSI output: `HelloWorld.Setup\bin\Release\HelloWorld.Setup.msi`

## How to Install
- Run the generated MSI to install the app into `C:\Program Files\HelloWorld\`.  
- Run `HelloWorld.exe` → Expected output:
