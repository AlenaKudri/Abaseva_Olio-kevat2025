#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H

#include "devicebaseclass.h"

class DeviceTouchPad: public DeviceBaseClass
{
public:
    DeviceTouchPad();
    void setTouchPadSensitivity();
    short getTouchPadSensitivity() const;

private:
    short touchPadSensitivity;
};

#endif // DEVICETOUCHPAD_H
