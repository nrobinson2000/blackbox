#include "OneWire/OneWire.h"
#include "particle-BNO055/particle-BNO055.h"
#include "Particle.h"

STARTUP(WiFi.selectAntenna(ANT_EXTERNAL));


SYSTEM_MODE(SEMI_AUTOMATIC);
SYSTEM_THREAD(ENABLED);

Adafruit_BNO055 bno = Adafruit_BNO055(55);


int getAxis(String command)
{
        /* Get a new sensor event */
        sensors_event_t event;
        bno.getEvent(&event);

        /*Serial.print("X: ");
           Serial.print(event.orientation.x, 4);
           Serial.print("\tY: ");
           Serial.print(event.orientation.y, 4);
           Serial.print("\tZ: ");
           Serial.print(event.orientation.z, 4);
           Serial.println("");*/

        String message = "X: " + String(event.orientation.x, 4) + " Y: " + String(event.orientation.y, 4) + " Z: " + String(event.orientation.z, 4);
        Particle.publish("axisData", message);
        return 0;
}

int getWifi(String commmand)
{
        int strength = WiFi.RSSI();
        Particle.publish("wifiData", String(strength));
        return 0;
}


void setup() // Put setup code here to run once
{

        Particle.function("getAxis", getAxis);
        Particle.function("getWifi", getWifi);
        bno.begin();
        bno.setExtCrystalUse(true);
        Particle.connect();
}

void loop() // Put code here to loop forever
{

}
