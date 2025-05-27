#include <iostream>
using namespace std;

const int MAX_C = 11;   // because c <= 10
const int MAX_XY = 101; // coordinate limit

int bright[MAX_C][MAX_XY][MAX_XY] = {};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, c;
    cin >> n >> q >> c;

    // fill the brightness grids
    for (int i = 0; i < n; i++)
    {
        int x, y, s;
        cin >> x >> y >> s;

        for (int t = 0; t <= c; t++)
        {
            int b = (s + t) % (c + 1);
            bright[t][x][y] += b;
        }
    }
    
    
}
