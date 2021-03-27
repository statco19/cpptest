#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
	char *title;
	char *isbn;
	int price;
public:
	Book(const char *b_title, const char *b_isbn, int b_price)
		: price(b_price)
	{
		title = new char[strlen(b_title) + 1];
		isbn = new char[strlen(b_isbn) + 1];
		
		strcpy(title, b_title);
		strcpy(isbn, b_isbn);
	}
	
	void ShowBookInfo() {
		cout<<"제목: "<<title<<endl;
		cout<<"ISBN: "<<isbn<<endl;
		cout<<"가격: "<<price<<endl;
	}
	
	~Book() {
		delete []title;
		delete []isbn;
	}
	
};

class EBook : public Book {
private:
	char *DRMKey;
public:
	EBook(const char *b_title, const char *b_isbn, int b_price, const char *b_drmkey)
		: Book(b_title, b_isbn, b_price)
	{
		DRMKey = new char[strlen(b_drmkey) + 1];
		
		strcpy(DRMKey, b_drmkey);
	}
	void ShowEBookInfo() {
		ShowBookInfo();
		cout<<"인증키: "<<DRMKey<<endl;
	}
	~EBook() {
		delete []DRMKey;
	}
	
};

int main(){
	Book book("좋은 C++", "555-12345-890-0",20000);
	book.ShowBookInfo();
	cout<<endl;
	EBook ebook("좋은 C++ ebook", "555-12345-890-1",10000,"fdx920i8kiw");
	ebook.ShowEBookInfo();
    
    return 0;

}
