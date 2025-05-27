#include <iostream>
#include <string>
using namespace std;

bool checkPermutation(string s1, string s2)
{
    vector<int> freqS1(26, 0);
    vector<int> freqS2(26, 0);

    for (int i = 0; i < s1.size(); i++)
    {
        freqS1[s1[i] - 'a']++;
    }

    for (int i = 0; i < s2.size(); i++)
    {
        freqS2[s2[i] - 'a']++;
    }

    return freqS1 == freqS2;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;

        cin >> s1 >> s2;

        int sizeOfs1 = s1.size();
        bool ans = false;
        for (int i = sizeOfs1; i <= s2.size(); i++)
        {
            string tempStr = s2.substr(i - sizeOfs1, sizeOfs1);
            cout << tempStr << endl;
            ans = checkPermutation(s1, tempStr);
            if (ans)
            {
                cout << "True" << endl;
                break;
            }
        }
        if (!ans)
        {
            cout << "False" << endl;
        }
    }
}