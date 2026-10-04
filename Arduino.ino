const int buttonPin = 2;
const int RledPin = 3;
const int GledPin = 4;
const int BledPin = 5;

int buttonState = 0;
int ledcolor = 0;
int ledState = LOW;
bool ButtonPressed = false;
String currentcolor="led";
unsigned long previousMillis = 0;
const long interval = 1000;
//hi
void setup() {
//initialize the LED pin as an output
pinMode(RledPin, OUTPUT);
pinMode(GledPin, OUTPUT);
pinMode(BledPin, OUTPUT);
//initialize the pushbutton pin as an input
pinMode(buttonPin, INPUT);
Serial.begin(9600);
}

void loop() {
//read the state of the pushbutton value
buttonState = digitalRead(buttonPin);
Serial.print("Current Color: ");
Serial.println(currentcolor);

unsigned long currentMillis = millis();
if (currentMillis - previousMillis >-interval){
  previousMillis = currentMillis;
if (ledState == LOW){
  ledState = HIGH;
} else {
  ledState =LOW;
}
}

if(buttonState == LOW){
  ledcolor = ledcolor + 1;
  ButtonPressed = true;
  delay(100);
}
if(ledcolor == 0){
  currentcolor="LED off";
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
}
else if(ledcolor == 1){
  currentcolor="Red";
  if (ledState ==LOW){
  digitalWrite(RledPin, LOW);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  } else {
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  }
}
else if(ledcolor == 2){
  currentcolor="Green";
  if (ledState ==LOW){
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, LOW);
  digitalWrite(BledPin, HIGH);
  } else {
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  }
}
else if(ledcolor == 3){
  currentcolor="Blue";
  if (ledState ==LOW){
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, LOW);
  } else {
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  }
}
else if(ledcolor == 4){
  currentcolor="Yellow";
  if (ledState ==LOW){
  digitalWrite(RledPin, LOW);
  digitalWrite(GledPin, LOW);
  digitalWrite(BledPin, HIGH);
  } else {
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  delay(1000);
  }
}
else if(ledcolor == 5){
  currentcolor="Purple";
  if (ledState ==LOW){
  digitalWrite(RledPin, LOW);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, LOW);
  } else {
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  }
}
else if(ledcolor == 6){
  currentcolor="Cyan";
  if (ledState ==LOW){
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, LOW);
  digitalWrite(BledPin, LOW);
  } else {
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  }
}
else if(ledcolor == 7){
  currentcolor="White";
  if (ledState == LOW){
  digitalWrite(RledPin, LOW);
  digitalWrite(GledPin, LOW);
  digitalWrite(BledPin, LOW);
  } else {
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  }
}
else if(ledcolor == 8){
  ledcolor = 0;
}
}
