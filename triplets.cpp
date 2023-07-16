/*count the number of triplets whose sum is
equal to the given value x;*/


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


    int triplets=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==targetsum){
                    triplets++;
                }
            
            }
            
        }
    }

    cout<<triplets;
}