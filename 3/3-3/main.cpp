class Car {
	private:
		int x, y;
		
	public:
		Car() {
			x = 0;
			y = 0;
		}
		Car(int x, int y) {
			this->x = x;
			this->y = y;
		}
		void showParameters() {
			cout << "X: " << x << endl;
			cout << "Y: " << y << endl;
		}
		void setParameters(int x, int y) {
			this->x = x;
			this->y = y;
		}
		void moveX() {
			x++;
		}

		int getX() const {
			return this->x;
		}
		int getY() const {
			return this->y;
		}
};

class Road {
	private:
		int length;
		int width;
		
	public:
		Road() {
			length = 0;
			width = 0;
		}
		Road(int newLength, int newWidth){
			length = newLength;
			width = newWidth;
		}
		void setLength(int newLength){
			length = newLength;
		}
		void setWidth(int newWidth){
			width = newWidth;
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
			else {
				cout << "Unable to open file" << endl;
			}
		}
		
		int getLenght() const{
			return length;
		}
		
		
};