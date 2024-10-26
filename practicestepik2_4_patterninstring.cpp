#include <iostream>
using namespace std;

unsigned length( const char *str)
{
    int i=0,length=0;
    while((*(str+i))!='\0')
    {
        ++i;
        length=i;
        *(str+i);
    }
    return length;
}

int patterninstring(const char *text, const char *pattern)
{
    int length1 = length(text);
    int length2 = length(pattern);
    if (length2==0)
            return 0;
    for(int i=0;i<=length1-length2;i++)
    {
        int j=0;
            while( *(text+i+j)== *(pattern+j) && j<length2)
            {
                j++;
            }
            if(j==length2)
            return i;
    }
        return -1;
}

int main ()
{
    char str1[20] = "aaaraarr";
    const char str2[10] = "aarr";
    cout << "pattern found on = " << patterninstring(str1,str2) << endl;
    return 0;
}