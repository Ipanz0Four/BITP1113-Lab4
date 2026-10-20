//Name   :AHMAD NUR IRFAN BIN ZAINI
//Matrix :B032610520
//LAB 3  : <discount.cpp>, Week 4

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int quantity;
	double pricePerPoster, total;          //declare

	cout << "Enter number of poster: ";    //display
	cin >> quantity;                       //input quantity 
	cout << "Enter price poster (RM): ";   //display
	cin >> pricePerPoster;                //input price 2.80

	total = quantity * pricePerPoster;     //process
	
	if (quantity > 50) //check quantiti besar atau sama dengan 50
	{  //jika ya
		total = total * 0.9; 
		cout << "Bulk order: 10% discout applied!" << endl;
	}
	else
	{  //jika tidak
		cout << "Order 50 or more poster to save 10%." << endl;
	}
	
	cout << fixed << setprecision(2);      //set tempat perpuluhan 2 saje
	cout << "Total cost: RM" << total << endl; //display total cost

	return 0;
}





