#include<stdio.h>
#include<string.h>
	
struct parts{

	char serial_num[200];
	int yearOfMan;
	char material[200];
	int quantity;
};

void information(struct parts A[],int n);

int main(){

	struct parts A[100];
	int n;

	printf("enter the total number of parts you want enter");
	scanf("%d",&n);

	for (int i = 0; i < n; i++) {
        printf("Enter serial number for part %d (e.g., BB1): ", i + 1);
        scanf("%s", A[i].serial_num);
        printf("Enter year of manufacture for part %d: ", i + 1);
        scanf("%d", &A[i].yearOfMan);
        printf("Enter material for part %d: ", i + 1);
        scanf("%s", A[i].material);
        printf("Enter quantity manufactured for part %d: ", i + 1);
        scanf("%d", &A[i].quantity);
    }

	information(A,n)



	return 0;
}

void information(struct parts A[],int n){

	printf("this is information of parts btw BB1 and CC6");

	for(i=0;i<n;i++){
	
		if(strcmp(A[i].serial_num,"BB1")>=0 && strcmp(A[i].serial_num,"CC6")<=0){
		
			printf("%s %d %s %d",A[i].serial_num,A[i].yearOfMan,A[i].material,A[i].quantity);
		
		
		}
	
	}




}


