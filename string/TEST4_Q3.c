#include<stdio.h>
#include<string.h>

int isPalindrome(char str[]);

int main(){

	char str[] = "madam";

	int result = isPalindrome(str); // result should be 1

	if(result){
		printf("it is a palindrome");
	}
	else{
		printf("not palindrome");
	}



	return 0;
}

int isPalindrome(char str[]){
	
	int n =strlen(str);

	int left=0,right=n-1;

	while(left<right){
	
		if(str[left]==str[right]){
			
			left++;
			right--;
		}
		else{
			return 0;	
		
		}
	
	}
	return 1;

}
