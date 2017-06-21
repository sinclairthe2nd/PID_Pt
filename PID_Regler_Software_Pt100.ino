
int sensorPin = A0;    // select the input pin for the pt100
int currentPin = A1;   // Pin to meassure the current
float Voltage = 0;  // variable to store the value coming from the sensor
float Resistance = 0;
float Current = 0;
float Supply = 0;
float ResistorVoltage = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
 Supply = analogRead(currentPin)*0.0049;
 ResistorVoltage = Supply-Voltage;
 Current = ResistorVoltage/ 91.55;
 Voltage = analogRead(sensorPin)*0.0049;
 Resistance = Voltage/Current;
 
Serial.print(Resistance);
Serial.println();

}
