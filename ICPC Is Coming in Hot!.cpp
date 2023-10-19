
/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Github      :   github.com/IsrakAhmed
    Institution :   University of Rajshahi

*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define asort(v) sort((v).begin(),(v).end())        // Ascending Order Sort
#define dsort(v) sort((v).rbegin(),(v).rend())     // Descending Order Sort
#define pb push_back
#define sum(v) accumulate(v.begin(), v.end(), 0)
#define gcd __gcd
#define toLower(s) transform((s).begin(),(s).end(),(s).begin(),::tolower)       //toLower(s);
#define toUpper(s) transform((s).begin(),(s).end(),(s).begin(),::toupper)       //toUpper(s);
#define rmvChar(s,c) (s).erase(remove((s).begin(), (s).end(), c), (s).end())    //remove specific character from string
#define rmvDuplicates(x) (x).erase(unique((x).begin(), (x).end()), (x).end());  //works only for sorted string
#define all(x) (x).begin(),(x).end()
#define endl "\n"


void solution()
{
    string s,temp;
    cin >> s;

    temp = s;
    ll sizeOfTemp = temp.size();

    ll rTimes = 0;
    char maxRNum;

    for(ll i = 1; i < s.size(); i++)
    {
        rmvChar(temp,s[i]);
        ll presentTempSize = temp.size();
        ll def = sizeOfTemp - presentTempSize;
        sizeOfTemp = presentTempSize;

        if(rTimes < def)
        {
            rTimes = def;
            maxRNum = s[i];
        }
        else if(rTimes == def && maxRNum > s[i])
        {
            rTimes = def;
            maxRNum = s[i];
        }
    }

    cout << maxRNum << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
