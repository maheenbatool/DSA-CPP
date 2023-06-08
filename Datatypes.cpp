#include <iostream>
#include <string>
using namespace std;

int main (){
    ///cout<<"Hey Maheen"<<endl;
    //cout<<"Hey"<<endl;
    //int x,y;
    //cin>>x>>y;
    //cout<<"value of x: "<< x << " and value of y: "<< y << endl;

//int
int i = 5;
cout<<"Integer: "<< i << endl;

//long
long l = 15;
cout<<"Long: "<<l<<endl;

//long long
long long ll = 30;
cout<<"Long Long: " << ll << endl;

//float
float f= 3.4;
cout<<"Float: " << f << endl;

//double
double d= 3.3;
cout<<"Double: "<< d << endl;
 
//string and getline 
string str;
getline (cin,str);
cout<<str;


//char
char ch;
cin>>ch;
cout<<ch;
return 0;
}
