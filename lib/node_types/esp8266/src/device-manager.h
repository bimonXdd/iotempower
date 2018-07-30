// device-manager.h
// author: ulno
// created: 2018-07-16
// Manage a list of devices

#ifndef _ULNOIOT_DEVICE_MANAGER_H_
#define _ULNOIOT_DEVICE_MANAGER_H_

#include <AsyncMqttClient.h>
#include <toolbox.h>
#include <device.h>

bool add_device(Device& device);
//bool remove_device(const char* name);
bool devices_update();
bool devices_publish(AsyncMqttClient& mqtt_client, Ustring& node_topic);
bool devices_subscribe(AsyncMqttClient& mqtt_client, Ustring& node_topic);
bool devices_receive(Ustring& subtopic, Ustring& payload);

#endif // _ULNOIOT_DEVICE_MANAGER_H_
