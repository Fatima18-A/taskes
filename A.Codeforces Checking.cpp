#includ<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    Char l[] = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};

    
    for (int i = 0; i < t; i++) {
        char c;
        cin >> c;

        if (l.find(c) !=l.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
    