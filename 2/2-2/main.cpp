#include <iostream>
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
		void setLength(int _length){
			length = _length;
		}
		void setWidth(int _width){
			width = _width;
		}
		void showParameters() {
			cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
		}
};

int main() {
    Road road;
    road.showParameters();

    return 0;
}
