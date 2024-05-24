void setup(){
	// HABILITAR COMUNICAÇÃO SERIAL
	Serial.begin(9600);
	
	// PORTAS

	// MOTOR 1
	//pinMode(2,INPUT);	// MOTOR A PORTA 1
	//pinMode(3,INPUT);	// MOTOR A PORTA 2
	
	// MOTOR 2
	//pinMode(4,INPUT);	// MOTOR B PORTA 1
	//pinMode(5,INPUT);	// MOTOR B PORTA 2	

}

void loop(){
	analogRead(A0); 	// VALOR DO LDR CONECTADO NA PORTA A0 

	Serial.println(analogRead(A0)); // PASSA O VALOR DA PORTA A0 PARA A COMUNICAÇÃO SERIAL
	
	delay(5000);	//FAZ NADA POR 5000 MILISSEGUNDOS

	// Para o uso do LDR estamos testanto os valores de luminosidade
	// Estamos supondo para o branco algo como 500-600 para o cinza
	// 700-800 preto

}
