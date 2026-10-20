//AHMAD NUR IRFAN BIN ZAINI_B032610520
#include <iostream>
using namespace std;

int main()
{
	int value;

	cout << "Enter a colour value (0-255): ";
	cin >> value;

	if (value >= 0 && value <= 255)
	{
		cout << "Valid colour value." << endl;
	}
	else
	{
		cout << "Invalid! Must be between 0 and 255 only." << endl;
	}
	return 0;
}


