#include <iostream>
using namespace std;

class Point {
	int xpos, ypos;
	
public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;	
	}
	void ShowPointInfo() const {
		cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
	}
};

class Circle {
	Point pos;
	int rad;

public:
	void InitMembers(int x, int y, int r) {
		pos.Init(x, y);
		rad = r;
	}
	void ShowCircleInfo() const {
		cout<<"radius: "<<rad<<endl;
		pos.ShowPointInfo();  // const
	}
};

class Ring {
	Circle oc;
	Circle ic;

public:
	void Init(int x1, int y1, int r1, int x2, int y2, int r2) {
		ic.InitMembers(x1,y1,r1);
		oc.InitMembers(x2,y2,r2);
	}
	void ShowRingInfo() const {
		cout<<"Inner Circle Info..."<<endl;
		ic.ShowCircleInfo();  // const
		cout<<"Outer Circle Info..."<<endl;
		oc.ShowCircleInfo();  // const
	}
};

int main(){
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
    return 0;

}
