#include<stdio.h>
	struct car
	{
		int car ID;
		char model[50];
		flaot rental_rate;
	};
	


	float calculateRentalCost(struct car car,int days)
	{
		return car.rentalRateperday * days;
	}

int main()
{
	struct car car1,car2,car3;
	int rentaldays;

	printf("Input details for car 1:\n");
	printf("car ID :");
	scanf("%d",&car1.carID);
	printf("Enter the model for car 1:\n");
	scanf("%s",car1.model);
	printf("input the rentperday");
	scanf("%f",&car1.rental_rate);

	printf("Input details for car 2:\n");
        printf("car ID :");
        scanf("%d",&car2.carID);
        printf("Enter the model for car 2:\n");
        scanf("%s",car2.model);
        printf("input the rentperday");
        scanf("%f",&car2.rental_rate);

	printf("Input details for car 3:\n");
        printf("car ID :");
        scanf("%d",&car3.carID);
        printf("Enter the model for car 3:\n");
        scanf("%s",car3.model);
        printf("input the rentperday");
        scanf("%f",&car3.rental_rate);

	printf("\n Enter the number of rental days:\n")
	scanf("%d",&rentalDays);

	printf("\n Total rental cost for car1:%d",calculaterentalcost(car1,rentaldays));
	 printf("\n Total rental cost for car1:%d",calculaterentalcost(car2,rentaldays));
	 printf("\n Total rental cost for car1:%d",calculaterentalcost(car2,rentaldays));

	 return 0;


}
