#include<iostream>
using namespace std;
class Student{

private:
	string name;
	int age;
public:
	void getinformation(){
		cin>>name;
		cin>>age;
	}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
}
};
	int main(){
		Student S;
		S.getinformation();
		S.display();
		return 0;
	}
	