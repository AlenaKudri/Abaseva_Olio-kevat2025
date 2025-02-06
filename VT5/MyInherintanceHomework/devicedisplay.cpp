#include "devicedisplay.h"
#include <iostream>

using namespace std;

DeviceDisplay::DeviceDisplay() : displayResolution(0) {}

void DeviceDisplay::setDisplayResolution(){

    cout<<"Set Display Resolution (1-10): ";
    cin>> displayResolution;
}

short DeviceDisplay::getDisplayResolution() const{
    return displayResolution;
}
