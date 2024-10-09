//the dataStream is essentially a large array which the devices continually send messages to.
//there needs to be ONE datastream instantiated which all device objects broadcast to.
class dataStream{

dataStream();
void registerDevice();
int getDevice();

protected:

private:
int listOfDevices[16];
};