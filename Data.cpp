// Data.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PreferredCustomer.h"
#include <iostream>

using namespace std; 


int main()
{
	PreferredCustomer p1(600.0, 12345, true, "Sally", "Hansen", "15691 Clarendon Street", "Westminster", "CA", 92683, "714-666-6666");
	cout << "Name: " << p1.getFirstName() <<  " " << p1.getLastName() << endl;
	cout << "Purchase amount: " << p1.getPurchaseAmount() << endl; 
	cout << "Discount: " << p1.getDiscountLevel() << endl; 

	PreferredCustomer p2(2000.0, 54321, false, "Joe", "Bob", "59923 Honeysuckle Lane", "Newport", "CA", 92483, "888-666-6666");
	cout << "Name: " << p2.getFirstName() << " " << p2.getLastName() << endl;
	cout << "Purchase amount: " << p2.getPurchaseAmount() << endl;
	cout << "Discount: " << p2.getDiscountLevel() << endl;
	
	return 0;
}

