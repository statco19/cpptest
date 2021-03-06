#include <iostream>
int SimpleFunc(int a=10) {
	return a+1;
}

int SimpleFunc() {
	return 10;
}

int main(){

    SimpleFunc();
    return 0;

}
