int dioda = 13;
int czaskrotki = 500;
int czasdlugi=1000;
int czasprzerwa=500;
void setup(){
    pinMode(dioda, OUTPUT);
}
void loop(){
    for (int i=0;i<3;i=i+1){
        digitalWrite(dioda, HIGH);
        delay(czaskrotki);
        digitalWrite(dioda, LOW);
        delay(czasprzerwa);
    }
     for (int i=0;i<3;i=i+1){
        digitalWrite(dioda, HIGH);
        delay(czasdlugi);
        digitalWrite(dioda, LOW);
        delay(czasprzerwa);
    }
     for (int i=0;i<3;i=i+1){
        digitalWrite(dioda, HIGH);
        delay(czaskrotki);
        digitalWrite(dioda, LOW);
        delay(czasprzerwa);
    }
    delay(3000);
}
