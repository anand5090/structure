#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
struct book
{
    int bookid;
    char title[50];
    float price;

};
int main()
{
    //How to initialise structure variable during declaration
//struct book b1={1,"java script",450.0};
//cout<<" Book information is="<<endl;
//cout<<" "<<b1.bookid<<" "<<b1.title<<" "<<b1.price;




//HOW TO INITIALISE STRUCTURE MEMBER VARIABLE AFTER DECLARATION OF STRUCTURE VARIABLE
struct book b2,b3;
b2.bookid=2;
strcpy(b2.title,"PHP");
b2.price=320.0;
cout<<" "<<b2.bookid<<" "<<b2.title<<" "<<b2.price;



//HOW TO TAKE INPUT FROM USER
/*cout<<"Enter bookid, Title And Price ";
cin>>b3.bookid;
cin.ignore();
cin.getline(b3.title,50);
cin>>b3.price;
cout<<" "<<b3.bookid<<" "<<b3.title<<" "<<b3.price<<endl;*/







getch();
}
