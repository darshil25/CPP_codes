#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (x == a)
    {
        b = y;
        c = z;
    }
    else if (y == a)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Given Trio is Triplet" << endl;
    }
    else
    {
        cout << "Given Trio is not Triplet" << endl;
    }

    return 0;
}