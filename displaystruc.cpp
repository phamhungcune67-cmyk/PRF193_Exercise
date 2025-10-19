#include<iostream>
using namespace std;
struct Student{
	string name;
	int age;

	void display(){
		cout<<"Ten: "<<name<<endl;
		cout<<"Tuoi: "<<age<<endl;
	
	}
};
int main(){
	int n;
	cin>>n;
	Student*St= new Student[n];
	for(int i=0;i<n;i++){
		cin>>St[i].name>>St[i].age;
	}
	for(int i=0;i<n;i++){
		cout<<"Name: "<<St[i].name<<endl;
		cout<<"Age: "<<St[i].age<<endl;
	}
	delete[] St;
	return 0;
}
