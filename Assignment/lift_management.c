#include<stdio.h>
int move(){
int floor;
printf("Enter the floor to move");
if(scanf("%d",&floor)!=1){
printf("enter valid floor[1,2,3,4]\n");
return 0;
}
if(floor<1||floor>10){
printf("enter valid floor[1,2,3,4]\n");
return 0;
}
return 0;
}
int main(){
	FILE* fptr;
	int options;
	int current_pos=1;
	fptr=fopen("lift.txt","r+");
}
fseek(fptr,0,SEEK_END);
int know=ftell(fptr);
rewind(fptr);

if(known<=0){
	fptr=fopen("lift.txt","W");
	current_pos=1;
	fprintf(fptr,"%d",current_pos);
}
else{
fscanf("fptr,"%d",&current_pos");
}
flclose(fptr);

fgetc(fptr);
int go;

int temp=0;

printf("WELCOME\n");
while(1){
printf("kindle select the options:\n");
printf("1.MOVE\n");
printf("2.EXIT:");
if(scanf("%d",&opton)!=1){
printf("enter valid input");
return 1;
}
switch(option){
case1:
	temp=1;
	iff(go=move()){
		if(go==current_pos){
		printf("The lift already in same floor");
		option=2;
		break;
		}
		printf("previous position:%d\n",current_pos);
		printf("current position:%d\n",go);
		if((go-current_pos)<0){
		printf(("the lift moved down\n");
		}
		current_pos=go;
}
break;
case2:
	if(temp==0){
	printf("exiting..Thank you\n");
	return 0;
	}
	else{
	fptr=fopen("lift.txt","W");
	fprintf(fptr,"%d",current_pos);
	fclose(fptr);
	printf("exiting..THANK you \n");
	return 0;
	}
	default:
	printf("enternvalid input\n");
	break;
}
