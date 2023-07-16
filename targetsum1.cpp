/*Find the total number of pairs in the array whose
sum is equal to the given value x.*/


//a[]={3,4,6,7,1}   >> targetsum = 7
// ans ----> {6,1}{3,4}

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[40],n,targetsum;
    cout<<"Enter the size of the array is : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the value of target sum is : ";
    cin>>targetsum;

    int pairs=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs;

}