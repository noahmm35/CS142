// Honor Pledge:

//

// I pledge that I have neither given nor

// received any help on this assignment.

//

// nmmonroe

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void printMenu (int & choice); //Prints the menu
void printArray (int arr[], int size); //Prints the Array
void printPrimeNumbers (int arr[], int size); //Finds Prime Numbers
bool searchArray (int arr[], int size, int & value); //Searches for specific number within Array

int main()
{
	int count(0), i(0), choice(0), value(0);
	std::string InputFile("");
	bool TF; //Boolean for Search Array
	
	std::cout << "***Welcome to Noah's Array-tastic Program!***" << std::endl;
	std::cout << "Please enter the file you wish to open: ";
	std::cin >> InputFile;
	
	std::ifstream input2(InputFile);

	if(input2.is_open())
	{
		while (!input2.eof()) //Input values into the Array
		{
			double number(0);			
			input2 >> number;
			count++;
		}
		
		input2.close();
	}
	else
		std::cout << "error\n";
	
	int data[count];
	
	std::ifstream input(InputFile); //Open up input stream
	
	if (input.is_open())
	{
		while (!input.eof()) //Input values into the Array
		{
			double number(0);
			
			input >> number;
			data[i] = number;
			i++;
		}
		
		input.close();
		
		std::cout << "File " << InputFile << " successfully opened! Data Loaded!\n\n";
		
		printMenu (choice); //Print Menu outside of loop to do it the first time
		
		while (choice != 4)
		{
			if (choice == 1)
			{
				printArray(data, i);
				std::cout << "\n";
			}
			else if (choice == 2)
			{	
				TF = searchArray (data, i, value);
				
				if (TF == true)
				{
					std::cout << "Value: " << value << " -- Found!\n\n";
				}
				else 
				{
					std::cout << "Value: " << value << " -- Not Found!\n\n";
				}
			}
			else if (choice == 3)
			{
				printPrimeNumbers(data, i);
			}
			else // For if a number outside of 1-4 is chosen
			{
				std::cout << "Invalid Choice - Please try again!\n"; 
			}
			
			printMenu(choice); // RePrints Menu
		}
		
		std::cout << "Thank you - Goodbye!\n\n";
		
	}
	else // For if their file does not exist
	{
		std::cout << "Unable to open file - file does not exist!" << std::endl;
	}
	
	return 0;
}

void printMenu (int & choice)
{
	std::cout << "1. \t Print Array" << "\n";
	std::cout << "2. \t Search Array" << "\n";
	std::cout << "3. \t Print Prime Numbers" << "\n";
	std::cout << "4. \t Quit Program" << "\n\n";
	
	std::cout << "Please enter your choice: ";
	std::cin >> choice;
	std::cout << "\n";
}

void printArray (int arr[], int size)
{
	for (int n(0); n < size; n++) //Loop runs thru all values of array and outputs them
	{
		std::cout << "[" << n << "] : " << arr[n] << std::endl; 
	}
}

void printPrimeNumbers (int arr[], int size)
{
	int count(0), count2(0);
	
	std::cout << "Prime Numbers: ";
	
	for (int j(0); j < size; j++) //First loop goes thru all values of array
	{
		if (arr[j] > 1)
		{
			for(int n(2); n < arr[j]; n++) //Second loop divides array value by all numbers (greater than 2) and less than value
			{
				if (arr[j] % n == 0) // count is used to negate all non-prime numbers
				{
					count++;
				}
				else
				{
					//Blank
				}
			}
		
			if (count == 0) // If count is equal to zero, number is prime
			{
				std::cout << arr[j] << ", ";
				count2++;
			}
			else
			{
				//this means number is not prime
			}
		}
		else 
		{
			//Blank because anything under 1 is NOT a prime number.
		}
	}
	
	if (count2 == 0) // Count2 is backup in case there are no prime numbers found
	{
		std::cout << "None!";
	}
	else
	{
		//Leave Blank
	}
	
	std::cout << "\n\n";
}

bool searchArray (int arr[], int size, int & value)
{
	int n(0);
	
	std::cout << "Please enter a value that you wish to search for: ";
	std::cin >> value;
	
	while (n < size) //Loop Runs thru all values in array
	{
		if (value == arr[n])  // Returns true if found
		{
			return true;
		}
		else
		{
			n++;
		}
	}
	
	return false;
}