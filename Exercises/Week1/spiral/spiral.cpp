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
    vector<int> nums;
    int total_rows, total_cols, helper;
    int index = 0;

    cin >> total_rows;
    cin >> total_cols;

    for (int i = 0; i < total_rows * total_cols; i++) {
        cin >> helper;
        nums.push_back(helper);
    }

    int working_rows = total_rows;
    int working_cols = total_cols;
    int nums_printed = 0;

    while(nums_printed < total_rows*total_cols) {
        for (int i = 0; i < working_cols; i++) {
            cout << nums[index] << " ";
            nums_printed++;
            if (i < working_cols - 1) {
                index++;
            }
        }
        for (int j = 0; j < working_rows; j++) {
            if (j < working_rows - 1) {
                index += total_cols;
                cout << nums[index] << " ";
                nums_printed++;
            }
        }
        for (int i = 0; i < working_cols; i++) {
            if (i < working_cols - 1 && working_rows > 1) {
                index--;
                cout << nums[index] << " ";
                nums_printed++;
            }
        }
        for (int j = 0; j < working_rows - 1; j++) {
            if (j < working_rows - 2 && working_cols > 1) {
                index -= total_cols;
                cout << nums[index] << " ";
                nums_printed++;
            }
        }
        working_rows -= 2;
        working_cols -= 2;
        index++;
    }
    cout<<endl;
}
