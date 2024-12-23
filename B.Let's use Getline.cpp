#include<iostream>
   #include <string>

using namespace std;

int main() {
    
    string S;
    
    getline(cin, S);

    string result = "";

    
    for (char c : S) {
        if (c == 'l') {
            break;
        }
        
        if (c != '!') {
            result += c;
        }
    }

    
    cout << result << endl;

    return 0;
}