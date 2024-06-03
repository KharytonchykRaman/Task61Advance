#include "Building.h"

void Building::add(Flat flat) {
	if (size == 0) {
		flats = new Flat[1];
		flats[0] = flat;
	}
	else {
		Flat* temp = new Flat[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = flats[i];
		}

		temp[size] = flat;

		delete[] flats;
		flats = temp;
	}

	size++;
}

int Building::calcNumPeople() {
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += flats[i].getSize();
	}
	return total;
}

double Building::calcFlatsArea() {
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += flats[i].getArea();
	}
	return total;
}

double Building::calcFlatsPrice() {
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += flats[i].getPrice();
	}
	return total;
}

double Building::calcAvgPriceSqMeter() {
	return calcFlatsPrice() / calcFlatsArea();
}

int Building::countFreeFlat() {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (flats[i].getSize() == 0) {
			count++;
		}
	}
	return count;
}

int Building::countOneMemberFlat() {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (flats[i].getSize() == 1) {
			count++;
		}
	}
	return count;
}

int Building::countTwoPlusMemberFlat() {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (flats[i].getSize() == 2) {
			count++;
		}
	}
	return count;
}