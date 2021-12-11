#include<iostream>
void fun(int,int,int,int,int,int);
using namespace std;
int main()
{
    int c_date,c_month,c_year,b_date,b_month,b_year;
    char x;
    cout<<"------------------WELCOME TO AGE CACULATER----------------------------"<<endl;
    cout<<"enter today's date in this format:- dd/mm/yyyy"<<endl;
    cin>>c_date>>x>>c_month>>x>>c_year;
    cout<<"enter your dob in this format:- dd/mm/yyyy"<<endl;
    cin>>b_date>>x>>b_month>>x>>b_year;
    fun(c_date,c_month,c_year,b_date,b_month,b_year);
    return 0;

}

void fun(int c_date,int c_month,int c_year,int b_date,int b_month,int b_year)
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int age_date,age_month,age_year;
    if(c_date<b_date)
    {
       c_month=c_month-1;
        c_date=c_date+month[b_month-1];
    }
    if(c_month<b_month)
    {
        c_year=c_year-1;
        c_month=c_month+12;
    }
    age_date=c_date-b_date;
    age_month=c_month-b_month;
    age_year=c_year-b_year;
    cout<<"you are of:-";
    cout<<age_year<<" "<<"years"<<" "<<age_month<<" "<<" months"<< " "<<age_date<<" "<<"days old";
}