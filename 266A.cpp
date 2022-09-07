
#include <iostream>
using namespace std;
int main() 
{
    string b;
    int a, c=0;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        if (b[i] == b[i + 1]) {
            c++;
        }
    }
    cout << c;
}