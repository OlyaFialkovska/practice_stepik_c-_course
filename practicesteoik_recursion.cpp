#include <iostream>

using namespace std;
void back(unsigned a)
{
    cin>>a;
    if(a!=0)
    {
    back(a);
        cout << a <<" ";
    }
    
}
int main()
{
    unsigned a;
    back(a);
	return 0;
}