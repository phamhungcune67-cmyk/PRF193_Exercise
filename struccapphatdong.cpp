#include<iostream>
using namespace std;
struct Sinhvien{
	string name;
	int age;
	double score;
};
int main(){
	int n;
	cin>>n;
	Sinhvien*sv= new Sinhvien[n];
	for(int i=0;i<n;i++){
		cin>>sv[i].name>>sv[i].age>>sv[i].score;
		
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(sv[i].score>sv[max].score){
			max=i;
		}
	}
	cout << "Name: " << sv[max].name << endl;
    cout << "Age: " << sv[max].age << endl;
    cout << "Score: " << sv[max].score << endl;
	  delete[] sv;
    return 0;
}