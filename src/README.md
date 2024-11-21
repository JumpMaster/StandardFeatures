# Standard Features

Allows for the folling features to be implemented by just adding StandardSetup() and StandarLoop() to your code.

- Connect to and manage WiFi.
- Setup syslog and enable Log.print from within the app.
- Setup and management of MQTT connectivity.
- Onboard neopixel used to show WiFi and MQTT connectivity.
- Onboard LED flashes to show general activity.
- Setup and management of OTA updates.
- Safe mode. After 3 consequitive reboots within less then 30 seconds runtime, user code is not executed allowing OTA updates to be performed.

I use this on all ESP devices I deploy to quickly and easily add these features.