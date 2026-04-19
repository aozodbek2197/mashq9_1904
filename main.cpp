// 1-mashq
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = s.size()-1; i >= 0; i--)
        cout << s[i];
}
// 2-mashq
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    cout << (s == r);
}
// 3-mashq
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 0;
    for(char ch : s)
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            c++;
    cout << c;
}
