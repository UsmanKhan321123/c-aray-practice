#include<iostream>
using namespace std;
int main(){
	int a[4] = {1,2,3,4};
	int b[4] = {5,6,7,8};
	int c[4] = {};
	int i;
	for(i=0 ;i<4 ;++i){
		
		c[i] = a[i] * b[i];
		
	}
	int sum = c[0] + c[1] + c[2] +c[3];

	cout<<"the sum of our required numbers is : "<<sum <<endl;
}
