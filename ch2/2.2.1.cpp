#include <iostream>
using namespace std;

int main(){
	const int num=12;
	const int *ptr = &num;
	const int *(&pref) = ptr;
	
	cout<<"num: "<<*ptr<<endl;
	cout<<"num: "<<*pref<<endl;
    
    return 0;

}
