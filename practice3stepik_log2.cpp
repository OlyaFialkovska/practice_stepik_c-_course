#include <iostream>
using namespace std;

void logorithm_2(int a)
{
    int res=2;
    int i=1;
    for (i=0;res<=a;++i)
    {
    res*=2;
    }
    cout << i << endl;
}
int main ()
{
    int T;
    cin >> T;
    int a;
    for (int i=0; i<T; i++)
    {
        cin >> a;
        logorithm_2(a);
    }
}




