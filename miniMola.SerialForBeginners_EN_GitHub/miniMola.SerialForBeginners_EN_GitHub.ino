//This text was written by miniMola / Adriano - If you want to change it you can do it NOT-commercial, otherwise contact me
//This is a sketch that includes the basics about serial

#define ledPin 13     //Defines 'ledPin' as PIN No. 13
int incomingByte;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);     //Specifies that the ledPin is an output and outputs a Voltage
  Serial.println(" ");      //Serial.println(" ") A text line can be output in the serial interface
  Serial.println("[Serial-Basics] Arduino is Running.");
  Serial.println(" 0 = Turn Off the LED ");
  Serial.println(" 1 = Turn On the LED ");
  Serial.println(" 4 = Help");
  Serial.println(" 5 = 'Empty' the Serial Console ");
  Serial.println(" 9 = Reset the Arduino ");
}

void loop() {
  if (Serial.available() > 0) {

    incomingByte = Serial.read();

    if (incomingByte == '1')      //If the number 1 arrives, the following is performed:
    {
      digitalWrite(ledPin, HIGH);     //Turns on ledPin
      Serial.println("PIN 13 is turned ON!");
    }

    if (incomingByte == '0')      //If the number 0 arrives, the following is performed:
    {
      digitalWrite(ledPin, LOW);     //Turns off ledPin
      Serial.println("PIN 13 is turned OFF!");
    }
    
    if (incomingByte == '4')      //If the number 4 arrives, the following is performed:
    {
  Serial.println(" ");
  Serial.println(" 0 = Turn Off the LED ");
  Serial.println(" 1 = Turn On the LED ");
  Serial.println(" 4 = Help");
  Serial.println(" 5 = 'Empty' the Serial Console ");
  Serial.println(" 9 = Reset the Arduino ");
    }

    if (incomingByte == '5')      //If the number 5 arrives, the following is performed:
    {
      //Command 5 'empties the serial console'
      digitalWrite(ledPin, LOW);     //Turns off ledPin
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
      Serial.println(" ");
    }
    
    if (incomingByte == '9')      //If the number 9 arrives, the Arduino resets:
    {
      Serial.println("Copyright (c) miniMola eMedia - ALL RIGHTS RESERVED");
      Serial.println("      ");
      Serial.println("      DEVICE WILL BE RESETTED");
      Serial.println("      ");
      delay(300);
      Serial.println("      EXECUTED: asm volatile (''  jmp 0'');");
      Serial.println("            ASSEMBLERCOMMAND EXECUTED:   jmp 0");
      delay(300);
      Serial.println("      DEVICE RESETTED");
      Serial.println("      ");
      asm volatile ("  jmp 0");
    }
  }
}
