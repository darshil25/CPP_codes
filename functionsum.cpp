#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{

    int num1, num2;

    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "Sum of given values is " << sum(num1, num2);
    return 0;
}