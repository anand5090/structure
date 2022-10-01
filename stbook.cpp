#include<iostream>
using namespace std;
struct book
{
    int bookid;
    char title[50];
    float price;
    void input()
    {
    cout<<"Enter bookid title and price"<<endl;
    cin>>bookid;
    cin.ignore();
    cin.getline(title,50);
    cin>>price;
    }
    void display()
    {
        cout<<" "<<bookid<<endl<<" "<<title<<endl<<" "<<price<<endl;

    }

};
int main()
{
book b1;
b1.input();
b1.display();
return 0;
}
