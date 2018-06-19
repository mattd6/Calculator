/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Libraries
#include<stdio.h>  //C Library

void Part_A(void)
{   /*(60 pts) Write a program that asks the user to enter two 
               numbers, obtains the two numbers from the user 
               and prints the sum, product, difference, quotient
               and remainder of the two numbers.  (+10)Your program is on-time.*/

	//Declare variables
	int num1, num2, sum, product, difference, quotient;
	
	
	//Prompt user to enter 2 numbers
	printf("Enter your first number: ");
	
	scanf("%i", &num1);

	
	
	printf("Enter your second number: ");
	
	scanf("%i", &num2);



	//Calculate and print the sum, product, difference, quotient
        //and remainder of the two numbers. 
 
	sum = num1 + num2;

    
	product = num1 * num2;

    
	difference = num1 - num2;
 
   
	quotient = num1 / num2;

    
    
	printf("%i + %i = %i\n", num1, num2, sum);
    
	printf("%i * %i = %i\n", num1, num2, product);
    
	printf("%i - %i = %i\n", num1, num2, difference);
    
	printf("%i / %i = %i R %i\n", num1, num2, quotient, num1%num2);
}
void Part_B(void)
{  /*(70 pts) Part A and write a program that gets three different
           integers from the user, then prints the sum, the average,
           the product of these numbers.  (+10)Your  program is on-time.*/
		   
	//Declare variables
	int num3, num4, num5, sum, average, product;
	
	//Prompt user to enter 3 numbers
	printf("Enter your first number: ");
	
	scanf("%i", &num3);

	
	
	printf("Enter your second number: ");
	
	scanf("%i", &num4);

	printf("Enter your third number: ");
	
	scanf("%i", &num5);

	//Calculate and print the sum, average, and product of the 3 numbers. 
	sum = num3 + num4 + num5;
	
	
	
	average = (num3 + num4 + num5) / 3;
	
	
	
	product = num3 * num4 * num5;
	
	

	printf("%i + %i + %i = %i\n", num3, num4, num5, sum);

	printf("(%i + %i + %i) / 3 = %i R %i\n", num3, num4, num5, average, (num3 + num4 + num5)%3);

	printf("%i * %i * %i = %i\n", num3, num4, num5, product);
}
void Part_C(void)
{/*  (80 pts) Part A & B and write a program that get the radius
           of a circle from the user then calculates and prints the 
		   circle's diameter, circumference and area.  
		   Declare and use the constant value 3.14159 for Pi.  All 
           calculations should occur outside the printf statement(s) 
           and use the formatted conversion %.2f for float variables.  
           (+10)Your program is on-time.  */
	//Declare Variables
	int num6;

	float diameter;

	float circumference;

	float area;
	
	//Prompt the user to enter the radius
	printf("Enter the radius of the circle: ");

	scanf("%i", &num6);
	
	//Calculate the circle's diameter, circumference and area.
	diameter = num6 * 2;
 
	circumference = (num6 * 2) * 3.14159;

	area = num6 * num6 * 3.14159;
	
	//Print the circle's diameter, circumference and area.
	printf("diameter = %i * 2 = %.2f\n", num6, diameter);

	printf("circumference = (%i * 2) * 3.14159 = %.2f\n", num6, circumference);

	printf("area = %i * %i * 3.14159 = %.2f\n", num6, num6, area);
	
}
void Part_D(void)
{  /*Part A, B, & C and write a program that evaluates the following
            expression and displays the results (remember to use exponential
            format (scientific notation) to display the result).  (+10)Your program
            is on-time.
                (3.31 x 10-8 x  2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8)*/
				
	//Declare Variables			
				
	
	//Print formatted Results
	printf("((3.31 x 10-8) x  (2.01 x 10-7)) / ((7.16 x 10-6) + (2.01 x 10-8)) = %g\n", (3.31E-8 * 2.01E-7) / (7.16E-6 + 2.01E-8));

}
void Part_E(void)
{/*Part A, B, C, and D and write a program to evaluate the function
        
	f(x) = 2x^3 + 5x^2 - 7 for x=-5, x=3, and x=5 */

	float x = -5;

	printf("For x=-5, 2x^3 + 5x^2 - 7 = %g\n", 2*x*x*x + 5*x*x - 7);

	

	float y = 3;

	printf("For x=3, 2x^3 + 5x^2 - 7 = %g\n", 2*y*y*y + 5*y*y - 7);


	
float z = 5;

	printf("For x=5, 2x^3 + 5x^2 - 7 = %g\n", 2*z*z*z + 5*z*z - 7);
	

}
int main(void) 
{
	Part_A();
	Part_B();
	Part_C();
	Part_D();
	Part_E();

    return 0;
}