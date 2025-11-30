#include <iostream>
using namespace std;

void myFunction(){
   string x;
   cout << "What's your name ?";
   cin >> x;
   cout << x;
}

int main() {
    myFunction();
    return 0;
}
