# Numbers


#include <stdio.h>
void PrintMenu(void)
{
    //menu here
    printf("Menu:\n");
    printf("1 - Greater than, Less than, or equal\n");
    printf("2 - Evenly Divisible\n");
    printf("3 - Working with 5 numbers\n");
    printf("4 - One-digit in words\n");
}
int main(void)
{
	//declare the variables
	int choice, num1, num2, num3, num4, num5, sum, product, quotient;
	
	//print the menu
	PrintMenu();
	printf("Enter your menu choice: ");
	scanf("%i", & choice);
	
   //redirect based on the user's input
   switch(choice)
   {
   case 1://Greater than, less than, or equal to
	
    printf("Enter your first number: ");
    scanf("%i", &num1);
    
    printf("Enter your second number: ");
    scanf("%i", &num2);
    
    if (num1 > num2)
    {
        printf("%i is greater than %i\n", num1, num2);
    }
    
    if (num1 < num2)
    {
        printf("%i is less than %i\n", num1, num2);
    }
    
    if (num1 == num2)
    {
        printf("%i is equal to %i\n", num1, num2);
    }
	
    break;
    case 2: //Evenly divisible
	
    printf("Enter your first number: ");
    scanf("%i", &num3);
	
    printf("Enter your second number: ");
    scanf("%i", &num4);

    if (num3 % num4 == 0)	
	printf("%i is evenly divisible by %i\n", num3, num4);
    else	
    	printf("%i is not evenly divisible by %i\n", num3, num4);

    quotient = num3 / num4;
    printf("%i / %i = %i R %i\n", num3, num4, quotient, num3%num4);
	
    break;
    case 3: //Working with 5 numbers

    printf("Enter your first number: ");
    scanf("%i", &num1);
    
    printf("Enter your second number: ");
    scanf("%i", &num2);
    
    printf("Enter your third number: ");
    scanf("%i", &num3);
    
    printf("Enter your fourth number: ");
    scanf("%i", &num4);
    
    printf("Enter your fifth number: ");
    scanf("%i", &num5);
    
    sum = num1 + num2 + num3 + num4 + num5;
    product = num1 * num2 * num3 * num4 * num5;
    
    if (num1 > 0)
    {
        printf("%i + %i + %i + %i + %i = %i\n", num1, num2, num3, num4, num5, sum);
    }
    else
    {
        printf("%i * %i * %i * %i * %i = %i\n", num1, num2, num3, num4, num5, product);
    }
	
    break;
    case 4: //One digit in words
    
    printf("Type in a single-digit number.\n");
    scanf( "%i", &num1);
    
    switch(num1)
    {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
    }
	
	break;
	}

	return 0;
}
