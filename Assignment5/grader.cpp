#include <iostream>
#include <fstream>
#include <string>

void calculateLetterGrade (double grade, char & letter);

int main()
{
	double FinalGrade(0), AvgFinal(0), AvgMidterm(0), AvgAssignments(0);
	double AvgParticipation(0), Total(0), number(0);
	std::string InputFile(""), OutputFile("");
	char FinalLetterGrade('x');
	
	std::cout << "Welcome to Noah's Grade Calculator!\n";
	std::cout << "Please enter the file that you wish to open: ";
	std::cin >> InputFile;
	
	std::cout << "Reading from file " << InputFile << "...\n";
	std::ifstream input(InputFile); //Opening input stream
	
	if (input.is_open()) //Ensures that file is open
	{	
		while (!input.eof()) //Until end of file
		{	
			std::string Category("");
			int entries(0), count(0);
			
			input >> Category >> entries; //Reads in Grade Category and number of entries
			
			while(count < entries) // Adds values togehter
			{
				input >> number;
				Total = Total + number;
				count++;
			}
			
			if (entries != 0) // Zero entries means problem
			{
				Total = Total / entries;
			}
			else
			{
				Total = 0;
			}
			
			if (Category == "Final") //Seperates "totals" into different categories and assigns grade weight
			{
				AvgFinal = Total / 5;
			}
			else if (Category == "Midterm")
			{
				AvgMidterm = Total / 5;
			}
			else if (Category == "Assignments")
			{
				AvgAssignments = Total / 2;
			}
			else if (Category == "Participation")
			{
				AvgParticipation = Total / 10;
			}
			else
			{
				// Blank
			}
			Total = 0;
		}
		
		input.close();
		
		std::cout << "Calculating Grades...\n";
		
		FinalGrade = AvgFinal + AvgMidterm + AvgAssignments + AvgParticipation; // Add all ending grade values to get a final total
		calculateLetterGrade(FinalGrade, FinalLetterGrade);
		
		std::cout << "Save to (filename): ";
		std::cin >> OutputFile;
		
		std::ofstream output(OutputFile); // Opens output stream
		
		output << FinalGrade << "\t" << FinalLetterGrade; // Outputs to external file
		
		output.close();
		
		std::cout << "Score & Letter Grade written to file: " << OutputFile << std::endl;
		
		std::cout << "Thank you for using my program - Goodbye!\n"; 
	}
	else
	{
		std::cout << "Could not find " << InputFile << " - Please try again!\n\n";
	}
	
	return 0;
}

void calculateLetterGrade (double grade, char & letter) //Function assigns a letter to the Final Grade value
{
	if (grade >= 90)
	{
		letter = 'A';
	}
	else if (grade >= 80 && grade < 90)
	{
		letter = 'B';
	}
	else if (grade >= 70 && grade < 80)
	{
		letter = 'C';
	}
	else if (grade >= 60 && grade < 70)
	{
		letter = 'D';
	}
	else
	{
		letter = 'F';
	}
}