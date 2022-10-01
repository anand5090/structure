#include<iostream>
#include <conio.h>
#include<string.h>
using namespace std;
struct book
{
    int bookid;
    char title[50];
    float price;

};
int main()
{
struct book b1={1,"java script",450.0};
struct book b2,b3;
b2.bookid=2;
strcpy(b2.title,"PHP");
b2.price=320.0;
return 0;

cout<<""<<b1.bookid<<""<<b1.title<<""<<b1.price;

cout<<""<<b2.bookid<<""<<b2.title<<""<<b2.price;
getch();


}
