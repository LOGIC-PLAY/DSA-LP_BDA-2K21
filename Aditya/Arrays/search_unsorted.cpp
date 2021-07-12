#include <iostream>
using namespace std;
int main()
{
  int n,search,location = 0;
  cout<<"Enter size of array - ";
  cin>>n;
  int arr[n];
  cout<<"Enter elements of array\n";
  for (int i=0; i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter nmber to be searched\n";
  cin>>search;
  for(int i = 0; i < n; i++)
  {
    if(arr[i] == search)
      location = i+1;
  }
  if(location)
    cout<<"Found at - "<<location;
  else
    cout<<"Not found";
}
