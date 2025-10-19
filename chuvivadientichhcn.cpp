#include<iostream>
using namespace std;
struct Rectangle{
	double Area;
	double Perimeter;
	
};
int main(){
	double x,y;
	cin>>x>>y;
	Rectangle R;
	R.Area= x*y;
	R.Perimeter=2*(x+y);
	cout<<"Area: "<<R.Area<<endl;
	cout<<"Perimeter: "<<R.Perimeter<<endl;
	return 0;
}