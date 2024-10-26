#include <iostream>
using namespace std;

unsigned length( const char *str)
{
    int i=0,length=0;
    while(*(str+i)!='\0')
    {
        ++i;
        length=i;
        *(str+i);
    }
    return length;
}

int main ()
{
    const char str[10] = "lalalakyt";
    cout << "length = " << length(str);
    return 0;
}