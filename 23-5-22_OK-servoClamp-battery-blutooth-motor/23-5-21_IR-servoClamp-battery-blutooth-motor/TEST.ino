 void TEST(){
  //Serial.println("test");  
 //servoClamp.gripclose();//グリップ閉
  //delay(1000);
   if (Serial.available()) {  // シリアルポートにデータがあるか確認
    char inkey = Serial.read();  // 1バイト読み込み
     switch(inkey){
      case 'a': 
        motor.brake(0);  
        Serial.println("a_gripclose");    
        servoClamp.gripclose();//1aゆっくり閉めるa
        Serial.println("a_gripclose");
        motor.brake(0);
        Motor();   
        delay(200);        
        break;    
      case 'b': 
        motor.brake(0);
        Serial.println("b_gripopen");
        servoClamp.gripopen();//jゆっくり開
        Serial.println("b_gripopen");
        motor.brake(0);
        Motor();
        delay(200);           
        break;
       case 'c': 
        motor.brake(0);
        Serial.println("c_gripclose130");
        servoClamp.gripclose130();//1bすぐ閉めるb
        Serial.println("c_gripclose130");
        motor.brake(0);
        Motor();   
        delay(200);  
        break;               
       case 'd':
        motor.brake(0);
        Serial.println("d_shoulderclose");  
        servoClamp.shoulderclose();//5dショルダーゆっくりおろす
        Serial.println("d_shoulderclose");   
        motor.brake(0);
        Motor();   
        delay(200);          
        break;
       case 'e': //ゆっくりあげる
        motor.brake(0);
        Serial.println("shoulderopen"); 
        servoClamp.shoulderopen();//eショルダースロー開く
        Serial.println("shoulderopen");       
         Motor();
        //motor.brake(0);   
        delay(200);                     
        break;
        case 'f': 
        motor.brake(0);
        Serial.println("shoulderclose170"); 
        servoClamp.shoulderclose170();//ショルダースロー少し開く
        Serial.println("shoulderclose170");   
        delay(2000);
         Motor();
        motor.brake(0);   
        delay(200);         
        break;     
        case 'g'://forward 
        motor.brake(0);
        Serial.println("forward");
        Motor(); 
        motor.forward(170);  
        delay(200);
        Serial.println("forward");   
        delay(2000);                  
        break;
        default:
        break;        
        case 'h':   //stop
        Serial.println("STOP");    
        Motor();
        motor.brake(0);   
        delay(200);
        Serial.println("STOP");   
        delay(2000);                  
        break;
        case 't':
        motor.brake(0);
        Serial.println("TEST");
        servoClamp.gripopen();//160-60
        servoClamp.shoulderclose();//40-170
        servoClamp.gripclose();//60-160
        servoClamp.shoulderopen();//170-40
        motor.brake(0);
         Motor();   
        delay(200);
        Serial.println("TEST");   
        delay(2000);                                                                                 
        break;
        
       
  }     
    }
 }       
