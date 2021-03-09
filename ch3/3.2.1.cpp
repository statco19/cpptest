#include <iostream>
using namespace std;

class Calculator {

private:
	int add, min, mul, div;
	float a, b;

public:
	void Init();
	float Add(const float &a, const float &b);
	float Min(const float &a, const float &b);
	float Mul(const float &a, const float &b);
	float Div(const float &a, const float &b);
	void ShowOpCount();
};


int main(){
	Calculator cal;
	cal.Init();
	cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
	cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<endl;
	cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<endl;
	cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<endl;
	cal.ShowOpCount();
    
    return 0;

}

void Calculator::Init() {
	add = min = mul = div = 0;
	a = b = 0;
}

float Calculator::Add(const float &a, const float &b) {
	float res = a + b;
	add += 1;
	
	return res;
}

float Calculator::Min(const float &a, const float &b) {
	float res = a - b;
	min += 1;
	
	return res;
}

float Calculator::Mul(const float &a, const float &b) {
	float res = a * b;
	mul += 1;
	
	return res;
}

float Calculator::Div(const float &a, const float &b) {
	float res = a / b;
	div += 1;
	
	return res;
}

void Calculator::ShowOpCount() {
	cout<<"덧셈: "<<add<<" 뺄셈: "<<min<<" 곱셈: "<<mul<<" 나눗셈: "<<div<<endl;
}