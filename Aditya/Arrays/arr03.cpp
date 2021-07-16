#include <iostream>
using namespace std;
int main()
{
  int n,missing,i;
  bool check = true;
  cin>>n;
  int arr[n];
  for(i = 0 ; i<n-1 ; i++)
    cin>>arr[i];
  for(i = 0 ; i < n-1 ; i++)
  {
    int t = i+1;
    if(arr[i] != t)
    {
      cout<<i+1;
      check = false;
      break;
    }
  }
  if(check)
    cout<<i+1;
}
