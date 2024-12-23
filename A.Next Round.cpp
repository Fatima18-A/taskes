#include<iostream>
#include <array>

using namespace std;

int main() {
    
    int n, k;
    cin >> n >> k;

    array <int,n> scores;
    
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    
    int thresholdScore = scores[k - 1];
    int count = 0;

    
    for (int score : scores) {
        if (score >= thresholdScore && score > 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
