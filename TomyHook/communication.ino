String getInstruction(){

  String data;
  
    while(Serial.available() > 0){
    
      data = String(data + Serial.read())
    
      } 

    return data;
  
  }
