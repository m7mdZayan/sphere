#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double R,V;
    cin >> R;
    V = (4.0 / 3)*( 3.14159) * (R * R *R);
    cout << "VOLUME = " << fixed << setprecision(3) << V << endl;
    return 0;
}
