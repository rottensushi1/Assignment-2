#include <stdio.h>
#include <math.h>

//Taiyo Suzuki
//Sept 30, 2022
//PROG71985F22 - Assignment 2
//Item 3: Ask user to enter a number of days, then convert that value to weeks and days and display results in the following
//format: 18 days are 2 weeks, 4 days. Use a while loop to allow the user to repeatedly enter day values; terminate the loop
//when the user enters a nonpositive value, such as 0 or -20.

//definitions
#define DAYS_IN_WEEK 7

int main(void)
{
	float userInput = 1;																				//user Input intialized as positive value for while loop to function

	int days, weeks, daysRemain;

	printf("Enter a number of days. Enter a nonpositive value such as 0 or -1 to end program.");		//program use instructions

	while (userInput > 0) 
	{
		printf("\nDays: ");																				//ask for user input

		scanf_s("%f", &userInput);																		//scan and save input

		if (userInput <= 0)																				//break loop if input is nonpositive value
			break;

		days = userInput;																				//only assign positive values to int (after break point)

		weeks = days / DAYS_IN_WEEK;																	//calculate weeks from days (divide)

		daysRemain = days % DAYS_IN_WEEK;																//calculate remainder from division

		printf("\n%d days are %d weeks, %d days\n", days, weeks, daysRemain);							//print output
	}

	return 0;
}