#define DIAGNOSTIC_PIXEL
//#define DIAGNOSTIC_LED_PIN

#include "StandardFeatures.h"
#include "secrets.h"

StandardFeatures standardFeatures;

void mqttCallback(char* topic, byte* payload, unsigned int length)
{
    char data[length + 1];
    memcpy(data, payload, length);
    data[length] = '\0';

    Log.printf("mqttCallback - %s : %s\n", topic, data);
}

void onMQTTConnect() // Called when MQTT is connected or reconnected
{
    Log.println("MQTT Connect Callback!");

    standardFeatures.mqttSubscribe("testtopic/#");
}


void setup()
{
    standardFeatures.enableLogging(deviceName, syslogServer, syslogPort);
    standardFeatures.enableDiagnosticPixel(39);
    //standardFeatures.enableDiagnosticLed(13); // No LED on Qt Py ESP32-S3
    standardFeatures.enableWiFi(wifiSSID, wifiPassword, deviceName);
    standardFeatures.enableOTA(deviceName, otaPassword);
    standardFeatures.enableSafeMode(appVersion);
    standardFeatures.enableMQTT(mqttServer, mqttUsername, mqttPassword, deviceName);

    standardFeatures.setMqttOnConnectCallback(onMQTTConnect);

    standardFeatures.setMqttCallback(mqttCallback);
}

void loop()
{
    standardFeatures.loop();

    if (standardFeatures.isOTARunning())
        return;
}