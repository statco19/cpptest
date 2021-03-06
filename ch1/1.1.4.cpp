#include <iostream>
using namespace std;

int main(){
	while(true) {
		int rev;
		int salary;
	
		cout<<"판매 금액을 만원 단위로 입력(-1 to end): "<<endl;
		cin>>rev;
		if(rev==-1) {
			cout<<"프로그램을 종료합니다."<<endl;
			break;
		}
		salary = 50 + rev*0.12;
		cout<<"이번 달 급여: "<<salary<<"만원"<<endl;
	}
    
    return 0;

}
