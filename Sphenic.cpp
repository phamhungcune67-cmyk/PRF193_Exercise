#include<iostream>
using namespace std;
bool check(int x){
	if(x<2) return false;
	for(int i =2; i<x; i++){
		if(x%i==0) return false;
		}
		return true;
		
	}
bool S(int n){
	int count=0;
	for(int i=2;i<=n;i++){
		if(check(i) && n%i==0){
		
		count++;
		while(n%i==0){
		
		n/=i;
	}
	}
	
	if(count>3) return false;
}
	return count ==3;
	}


int main(){
	int n;
	cin>>n;
	if(S(n)){
		cout<<"1 "<< endl;
}else{
	cout<<"0"<< endl;
}
	return 0;
	}
	