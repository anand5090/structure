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
// FUNCTION RETURNING STRUCTURE
 /*
    struct book input()
    {
        struct book b;
        cout<<"Enter bookid,title and price";
        cin>>b.bookid;
        cin.ignore();
        cin.getline(b.title,50);
        cin>>b.price;
        return b;
    }
int main()
{
    struct book b3;
    b3=input();
    cout<<" "<<b3.bookid<<endl <<" "<<b3.title<<endl<<" "<<b3.price<<endl;
    getch();
} 
*/






    //FUNCTION CALL BY PASSING STRUCTURE

    
   
  void display(struct book b);
    int main()
    {
         struct book b3;
        cout<<"Enter bookid,title and price";
        cin>>b3.bookid;
        cin.ignore();
        cin.getline(b3.title,50);
        cin>>b3.price;
        display(b3); 
        getch();
        
    }
     void display(struct book b)
    {
        cout<<" "<<b.bookid<<" "<<b.title<<" "<<b.price;
    }
    






