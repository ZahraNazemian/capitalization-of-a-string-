
#include <iostream>
#include <cstring>
using namespace std;
int main (){
    char c;
    while (cin.get(c))
    { if (c >= 'a' && c <= 'z') c += 'A' - 'a'; // capitalize c
        cout.put(c);
        if (c == '\n') break;
        
    }
    return 0;
}
