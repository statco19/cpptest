#include <iostream>
#include <cstring>
using namespace std;

namespace Pnt_const {
	
	enum {
		MAX_LEN = 20
	};
}

class Printer {

private:
	char str[Pnt_const::MAX_LEN];  // MAX_LEN defined

public:
	void SetString(char *s);
	void ShowString();
};

int main(){
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();
	
	pnt.SetString("I love C++");
	pnt.ShowString();
    return 0;

}

void Printer::SetString(char *s) {
	strcpy(str, s);
}

void Printer::ShowString() {
	cout<<str<<endl;
}