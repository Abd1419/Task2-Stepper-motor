#incloude <Stepper.h>

int spr = 20 ;
int D=0;
int X=0;
int c1=10;
int c2=11;

Stepper stepper(spr, 3, 8, 9,);

Void setup ()  {
  stepper.setSpeed(60);
}

void loop ()  {
  
  stepper.step(5);
  delay(5000);
  stepper.step(-5);
  delay(5000);
  
}
