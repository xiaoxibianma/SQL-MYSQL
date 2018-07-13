//
//  Tianyi Yang
//  CS 52
//  Assignment #4
//
//  Created by tianyi yang on 7/11/18.
//  Copyright © 2018 CS52. All rights reserved.
//

#include <iostream>
using namespace std;

//calculate recursively n * n/3 * n/9 * n/27...
int recursive(int n);

int main() {
    int number;
    
    cout << "Input: ";
    cin >> number;
    cout << "Result: " << recursive(number) << endl;
    
}


int recursive(int n){
    if(n <= 1){
        return 1;
    }
    else{ return n * recursive(n/3); }
}

