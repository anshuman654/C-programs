#include<stdio.h>
#include<string.h>

char nonrep(char str[]){
	char value;
	int i,j;
	int n= strlen(str);
	for(i=0;i<n;i++){
		int found=0;
		for(j=0;j<n;j++){
			if(i!=j && str[i]==str[j]){
				found=1;
				break;		
			}
		}
		 if(found==0){
                return str[i];
        }

	}
	
		return '\0';

}


int main(){

	char str[50];
	printf("Enter the string \n");
	scanf("%s",str);

	char result=nonrep(str);

	if(result!='\0'){
		printf("non repeating value %c",result);
	}
	else{
		printf("no repeating value is present ");
	}

	return 0;
}
