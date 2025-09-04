// Name - Akshit Chordia
// PRN - 24070123008
// Batch - EnTC - A1



#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string:" << endl;
    cin >> s;

    char* ptr = &s[0];

    cout << "Characters os string entered are:" << endl;
    while (*ptr != '\0') {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}


/*Output:-

Enter a string:
akshit
Characters using pointer (while loop):
a
k
s
h
i
t
*/
