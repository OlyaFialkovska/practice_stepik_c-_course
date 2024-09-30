
unsigned gcd(unsigned a, unsigned b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else if(a==b)
    {
        return a;
    }else if(a==1 || b==1)
    {
        return 1;
    }else if(a%2==0 && b%2==0)
    {
        a = 2*gcd(a/2,b/2);
            return a;
    }else if(a%2==0 && b%2!=0)
    {
        a = gcd(a/2,b);
            return a;
    }else if(a%2!=0 && b%2==0)
    {
        a = gcd(a,b/2);
            return a;
    }else if(a%2!=0 && b%2!=0 && a<b)
    {
        a = gcd(a,(b-a)/2);
            return a;
    }else if(a%2!=0 && b%2!=0 && a>b)
    {
        a = gcd((a-b)/2,b);
            return a;
    }
}




