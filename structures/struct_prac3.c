#include<stdio.h>

struct date{
int day;
int month;
int year;
}

int main()
{
	struct date date1,date2;
		printf("Enter the first date (day month year)");
		scanf("%d %d %d",&date1.day,&date1.month,&date1.year);

		printf("Enter the second date (day month year)");
		scanf("%d %d %d",&date2.day,&date2.month,&date2.year);

		int diff=dateDiff(date1,date2);

		printf("the difference between the two dates is %d days.\n",diff);


		return 0;
}		
//first to check leap year
int leapyear(int year){
	if((year%400==0)||(year%4==0)&&(year%100!=0)){
		return 1;
	}
	return 0;
	
}

//total of days in month
int numberofdays(int month,int year)
{
        switch(month){
        case1: case 3: case 5: case 7: case 8: case 10: case 12:
                       return 31;
        case 4: case 6: case 9: case 11:
                       return 30;
        case 2:
                      return  leapyear(year) ? 28 : 29;
        }
}


//check total days from begining
int totaldays(struct date date)
{
	int total_days=0;
		for(int i=0;i<date.year;i++)
		{
			total_days+=leapyear(i) ? 366 :365;
		}
		for(int i=0;i<date.month;i++)
		{
			total_days+=numberofdays(date.month,date.year);
		}
		total_days+=date.day;

		return total_days;
}
//finaly finding the deference last step
int difference(struct date date1,struct date date2)
{
	int totaldays1=totaldays(date1);
	int totaldays2=totaldays(date2);

	int totaldiff=totaldays1-totaldays2;

	return totaldiff;
}

