# include <stdio.h>
#include<iostream>
# include <conio.h>
using namespace std;

int main()
{
    int x,y,z;

	cout << "Please Enter Three numbers to print the maximum and the minimum :" << endl;
    cin>>x>>y>>z;
    int min,max;

    min = max = x;
    if(y>max){
        max=y;
    }
    else if(y<min){
        min=y;
    }

    if(z>max){
        max=z;
    }
    else if(z<min){
        min=z;
    }
    cout << "min= " << min << endl;
	cout << "max= " << max << endl;


}
