#include <stdio.h>
#include <math.h>
//Taiyo Suzuki
//Sept 30, 2022
//Item 2: Using a for loop, print a table using ASCII (printable) characters with each line giving an integer, its square root,
//its square and its cube. Ask the user to enter a lower and upper limit for the table, but limit input to stay between 0 and 50.

int main(void)
{
	int lowerLimit = 0;
	int upperLimit = 50;																//initial limit values

	printf("Please enter lower limit (between 0-49): ");								//prompt user for first input

	scanf_s("%d", &lowerLimit);															//scan and save lower limit

	if (0 <= lowerLimit && lowerLimit <= 50)											//check if limit is between 0 & 50
	{
		printf("Please enter upper limit (between %d-50): ", lowerLimit);				//prompt user for second input

		scanf_s("%d", &upperLimit);														//scan and save upper limit

		if (upperLimit <= 50 && lowerLimit <= upperLimit)								//check if limit is between lower limit & 50
		{
			printf("-----------------------------\n");
			printf("x -- sqrt(x) -- x^2 -- x^3\n");										//print top of table

			for (int i = lowerLimit; i <= upperLimit; i++)								//caculate and print output with lines for table in between
			{
				double iDouble = i, iSquareRoot = sqrt(iDouble);
				int iSquare = i * i, iCube = pow(i, 3);

				printf("-----------------------------\n");

				printf("%d -- %.3f -- %d -- %d\n", i, iSquareRoot, iSquare, iCube);		//format output
			}

			printf("-----------------------------\n");									//print final line to table
		}
		else
		{
			printf("Value out of range. Exit and try again\n");							//values out of range
		}

	}
	else
	{
		printf("Value out of range. Exit and try again\n");								//values out of range
	}

	return 0;
}