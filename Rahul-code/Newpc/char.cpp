#include <iostream>
using namespace std;

// In the below code we use the following to determine the a-z & A-Z & 1-9 using the folowing veriables.
int main(){

    char a;

    cout << "PLEASE ENTER ANY KEY" << endl;
    cin >> a;
  
    if (a>='A' && a<='Z') {
    cout << "UPPER CASE"<<endl;
    }


    else if ( a>='0' && a<='9') {
    cout << " Numbers " <<endl; 
    }
return 0;
 
}