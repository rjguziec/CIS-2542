/*
CIS 2542
Professor   : Bradley Sward
Assignment	: 02 Space Ship Mass (Review)
Description : Using the Calixtus sequence, the program will determine the
		first 100 values in the sequence. Once done, the program will display the
		values to the user, as well as write the values to a .txt file
By			: Robert Guziec
Written		: Aug 30, 2025
Last edited : Aug 31, 2025
*/

// Preprocessor directives
#include <fstream>
#include <iostream>

// Create array for calixtus sequence values to be stored
const unsigned int SIZE = 100;
unsigned int c[SIZE];

int main()
{
	// Assign first two values in sequence
	c[0] = 1;
	c[1] = 3;

	// for loop that iterates through the rest of the sequence
	// NOTE: for loop starts AFTER first two values have been assigned
	for (unsigned char n = 2; n < 100; n++) {
		
		// Decision branch that determines the values of the sequence
		if (n % 3 == 0)
			c[n] = c[n - 1] + c[n - 2];
		else if (n % 2 == 0)
			c[n] = c[n - 1] / 2;
		else
			c[n] = n;
	}

	// Setup file stream to calixtus.txt
	std::ofstream file("calixtus.txt");

	// for loop that displays to the user each value of the sequence
	// as well as writes values to the given text file
	for (unsigned char n = 0; n < 100; n++) {
		std::cout << c[n] << "  ";
		file << " " << c[n];
	}
	std::cout << std::endl;

	system("PAUSE");
	return 0;
}

