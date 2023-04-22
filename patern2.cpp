#include <iostream>
using namespace std;

int main()
{

    int row, col;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
            /*  |aa comand thi upar| \aa comand thi pehli\
            ane nicheni line ma    | \ane chhelli ubi line\
            star print thay        | \ma star print thay*/
            {
                cout << "*";
                /*aa comand ma je jagya e star print nthi thyu tya khali jagya rahe*/
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}