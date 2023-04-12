#include <iostream>
using namespace std;

class Rectagle {
public:
	int width;
	int height;
	int getArea();
};

int  Rectagle::getArea() {
	return width * height;
}

int main(){
	Rectagle rect;
	rect.width = 5;
	rect.height = 9;

	cout << "사각형의 면적은" << rect.getArea() << endl;
}
