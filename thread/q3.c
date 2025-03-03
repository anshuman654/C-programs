#include<stdio.h>

int main(){
FILE *file;
const char *filename="/home/anshuman/ello.c";
file=fopen(filename,"r");
if(file){
printf("the file exists at the desired position. \n");
fclose(file);
}else{
printf("the file does not exist at the desired position. \n");
}
return 0;
}
