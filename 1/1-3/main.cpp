#include<iostream>
#include <fstream>
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

void inputFromConfig(Road road){
	string line;
	ifstream fin("config.txt");
	if (fin.is_open())
	{
		getline(fin, line);
		road.length = stof(line);
		getline(fin, line);
		road.width = stoi(line);
	}
	fin.close();
}

int main(){
	Road road;
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	
	return 0;
}