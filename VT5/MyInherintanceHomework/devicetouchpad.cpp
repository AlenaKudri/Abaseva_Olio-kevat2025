#include "devicetouchpad.h"
#include <iostream>
using namespace std;

DeviceTouchPad::DeviceTouchPad() : touchPadSensitivity(0) {}


void DeviceTouchPad::setTouchPadSensitivity(){

    cout<<"Set Touch Pad Sensitivity (1-5): ";
    cin>> touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivity() const{
    return touchPadSensitivity;
}
