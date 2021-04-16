#include <iostream>
#include<string.h>
using namespace std;


class Operation{

  int * arr;
  int arraLength;
  int noOfQueries;

  // public:
  // Operation(int *array,int arrLength,int noofqueries){
  //   for(int i=0;i<arrLength;i++){
  //     arr[i]=array[i];
  //   }
  //   arraLength = arrLength;
  //   noOfQueries = noofqueries;
  // };
  
public:
  int Replace (int arr[],int index,int element,int arrLength) {
  arr[index-1]=element;
  int i=0;
  for (int i = 0; i < arrLength; i++)
  {
    cout << arr[i];
  }
  return 0;
  }

  int Sum(int arr[],int left, int right,int arrLength){
  
    int arrSize;
    int sum=0;
    for(int i=left-1;i<right;i++){
    sum+=arr[i];
    }
  cout << sum << "\n";
  }

  int Reverse(int arra[8], int pos, int arrLength){
    int element;
    element = arra[pos-1];
    arra[pos-1]= arra[pos];
    arra[pos]= element;
        for(int i=0; i < arrLength; i++){
          cout << arra[i] << "\n";
        }
    return 0;
  }


};



int main ()
{
    int arrlength, noofqueries;
   
    cin >> arrlength >> noofqueries;
     int arr[arrlength];
    for(int i=0;i<arrlength;i++){
      cin >> arr[i];
    }
     
    Operation o1;
    o1.Replace(arr,2,5,8);
    
    std::cin.get();
  return 0;
}
