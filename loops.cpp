#include<iostream>
using namespace std;

int main()
{
    //for loop
    int n;
    cin >> n; //input no
     
    int sum = 0; 
    for (int counter = 1; counter <= n; counter++) {
        sum = sum + counter;
    }
    
    cout << sum << endl;

                                    // while loop
  while (n>0)
  {
    cout<<n<<endl;
    cin>>n;
  }        
                                      //DO while loop 

do
{
    cout<<n<<endl;
    cin>>n;
} while (n>0);
return 0;

  

  
}

