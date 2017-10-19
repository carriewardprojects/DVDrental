// DVDrental.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int count = 1;
	int number;
	double total = 0.0;

	// get the number of DVDs
	cout << "How many DVDs do you want to rent? ";
	cin >> number;

	// calculate the rental charge
	do
	{
		if ((count % 3) == 0) // every third DVD is free
		{
			cout << "DVD #" << count << " is free!" << endl;
			continue; // immediately start the next iteration
		}
		total += 2.50;

	} while (count++ < number);

	// display the results
	cout << fixed << showpoint << setprecision(2);
	cout << "The total rental amount is $" << total << endl;
	
	cin.ignore();
	cin.get();
	return 0;
}

