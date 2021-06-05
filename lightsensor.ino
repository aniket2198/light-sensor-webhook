void setup() {
    pinMode(A0, INPUT);
}

void loop() {
   
    String light = String(analogRead(A0));

    Particle.publish("LightSensor", light, PRIVATE);
    delay(30000);


}