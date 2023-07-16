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
	
	
	
	v.insert(v.begin()+2,6);
	int idx=0;
	while(idx<v.size()){
		cout<<v[idx++]<<" ";
	}
	
	v.erase(v.end()-2);
	while(idx<v.size()){
		cout<<v[idx++]<<" ";
	}
}
