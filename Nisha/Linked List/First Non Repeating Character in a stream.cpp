#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
  string FirstNonRepeating(string A)
  {
    string s = "";
    queue<char> q;
    vector<int> v(26, 0);
    for (auto i : A) 
    {
      q.push(i);
      v[i - 'a']++;
      while (!q.empty() and v[q.front() - 'a']>1) q.pop();
      s += q.empty()?'#':q.front();
    }
    return s;
  }
};

int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    string A;
    cin>>A;
    Solution obj;
    string ans=obj.FirstNonRepeating(A);
    cout<<ans<<"\n";
  }
  return 0;
  
}