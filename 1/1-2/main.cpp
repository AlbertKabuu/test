#include<iostream>

class Road{
public:
	double length;
	int width;
	Road(){
		length = 1.5;
		width = 11;
	}
};

int main(){
	Road road;
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	
	return 0;
}