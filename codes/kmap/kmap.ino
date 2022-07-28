
int Z=0,Y=1,X=0,W=1;
int D,C,B,A;

void disp_7447(int D, int C, int B, int A)
{
  digitalWrite(4, A); //LSB
  digitalWrite(5, B); 
  digitalWrite(6, C); 
  digitalWrite(7, D); //MSB

}

void setup() {
  pinMode(4, OUTPUT);  
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}


void loop() {
  A=0;
  B=(W&&!X&&!Y&&!Z) || (!W&&X&&!Y&&!Z) || (W&&!X&&Y&&!Z) || (!W&&X&&Y&&!Z);
  C=(W&&X&&!Y&&!Z) || (!W&&!X&&Y&&!Z) || (W&&!X&&Y&&!Z) || (!W&&X&&Y&&!Z);
  D = (W&&X&&Y&&!Z)||(!W&&!X&&!Y&&Z);

  disp_7447(D,C,B,A);  
}
