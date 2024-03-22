#include<iostream>
#include <fstream>

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
	
	return 0;
}