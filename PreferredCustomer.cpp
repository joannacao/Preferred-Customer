#include "stdafx.h"
#include "PreferredCustomer.h"

PreferredCustomer::PreferredCustomer(double pa, int cn, bool ml, string fn, string ln, string a, string c, string s, int z, string p):CustomerData(cn, ml, fn, ln, a, c, s, z, p)
{
	purchaseAmount = pa; 
	discountLevel = determineDiscountLevel();
}

void PreferredCustomer::setPurchaseAmount(double pa)
{
	purchaseAmount = pa; 
}

void PreferredCustomer::setDiscountLevel(double dl)
{
	discountLevel = dl; 
}

double PreferredCustomer::getPurchaseAmount()
{
	return purchaseAmount;
}

double PreferredCustomer::getDiscountLevel()
{
	return discountLevel;
}

double PreferredCustomer::determineDiscountLevel()
{
	double level; 
	if (purchaseAmount >= 2000) {
		level = 0.1; 
	}
	else if (purchaseAmount >= 1500) {
		level = 0.07; 
	}
	else if (purchaseAmount >= 1000) {
		level = 0.06; 
	}
	else if (purchaseAmount >= 500) {
		level = 0.05; 
	}
	else {
		level = 0.0; 
	}
	return level; 
}
