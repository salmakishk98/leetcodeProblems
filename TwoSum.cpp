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
int main()
{
    FIO;
    int x, target;
    vector<int> nums;
    while (cin>>x||x==0)
    {
        nums.push_back(x);   
    }
    cin>>target;
    map<int,int> search;
    for(int i = 0; i < nums.size(); i++)
    {
        search[nums[i]] = i;
    }
    for(int i = 0; i < nums.size(); i++)
    {
        auto idx = search.find(target-nums[i]);
        if(idx==search.end() ||i==idx->second)
            continue;
        else  
        {
            cout<<"["<<i<<","<<idx->second<<"]";
            break;
        }
    }
    
}
