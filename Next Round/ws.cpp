#include <iostream>
#include<string.h>

using namespace std;

int main ()
{
  int arrLength,position;
  int count=0;

  cin >> arrLength >> position;

  int arr[arrLength];
  
  
  for(int i=0; i<arrLength; i++){
    cin >> arr[i];
  }

  int element = arr[position];

  for(int i=0;i<arrLength;i++){
    if(arr[i]>=element){
      count++;
    }
  }

  cout << count << "\n" ;

  return count;
}
