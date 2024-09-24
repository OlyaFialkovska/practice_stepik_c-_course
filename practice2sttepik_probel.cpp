#include <iostream>
using namespace std;

int main()
{
    /* ... */
    char c = '\0';
    int num;
    while (cin.get(c)) {
        /* ... */
        if (c == ' ' )
        {
            while (cin.get(c) && c == ' ') {
                continue;
            }
            cout<< " ";
        }
        cout<< c;
    }
	return 0;
}