
buzzerbk buzzer(PORT1);    //Declara el modulo de buzzer en el Puerto 1

//Codigo principal que corre por siempre
code(){

 buzzer.turn(ON);          //Prende el buzzer
 delay(500);               //Delay de 500 milisegundos
 buzzer.turn(OFF);         //Apaga el buzzer
 delay(500);               //Delay de 500 milisegundos

}
