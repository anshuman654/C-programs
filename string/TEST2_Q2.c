#include<stdio.h>
#include<string.h>

int is_rotation(const char *str1, const char *str2);

int main(){

	char str1[20]="abcde";
	char str2[20]="deabc";

	int result=is_rotation(str1,str2);

	if(result){
		printf("yes it is rotaional");
	}else{
		printf("not roatational");
	}


	return 0;
}

int is_rotation(const char *str1, const char *str2){

	char temp[40];

	if(strlen(str1)!=strlen(str2)){
		printf("they are not rotational");
	
	}

	strcpy(temp,str1);
	strcat(temp,str1);

	if(strstr(temp,str2)!=NULL){
		return 1;
	}
	else{
		return 0;
	}


}
