#include<stdio.h>
#include<string.h>
#include<stdlib>
int main(){
//atoi
char numStr[]="12345";
int num=atoi(numstr);
printf("atoi result:%d\n,num");
//itoa
int numtoconvert=6789;
char resultstr[20];
itoa(numtoconvert,resultStr,10);
printf("itoa result :resultStr,10");
//strstr
char haystack[]="hello,world";
char needle[]="world";
char* found=strstr(haysyck,needle);
if(found!=NULL){
printf("it is present");
}else{
printf("not present");
}
//strtok
char str[]="apple,orange,bannana,grape";
char* token=strtok(str,",");
printf("strtok result:\n");
while(token!=NULL){
printf(%s\n,token);
token=strtok(NULL,",");
}
//strchr
char* charfound=strchr(hayssyack,'o');
//memset
char buffer[10];
memset(buffer,'A',sizeof(buffer));
buffer[9]='\0';
printf("memset result:%s\n",buffer);

char source[]="hello,memcpy";
char destination[20];
memcpy(destination , source , str(source)+1);
printf("memcpy result:%s\n,destination");

return 0;
}
