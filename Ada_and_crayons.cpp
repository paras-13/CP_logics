//Rating - 109
/* In one step we can flip any segment of consecutive crayons. After flipping a segment, all crayons pointing downwards will point upwards and visceversa
To find minimum number of steps to make the array of crayons beautiful */


// Logic --> To check the total number of unequal pairs, if even (divide total pair by2) else odd (total pair/2 +1)

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t, j, count;
    cin>> t;
    while(t--)
    {
        count =0;
        string s;
        cin >> s;
        for(int i=0; i<s.length()-1; i++)
        {
            if(s[i] != s[i+1])
            {
                count ++;
            }
        }
        if(count%2 == 0) cout << count/2 << endl;
        else cout << count/2 +1 << endl;
    }
    return 0;
}
