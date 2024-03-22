#include<iostream>
using namespace std;

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
	
	cout << "enter length: " << endl;
	cin >> road.length;
	cout << "enter width: " << endl;
	cin >> road.width;

	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	
	return 0;
}