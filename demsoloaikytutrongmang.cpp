#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int a=0,b=0,c=0;
	for(int i=0;i<s.length();i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			a++;
		}else if(s[i]>='0'&& s[i]<='9'){
			b++;
		}else{
			c++;
		}
		}
		cout<<a<<" "<<b<<" "<<c;
		return 0;
		}
