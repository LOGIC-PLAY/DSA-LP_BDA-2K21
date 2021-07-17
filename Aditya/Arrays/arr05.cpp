#include <iostream>
using namespace std;
int main()
{
  int n,k,temp;
  cin>>n>>k;
  int arr[n];
  for(int i = 0; i<n;i++)
    cin>>arr[i];
  while(k--)
  {
      temp = arr[n-1] ;
      for(int i=n-1;i>0;i--)
      {
        arr[i] = arr[i-1];
      }
      arr[0] = temp;
  }
  cout<<"Right Rotate\n";
  for(int i = 0; i<n;i++)
    cout<<arr[i];
}
