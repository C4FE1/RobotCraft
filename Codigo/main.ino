void setup(){
	// portas dos motores
	int motor_a1=2,motor_a2=3,motor_b1=4,motor_b2=5;
	
	// HABILITAR COMUNICAÇÃO SERIAL
	Serial.begin(9600);
		
	// PORTAS

	// MOTOR 1
	pinMode(motor_a1,INPUT);	// MOTOR A PORTA 1
	pinMode(motor_a2,INPUT);	// MOTOR A PORTA 2
	
	// MOTOR 2
	pinMode(motor_b1,INPUT);	// MOTOR B PORTA 1
	pinMode(motor_b2,INPUT);	// MOTOR B PORTA 2	

}

void Ir_Para(const std::string sentido){
	if (sentido == "frente"){
	digitalWrite(motor_a1,HIGH);
	digitalWrite(motor_a2,LOW);

	digitalWrite(motor_b1,HIGH);
	digitalWrite(motor_b2,LOW);
	}else if (sentido == "tras"){
	digitalWrite(motor_a1,LOW);
	digitalWrite(motor_a2,HIGH);

	digitalWrite(motor_b1,LOW);
	digitalWrite(motor_b2,HIGH);
	}else if (sentido == "esquerda"){
	delay(10000); // nao sei 
	}else if (sentido == "direita"){
	delay(10000); // nao sei o sentido de giro do motor
	}else{
	Serial.println("Nao foi possivel mover o motor para " %s,sentido);
	}
}


void loop(){
	analogRead(A0); 	// VALOR DO LDR CONECTADO NA PORTA A0 

	Serial.println(analogRead(A0)); // PASSA O VALOR DA PORTA A0 PARA A COMUNICAÇÃO SERIAL
	
	delay(5000);	//FAZ NADA POR 5000 MILISSEGUNDOS

	// Para o uso do LDR estamos testanto os valores de luminosidade
	// Estamos supondo para o branco algo como 500-600 para o cinza
	// 700-800 preto

}
