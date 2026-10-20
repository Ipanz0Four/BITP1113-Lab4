# include <iostream>
using namespace std;

int main()
{
	double fileSizeMB;  //declare

	cout << "File size (MB): "; //display
	cin >> fileSizeMB; //input

	if (fileSizeMB > 5) //condition
	{
		cout << "Warning: file is larger 5 MB." << endl; //display if condition fullfill
	}

	cout << "Check complete." << endl; //display if condition not fullfill

	return 0;
}
