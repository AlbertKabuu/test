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
}