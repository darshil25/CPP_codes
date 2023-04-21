#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int sum = 0;
    int orginal = n;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == orginal)
    {
        cout << "Armstrong num" << endl;
    }
    else
    {
        cout << "not armstrong num" << endl;
    }

    return 0;
}