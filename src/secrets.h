#ifndef __SECRETS_H_
#define __SECRETS_H_

const char* syslogServer = "my.syslog.server";
const uint16_t syslogPort = 514;

const char* wifiSSID = "WiFi SSID";
const char* wifiPassword = "MySecureWiFiPassword";

unsigned char mqttServer[] = {192, 168, 1, 100}; // MQTT Server IP Address
const char* mqttUsername = "mqtt-username";
const char* mqttPassword = "mqtt-password";

const char* otaPassword = "ota-password";

const char *deviceName = "device-name";

const char *appVersion = "2024.11.0";

#endif //__SECRETS_H_
