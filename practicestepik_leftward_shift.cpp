#include <iostream>
using namespace std;

void rotate(int a[5], unsigned size, int shift)
{
    int buf;
    if( shift!=0 )
    {
        while (shift > size)
            shift%=size;
            
        for(int j=1; j<=shift;j++){
            buf=a[0];
        for(int i=0; i<size-1; i++)
       {
            a[i]=a[i+1];
        }
        a[size-1]=buf;
        }
    }
    for(int i=0;i<5;i++)
    cout << a[i]<< ' '<<endl;
}
int main ()
{
    int a[5] = {1,2,3,4,5};
    rotate(a, 5, 2);
    
    return 0;
}




