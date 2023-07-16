/*Check if the given array is sorted or not*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[]={1,2,3,7,5,6};


    bool sorted=true;


    for(int i=1;i<6;i++){
        if(a[i]<=a[i-1]){
            sorted=false;
        }
    }

    cout<<sorted;
}