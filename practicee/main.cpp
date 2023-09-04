#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "Enter Grade: ";
    cin>>grade;
    if (grade < 75)
    {
        cout<<"failed";
    }
    if (grade > 74)
    {
        cout<<"passed";
    }
}
