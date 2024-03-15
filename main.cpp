#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Student, Enter your age" << endl;
    cin >> age;
    if (age > 20 && age<25)
    {
        cout << "You're an Adult!" << endl;
    } else {
        cout << "That age has not been considered" << endl;
    }
    return 0;
}
