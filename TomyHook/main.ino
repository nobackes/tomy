define X_DIR_PIN          55
#define X_STEP_PIN         54
#define X_ENABLE_PIN       38

#define Y_DIR_PIN          61
#define Y_STEP_PIN         60
#define Y_ENABLE_PIN       56

#define Z_DIR_PIN          48
#define Z_STEP_PIN         46
#define Z_ENABLE_PIN       62

#define X_STEP_HIGH             PORTF |=  0b00000001;
#define X_STEP_LOW              PORTF &= ~0b00000001;

#define Y_STEP_HIGH             PORTF |=  0b01000000;
#define Y_STEP_LOW              PORTF &= ~0b01000000;

#define Z_STEP_HIGH             PORTL |=  0b00001000;
#define Z_STEP_LOW              PORTL &= ~0b00001000;

#define TIMER1_INTERRUPTS_ON    TIMSK1 |=  (1 << OCIE1A);
#define TIMER1_INTERRUPTS_OFF   TIMSK1 &= ~(1 << OCIE1A);


void setup() {
  // put your setup code here, to run once:

  stepperSetup();
  Serial.begin(9600);  

}

void loop() {
  // put your main code here, to run repeatedly:

  
  prepareMovement( 2, 2400 );
  
  runAndWait();

  
}




