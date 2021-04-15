#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
 int num{10};
 cout << "Value of num is: " << num << endl;
 cout << "sizeof num is: " << sizeof num << endl;
 cout << "Address of num is: " << &num << endl;

 int *p {nullptr};

 cout << "\nValue of p is: " << p << endl;
 cout << "Address of p is: " << &p << endl;
 cout << "sizeof of p is: " << sizeof p << endl;
 
 p = nullptr;
 cout << "\nValue of p is: " << p << endl;
 return 0;
}