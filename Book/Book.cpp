#include "Book.h"
#include <iostream>
using namespace std;
Book::Book() {
	this->Title = "None";
	this->Author = "None";
	this->Language = "None";
	this->price = 0;
}
Book::Book(string t, string a, string l, int p) {
	this->Title = t;
	this->Author = a;
	this->Language = l;
	this->price =p;
}
void Book::SetTitle(string s) {
	if (s.length() > 0) {
		this->Title =s;
	}
}
void Book::SetAuthor(string a) {
	if (a.length() > 0) {
		this->Author =a;
	}
}void Book::SetLanguage(string l) {
	if (l.length() > 0) {
		this->Language =l;
	}
}void Book::SetPrice(int p) {
	if (p > 0) {
		this->price =p;
	}
}

void Book::IssueBook() {
	cout << "Book " << this->Title << " is being issued" << endl;
}
void Book::ReturnBook() {
	cout << "Book " << this->Title << " is being return" << endl;
}
void Book::DisplayBook() {
	cout << "Title : " << this->Title << endl;
	cout << "Author : " << this->Author << endl;
	cout << "Language : " << this->Language << endl;
	cout << "Price : " << this->price << endl;
}


int main() {
	Book b;
	b.SetTitle("40 Rules of love");
	b.SetAuthor("Rumi");
	b.SetPrice(4000);
	b.DisplayBook();
	b.IssueBook();
	Book b1("c++", "Huda", "French", 100);
	b1.DisplayBook();
	b1.ReturnBook();
}
