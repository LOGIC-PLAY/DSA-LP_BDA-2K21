#include <iostream>
using namespace std;
int main()
{
  int n , check=0;
  cin>>n;
  int arr[n];
  for(int i = 0; i<n ;i++)
    cin>>arr[i];
  for(int i = 0 ; i<n ; i++)
  {
    check = check ^ arr[i];
  }
  cout<<check;
}
