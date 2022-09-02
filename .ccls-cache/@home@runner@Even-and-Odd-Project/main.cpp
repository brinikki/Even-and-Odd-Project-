#include <iostream>
using namespace std;
int main() {

long int input = 0;

cout << "  " << endl;

cout << "Input Integer: ";
cin >> input ;

cout << "Integer is " ;
cout << (( input % 2 != 0) ? "odd." : "even.")  << endl; 

return 0;
}