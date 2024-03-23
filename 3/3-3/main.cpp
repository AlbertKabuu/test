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
		

		
		
		
		
		
		
};