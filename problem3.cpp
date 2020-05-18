#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, b, p, f, r = 0, c, h;
    cin>>t;
    while (t--)
    {
        cin>>b>>p>>f;
        cin>>h>>c;
        if (h > c)
        {
            if ((b / 2) >= p)
            {
                r = p * h;
                b = (b / 2) - p;
                if (b >= f)
                {
                    r = r + f * c;
                }
                else
                {
                    r = r + b * c;
                }
            }
            else
            {
                r = (b / 2) * h;
            }
        }
        else
        {
            if ((b / 2) >= f)
            {
                r = f * c;
                b = (b / 2) - f;
                if (b >= p)
                {
                    r = r + p * h;
                }
                else
                {
                    r = r + b * h;
                }
            }
            else
            {
                r = (b / 2) * c;
            }

        }
        cout<<r<<"\n";
    }
    return 0;
}
