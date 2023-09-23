#pragma once
#include <string>
using namespace std;
class Book
{
private:
	string Title;
	string Author;
	string Language;
	int price;
public:
	Book();
	Book(string t, string a, string l, int p);
	void SetTitle(string s);
	void SetAuthor(string s);
	void SetLanguage(string s);
	void SetPrice(int p);
	/*string GetTitle();
	string GetAuthor();
	string GetLanguage();
	int GetPrice();*/

	void IssueBook();
	void ReturnBook();
	void DisplayBook();
};


