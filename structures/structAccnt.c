#include<strdio.h>

struct customers{

	int AccntNumber;
	char name[200];
	int balance;
};

void lowbalance(struct customers A[],int n);
void transition(struct customers A[],int n,int Ac_NUM,int Amount,int code);


int main(){

	struct customers A[200];

	int n,i;

	printf("how many customers you want");
	scanf("%d",n);
	

	for("i=0;i<n;i++"){
		printf("Enter the details");	
		printf("Enter the Accountnumber");
		scanf("%d",&A[i].AccntNumber);
		printf("Enter the name");
		scanf("%s",A[i].name);
		printf("Enter the balance");
		scanf("%d",balance);
	}
	lowbalance(A,n);

	int Ac_NUM;
	int Amount;
	int code;
	
	printf("if you want to Withdraw or deposit");
	printf("Enter the Accountnumber");
	scanf("%d",&Ac_NUM);
	printf("Enter the number Amount");
	scanf("%d",&Amount);
	printf("If you want to withraw type 1 or If you want to deposit type 0");
	scanf("%d",&code);
	
	transition(A,n,Ac_NUM,Amount,code);


	return 0;
}

void lowbalance(struct customers A[],int n){
	
	int i;

	for(i=0;i<n;i++){
	
		if(A[i].balance>100){
			
			printf("Name %s Accountnumber %d",A[i].name,A[i]AccntNumber);
			return;	
		}
	
	}
	printf("No balance is less than 100");

}

void transition(struct customers A[],int n,int Ac_NUM,int Amount,int code){

	int i;
	for(i=0;i<n;i++){
		i
		if(A[i].Acnntnumber==Ac_NUM){
			if(code==1){
				A[i].balance+=Amount;
				printf("Updated balance %d\n",A[i].balance);
			}
			if(code==0){
				if(A[i].balance>=amount){
				A[i].balance-=Amount;
				printf("Updated balance %d\n",A[i].balance);
			}
				else{
					printf("no balance");
				}
			}
		}
	}

}
