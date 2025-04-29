// einmal mit allem bitte
#include <bits/stdc++.h>
// wer will schon immer std:: schreiben
using namespace std;
// schreibfaul aber wissen was drin ist
typedef int32_t i32;
typedef int64_t i64;
typedef uint32_t u32;
typedef uint64_t u64;
// besser ist das
#define float fliesskommazahlensindboese
#define double einfachnichtbenutzen
// und los

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<char> brackets;

}

bool is_open(char c) {
    return c == '(' || c == '{' || c == '[' || c == '<';
}

bool is_closed(char c) {
    return c == ')' || c == '}' || c == ']' || c == '>';
}

char match(char closing) {
    switch (closing) {
        case ')': return '(';
        case '}': return '{';
        case ']': return '[';
        case '>': return '<';
        default:  return '\0';
    }
}
