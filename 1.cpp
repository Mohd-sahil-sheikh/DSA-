#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number you want to find multiple of" << endl;
    cin >> num;

    int i, j;
    int k=1;
    int l=11;
    for (j = 1; j < 21; j++)
    {

        for (i = k; i <l ; i++)
        {
            cout<<' '<<num*i;
        }
        k=k+10;
        l=l+10;
        cout << endl;

    }
    return 0;
}