// This #include statement was automatically added by the Particle IDE.
#include "DHT.h"



// DHT parameters
#define DHTPIN 7
#define DHTTYPE DHT11

// Variables
String temperature;
String humidity;

// DHT sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
    
    // Start DHT sensor
    dht.begin();

}

void loop() {

    
    // Humidity measurement
    String temperature = String(dht.readTemperature());
    
    // Humidity measurement
    String humidity = String(dht.readHumidity());
    
    
    // Publish data
    Particle.publish("Temperature", temperature, PRIVATE);
    Particle.publish("Humidity", humidity, PRIVATE);
    
    delay(30000);


}