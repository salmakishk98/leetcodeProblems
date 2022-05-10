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

 // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
bool isPalindrome(ListNode* head) {
   vector<int> store;
   while (head->next!=nullptr)
   {
       store.push_back(head->val);
       head = head->next;
   }
   int st = 0, en = store.size()-1;
   while(st <= en)
   {
       if(store[st]!=store[en])
        return false;
       st++;
       en--;
   }
   return true;
     
}
int main()
{
    FIO;
    
}
