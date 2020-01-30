const byte led_1 = 2;
const byte led_2 = 3;
const byte led_3 = 4;
const byte led_4 = 5;

const int TIEMPO=50;

void setup()
{
    pinMode(led_1, OUTPUT);
    pinMode(led_2, OUTPUT);
    pinMode(led_3, OUTPUT);
    pinMode(led_4, OUTPUT);
}
void loop()
{
    digitalWrite(led_1, HIGH);
    delay(TIEMPO);
    digitalWrite(led_1, LOW);
    delay(TIEMPO);
    digitalWrite(led_2, HIGH);
    delay(TIEMPO);
    digitalWrite(led_2, LOW);
    delay(TIEMPO);
    digitalWrite(led_3, HIGH);
    delay(TIEMPO);
    digitalWrite(led_3, LOW);
    delay(TIEMPO);
    digitalWrite(led_4, HIGH);
    delay(TIEMPO);
    digitalWrite(led_4, LOW);
    delay(TIEMPO);
}
