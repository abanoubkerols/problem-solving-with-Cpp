#include <iostream>

using namespace std;

//long fact(int num){
//    long f=1;
//    int i=1;
//    while(i<=num){
//        f=f*1;
//        i++;
//    }
//    return f;
//}
int main()
{
//    int line,i,j;
//    cout<<"Enter the no. of lines :";
//    cin>>line;
//    for(i=0;i<line;i++){
//        for(j=0;j<line-i;j++){
//            cout<<" ";
//            }
//            for(j=0;j<=i;i++){
//                cout<<" "<<fact(i)/facet(j)*fact(i-j);
//            }
//            cout<<endl;
//        }

            int n;
            cin>>n;
            for(int i=0;i<n;i++){
                int num=1;
                for(int j=0;j<n-i-1;j++){
                    cout<<" ";
                }
                for(int k=0;k<=i;k++){
                    cout<<num<<" ";
                    num=num*(i-k)/(k+1);
                }
            }

        return 0;
    }

