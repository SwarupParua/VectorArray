/*count the number of occurences of a particular element x*/

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
	
	int occurences=0;
	
	for(int ele:v){
		if(ele==x){
			occurences++;
		}
	}
	
	cout<<occurences<<endl;
}
