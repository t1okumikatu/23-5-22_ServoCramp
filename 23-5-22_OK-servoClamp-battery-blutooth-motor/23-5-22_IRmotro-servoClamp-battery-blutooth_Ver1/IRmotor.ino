void IRmotor(){
  
   ir.sensor();   
  Serial.print("IR.Rdata ");
  Serial.println(ir.Rdata );
  Serial.print("IR.Ldata ");
  Serial.println(ir.Ldata );
         // 黒５０以上白５０以下
    if(ir.Rdata < 50){
      if(ir.Ldata < 50){
        Serial.println("前進");
        motor.forward(190);
      }else { 
        Serial.println("左回転");
        motor.Lback(160);
        motor.Rforward(190);
      }
    }
    if(ir.Rdata > 4000){
      if(ir.Ldata > 4000){
        Serial.println("前進");
        motor.forward(190);
      }else{
        Serial.println("右回転");
        motor.Lforward(190);
        motor.Rback(160);
      }
    }
    }  
