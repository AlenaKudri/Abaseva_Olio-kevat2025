#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H

#include "devicebaseclass.h"


class DeviceDisplay: public DeviceBaseClass
{
public:
    DeviceDisplay();
    void setDisplayResolution();
    short getDisplayResolution() const;

private:
    short displayResolution;
};

#endif // DEVICEDISPLAY_H
