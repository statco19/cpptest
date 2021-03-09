#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(NULL));
	
	for(int i=0;i<5;i++) {
		int num = rand() % 100;
		cout<<num<<endl;
	}
    
    return 0;

}
