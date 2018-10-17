/*chp3 ex3 */
#include <stdio.h>

int main()
{
	float wgWeek[52];
	int cntr,numOfWks;
	float yrlyWage;

	printf("\nHow many weeks of wages do you want to enter? ");
	scanf("%d", &numOfWks);

	cntr = 0;
	while(cntr < numOfWks && cntr < 52)
	{
		printf("\nEnter the wage for week %d : ",cntr+1);
		scanf("%f", &wgWeek[cntr]);
		cntr = cntr + 1;
	}
	
	/* try printing the array with a loop */
	
	cntr = 0;
	while(cntr < numOfWks && cntr < 52)
	{
		printf("\nThe array element [%d] Contains %0.2f.",cntr,wgWeek[cntr]);
		cntr = cntr +1;
	}
	/* total the wages */
	yrlyWage = 0;
	cntr = 0;
	while(cntr < numOfWks && cntr < 52)
	{
		yrlyWage = yrlyWage + wgWeek[cntr];
		cntr = cntr +1;
	}
	printf("\n\nThe total is now %0.2f\n", yrlyWage);

	return 0;
}
