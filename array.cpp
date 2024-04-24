#include<iostream>
using namespace std;
int main(){
	int a;
	int numbers[5] = {};
	int i;
	for( i =0 ; i < 5 ; ++i){
		
		cout<<"enter the elements of your list ...\n";
		cin>>a;
		numbers[i-1] = a;
	}
	int length = sizeof(numbers) / sizeof(numbers[0]);
	cout<< length<<endl; 
		
	
}

