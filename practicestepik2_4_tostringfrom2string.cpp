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

void cat(char *to, const char *from)
{
    int length1=length(to);
    int length2=length(from);
    cout << "length1 = " << length1;
    cout << "length2 = " << length2;
    int i=0;
    while(i<=length2)
    {
        *(to+length1+i)=*(from+i);
        i++;
    }
    *(to+length1+length2)='\0';

    cout << "\n";
    for(int j=0;j<=length1+length2;j++)
    cout<< *(to+j);
}

int main ()
{
    char str1[20] = "yujnhgtr-";
    const char str2[10] = "lalalakyt";
    cout << "end = \n" << endl;
    cat(str1,str2);
    return 0;
}