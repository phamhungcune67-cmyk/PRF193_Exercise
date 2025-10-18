#include<iostream>
using namespace std;
struct student{
	string name;
	int age;
};
int main(){
	student st;
	cout<<"Nhap ho ten:";
	getline(cin, st.name);
	cout<<"Nhap so tuoi";
	cin>>st.age;
	cout<<"Name: "<<st.name<<endl;
	cout<<"Age: "<<st.age<<endl;
	
	return 0;
}