#include <iostream>
using namespace std;

void swap(int *p, int *q);

void swap(char *p, char *q);

void swap(double *p, double *q);

int main(){
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout<<num1<<' '<<num2<<endl;
	
	char ch1='A', ch2='Z';
	swap(&ch1, &ch2);
	cout<<ch1<<' '<<ch2<<endl;
	
	double dbl1=1.111, dbl2=5.555;
	swap(&dbl1, &dbl2);
	cout<<dbl1<<' '<<dbl2<<endl;
    
    return 0;

}

void swap(int *p, int *q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}

void swap(char *p, char *q) {
	char temp = *p;
	*p = *q;
	*q = temp;
}

void swap(double *p, double *q) {
	double temp = *p;
	*p = *q;
	*q = temp;
}