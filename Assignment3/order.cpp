#include <iostream>
#include <cmath>

int main()
{
	std::cout << "Welcome to Noah's Menu Ordering System!\n";
	
	double UserTotal (0), Selection (0);
	int CPTotal(0), FFTotal(0), NTotal(0), CTotal(0), SDTotal(0);
	// The int variables above are for counting the number of times an item is ordered. I wasnt sure what the best way to do this was :)
	
	do
	{
		std::cout << "What would you like to order?\n\n";
		std::cout << "1)\tCheese Pizza\t$1.25" << "\n" << "2)\tFrench Fries\t$1.50" << "\n";
		std::cout << "3)\tNachos\t\t$2.25" << "\n" << "4)\tCorndog\t\t$1.00" << "\n";
		std::cout << "5)\tSoft Drink\t$0.50" << "\n" << "6)\tComplete Order" << "\n\n";
		std::cout << "Please enter your selection: ";
		std::cin >> Selection;
		// This is the menu ^
		
		if (Selection == 1)
		{
			std::cout << "You have selected Cheese Pizza\n\n";
			UserTotal = UserTotal + 1.25;
			// If-Elses seperate items and their values on the menu
			CPTotal = CPTotal +1;
			// This is the counter
		}
		else if (Selection == 2)
		{
			std::cout << "You have selected French Fries\n\n";
			UserTotal = UserTotal + 1.50;
			FFTotal = FFTotal +1;
		}
		else if (Selection == 3)
		{
			std::cout << "You have selected Nachos\n\n";
			UserTotal = UserTotal + 2.25;
			NTotal = NTotal +1;
		}
		else if (Selection == 4)
		{
			std::cout << "You have selected a Corndog\n\n";
			UserTotal = UserTotal + 1.00;
			CTotal = CTotal +1;
		}
		else if (Selection == 5)
		{
			std::cout << "You have selected a Soft Drink\n\n";
			UserTotal = UserTotal + 0.50;
			SDTotal = SDTotal +1;
		}
		else if (Selection == 6)
		{
			std::cout << "You have selected to complete your order.\n\n";
		}
		else //if (Selection > 6)
		{
			std::cout << "Invalid Selection! Please enter a valid selection!\n\n";
		}
		
	} while (Selection != 6);
	// This is all ONE big Do-While Loop to loop the menu for constant ordering
	
	if (CPTotal >= 1)
		std::cout << "You have ordered " << CPTotal << " Cheese Pizza(s)\n";

	if (FFTotal >= 1)
		std::cout << "You have ordered " << FFTotal << " French Frie(s)\n";

	if (NTotal >= 1)
		std::cout << "You have ordered " << NTotal << " Nacho(s)\n";

	if (CTotal >= 1)
		std::cout << "You have ordered " << CTotal << " Corndog(s)\n";

	if (SDTotal >= 1)
		std::cout << "You have ordered " << SDTotal << " Soft Drink(s)\n";
	
	std::cout << "\n";
	UserTotal = UserTotal * 1.07;
	UserTotal = round(UserTotal * 100.0) / 100.0;
	// Adds Sales Tax (+7%)
	std::cout << "Your total is: $" << UserTotal << "\n";
	
	double UserPayment (0), UserChange(0);
	
	std::cout << "Enter the amount tendered: $";
	std::cin >> UserPayment;
	std::cout << "\n";
	
	while (UserPayment < UserTotal)
	{
		std::cout << "You have not provided enough money to purchase your items!\n";
		std::cout << "Please enter an amount greater than or equal to: $" << UserTotal << "\n\n";
		std::cout << "Enter the amount tendered: $";
		std::cin >> UserPayment;
		std::cout << "\n";
		// Second loop is set to repeat until enough money is tendered to pay for items
	}
	
	UserChange = UserPayment - UserTotal;
	std::cout << "Your change is: $" << UserChange << "\n";
	std::cout << "Thank you! Enjoy your meal!\n";
	// The End

	return 0;
}