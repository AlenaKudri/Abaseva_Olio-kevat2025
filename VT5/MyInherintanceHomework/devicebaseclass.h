#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H

class DeviceBaseClass
{
public:
    DeviceBaseClass();
    virtual ~DeviceBaseClass();
    void setDeviceID();
    short getDeviceID() const;

protected:
    short deviceID;
};

#endif // DEVICEBASECLASS_H
