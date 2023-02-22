int forceVal1 = 0;
int forceVal2 = 0;
int forceVal3 = 0;
int forceVal4 = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    forceVal1 = analogRead(A1);
    forceVal2 = analogRead(A2);
    forceVal3 = analogRead(A3);
    forceVal4 = analogRead(A4);
    Serial.print(forceVal1);
    Serial.print(",");
    Serial.print(forceVal2);
    Serial.print(",");
    Serial.print(0);
    Serial.print(",");
    Serial.print(0);
    Serial.println();
    delay(10);
}
