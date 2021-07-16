#include <iostream>
using namespace std;
int main()
{
  int n,x,i,sum;
  bool present = false;
  cin>>n>>x;
  int arr[n];
  for(i = 0 ; i < n ; i++)
    cin>>arr[i];
  for(i = 0 ; i < n ; i++)
    {
      for(int j = 0 ; j < n && j != i ; j++)
      {
        sum = arr[i] + arr[j];
        if(sum == x)
          present = true;
      }
    }
  if(present)
    cout<<"Exists";
  else
    cout<<"Not exists";
}
