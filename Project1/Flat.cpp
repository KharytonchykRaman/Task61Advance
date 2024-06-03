#include "Flat.h"

double Flat::calcSqMeterPrice() {
	return price / area;

}

int Flat::getSize() {
	return size;
}

double Flat::getPrice() {
	return price;
}

void Flat::setPrice(double price) {
	if (price > 0)
	{
		this->price = price;
	}
}

double Flat::getArea() {
	return area;
}

void Flat::setArea(double area) {
	if (area > 0)
	{
		this->area = area;
	}
}