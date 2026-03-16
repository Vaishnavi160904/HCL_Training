/*3.	Write a function that returns a struct Date 
after validating day, month, and year.*/

#include <iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
Date validate(int dt,int m,int y){
    Date d1;

    int months[]={31,28,31,30,31,30,31,31,30,31,30,31};

    if((y%4==0 && y%100!=0) || (y%400==00)){
        months[1]=29;
    }

    if(dt>=1 && dt<=months[m-1] && m>=1 && m<=12 && y>0){
        d1.day=dt;
        d1.month=m;
        d1.year=y;
    }else{
        cout<<"Invalid Date"<<endl;
        d1.day=d1.month=d1.year=0;
    }

    return d1;

}
int main(){
    Date d=validate(12,9,2020);
    cout<<"Date: "<<d.day<<"-"<<d.month<<"-"<<d.year<<endl;
}
