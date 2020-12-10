#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a;
    for (b = 1, b < a; b++;)
    {
        if (a % b == 0) {
            cout << a / b;
            break;
        }

    }
}