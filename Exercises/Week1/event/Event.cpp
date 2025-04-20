#include <bits/stdc++.h>
using namespace std;
typedef int32_t i32;
typedef int64_t i64;
typedef uint32_t u32;
typedef uint64_t u64;
#define float fliesskommazahlensindboese
#define double einfachnichtbenutzen


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    i32 N, B, H, W, b, w;
    cin >> N >> B >> H >> W;
    i32 mini = INT32_MAX;
    for (i32 i = 0; i < H; i++){
        cin >> b;
        if (b*N > B) continue;
        for (i32 j = 0; j < W; j++){
            cin >> w;
            // valid option
            if (N <= w){
                j = W;
                // new min cost
                mini = min(mini, b*N);
            }
        }
    }
    if (mini != INT32_MAX)
    cout << mini <<endl;
    else cout << "stay home" <<endl;
}