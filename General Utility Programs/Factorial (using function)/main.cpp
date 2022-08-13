#include <iostream>
#include<conio.h>
using namespace std;
long Factorial(int n);
int main()
{
    int n;
    cout<<"Enter the number :\n";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<Factorial(n);
    getch();

    return 0;
}
 long Factorial(int n){
        if(n<=1){
            return(1);;
        }else{
            n=n*Factorial(n-1);
            return(n);
        }
    }
