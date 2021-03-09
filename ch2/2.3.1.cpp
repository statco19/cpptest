#include <iostream>
using namespace std;

typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2) {  // thrown as *P1, *P2
	Point *pptr = new Point;
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	
	return *pptr;
}

int main(){
	Point *pptr1 = new Point;
	pptr1->xpos = 1;
	pptr1->ypos = 1;
	
	Point *pptr2 = new Point;
	pptr2->xpos = 2;
	pptr2->ypos = 3;
	
	Point &pref = PntAdder(*pptr1, *pptr2);
	cout<<"("<<pref.xpos<<", "<<pref.ypos<<")"<<endl;
	delete pptr1;
	delete pptr2;
	delete &pref;  //pref의 주소를 불러온 것(pref가 구조체 타입)
    return 0;

}
