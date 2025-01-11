#include<bits/stdc++.h>
using namespace std;
void line(){
	cout<<"=================================="<<endl;
}
int main(){
    double num1,num2;
	string Operation;
	line();
	cout<<"Hi User! Welcome to the CALCULATOR"<<endl;
	line();
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter Operation (+, - ,* ,/ ): ";
	cin>>Operation;
	cout<<"Enter second number: ";
	cin>>num2;
	line();
	cout<<"Calculating..."<<endl;
	if(Operation=="+"){
		cout<<"**The operation choosen is ADDITION**"<<endl;
		cout<<"The result is -->"<<num1+num2<<endl;
	}else if(Operation=="-"){
		cout<<"**The operation choosen is SUBTRACTION**"<<endl;
		cout<<"The result is -->"<<num1-num2<<endl;
	}else if(Operation=="*"){
		cout<<"**The operation choosen is MULTIPLICATION**"<<endl;
		cout<<"The result is -->"<<num1*num2<<endl;
	}else if(Operation=="/"){
		cout<<"**The operation choosen is DIVISION**"<<endl;
		if(num2!=0){
			cout<<"The result is -->"<<num1/num2<<endl;
		}else{
			cout<<"Error: Division by Zero!"<<endl;
		}
	}else{
		cout<<"Not a recognizable operation!"<<endl;
	}
	line();
	cout<<"Thank You for using me!"<<endl;
	line();
	return 0;
}
