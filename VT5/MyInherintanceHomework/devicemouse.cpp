#include "devicemouse.h"
#include <iostream>
using namespace std;

DeviceMouse::DeviceMouse() : primaryButton(0) {}

void DeviceMouse::setPrimaryButton(){

    cout<<"Set Mouse Primary Button (1/2): ";
    cin>> primaryButton;
}

short DeviceMouse::getPrimaryButton() const{
    return primaryButton;
}
