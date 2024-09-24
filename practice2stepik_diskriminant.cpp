#include <iostream>
#include <cmath>

using namespace std;
/*
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double x1,x2,D;
    if ( b==0 && c==0)
    {
        x1=x2=0;
        cout << x1<<" "<<x1<<endl; 
    }else if (b==0 && c!=0)
    {
        if (-(c/a)>0)
        {
            x1=sqrt(-(c/a));
            x2=-sqrt(-(c/a));
            cout << x1<<" "<<x2<<endl; 
        }else if (-(c/a)<0)
        {
            cout << "No real roots" << endl;
        }
    }else if (c==0 && b!=0)
    {
        x1=0;
        x2=-(b/a);
        cout << x1<<" "<<x2<<endl;    
    }else 
    {
        D=b*b-4*a*c;
        if (D>0)
        {
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            cout << x1<<" "<<x2<<endl;    
        }else if (D==0)
        {
            x1=x2=-b/(2*a);
            cout << x1<<" "<<x1<<endl;   
        }else if (D<0)
        {
            cout << "No real roots" << endl;
        }
    }

    return 0;
}*/
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double x1,x2,D;
        D=b*b-4*a*c;
        if (D>0)
        {
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            cout << x1<<" "<<x2<<endl;    
        }else if (D==0)
        {
            x1=x2=-b/(2*a);
            cout << x1<<" "<<x1<<endl;   
        }else if (D<0)
        {
            cout << "No real roots" << endl;
        }

    return 0;
}