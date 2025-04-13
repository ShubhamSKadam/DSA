#include <iostream>
#include <string>
using namespace std;

bool checkPermutation(string s1, string s2)
{

    bool isPresent = true;
    for (int i = 0; i < s1.size(); i++)
    {
        bool isTempPresent = false;
        for (int j = 0; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
            {
                isTempPresent = true;
                break;
            }
        }
        isPresent = isTempPresent && isPresent;
        //     if (!isTempPresent)
        //     {
        //         isPresent = false;
        //     }
        //     else
        //     {
        //         isPresent = true;
        //     }
    }
    return isPresent;
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
        for (int i = sizeOfs1; i < s2.size(); i++)
        {
            string tempStr = s2.substr(i - sizeOfs1, sizeOfs1);
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