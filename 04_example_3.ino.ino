#define PIN_LED 13
unsigned int count=0,toggle=0;

void setup(){
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.println("Hello World!");
  digitalWrite(PIN_LED, toggle);
}

void loop(){
  Serial.println(++count);
  digitalWrite(PIN_LED,toggle);
  delay(1000);
  if(toggle==0){
    toggle+=1;
  }
  else if(toggle==1){
    toggle-=1;
  }
}
