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
 cout << "Address of p is: " << &p << endl;

 int *p1{nullptr};
 double *p2{nullptr};
 unsigned long long *p3 {nullptr};
 vector<string> *p4 {nullptr};
 string *p5 {nullptr};
 
 cout << "\nsizedof p1 is: " << sizeof p1 << endl;
 cout << "sizeof p2 is: " << sizeof p2 << endl;
 cout << "size of p3 is: " << sizeof p3 << endl;
 cout << "size of p4 is: " << sizeof p4 << endl;
 cout << "size of p5 is: " << sizeof p5 << endl;

 int score {10};
 double high_temp{100.7};

 int *score_ptr {nullptr};

 score_ptr = &score;

 cout << "Value of score is: " << score << endl;
 cout << "Address of score is: " << &score << endl;
 cout << "Value of score_ptr is: " << score_ptr << endl;

int *test_ptr {nullptr};
int score2 {235};

test_ptr = &score2;

cout << V
 return 0;
}