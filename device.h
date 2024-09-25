#include <string>
/*

each "device" is a representation of a device on a CAN network.
deviceName is a string name.
deviceID is how the main Monitor knows what kind of device it is.
deviceAddress is the data value added to a message sent by the main Monitor distinguishing which device a message goes to.
isDeviceBroadcasting can be set to true or false, determines if the device is sending messages to the main Monitor.


*/
class BasicDevice{
    public:
    BasicDevice();
    protected:
    std::string deviceName;
    int deviceID;
    int deviceAddress;
    bool isDeviceBroadcasting;


};



class ConnectedDevice: public BasicDevice{
    public:
    ConnectedDevice();
    protected:
    std::string deviceType;

};