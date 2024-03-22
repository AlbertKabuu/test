class Road {
	public:
	double lenght;
	int Width;
};
int main() {
	Road road;
	road.lenght = 11;
	road.Width = 1;
	std::cout << "lenght" << road.lenght << std::endl;
	std::cout << "Width:"<< road.Width << std::endl;
	return(0);
}