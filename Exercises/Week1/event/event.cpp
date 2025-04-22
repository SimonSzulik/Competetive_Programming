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

    int p, b, h, w, price, beds, min = INT_MAX;
    cin >> p >> b >> h >> w;

    while(h > 0){
        cin >> price;
        for(int i = w; i > 0; i--){
            cin >> beds;
            if (beds < p){
                continue;
            }
            if (min > price * p){
                min = price * p;
            }
        }
        h--;
    }
    cout << (min <= b ? to_string(min) : "stay home") << endl;
}
