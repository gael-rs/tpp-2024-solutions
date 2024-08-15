// K Z N
#include <bits/stdc++.h>
using namespace std;

#define ll long long

short ind_min_binario(ll num, short indice = 0) {
    if (num % 2 == 1) {
        return indice;
    }
    else {
        return ind_min_binario(num / 2, indice + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    ll ancestros = 1;

    while (true) {
        int indice_menor = ind_min_binario(n);
        n = n + pow(2, indice_menor);
        if (n == m) {
            cout << ancestros;
            break;
        }
        else if (n > m) {
            cout << "-1";
            break;
        }
        ancestros++;
    }

    return 0;
}