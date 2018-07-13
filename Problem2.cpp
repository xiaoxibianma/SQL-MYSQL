//
//  Tianyi Yang
//  CS 52
//  Assignment 4
//
//  Created by tianyi yang on 7/11/18.
//  Copyright © 2018 CS52. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


class Date
{
private:
    int month, day, year;
    
public:
    Date(int d, int m, int y){
        this->day = d;
        this->month = m;
        this->year = y;
    }
    void setMonth(int n){
        month = n;
    }
    void setDay(int n){
        day = n;
    }
    void setYear(int n){
        year = n;
    }
    int getMonth(){
        return month;
    }
    int getDay(){
        return day;
    }
    int getYear(){
        return year;
    }
    void print(){
        string smonth = "";
        cout << month << "/" << day << "/" << year;
        cout << "      ";
        
        switch(month){
            case(1): smonth = "January";
                break;
            case(2): smonth = "February";
                break;
            case(3): smonth = "March";
                break;
            case(4): smonth = "April";
                break;
            case(5): smonth = "May";
                break;
            case(6): smonth = "June";
                break;
            case(7): smonth = "July";
                break;
            case(8): smonth = "August";
                break;
            case(9): smonth = "September";
                break;
            case(10): smonth = "October";
                break;
            case(11): smonth = "November";
                break;
            case(12): smonth = "December";
                break;
        }
        cout << smonth << " " << day << ", " << year;
        cout << "      ";
        cout << day << ". " << smonth << " " << year << endl;
        
        
    }
    
};

int main() {
    int day, month, year;
    cout << " Please Enter Day, Month, and Year : ";
    cin >> day >> month >> year;
    Date mybirthday(day, month, year);
    mybirthday.print();
}
