#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Road {
	private:
		int length;
		int width;
		
	public:
		Road() {
			length = 0;
			width = 0;
		}
		void setParameters(){
			ifstream file;
			
			file.open("config.txt");
			if (file.is_open()) {
				string line;
				
				getline(file, line);
				size_t slashPos = line.find("\\");
				string firstNumber = line.substr(0, slashPos);
				length = stoi(firstNumber);

				getline(file, line);
				slashPos = line.find("\\\\");
				string secondNumber = line.substr(0, slashPos);
				width = stoi(secondNumber);

				file.close();
			}
		}
		void showParameters() {
			cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
		}
};

int main() {
    Road road;
    road.showParameters();
	
	road.setParameters();
    road.showParameters();
    return 0;
}
