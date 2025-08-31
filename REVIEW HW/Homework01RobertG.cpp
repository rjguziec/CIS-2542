/*
CIS 2542
Professor : Bradley Sward
Assignment : 01 Space Ship Mass (Review)
Description : User will enter the mass amount of their spaceship.
	Using a provided equation, the program will calculate the 
	total amount of fuel required to launch, and display to the
	user. The program will end only when the user enters a specified
	input value.
By : Robert Guziec
Written	: Aug 30, 2025
Last edited : Aug 30, 2025
*/

#include <iostream>

int main()
{
	// Initialize variables as signed int values
	int shipMass = 0;
	int calcFuel = 0;
	int totalFuel = 0;

	// Input statement asking for mass of user's spaceship, also
	// stating the exit value
	std::cout << "Enter mass for spaceship [-1 to quit]: ";
	std::cin >> shipMass;

	// While loop that checks if the user wishes to continue with the program
	while (shipMass != -1)
	{
		// Calculations
		calcFuel = (shipMass / 5) - 22;

		// Check for negative value of fuel for total mass required
		if (calcFuel > 0)
			totalFuel = shipMass + calcFuel;
		else
			totalFuel = shipMass;

		// Output statement
		std::cout << "Total fuel required for launch: " << totalFuel << std::endl;

		// Restate input statement
		std::cout << "Enter mass for spaceship [-1 to quit]: ";
		std::cin >> shipMass;
	}

	return 0;
}