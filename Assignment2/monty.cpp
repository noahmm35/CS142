#include <iostream>
#include <string>

int main()
{
	std::string PlayerName ("");
	
	std::cout << "Welcome to Noah's Monty C++ Text-based Adventure!\n";
	std::cout << "WHAT is your name? ";
	std::cin >> PlayerName;
	std::cout << "\n";
	std::cout << "\t" << "Welcome " << PlayerName << "!\n" << "\n";
	
	int AnsQ1(0), AnsQ2(0), AnsQ4(0);
	std::string AnsQ3("");
	
	std::cout << "WHAT is the result of 5 + 5? ";
	std::cin >> AnsQ1;
	std::cout << "\n";
	
	if (AnsQ1 == 10)
	{
		std::cout << "\tCORRECT " << PlayerName << "!\n";
		std::cout << "\n";
		
		std::cout << "WHAT is the result of 48 / 6? ";
		std::cin >> AnsQ2;
		std::cout << "\n";
		
		if (AnsQ2 == 8)
		{
			std::cout << "\tCORRECT " << PlayerName << "!\n";
			std::cout << "\n";
			
			std::cout << "WHAT is your favorite color? ";
			std::cin >> AnsQ3;
			std::cout << "\n";
			
			if (AnsQ3 == "Blue" || AnsQ3 == "blue")
			{
				std::cout << "\tCORRECT " << PlayerName << "!\n";
				std::cout << "\n";
				
				std::cout << "WHAT is the airspeed velocity of an unladen swallow? ";
				std::cin >> AnsQ4;
				std::cout << "\n";
				
				if (AnsQ4 == 42)
				{
					std::cout << "\tI, I don't know that!\n";
					std::cout << "The CPU has been cast into the Gorge of Eternal Peril!\n";
					std::cout << "Congratulations! YOU WIN!\n";
				}
				else
				{
					std::cout << "You have been cast into the Gorge of Eternal Peril! YOU LOSE!\n";
				}
			}
			else
			{
				std::cout << "\tWhat you believed to be an ordinary rabbit was actually a vicious beast that leaped at you and took your head clean off. YOU LOSE!\n";
			}
		}
		else
		{
			std::cout << "\tThe knights who say Ni shout \"Ni!\" in your general direction! Please bring back a shrubbery and try again later. YOU LOSE!\n";
		}
		
	}
	else
	{
		std::cout << "\tHAHA! A witch has turned you into a Newt! You'll get better, but for now... YOU LOSE!\n";
	}
	
	std::cout << "\n";
	std::cout << "Thank you for playing my Monty C++ game " << PlayerName << ". Intermission..." << "\n" << "\n";

	return 0;
}