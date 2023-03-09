#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int S[N];
        for (int i = 0; i < N; i++) {
            cin >> S[i];
        }

        sort(S, S+N); // sort the array in ascending order

        int min_diff = INT_MAX; // initialize minimum difference to maximum possible value

        for (int i = 0; i < N-1; i++) {
            int diff = S[i+1] - S[i]; // calculate difference between adjacent horses
            if (diff < min_diff) {
                min_diff = diff; // update minimum difference if current difference is smaller
            }
        }

        cout << min_diff << endl; // output minimum difference
    }

    return 0;
}
