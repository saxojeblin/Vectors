/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nicholas Rubio
 */

#include <iostream>
#include "std_lib_facilities.h"
#include "Name_Value.h"

using namespace std;

int main() 
{
    Vector<Name_value> names;

    Name_value tempNameValue;
    string tempName;
    int tempVal;

    cout << "Note: To finish input, enter 'NoName 0'." << endl;
    while(1)
    {
        cout << "Enter a name and value (i.e. John 4): ";
        cin >> tempName >> tempVal;
        if (tempName == "NoName" && tempVal == 0)
        {
            break;
        }
        tempNameValue.name = tempName;
        tempNameValue.value = tempVal;
        names.push_back(tempNameValue);
    }

    cout << "\nAll Pairs:" << endl;
    for (int i = 0; i<names.size(); i++)
    {
        cout << names[i].name << "," << names[i].value << endl;
    }

    return 0;
}