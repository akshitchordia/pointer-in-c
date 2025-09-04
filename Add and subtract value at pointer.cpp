// Name - Akshit Chordia
// PRN - 24070123008
// Batch - EnTC - A1


#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int Arr[]={ 10, 20, 30, 40, 50};
    int*P1 =&Arr[2];
    int*P2 =&Arr[4];
    
    cout<<"The difference between the values at index 4 and 2 is:"<<*P2 - *P1<<endl;
    
     cout<<"The addition of the values of array at index 4 and 2 is:"<<*P2 + *P1<<endl;

    return 0;
}



/*Output:-

The difference between the values at index 4 and 2 is:20
The addition of the values of array at index 4 and 2 is:80

*/
