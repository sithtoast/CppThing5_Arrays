//
//  main.cpp
//  C++ Thing 5 - Arrays
//
//  Created by William Holt on 10/2/13.
//  Copyright (c) 2013 William Holt. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    double sum = 0;
    double avg;
    double numbers[10];

    for (int count = 0; count <= 9; count++)
    {
        cout << "Mash in your numbers: " << endl;
        cin >> numbers[count];
    }

    cout << endl;

    // Print them out!
    for (int count = 0; count <=9; count++)
    {
        cout << "Here's your numbers, boss: ";
        cout << numbers[count] << endl;
    }

    // What's the sum, chum?
    for (int count = 0; count <= 9; count++)
    {
        sum += numbers[count];

    }

    cout << endl << "The sum is " << sum << endl;
    avg = sum / 10;
    cout << "The average is " << avg << endl;

    // Find the max and second max, I'm sure there is a nicer and easier way of doing this.

    double max = numbers[0];
    double max2nd = numbers[0];

    for (int count = 0; count <=9; count++)
    {
        if (max < numbers[count])
        {
            max2nd = max;
            max = numbers[count];
        }
    }

    cout << endl << "The maximum value is: " << max << endl;
    cout << "Your second largest value is: " << max2nd;


    return 0;
}
