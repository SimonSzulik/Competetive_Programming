#include <bits/stdc++.h>
using namespace std;
typedef int32_t i32;
typedef int64_t i64;
typedef uint32_t u32;
typedef uint64_t u64;
#define float fliesskommazahlensindboese
#define double einfachnichtbenutzen


bool is_matching(char a, char b){
    return (a == '(' && b == ')') ||
           (a == '[' && b == ']') ||
           (a == '{' && b == '}');
}


// Minimum insertions to make s a valid bracket sequence
i32 min_ops_valid(const string& s){
    stack<char> stk;
    i32 unmatched_close = 0;
    for (char c : s){
        if (c == '(' || c == '[' || c == '{') {
            stk.push(c);
        } else {
            if (!stk.empty() && is_matching(stk.top(), c)){
            stk.pop();
            } else {
                unmatched_close++;
            }
        }
    }

    return unmatched_close + stk.size();
}


// Minimum insertions to make s a palindrome with bracket pairs
int min_ops_palindrome(const string& s){
    return s;
}


bool is_palindrome(const string& s){
    int n = s.size();
    for(int i = 0; i < n / 2; ++i)
        if(s[i] != s[n - i - 1])
            return false;
    return true;
}


bool is_valid_bracket_sequence(const string& s){
    stack<char> stk;
    for(char c: s){
        if(c == '(' || c == '{' || c == '[')
            stk.push(c);
        else {
            if(stk.empty()) return false;
            if(!is_matching(stk.top(), c))
                return false;
            stk.pop();
        }
    }
    return stk.empty();
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    i32 t;
    cin >> t;
    while(t--) {
        i32 n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while(q--){
            i32 type;
            cin >> type;
            if(type == 1) {
                if(is_palindrome(s) && is_valid_bracket_sequence(s))
                    cout << "yes\n";
                else
                    cout << "no\n";
            }
            else if(type==2) {
                i32 ops1 = min_ops_valid(s);
                //i32 ops2 = min_ops_palindrome(s);
                //cout << max(ops1, ops2) << endl;
                cout << ops1 << '\n';
            }
            else if(type==3) {
                i32 i;
                cin >> i;
                s.erase(i-1, 1);
            }
            else if(type==4) {
                i32 i;
                char b;
                cin >> i >> b;
                s.insert(s.begin() + i-1, b);
            }
            else if(type==5) {
                i32 i, j;
                cin >> i >> j;
                swap(s[i-1], s[j-1]);
            }
        }
    }
}