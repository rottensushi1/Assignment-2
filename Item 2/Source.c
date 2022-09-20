#include <stdio.h>
#include <math.h>
//Taiyo Suzuki
//Sept 30, 2022
//Item 2: Using a for loop, print a table using ASCII (printable) characters with each line giving an integer, its square root,
//its square and its cube. Ask the user to enter a lower and upper limit for the table, but limit input to stay between 0 and 50.


int main(void)
{
	int lowerLimit = 0;
	int upperLimit = 50;

	printf("Please enter lower limit (between 0-49): ");								//prompt user for first input

	scanf_s("%d", &lowerLimit);															//scan and save lower limit

	if (0 <= lowerLimit < 50)
	{
		printf("Please enter upper limit (between %d-50: ", lowerLimit + 1);			//prompt user for second input

		scanf_s("%d", &upperLimit);														//scan and save upper limit

		if (lowerLimit < upperLimit <= 50) {

			for (int i = lowerLimit; i <= upperLimit; i++)								//caculate and print output with lines in between
			{
				double iDouble = i, iSquareRoot = sqrt(iDouble);
				int iSquare = i * i, iCube = pow(i, 3);

				printf("-----------------------------\n");

				printf("%d -- %.3f -- %d -- %d\n", i, iSquareRoot, iSquare, iCube);
			}

			printf("-----------------------------\n");									//print final line to table
		}

	}
	return 0;
}
//ADD ELSE STATEMENTS