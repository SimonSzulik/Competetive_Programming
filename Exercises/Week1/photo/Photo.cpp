#include <bits/stdc++.h>
using namespace std;
typedef int32_t i32;
typedef int64_t i64;
typedef uint32_t u32;
typedef uint64_t u64;


struct Person {
    string name;
    int x, y;
    double angle() const {
        return atan2(y, x);
    }
    //Euklid Distance without sqrt
    int64_t distance() const {
        return int64_t(x) * x + int64_t(y) * y;
    }
};


int main() {
    vector<Person> people;
    string name;
    int x, y;
    while (cin >> name >> x >> y){
        people.push_back({name, x, y});
    }

    // Sort angle first then distance, if the angle is the same
    sort(people.begin(), people.end(), [](const Person& a, const Person& b){
       double angleA = a.angle();
       double angleB = b.angle();

       if (angleA != angleB)
           return angleA > angleB;
       return a.distance() < b.distance();
    });

    for (const auto& person : people) {
        cout << person.name << endl;
    }
}