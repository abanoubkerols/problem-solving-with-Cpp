# include <conio.h>
# include <iostream>
using namespace std;

int main()
{
    char ch , c ;
    cout<<"Enter a string in upper case : " ;
    while((ch = getchar()) !='\n')
    {
        c=ch + 32 ;
        putchar(c);

    }

    cout<<"  \t is in lower case " ;
    return 0;
}
