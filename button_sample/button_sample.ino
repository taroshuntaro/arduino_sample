const int DIN_PIN = 2;

void setup(){
    pinMode( DIN_PIN, INPUT );
    Serial.begin( 9600 );
}

void loop(){
    int value;
    
    value = digitalRead( DIN_PIN );
    Serial.println( value );

    delay( 500 );
}
