void setup()
{
    // put your setup code here, to run once:
    Serial.begin(115200); // シリアル通信を初期化する。通信速度は9600bps
    Serial.println("Hello World!");
}

void loop()
{
    if (Serial.available() > 0)
    {
        // int data = Serial.read();
        // Serial.println(data, DEC);
        char data = Serial.read();
        Serial.println(data);
    }
}
