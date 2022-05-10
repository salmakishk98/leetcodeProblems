#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string  str;
#define endl '\n'
#define f first
#define s second
#define pos_mod(a,d)     ((a%d) + d)%d
#define pi                3.14159265359
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define input(name) freopen(name,"r",stdin);
#define output(name) freopen(name,"w",stdout);
// define global variable
string s;
//define function
int romanToInt(string s) {
    map<char,int> roman={{'I',1},{'V' ,5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
       if(i<s.size()-1 && roman[s[i]]<roman[s[i+1]])
          ans-=roman[s[i]];
        else
            ans+=roman[s[i]];  
    }
    return ans;
 
}
int main()
{
    FIO;
    cin>>s;
    cout<<romanToInt(s);
}
