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

//define function
bool canConstruct(string ransomNote, string magazine) {
    map<char,int> collect;
    for(int i = 0; i < magazine.size(); i++)
        collect[magazine[i]]++;
    for(int i = 0; i < ransomNote.size(); i++)
    {
        auto idx = collect.find(ransomNote[i]);
        if(idx==collect.end()||idx->second <= 0)
           return false;
        collect[ransomNote[i]]--;
    }
    return true;
        
}
int main()
{
    FIO;
    string a , b;
    cin>>a>>b;
    cout<<canConstruct(a,b);
}
