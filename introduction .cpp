// introduction to data structure and Algorithms
#include <iostream>
using namespace std;
int main()
{
// integer character floart boolean calculation 
    int a;
    float floatVar;
    bool boolVar;
    char charVar;
    std::cout<< "hellow World"<<endl;

    std::cout << "Size of int: " << sizeof(a) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(floatVar) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(boolVar) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(charVar) << " bytes" << std::endl;
 
 // sum of two integer value
int amount1;
cin>> amount1;

int amount2;
cin>> amount2;
int sum =amount1 +amount2;
cout<<sum;

// if elese condition of C++
int a,b,c,d;
if (a>b){
    if(a>c){
        cout<<a<<endl;

    }
} else {
    cout <<c<<endl;
}

// loops
// there are three types of loop in c++
// for, while, and do-while. 
int ;
    cin>> n;
    if(n%2==0){
        cout<<"even"<<endl;
        return 0;

}
