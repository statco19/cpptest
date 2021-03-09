#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[40] = "Hello World!";
	int lth = strlen(str);
	
	strcat(str, " I'm here!");
	cout<<str<<endl;
	
	char str2[40];
	strcpy(str2, str);
	cout<<str2<<endl;
	
	cout<<strcmp(str,str2)<<endl;
    return 0;

}
