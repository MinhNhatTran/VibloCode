#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0, user = 0;
    string s;
    
    while(getline(cin, s)) {
        if(s[0] == '+')
            user++;
        else if(s[0] == '-')
            user--;
        else {
            int c = 0;
            for(int i = 0; i < s.size(); ++i) {
                if(s[i] == ':')
                    break;
                c++;
            }
            count += (s.size() - c - 1) * user;
        }
    }
    cout << count << endl;

    return 0;
}
