#pragma once
#include "stdafx.h"
#include "CustomerData.h"
#include <string> 

using namespace std; 

class PreferredCustomer : public CustomerData {
private:
	double purchaseAmount; 
	double discountLevel; 

public: 
	PreferredCustomer(double, int, bool, string, string, string, string, string, int, string); 

	void setPurchaseAmount(double); 
	void setDiscountLevel(double); 

	double getPurchaseAmount(); 
	double getDiscountLevel(); 

	double determineDiscountLevel(); 

};
