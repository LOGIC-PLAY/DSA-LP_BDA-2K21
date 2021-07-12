#include<iostream>
using namespace std;
int main()
{
  int n,del,index=0;
  cout<<"Enter size of array - ";
  cin>>n;
  int arr[n+1];
  for (int i=0; i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter a number to delete : ";
  cin>>del;
  for(int i = 0; i < n; i++)
  {
    if(arr[i] == del)
      index = i+1;
  }
  if(index)
  {
    for (int i=index-1; i < n; i++)
      arr[i] = arr[i+1];
    for (int i=0; i < n-1; i++)
      cout<<arr[i];
  }
  else
    cout<<"Element not found";
}
