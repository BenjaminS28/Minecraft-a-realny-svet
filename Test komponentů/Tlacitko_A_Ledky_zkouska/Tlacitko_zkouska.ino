#define BUTTON_PIN        2  // Button
#define DELAY            20  // Delay per loop in ms

void setup()
{
  pinMode(BUTTON_PIN, INPUT);
  digitalWrite(BUTTON_PIN, HIGH); // pull-up
  Serial.begin(9600);
  pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
      pinMode(11, OUTPUT);
      pinMode(10, OUTPUT);
      pinMode(9, OUTPUT);
      pinMode(8, OUTPUT);
      pinMode(7, OUTPUT);
      pinMode(6, OUTPUT);
      pinMode(5, OUTPUT);
      pinMode(4, OUTPUT);
}

boolean handle_button()
{
  int button_pressed = !digitalRead(BUTTON_PIN); // pin low -> pressed
  return button_pressed;
}

void loop()
{
  // handle button
  boolean button_pressed = handle_button();

  // do other things
  Serial.print(button_pressed ? "^" : ".");

  // add newline sometimes
  static int counter = 0;
  if ((++counter & 0x3f) == 0)
    Serial.println();


// rozsviti ledku
if (button_pressed == false){
  
  digitalWrite(13, 1);
    digitalWrite(12, 1);
      digitalWrite(11, 1);

        digitalWrite(10, 1);
    digitalWrite(9, 1);
      digitalWrite(8, 1);
          digitalWrite(7, 1);
      digitalWrite(6, 1);
                digitalWrite(5, 1);
      digitalWrite(4, 1);
}else{
  
  digitalWrite(13, 0);
    digitalWrite(12, 0);
      digitalWrite(11, 0);
  
        digitalWrite(10, 0);
    digitalWrite(9, 0);
      digitalWrite(8, 0);

                digitalWrite(7, 0);
      digitalWrite(6, 0);
                      digitalWrite(5, 0);
      digitalWrite(4, 0);
}

  delay(DELAY);
}
