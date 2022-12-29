#include <iostream>

using namespace std;

int main()
{
    int n ;
    int numItSself ;
    int square ;
    int reminder ;
    int divisor ;
    int equal ;

    cout << "Enter a number";
    cin >> n ;
    numItSself = n ;
    square = n * n ;
    divisor = 10;

    cout<< "square of " <<n<< " is " <<square <<endl;

    while(n > 0 )
    {

        reminder = square % divisor ;
        if(numItSself == reminder)
        {
            equal = 1 ;
            break;
        }
        n = n / 10 ;
        divisor =divisor *10 ;

    }

    if(equal == 1 ){
        cout<<numItSself << " is an automorphic number "<<endl;
    }

    else{
        cout<< numItSself << " is not automorphic number " <<endl;
    }
    return 0;
}
