#include<iostream>
using namespace std;

class Road{
public:
	double length;
	int width;
	Road(){
		length = 120.2;
		width = 13;
	};
};

void main() {
	Road road;
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	road.length = 4535.7;
	road.width = 12222;
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
}