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
    int num_of_tests, string_length, query_count;
    int query, int_skip;
    string str_skip;
    cin >> num_of_tests;

    while(num_of_tests > 0){
        cin >> string_length;
        cin >> query_count;
        cin >> str_skip;

        for(int i = 0; i < query_count; i++){
            cin >> query;
            switch (query) {
                case 1:
                    cout << (string_length > 0 ? "no" : "yes") << endl;
                    break;
                case 2:
                    cout << string_length << endl;
                    break;
                case 3:
                    cin >> int_skip;
                    string_length--;
                    break;
                case 4:
                    cin >> int_skip >> str_skip;
                    string_length++;
                    break;
                case 5:
                    cin >> int_skip >> int_skip;
                    break;
            }
        }
        num_of_tests--;
    }
}
