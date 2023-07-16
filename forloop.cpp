#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	
	//for loop
	for(int i=0;i<5;i++){
		int elements;
		cin>>elements;
		v.push_back(elements);
		
		//cin>>array[i];
	}
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
