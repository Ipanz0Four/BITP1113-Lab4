#include <iostream>
using namespace std;

int main()
{
	double fileSizeMB;
    
	cout << "File Size (MB): ";
	cin >> fileSizeMB;

	if (fileSizeMB > 5)
	{
		cout << "Too big. Compress it." << endl;
	}
	else
	{
		cout << "Ready to upload!" << endl;
	}

	return 0;
}