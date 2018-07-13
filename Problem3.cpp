//
//  Tianyi Yang
//  CS 52
//  Problem3
//
//  Created by tianyi yang on 7/12/18.
//  Copyright © 2018 CS52. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


class Employee{
    
private:
    string firstName, lastName;
    int pay;
    
public:
    Employee(){
        this->firstName = "firstName";
        this->lastName = "lastName";
        this->pay = 0;
    }
    
    Employee(string firstName, string lastName, int pay){
        this->firstName = firstName;
        this->lastName = lastName;
        this->pay = pay;
    }
    
    void setFirstName(string firstName){
        this->firstName = firstName;
    }
    
    void setLasttName(string lastName){
        this->lastName = lastName;
    }
    
    void setPay(int pay){
        this->pay = pay;
    }
    
    string getFirstName(){
        return this->firstName;
    }
    
    string getLastName(){
        return this->lastName;
    }
    
    int getPay(){
        return this->pay;
    }
};

void inputArray(Employee array[], int size);
// given an empty array and the size of the array
// function will store user's information

void outputArray(Employee array[], int size);
// print out each employee's information

int main() {
    Employee *p;
    int i;
    
    do{
        cout << "Number of Employees: ";
        cin >> i;
    }while(i <= 0);
    p = new Employee[i];
    inputArray(p, i);
    outputArray(p, i);
    
}

void inputArray(Employee array[], int size){
    string firstName;
    string lastName;
    int salary;
    for(int i = 0; i < size; i++){
        cout << "Employee " << i+1 << endl;
        cout << "First Name: ";
        cin >> firstName;
        cout << "Last Name: ";
        cin >> lastName;
        cout << "Pay: ";
        cin >> salary;
        
        Employee *a = new Employee(firstName, lastName, salary);
        array[i] = *a;
    }
}

void outputArray(Employee array[], int size){
    cout << endl;
    cout << "Employees: " << endl;
    for(int i = 0; i < size; i++){
        cout << "Name: " << array[i].getFirstName() << " " << array[i].getLastName()
        << " " << "(" << array[i].getPay() << ")" << endl;
    }
}




