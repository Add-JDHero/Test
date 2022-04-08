#include <iostream>
#include "Factorial.cpp"

using namespace std;

int main()
{
    int number;
    cin >> number;
    cout << "Write a number: ";

    cout << Factorial(number) << endl;

    system("pause");
}