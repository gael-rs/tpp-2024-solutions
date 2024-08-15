// K Z N 
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int l, r, z;
    cin >> l >> r >> z;

    int lon = r - l + 1;
    vector<int> vec;

    for (int i = l; i <= r; ++i) {
        vec.push_back(i);
    }

    int minimo = 40;
    int a, b;
    bool encontrado = false;

    for (int i = 0; i < lon; ++i) {
        for (int j = i + 1; j < lon; ++j) {
            if ((vec[i] + vec[j] == z)) {
                minimo = min(abs(vec[i] - vec[j]), minimo);
                encontrado = true;
                a = vec[i];
                b = vec[j];
            }
        }
    }

    if (encontrado) {
        cout << max(a, b) << " " << min(a, b);
    }
    else {
        cout << "no hay respuesta";
    }
    return 0;
}
