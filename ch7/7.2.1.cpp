#include <iostream>
using namespace std;

class Rectangle {
private:
	int width;
	int height;
	//int s;
public:
	Rectangle(int x, int y) : width(x), height(y) {
		//s = width * height;
	}
	/*
	int Area(int a, int b) {
		return a*b;
	}*/
	
	void ShowAreaInfo() {
		cout<<"면적: "<<width*height<<endl;
	}
};

class Square : public Rectangle {
public:
	Square(int x): Rectangle(x,x) {}
};

int main(){
	Rectangle rec(4,3);
	rec.ShowAreaInfo();
	
	Square sqr(7);
	sqr.ShowAreaInfo();
    
    return 0;

}
