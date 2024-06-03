#include <iostream>
#include "Building.h"

using namespace std;

int main() {

	Flat flat1(3, 50000, 55), flat2(6, 90000, 100), flat3(2, 35000, 45);

	Building building1;
	building1.add(flat1);
	building1.add(flat2);
	building1.add(flat3);

	cout << "There are " << building1.calcNumPeople() << " people in this house" << endl;
	cout << "Flats' total area is " << building1.calcFlatsArea() << endl;
	cout << "Flats' total price is " << building1.calcFlatsPrice() << endl;
	cout << "Avarage price per square meter is " << building1.calcAvgPriceSqMeter() << endl;
	cout << "There are " << building1.countFreeFlat() << " flats with 0 people" << endl;
	cout << "There are " << building1.countOneMemberFlat() << " flats with 1 person" << endl;
	cout << "There are " << building1.countTwoPlusMemberFlat() << " flats with +2 people" << endl;

	return 0;
}