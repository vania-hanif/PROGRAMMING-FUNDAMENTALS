#include<iostream>
using namespace std;
void PrintMessage (int n);

int main(){
	for (int i=1; i<=3;i++){
		PrintMessage (i);
	}
	return 0;
}
 void PrintMessage (int n){
 	cout<<"Nunber is :"<< n <<endl;
 
 }
