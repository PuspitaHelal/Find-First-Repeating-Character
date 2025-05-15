Given a string of characters, find the first repeating character.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains a single string of characters.

Constraints

1 <= T <= 1000
'a' <= str[i] <= 'z'
1 <= len(str) <= 104

Output Format

For each test case, print the first repeating character, separated by newline. If there are none, print '.'.

Inputcopy	Outputcopy
4
datastructures
algorithms
smartinterviews
hackerrank
a
.
s
a




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int freq[26] = {0};


        for (char ch : s) {
            freq[ch - 'a']++;
        }


        char result = '.';
        for (char ch : s) {
            if (freq[ch - 'a'] > 1) {
                result = ch;
                break;
            }
        }

        cout << result << "\n";
    }
    return 0;
}
