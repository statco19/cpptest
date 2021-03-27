#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo {
private:
	char *name;
	int age;
public:	
	MyFriendInfo(const char *friendName, int friendAge) : age(friendAge) 
	{
		name = new char[strlen(friendName)+1];
		strcpy(name, friendName);
		cout<<"MyFriendInfo(const char *friendName, int friendAge)"<<endl;
	}
	
	void ShowMyFriendInfo() {
		cout<<"이름: "<<name<<endl;
		cout<<"나이: "<<age<<endl;
	}
	
	~MyFriendInfo() 
	{
		delete []name;
		cout<<"delete []name"<<endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo {
private:
	char *addr;
	char *phone;
public:
	MyFriendDetailInfo(const char *frName, int age, const char *frAddr, const char *frPhone)
		: MyFriendInfo(frName, age)
	{
		addr = new char[strlen(frAddr)+1];
		phone = new char[strlen(frPhone)+1];
		
		strcpy(addr, frAddr);
		strcpy(phone, frPhone);
		
		cout<<"MyFriendDetailInfo(const char *frName, int age, const char *frAddr, const char *frPhone)"<<endl<<endl;
	}
	
	void ShowMyFriendDetailInfo() {
		ShowMyFriendInfo();
		cout<<"주소: "<<addr<<endl;
		cout<<"전화: "<<phone<<endl<<endl;
	}
	
	~MyFriendDetailInfo() {
		delete []addr;
		delete []phone;
		
		cout<<"delete []addr"<<endl;
		cout<<"delete []phone"<<endl;
	}
};


int main(){
	MyFriendDetailInfo fr("Kim", 25, "Seoul", "010-1111-2222");
	fr.ShowMyFriendDetailInfo();
    
    return 0;

}
