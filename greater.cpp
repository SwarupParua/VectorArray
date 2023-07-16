/*Count the number of elements strictly greater than value x*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the value of n is : ";
	cin>>n;
	
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	
	int x;
	cout<<"Enter x : ";
	cin>>x;

    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count<<endl;


}