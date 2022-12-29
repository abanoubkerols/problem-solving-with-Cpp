#include <iostream>

using namespace std;

int main()
{
    int i , n , c , p,q , r ,k , a[20];
    cout<<"Enter The Array Size" ;
    cin>> n;
    cout<<"Enter The Elements";
    for(i= 1 ; i<=n ; i++){
        cin >> a[i];
    }
    i=1;
    while (i<=n){
        if(n%i==0){
            r=i;
            c = n/i;
            k=1;
            for(p=1; p <= r ; p++){
                for(q = 1 ; q<=c ; q++){
                    cout<<a[k++];
                    cout<<"\n";

                }

                i++;

return 3;

            }
        }

    }


}


