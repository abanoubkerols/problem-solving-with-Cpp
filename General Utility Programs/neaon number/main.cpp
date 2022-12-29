#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, res ;


    cin>>n;

    res = n * n ;

    for(; res > 0 ;)
    {

        sum = (sum  + res) % 10 ;
        res = res / 10 ;

    }
    if(sum == n )
    {
        cout<<"ok";
    }
    else
    {
        cout<<"not";
    }






    return 0;
}
