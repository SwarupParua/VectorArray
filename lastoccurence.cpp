#include<iostream>
#include<vector>
using namespace std;

// 1 2 3 2 1 3 1
// x = 1

int main()
{
	int n;
	cout<<"Enter the value of n is : ";
	cin>>n;
	
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	cout<<"Enter the value of x : ";
	int x;
	cin>>x;
	
	int occurence;
	
	
//	for(int i=0;i<v.size();i++){
//		if(v[i]==x){
//			occurence=i;
//		}
//	}
	
	for(int i=v.size()-1;i>=0;i--){
		if(v[i]==x){
			occurence=i;
			break;
		}
	}
	
	cout<<occurence<<endl;
}
