#include<iostream> 
#include<math.h> 
using namespace std; 
int main () 
{ 
float a,b,PI; 
int c; 
cout<<endl;
cout<<"-------------------------------------------------------------\n";
cout<<"******************** Scientific Calculator ******************\n"; 
cout<<"-------------------------------------------------------------\n"; 
cout<<"1: Division\t\t"<<endl; 
cout<<"2: Multiplication\t"<<endl; 
cout<<"3: Subtraction\t\t"<<endl; 
cout<<"4: Addition\t\t"<<endl; 
cout<<"5: Exponent\t\t"<<endl; 
cout<<"6: Square root\t\t"<<endl; 
cout<<"7: Sin\t\t"<<endl; 
cout<<"8: Cos\t"<<endl; 
cout<<"9: Tan\t\t"<<endl; 
cout<<"10: Inverse of Sin"<<endl; 
cout<<"11: Inverse of Cos"<<endl; 
cout<<"12: Inverse of Tan"<<endl; 

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
case 7: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Sin = "<<sin(a)<<endl; 
break; 
case 8: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Cos = "<<cos(a)<<endl; 
break; 
case 9: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Tan = "<<tan(a)<<endl; 
break; 
case 10: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Inverse of Sin = "<<asin(a)*180.0/PI<<endl; 
break; 
case 11: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Inverse of Cos = "<<acos(a)*180.0/PI<<endl; 
break; 
case 12: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Inverse of tan = "<<atan(a)*180.0/PI<<endl; 
break; 
case 13: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Log = "<<log(a)<<endl; 
break; 
case 14: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Log with base 10 = "<<log10(a)<<endl; 
break; 
default: 
cout<<"Wrong Input"<<endl; 
} 
}
