#include<iostream>
using namespace std;
int main()
{
  int n,insert,index;
  cout<<"Enter size of array - ";
  cin>>n;
  int arr[n+1];
  for (int i=0; i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter index number to insert at\n";
  cin>>index;
  cout<<"Enter element to insert\n";
  cin>>insert;
  if(index > n-1)
    cout<<"Index out of size\n";
  else
  {
    for(int i = n ; i > index ; i--)
      arr[i] = arr[i-1];
    arr[index] = insert;
    for (int i=0; i < n+1; i++)
    {
      cout<<arr[i];
    }
  }
}
