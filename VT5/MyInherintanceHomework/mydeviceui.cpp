#include "mydeviceui.h"
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"
#include <iostream>
using namespace std;

MyDeviceUI::MyDeviceUI() {
    objectDeviceMouse = new DeviceMouse();
    objectDeviceTouchPad = new DeviceTouchPad();
    objectDeviceDisplay = new DeviceDisplay();
}
MyDeviceUI::~MyDeviceUI() {
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;
}

void MyDeviceUI::uiShowMenu(){
    cout<<"\nDEVICE MENU\n===========\n"
        <<"1: Set Mouse Information\n"
        <<"2: Set Touch Pad Information\n"
        <<"3: Set Display Information\n"
        <<"4: Show Devices Information\n"
        <<"5: Finish\n"
        <<"\nChoose: ";
}

void MyDeviceUI::uiSetMouseInformation(){
    cout<<"SET MOUSE INFORMATION\n=====================\n";

    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();

}

void MyDeviceUI::uiSetTouchPadInformation(){
    cout<<"SET TOUCH PAD INFORMATION\n=====================\n";
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation(){
    cout<<"SET DISPLAY INFORMATION\n=====================\n";
    objectDeviceDisplay->setDeviceID();
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation(){
    cout<<"Mouse info:\n"
        "Device ID: "<<objectDeviceMouse->getDeviceID()<<"\n"<<
        "Primary Button: "<<objectDeviceMouse->getPrimaryButton()<<endl;

    cout<<"Touch Pad info:\n"
        "Device ID: "<<objectDeviceTouchPad->getDeviceID()<<"\n"<<
        "Touch Pad Sensitivity: "<<objectDeviceTouchPad->getTouchPadSensitivity()<<endl;

    cout<<"Display info:\n"
        "Device ID: "<<objectDeviceDisplay->getDeviceID()<<"\n"<<
        "Display Resolution: "<<objectDeviceDisplay->getDisplayResolution()<<endl;

}
