/*relational operators e 2 operands vachenu relation define kare ane return ma
boolean value[true / false] aape*/
/*Greater than less than*/
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n > 10)
    {
        cout << "greater than 10" << endl;
    }
    else if (n < 10)
    {
        cout << "less than 10" << endl;
    }
    else
    {
        cout << "equal to 10" << endl;
    }

    return 0;
}