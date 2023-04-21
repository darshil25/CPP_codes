#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{

    int n, r;
    cin >> n >> r;
    if (n < r)
    {
        cout << "Input first value bigger than second value" << endl;
    }
    else
    {
        int ans = fact(n) / (fact(r) * fact(n - r));
        cout << ans << endl;
    }
    return 0;
}