#include<stdio.h>
#include<unistd.h>

typedef enum{

	RED,
	GREEN,
	YELLOW

}TrafficLightState;

void redLightCallback(void);
void greenLightCallback(void);
void yellowLightcallback(void);

void changeState(TrafficLightState state)
{
switch(state){

	case RED:
		redLightCallback();
		break;
	case GREEN:
		greenLightCallback();
		break;
	case Yellow:
		yellowLightCallback();
		break;

}
}

void redLightCallback(void){

	printf("Red light -stop \n");
	sleep(3);

}

void greenLightCallback{

	printf("Green light -go \n");
	sleep(5);
}

void yellowLightCallback(void){

	printf("yellow light -wait \n");
	sleep(2);
}


int main(){


 changestate(state);

 if(state==RED){
 	state=GREEN;
 }
 else if(state==GREEN){
 	state=YELLOW;	
 }
 else if(state==YELLOW){
	 state=RED;
 }

return 0;
}

