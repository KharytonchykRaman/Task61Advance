#pragma once
#include "Human.h"

class Flat
{
private:
	Human* humans;
	double price;
	double area;
	int size;
public:
	Flat() : size(0), price(0), area(0) {};
	Flat(int size, double price, double area) : size(size), price(price), area(area) {};
	double calcSqMeterPrice();

	int getSize();

	double getPrice();
	void setPrice(double price);

	double getArea();
	void setArea(double area);
};