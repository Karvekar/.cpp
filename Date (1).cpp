#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
private :
     int date1;
     int date2;
     int month1;
     int month2;
     int year1;
     int year2;
public:
     void getdata()
     {
     cout<<"Date 1 : ";
     cin>>date1;
     cout<<endl;
     cout<<"Month 1 : ";
     cin>>month1;
     cout<<endl;
     cout<<"Year 1 : ";
     cin>>year1;
     cout<<endl;
     cout<<"Date 2 : ";
     cin>>date2;
     cout<<endl;
     cout<<"Month 2 : ";
     cin>>month2;
     cout<<endl;
     cout<<" Year 2 : ";
     cin>>year2;
     cout<<endl;
     }
     
    Date() 
     {
     getdata();
     cout<<d1<<"-"<<m1<<"-"<<y1<<endl;
     cout<<d2<<"-"<<m2<<"-"<<y2<<endl;
     }
     
     
};
int main()
{
Date d;
}
