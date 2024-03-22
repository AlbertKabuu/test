#include <iostream>
using namespace std;

class TBook {
public:
	string name;
	string author;
	string count;
};

int main() {
	TBook book1;

	book1.name = "Alices Adventures in Wonderland";
	book1.author = "Lewis Carroll";
	book1.count = "1";

	cout << "Name: " << book1.name << endl;
	cout << "Author: " << book1.author << endl;
	cout << "Count: " << book1.count << endl;

	return 0;
}