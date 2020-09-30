#include<iostream> 
#include<math.h> 
using namespace std; 
int main () 
{ 
float a,b; 
int c; 
cout<<endl;
cout<<"--------------------------------------------------\n";
cout<<"******************** Calculator ******************\n"; 
cout<<"--------------------------------------------------\n"; 
cout<<"1: Division\t\t"<<endl; 
cout<<"2: Multiplication\t"<<endl; 
cout<<"3: Subtraction\t\t"<<endl; 
cout<<"4: Addition\t\t"<<endl; 
cout<<"5: Exponent\t\t"<<endl; 
cout<<"6: Square root\t\t"<<endl; 
cout<<"Enter the function that you want to perform : "; 
cin>>c; 
switch(c) 
{ 
case 1: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Division = "<<a/b<<endl; 
break; 
case 2: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Multiplication = "<<a*b<<endl; 
break; 
case 3: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Subtraction = "<<a-b<<endl; 
break; 
case 4: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Addition = "<<a+b<<endl; 
break; 
case 5: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Enter the exponent : "; 
cin>>b; 
cout<<"Exponent = "<<pow(a,b)<<endl; 
break; 
case 6: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Square Root = "<<sqrt(a)<<endl; 
break; 
default: 
cout<<"Wrong Input"<<endl; 
} 
}
