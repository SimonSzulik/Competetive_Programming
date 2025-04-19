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

    i32 participants, budget, hotels, weeks, price, beds, bestPrice = INT_MAX;
    cin >> participants >> budget >> hotels >> weeks;

    for(int h = 0; h < hotels; h++){
        cin >> price;
        if (price*participants <= budget){
            for(int b = 0; b < weeks; b++){
                cin >> beds;
                if(beds >= participants){
                    bestPrice = min(bestPrice,price*participants);
                }
            }
        }
    }

    if (bestPrice != INT_MAX){
        cout << bestPrice << endl;
    }else{
        cout << "stay home" << endl;
    }
}
