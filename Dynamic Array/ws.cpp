#include <iostream>
#include<string.h>
using namespace std;

template <class t>
class Operation<t> {
  t array[];
  
 
};



int main ()
{
    int arrlength, noofqueries;
   
    cin >> arrlength >> noofqueries;
     int arr[arrlength];
    for(int i=0;i<arrlength;i++){
      cin >> arr[i];
    }
     
    // Operation o1;
    // o1.Replace(arr,2,5,8);
    
    std::cin.get();
  return 0;
}
