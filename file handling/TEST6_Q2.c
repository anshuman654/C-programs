#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define L 100

int main(){

	FILE *ft,*rt;

	ft=fopen("data.txt","r");
	rt=fopen("new.txt","w");
	
	if(ft==NULL){
		printf("file is not getting open");
		return 1;
	}
	if(rt==NULL){
		printf("file is not getting open");
			return 1;
	}

	char* buff[10];
	for(int i=0;i<10;i++){
	
		buff[i]=(char*)malloc(30*sizeof(char));
	}


	int n=5,t=0,i,j,count,k;

	while( t<n && (fscanf(ft,"%s \t",buff[t]))==1){
	
		t++;
			
	}
	for(i=0;i<n;i++){	
	printf("%s",buff[i]);
	}

	for(i=0;i<t-1;i++){
		count=0;
		int f=0;
		for(j=i+1;j<t;j++){
			if(strcmp(buff[i],buff[j])==0){
				f=1;
			}
			if(!f){
				 for(j=i+1;j<t;j++){
		                        if(strcmp(buff[i],buff[j])==0){
                		                count++;
                        	}
		}
				 fprintf(rt,"%s %d",buff[i],count);
		}
		
				
			
	}
	
	}	


	fclose(ft);
	fclose(rt);

	for (int i = 0; i < 10; i++) {
     		   free(buff[i]);
    }

	return 0;
}

