#include <iostream>
#include <cmath>

int main()
{
	int RecL, RecW;
	double AreaRec;
	
	std::cout << "CS 142 Shape Wizard!" << "\n" << "\n";
	std::cout << "**Rectangle Area**" << "\n";
	std::cout << "Please enter the length: ";
	std::cin >> RecL;
	std::cout << "Please enter the width: ";
	std::cin >> RecW;
	AreaRec = RecL * RecW;
	std::cout << "The area of the rectangle is: " << AreaRec << "\n";
	std::cout << "\n";
	
	int SqSide, AreaSq;
	
	std::cout << "**Square Area**" << "\n";
	std::cout << "Please enter the Side: ";
	std::cin >> SqSide;
	AreaSq = SqSide * SqSide;
	std::cout << "The area of the Square is: " << AreaSq << "\n";
	std::cout << "\n";
	
	int RhomD1, RhomD2;
	double AreaRhom;
	
	std::cout << "**Rhombus Area**" << "\n";
	std::cout << "Please enter the Diagonal: ";
	std::cin >> RhomD1;
	std::cout << "Please enter the Diagonal: ";
	std::cin >> RhomD2;
	AreaRhom = RhomD1 * RhomD2 * 0.5;
	std::cout << "The area of the rhombus is: " << AreaRhom << "\n";
	std::cout << "\n";
	
	int TriB, TriH;
	double AreaTri;
	
	std::cout << "**Triangle Area**" << "\n";
	std::cout << "Please enter the Base: ";
	std::cin >> TriB;
	std::cout << "Please enter the Height: ";
	std::cin >> TriH;
	AreaTri = TriB * TriH * 0.5;
	std::cout << "The area of the Triangle is: " << AreaTri << "\n";
	std::cout << "\n";
	
	int TrapB1, TrapB2, TrapH;
	double AreaTrap;
	
	std::cout << "**Trapezoid Area**" << "\n";
	std::cout << "Please enter the first base: ";
	std::cin >> TrapB1;
	std::cout << "Please enter the second base: ";
	std::cin >> TrapB2;
	std::cout << "Please enter the height: ";
	std::cin >> TrapH;
	AreaTrap = 0.5 * (TrapB1 + TrapB2) * TrapH;
	std::cout << "The area of the trapezoid is: " << AreaTrap << "\n";
	std::cout << "\n";
	
	int ParaB, ParaH;
	double AreaPara;
	
	std::cout << "**Parallelogram Area**" << "\n";
	std::cout << "Please enter the base: ";
	std::cin >> ParaB;
	std::cout << "Please enter the height: ";
	std::cin >> ParaH;
	AreaPara = ParaB * ParaH;
	std::cout << "The area of the parallelogram is: " << AreaPara << "\n";
	std::cout << "\n";
	
	double CircR, AreaCirc;
	
	std::cout << "**Circle Area**" << "\n";
	std::cout << "Please enter the Radius: ";
	std::cin >> CircR;
	AreaCirc = M_PI * CircR * CircR;
	std::cout << "The area of the circle is: " << AreaCirc << "\n";
	std::cout << "\n";
	std::cout << "Thank you! Goodbye!";
	std::cout << "\n";
	
	return 0;
}