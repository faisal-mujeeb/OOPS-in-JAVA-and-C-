#include<bits/stdc++.h>
using namespace std;
int month_days[]= {31,28,31,30,31,30,31,31,30,31,30,31};
class Date{
    public:
    int month,year, day;
    Date(){
        month = 1;
        day = 1;
        year = 2022;
    }
    void operator --(){
        if(month>1){
            if(day == 1){
                day = month_days[month-2];
                month-=1;
            }
            else {
                day-=1;
            }
        }
        else{
            if(day == 1){
                day = month_days[11];
                month = 12;
                year-=1;
            }
            else {
                day-=1;
            }
        }
    }
    void operator ++(){
        if(month<11){
            if(day == month_days[month-1]){
                day = 1;
                month +=1;
            }
            else{
                day+=1;
            }
        }
        else{
            if(day == month_days[month-1]){
                year+=1;
                month = 1;
                day =1;
            }
            else{
                day+=1;
            }
        }

    }
    void display(){
        cout<<day<<"-"<<month<<"-"<<year;
    }
    // void operator --(int){
    //     v-=1;
    // }
};
int main(){
    Date today;
    --today;
    today.display();
    return 0;
}