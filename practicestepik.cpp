#include <iostream>
using namespace std;

int main ()
{
    int T,a,b,sum=0;
    cin >> T;
    for(int i = 0; i<T; i++)
    {
        cin >> a>>b;
        sum =a+b;
        cout << sum<< endl;
    }

    return 0;
}