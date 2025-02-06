#include "devicebaseclass.h"
#include <iostream>
using namespace std;

DeviceBaseClass::DeviceBaseClass() : deviceID(0) {}
DeviceBaseClass::~DeviceBaseClass() {}


void DeviceBaseClass::setDeviceID(){
    cout<<"Set Device ID: ";
    cin>>deviceID;
}

short DeviceBaseClass::getDeviceID() const{
    return deviceID;
}
