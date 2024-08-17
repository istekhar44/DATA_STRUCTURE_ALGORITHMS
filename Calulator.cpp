#include<iostream>
using namespace std;
int main()
{
    int n1,n2;                   // define the two number
    cout<<"input 2 numbers:";
    cin>>n1>>n2;
    char op;                     // define the operator
    cout<<"input an operator";
    cin>>op;                      // input the operator 
     
switch(op)
{
    case'+':                   
    cout<<n1+n2<<endl;             
    break;
 case'-':
    cout<<n1-n2<<endl;
    break;
     case'%':
    cout<<n1%n2<<endl;
    break;
     case'*':
    cout<<n1*n2<<endl;
    break;
     case'/':
    cout<<n1/n2<<endl;
    break;

    default:
    cout<<"enter another operator"<< endl;
    break; 
}

return 0;
}