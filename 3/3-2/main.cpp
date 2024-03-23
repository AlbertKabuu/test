class Car {
	private:
		int x, p, v;
		
	public:
		Car() {
			x = 0;
			p = 0;
			v = 0;
		}
		Car(int x, int p, int v) {
			this->x = x;
			this->p = p;
			this->v = v;
		}
		void showParameters() {
			cout << "X: " << x << endl;
			cout << "P: " << p << endl;
			cout << "V: " << v << endl;
		}
		void setParameters(int x, int p, int v) {
			this->x = x;
			this->p = p;
			this->v = v;
		}
		int getX() const {
			return this->x;
		}
		int getP() const {
			return this->p;
		}
		int getV() const {
			return this->v;
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
		void showParameters() {
			cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
		}
		
};

int main() {
	Car car(1, 11, 111);
	car.showParameters();
}