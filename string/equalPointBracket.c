#include<stdio.h>
#include<string.h>


int equalPoints(const char* str){

	int one=0;
	int two=0;
	int n=strlen(str);

	for(int i=0;i<n;i++){
		if(str[i]=='('){
			one++;
		}
		if(str[i]==')'){
			two++;
		}

		if(one==two){
			printf("%d",i);
			return i;
			
		}
	
	}
		return -1;
}


int main(){


	const char* str={"(())"};

	int Points=equalPoints(str);

	if(Points==-1){
	
		printf("no equal point is there");
	
	}
	return 0;
}
