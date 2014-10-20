/*************************************************************************
    > File Name: return_value.c
    > Author: jt
    > Mail: zhuiyitaosheng@gmail.com 
    > Created Time: 2014年09月11日 星期四 10时30分00秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <inttypes.h>
#include <stdbool.h>	//C99 standard

// void get_valid_number( bool flag, double* first_number, double* second_number);
// bool choice_compare( char choice);
// bool get_valid_choice( char choice);
// void get_first( char * ch);
// void menu();

// void recusion(int n);

// int place( char ch )
// {
// 	if (islower(ch))
// 		return ch - 96;
// 	else if(isupper(ch))
// 		return ch - 64;
// 	else
// 		return -1;
// }

int fibonacci(int n)
{
	// int result = 0;
	int iter;
	unsigned long long t1, t2, result;
	t1 = 1; 
	t2 = 1;

	if ( n == 1 || n == 2)
		result = 1;
	for (iter = 2; iter < n; ++iter)
	{
		result = t1 + t2;
		t1 = t2;
		t2 = result;
	}
	return result;
}


int main()
{
	int number;
	scanf("%d", &number);
	printf("Fibonacci %d is %d\n", number, fibonacci(number));
	// char ch;
	// int location;
	// while((ch = getchar()) != EOF)
	// {
	// 	location = place(ch);
	// 	if(location > 0)
	// 	{
	// 		putchar(ch);
	// 		printf(" location is %d\n", location);
	// 	}
	// 	else
	// 	{
	// 		printf("%c is not a character\n", ch);
	// 	}
	// }
	// recusion(1);

	// char choice;
	// bool is_divide;
	// double first_number, second_number;
	// double result;
	// do
	// {
	// 	menu();
	// 	while(1)
	// 	{
	// 		get_first(&choice);
	// 		if(!get_valid_choice(choice))
	// 			continue;
	// 		else
	// 			break;
	// 	}
	// 	if (choice == 'q')
	// 		continue;
	// 	is_divide = choice == 'd' ? true : false;
	// 	get_valid_number(is_divide, &first_number, &second_number);
	// 	switch(choice)
	// 	{
	// 		case 'a':
	// 			result = first_number + second_number;
	// 			printf("%lf + %lf = %lf\n", first_number, second_number, result);
	// 			break;
	// 		case 's':
	// 			result = first_number - second_number;
	// 			printf("%lf - %lf = %lf\n", first_number, second_number, result);
	// 			break;
	// 		case 'm':
	// 			result = first_number * second_number;
	// 			printf("%lf * %lf = %lf\n", first_number, second_number, result);
	// 			break;
	// 		case 'd':
	// 			result = first_number / second_number;
	// 			printf("%lf / %lf = %lf\n", first_number, second_number, result);
	// 			break;
	// 	}
	// 	getchar();
	// }while(choice != 'q');
	// printf("Done!\n");
	return -1;
}

// void recusion(int n)
// {
// 	printf("Level %d, Location %p\n", n, &n);
// 	if(n < 4)
// 		recusion(n + 1);
// 	printf("Level %d, Location %p\n", n, &n);
// }

// void menu()
// {
// 	printf("Enter the operation of your choice:\n");
// 	printf("a.add\t\ts.subtract\n");
// 	printf("m.multiple\t\td.divide\n");
// 	printf("q.quit\n");
// }

// void get_valid_number(bool flag, double* first_number, double* second_number)
// {
// 	int count;
// 	printf("Enter first number:\n");
// 	while(scanf("%lf", first_number) != 1)
// 	{
// 		printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
// 		// getchar();
// 		putchar(getchar());
// 		puts(" is not a number");
// 		continue;
// 	}
// 	printf("Enter second number:\n");
// 	while((count = scanf("%lf", second_number)) != 1 || *second_number == 0 && flag)
// 	{
// 		if(count != 1)
// 		{
// 			// getchar();
// 			putchar(getchar());
// 			puts(" is not a number");
// 			continue;
// 		}
// 		else
// 		{
// 			printf("Enter a number other than 0:\n");
// 			continue;
// 		}
// 	}
// 	// if (flag == true)
// 	// {
// 	// 	while((count = scanf("%lf", second_number)) != 1 || *second_number == 0)
// 	// 	{
// 	// 		printf("Enter a number other than 0:\n");
// 	// 		getchar();
// 	// 		continue;
// 	// 	}
// 	// }
// 	// else
// 	// {
// 	// 	while( (count = scanf("%lf", second_number)) != 1 )
// 	// 	{
// 	// 		printf("Enter a number, such as 2.5, -1.78E8, or 3:\n");
// 	// 		getchar();
// 	// 		continue;
// 	// 	}
// 	// }
// }

// bool get_valid_choice( char choice )
// {
// 	if( !choice_compare( choice ) )
// 	{
// 		printf( "Please enter the character before the operation:\n" );
// 		return false;
// 	}
// 	else
// 		return true;
// }

// bool choice_compare(char choice)
// {
// 	if (choice == 'a' || choice == 's' || choice == 'm' || choice == 'd' || choice == 'q')
// 		return true;
// 	else 
// 		return false;
// }

// void get_first( char * ch)
// {
// 	// char ch;
// 	while(isblank(*ch = getchar()))
// 	{
// 		printf("We don't know the blank means, input again:\n");
// 		continue;
// 	}
// 	while(getchar() != '\n')
// 		continue;
// 	// return ch;
// }
