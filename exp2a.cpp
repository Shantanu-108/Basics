#include <iostream>
using namespace std;

int main() {
    //Declaring diffrent data types and their variable
   int a; 
   float b;
   double c; 
   char  ch;
   bool flag; 
   
   cout<< "Enter any integer value: ";
   cin >> a;
   cout<< "Enter any floating point value: ";
   cin >>b ;
   cout<< "Enter any double floating point value: ";
   cin >> c;
   cout<< "Enter any Character value: ";
   cin >> ch;
   cout<< "Enter any boolean value: ";
   cin >> flag;
   
   //Printing eac data type
   cout<<"Value of Integer is: "<<a<<endl; 
   cout<<"Value of Float is: "<<b<<endl; 
   cout<<"Value of Double is: "<<c<<endl; 
   cout<<"Value of Character is: "<< ch<<endl; 
   cout<<"Value of flag is: "<< flag<<endl; 
return 0;
}
/*  OUTPUT
Enter any integer value: 4
Enter any floating point value: 9.1
Enter any double floating point value: 2.76456
Enter any Character value: r
Enter any boolean value: 1
Value of Integer is: 4
Value of Float is: 9.1
Value of Double is: 2.76456
Value of Character is: r
Value of flag is: 1
*/
