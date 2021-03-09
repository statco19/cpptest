#include <iostream>
using namespace std;

void PlusOne(int &ref) {
	ref += 1;
}

void ChangeSign(int &ref) {
	ref *= (-1);
}

int main(){
	int val = 10;
	PlusOne(val);
	cout<<"VAL: "<<val<<endl;
	
	ChangeSign(val);
	cout<<"VAL: "<<val<<endl;
    
    return 0;

}
