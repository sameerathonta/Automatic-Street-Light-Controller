int ldrPin = A0;
int ledPin = 9;
int threshold = 500;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    int lightValue = analogRead(ldrPin);

    if (lightValue < threshold)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }

    delay(500);
}