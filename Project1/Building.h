#pragma once
#include "Flat.h"
class Building
{
private:
	Flat* flats;
	int size;
public:
	Building() : size(0) {};
	void add(Flat flat);
	int calcNumPeople();
	double calcFlatsArea();
	double calcFlatsPrice();
	double calcAvgPriceSqMeter();
	int countFreeFlat();
	int countOneMemberFlat();
	int countTwoPlusMemberFlat();
};