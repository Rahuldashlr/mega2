#include <iostream>
using namespace std;

// printing from 1-4  by inputing the  number = n.
int main() { // we write int main ();


int n; //  n is a input as a integer from user. which will hold the input value from the user
cin>>n; // The program then uses the cin >> n syntax to wait for the user to enter a number.

int i=1; // The program then initializes an integer variable i to 1.

while(i<=n) {  //The program then uses a while loop to iterate until the condition i <= n is no longer true. 
    
                      
  cout<<i<<""; //Inside the while loop, the program prints the value of i to the console and increments i by 1.
    i=i+1;           

 

}



return 0;

}