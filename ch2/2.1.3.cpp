#include <iostream>
using namespace std;

void SwapPointer(int *(&pref1), int *(&pref2)) {
	int *temp=pref1;
	pref1=pref2;
	pref2=temp;
}

int main(){
	int num1=5;
	int *ptr1=&num1;
	int *temp1 = ptr1;
	int num2=10;
	int *ptr2=&num2;
	int *temp2 = ptr2;
	SwapPointer(ptr1,ptr2);
	
	if(ptr1==temp2){
		cout<<"ptr1 points at "<<*ptr1<<endl;
	} else {
		cout<<"ptr1 is not changed."<<endl;
	}
	if(ptr2==temp1){
		cout<<"ptr2 points at "<<*ptr2<<endl;
	} else {
		cout<<"ptr2 is not changed."<<endl;
	}
    
    return 0;

}
