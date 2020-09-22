// Jamil Matheny
// 03.06.2020
// Math Practice Project

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

// start the program

{
	/* Variables used for data calculations */	
	float num1, num2, ans;
	char ch;
		
		/* Fancy Application Title - ;) */																			
		printf("**** WELCOME TO MY SIMPLE CALCULATOR by Jamil Matheny ****\n");
		printf("====================================\n");
		printf("\nCalculate: ");		
		
																	
		/* Collects any input user variable to calculate the integer with character */
		scanf("\n %f %c %f", &num1, &ch, &num2);
		
		
		/* Assigns the variables */
		switch(ch)
		{
			case '+':
				ans = num1 + num2;
				break;
			case '-':
				ans = num1 - num2;
				break;
			case '*':
				ans = num1 * num2;
				break;
			case '/':
				ans = num1 / num2;
				break;
			default: 
				printf("\n\nHA HA! Nice try! Invalid operator! \nYou broke my program and now it's over...BYE!...");
				
		}																						
									   															
		/* Outputs the calculated total */
		printf("\n\n %.1f %c %.1f = %.0f", num1, ch, num2, ans);
		
			if (ans)
				{
					printf("\n\n Awesome! Here is your answer! Thank you for using this calculator. :) \n");
				}
		
	/* exits the program */
	return 0;																								
				
	
}
