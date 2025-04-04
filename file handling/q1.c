#include<stdio.h>

int sum_from_file(const char *filename);

int main(){


	char filename[100];

	printf("Enter the file name");
	scanf("%s",filename);


	sum_from_file(filename);



	return 0;
}

int sum_from_file(const char *filename){

	FILE *ft;

	ft=fopen(filename,"r");

	if(ft==NULL){
		printf("File is not getting open");
		return 0;
	}
	int buff,sum=0;

	while(fscanf(ft,"%d",&buff)==1){
	
		sum+=buff;
	
	}

	printf("%d",sum);


}
