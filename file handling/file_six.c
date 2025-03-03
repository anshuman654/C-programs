#include<stdio.h>
#include<string.h>
#define one 120
#define two 120
int main(void){
FILE* fptr;
char arr[one][two];
int i,count;
fptr=fopen("t.txt","r");
while(fgets(arr[i],two,fptr)){
arr[i][strlen(arr[i])-1]='\0';
i++;
}
count=i;
for(i=0;i<count;i++){
printf("%d:%s\n",i+1,arr[i]);
}
return 0;
}
