    /*
    *  UCF COP3330 Fall 2021 Assignment 5 Solution
    *  Copyright 2021 Faiz Ahmed
    */

    #include <iostream>
    #include "std_lib_facilities.h"
    using namespace std;
    
    
    void check(int n)
    {
        if(n%2 ==0)
            cout << "The number " << n << " is Even";
        else
            cout << "The number " << n << " is Odd.";
    }

    int main() {
        int input;
        cout << "Enter an integer: ";
        cin >> input;
        check(input);       
        return 0;
    }

