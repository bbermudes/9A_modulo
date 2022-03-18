void setup()
{

  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  pinMode(botao5, INPUT); 
  pinMode(botao6, INPUT);
  pinMode(botao7, INPUT);
  Serial.begin(9600);
}

void loop()
{
  var1 = digitalRead(botao1);
  var2 = digitalRead(botao2);
  var3 = digitalRead(botao3);
  var4 = digitalRead(botao4);
  var5 = digitalRead(botao5);
  var6 = digitalRead(botao6);
  var7 = digitalRead(botao7);
 
   if(var1){
    Serial.println("DO");
  }
   if(var2){
  Serial.println("RE");  
  }
   if(var3){
  Serial.println("MI"); 
  }
   if(var4){
  Serial.println("FA"); 
  }
   if(var5){
  Serial.println("SOL");  
  }
   if(var6){
  Serial.println("LA"); 
  } 
  if(var7){
  Serial.println("SI"); 
  }
}
