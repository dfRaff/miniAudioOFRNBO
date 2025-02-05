# miniaudioOFRNBO
miniAudioOFRNBO

This is a simple project that implements cycling74’s RNBO into openFrameworks using miniaudio.h:

The initial miniaudio and RNBO code implementation was found on github:
https://github.com/StuartMellor/Max-MSP-RNBO-CPP-Miniaudio

RNBO:
https://rnbo.cycling74.com

Miniaudio:
https://miniaud.io/index.html

OF:
https://openframeworks.cc

This project uses Xcode.

The C++ RNBO implementation used this guide from the cycling74 website to setup:
Working with C++
https://rnbo.cycling74.com/learn/how-to-include-rnbo-in-your-c-project

NOTE Xcode issues: If you are having difficulties following the RNBO guide above because RNBO.h files are not being found check the ‘RNBO’ header is included. Another solution if directories to .h files are not located, select the project in build settings, ‘Header Search Paths’, double click the directory and make it is set to  recursive. Another solution would be to add the 'rnbo' folder from the project folder into the directory also set to recursive.

Run the program and when the visual window appears click in the small static circle and the sine tone frequency should adjust when moving the dot on the y axis. The RNBO basic patch is a cycle~ object to ~0.5 to out~ 1.

The miniaudio/RNBO implementation uses the OFThread to run separately from the main OF thread.

RNBO Patch
<img width="534" alt="Screenshot 2024-01-25 at 4 05 01 PM" src="https://github.com/dfRaff/miniaudioOFRNBO/assets/139554527/a4c9fb46-1987-473c-aed8-8d2afd83535c">


