// Session2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std; 

int main()

//f) Create a program that contains two variables and set them to two different integer numbers
{     // This dictates the number of weeks there are in a year by division. 
	cout << "How many weeks are there in a year? \n" << 365 / 7 << endl;
	cout << "The number of left over days in a year? \n" << 365 % 7 << endl; 

	// h ) Modify your program from f) to read in two floats after the previous results, and to output the division of the first by the second.
	float c, d ;
	printf("enter two float numbers");
	scanf(" %f" , &c);
	scanf("%f", &d);
	 
	printf(" display result of division between the two: %d \n", c/d); 


//g) Create a program that reads two numbers from the user and stores them in integer variables using scanf.

	//storing integers
	int a;
	int b;

	// storing user input
	scanf("%d", &a);
    scanf("%d", &b);

	printf("division of two numbers: %d \n" , a /b);

	printf("The Result of modular division operation is : %d \n", a%b);

   printf("Show Stored Value: %d \n");


	//j) Create a program that can read someone’s name using scanf and say it back e.g.‘Hello Bob’.Write appropriate comments in your code file


	char firstname [15];
	char SecondName [15];

	printf("What is your first name? \n ");
	scanf("%s", firstname);

	printf("What is your Second Name? \n");
	scanf("%s", SecondName);

	printf("%s and %s is your name.", firstname, SecondName);
	return 0;
}

