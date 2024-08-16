#include<iostream>
using namespace std;

int main()
{ 
    char button;
    cin >> button;  // Get the value of 'button' from the user

    switch (button)
    {
    case 'a':
        cout << "HELLO" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Salute" << endl;
        break;
    case 'd':
        cout << "RAM RAM" << endl;
        break;
    case 'e':
        cout << "Manjur" << endl;
        break;
    default:              // If the value of 'button' doesn't match any case, use the default case
        cout << "I am still learning" << endl;
    }

    return 0;
}
