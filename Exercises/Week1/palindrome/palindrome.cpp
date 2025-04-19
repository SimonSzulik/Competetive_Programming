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

    i32 testcases, length, queries, query, buffer;
    string testcase;

    cin >> testcases;

    while (testcases > 0){
        cin >> length >> queries >> testcase;

        for(int i = 0; i < queries; i++){
            cin >> query;
            switch (query) {
                case 1:
                    cout << (length > 0 ? "no" : "yes") << endl;
                    break;
                case 2:
                    cout << length << endl;
                    break;
                case 3:
                    cin >> buffer;
                    length--;
                    break;
                case 4:
                    cin >> buffer >> buffer;
                    length++;
                    break;
                case 5:
                    cin >> buffer >> buffer;
                    break;
            }
        }
        testcases--;
    }
}
