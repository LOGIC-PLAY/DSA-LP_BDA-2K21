#include <iostream>
using namespace std;
int main()
{
  int size;
  cin>>size;
  int arr[size];
  for(int i = 0; i<size ; i++)
    cin>>arr[i];
  for(int key = 0; key<size ; key++)
  {
    bool leader = true;
    for(int check = key+1 ; check < size ; check++)
    {
      if(arr[key] < arr[check])
      {
        leader = false;
        break;
      }
    }
    if(leader)
      cout<<arr[key]<<endl;
  }
}
