#include <iostream>
#include <cstdlib>

void getInput (double & x,double & y); // By-Ref
double calculateAddition (double num1, double num2); // Everything else is By-Value
double calculateSubtraction (double num1, double num2);
double calculateMultiplication (double num1, double num2);
double calculateDivision (double num1, double num2);
int calculateModulus (int num1, int num2);

int main()
{
	int choice(0);
	
	do
	{
		double x(0), y(0);
		srand((unsigned) time(0)); // For Random Number Generator
			
		std::cout << "Welcome to Noah's Calculator!\n\n";
		std::cout << "1. \t Addition (x+y)\n";
		std::cout << "2. \t Subtraction (x-y)\n";
		std::cout << "3. \t Multiplication (x*y)\n";
		std::cout << "4. \t Divison (x/y)\n";
		std::cout << "5. \t Modulus (x%y)\n";
		std::cout << "6. \t Surprise Me!\n";
		std::cout << "7. \t Quit Program\n\n";
		std::cout << "Please enter your choice: ";
		std::cin >> choice;
		std::cout << "\n"; //Displays the menu
		
		if (choice == 7)
		{
			std::cout << "Thank you for using the calculator - Goodbye!\n\n";
		}
		else if (choice > 7)
		{
			std::cout << "\n" << "Invalid Entry - please select a valid option!\n\n";
		}
		else
		{
			getInput(x,y);
		} //Starting with 7 because if 7 was the first option chosen, the calculator would still ask for values. This is a preliminary requirement.
		
		if (choice == 1) // If-Elses divide the menu selections into their respective "lines" of code
		{
			double number1 (0), number2(0);
			double answer(0);
			
			number1 = x;
			number2 = y;
			
			answer = calculateAddition (number1, number2);
			std::cout << "\n" << number1 << "+" << number2 << " = " << answer << "\n\n";
		}
		else if (choice == 2)
		{
			double number1 (0), number2(0);
			double answer(0);
			
			number1 = x;
			number2 = y;
			
			answer = calculateSubtraction (number1, number2);
			std::cout << "\n" << number1 << "-" << number2 << " = " << answer << "\n\n";
		}
		else if (choice == 3)
		{
			double number1 (0), number2(0);
			double answer(0);
			
			number1 = x;
			number2 = y;
			
			answer = calculateMultiplication (number1, number2);
			std::cout << "\n" << number1 << "*" << number2 << " = " << answer << "\n\n";
		}
		else if (choice == 4)
		{
			double number1 (0), number2(0);
			double answer(0);
			
			number1 = x;
			number2 = y;
			
			if (number2 == 0) // This is here because you cant divide by zero
			{
				std::cout << "The denominator cannot be zero! Please enter another non-zero value: ";
				std::cin >> number2;
				
				answer = calculateDivision (number1, number2);
				std::cout << "\n" << number1 << "/" << number2 << " = " << answer << "\n\n";
			}
			else
			{
				answer = calculateDivision (number1, number2);
				std::cout << "\n" << number1 << "/" << number2 << " = " << answer << "\n\n";
			}
		}
		else if (choice == 5)
		{
			double number1 (0), number2(0);
			double answer(0);
			
			number1 = x;
			number2 = y;
			
			if (number2 == 0) // this is here because you cant do a modulus with zero
			{
				std::cout << "The denominator cannot be zero! Please enter another non-zero value: ";
				std::cin >> number2;
				
				answer = calculateModulus (number1, number2);
				std::cout << "\n" << number1 << "%" << number2 << " = " << answer << "\n\n";
			}
			else
			{
				answer = calculateModulus (number1, number2);
				std::cout << "\n" << number1 << "%" << number2 << " = " << answer << "\n\n";
			}
		}
		else if (choice == 6) // This is the "Random Number Generator"
		{
			int randNum(0);
			double number1 (0), number2(0);
			double answer(0);
			
			number1 = x;
			number2 = y;
			randNum = (rand() % 5) + 1; //Calculates Random Number from 1-5
			
			if (randNum == 1) // If-Elses assign function to whichever number is generated
			{
				answer = calculateAddition (number1, number2);
				std::cout << "\n" << number1 << "+" << number2 << " = " << answer << "\n\n";
			}
			else if (randNum == 2)
			{
				answer = calculateSubtraction (number1, number2);
				std::cout << "\n" << number1 << "-" << number2 << " = " << answer << "\n\n";
			}
			else if (randNum == 3)
			{
				answer = calculateMultiplication (number1, number2);
				std::cout << "\n" << number1 << "*" << number2 << " = " << answer << "\n\n";
			}
			else if (randNum == 4)
			{
				if (number2 == 0) // This is here because you cant divide by zero
				{
					std::cout << "The denominator cannot be zero! Please enter another non-zero value: ";
					std::cin >> number2;
				
					answer = calculateDivision (number1, number2);
					std::cout << "\n" << number1 << "%" << number2 << " = " << answer << "\n\n";
				}
				else
				{
					answer = calculateDivision (number1, number2);
					std::cout << "\n" << number1 << "%" << number2 << " = " << answer << "\n\n";
				}
			}
			else if (randNum == 5)
			{
				if (number2 == 0) // this is here because you cant do a modulus with zero
				{
					std::cout << "The denominator cannot be zero! Please enter another non-zero value: ";
					std::cin >> number2;
				
					answer = calculateModulus (number1, number2);
					std::cout << "\n" << number1 << "%" << number2 << " = " << answer << "\n\n";
				}
				else
				{
					answer = calculateModulus (number1, number2);
					std::cout << "\n" << number1 << "%" << number2 << " = " << answer << "\n\n";
				}
			}
				
		}
		else if (choice > 7) // In case some smarty pants tries to put in '8'
		{
			//do nothing
			//std::cout << "\n" << "Invalid Entry - please select a valid option!\n\n";
		}
		
	} while (choice != 7);
	
	return 0;
}

void getInput (double & x,double & y) // Void = no return type. Also by-ref
{
	std::cout << "Please enter a value: ";
	std::cin >> x;
	std::cout << "Please enter a second value: ";
	std::cin >> y;
}

double calculateAddition (double num1, double num2)
{
	return num1 + num2; // Return by-value
}

double calculateSubtraction (double num1, double num2)
{
	return num1 - num2; // Return by-value
}

double calculateMultiplication (double num1, double num2)
{
	return num1 * num2; // Return by-value
}

double calculateDivision (double num1, double num2)
{
	return num1 / num2; // Return by-value
}

int calculateModulus (int num1, int num2)
{
	return num1 % num2; // Return by-value
}