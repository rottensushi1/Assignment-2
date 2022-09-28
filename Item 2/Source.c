#include <stdio.h>
#include <math.h>

//Taiyo Suzuki
//Sept 30, 2022
//PROG71985F22 - Assignment 2
//Item 2: Using a for loop, print a table using ASCII (printable) characters with each line giving an integer, its square root,
//its square and its cube. Ask the user to enter a lower and upper limit for the table, but limit input to stay between 0 and 50.

//definitions
#define LOWERLIMIT   0
#define UPPERLIMIT   50

int main(void)
{
	int lowerLimitInput = LOWERLIMIT, upperLimitInput = UPPERLIMIT;						//initial limit values same as constant limits

	printf("Please enter lower limit (between 0-50): ");								//prompt user for first input

	scanf_s("%d", &lowerLimitInput);													//scan and save lower limit

	if (LOWERLIMIT <= lowerLimitInput && lowerLimitInput <= UPPERLIMIT)					//check if limit is between hard limits (0 & 50)
	{
		printf("Please enter upper limit (between %d-50): ", lowerLimitInput);			//prompt user for second input

		scanf_s("%d", &upperLimitInput);												//scan and save upper limit

		if (upperLimitInput <= UPPERLIMIT && lowerLimitInput <= upperLimitInput)		//check if limit is between lower limit & 50
		{
			printf("--------------------------\n");
			printf("x | sqrt(x) | x^2 | x^3\n");										//print top of table

			for (int i = lowerLimitInput; i <= upperLimitInput; i++)					//caculate and print output with lines for table in between
			{
				double iDouble = i, iSquareRoot = sqrt(iDouble);
				int iSquare = i * i, iCube = pow(i, 3);

				printf("--------------------------\n");
				printf("%d | %.3f | %d | %d\n", i, iSquareRoot, iSquare, iCube);		//format output
			}

			printf("--------------------------\n");										//print final line to table
		}
		else
		{
			printf("Value out of range. Exit and try again\n");							//tell user when values are out of range
		}

	}
	else
	{
		printf("Value out of range. Exit and try again\n");								//tell user when values are out of range
	}

	return 0;
}