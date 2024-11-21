#ifndef __SECRETS_H_
#define __SECRETS_H_

const char* wifiSSID = "WiFi SSID";
const char* wifiPassword = "MySecureWiFiPassword";

unsigned char mqtt_server[] = {192, 168, 1, 100}; // MQTT Server IP Address
const char* mqtt_username = "mqtt-username";
const char* mqtt_password = "mqtt-password";

const char* otaPassword = "ota-password";

const char *deviceName = "device-name";

const char *appVersion = "2024.11.0";

#endif //__SECRETS_H_
