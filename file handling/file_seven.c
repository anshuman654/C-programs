#include<stdio.h>
#include<string.h>
int main(void){
FILE* fptr;
fptr=fopen("t.txt","r");
char ch[1000];
char sh[1000];
int i=1;
int count=0,count2=0;
while(fgets(sh,sizeof(sh),fptr)!=NULL){
printf("%d %s \n",i++,sh);
}
fclose(fptr);
fptr=fopen("t.txt","r");
while(fscanf(fptr,"%s",ch)!=EOF){
	count++;
}
printf("total words %d\n",count);

fclose(fptr);
fptr=fopen("t.txt","r");
while(fgetc(fptr)!=EOF){
	count2++;
}
printf("total character count %d \n",count2);
fclose(fptr);
return 0;
}
