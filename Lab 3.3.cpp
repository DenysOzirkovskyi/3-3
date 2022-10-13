// Lab 3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -R)
        y = 2 * R + 2 * x;
    else
        if (x > -R && x <= -1)
            y = sqrt(2 * R * R - 2 * x * R + x * x);
        else
            if (x > -1 && x <= 1)
                y = R;
            else
                if (1 < x && x <= 2)
                    y = 2 * R - x - R * x;
                else
                    y = -1;
    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
