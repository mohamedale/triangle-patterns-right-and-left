#include <iostream>
using namespace std;

int main() {
    
    for (int i=7; i>=1; i--){
        for (int j=1; j<=7-i; j++){
            cout << " ";
        }
        for (int k=1; k<=i; k++){
            cout << k;
        }
        cout << endl;
    }

    /*
        Output:
            
        1234567
         123456
          12345
           1234
            123
             12
              1
    */

    return 0;
}