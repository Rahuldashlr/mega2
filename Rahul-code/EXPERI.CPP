#include <iostream>
using namespace std;

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