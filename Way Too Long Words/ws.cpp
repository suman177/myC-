#include <iostream>
#include<string.h>
using namespace std;

int main ()
{
    string word;
     int num;
    cin >> num;
    string words[num];

   
    for(int i=0;i<num;i++){
      cin >> words[i];
    }

    for(int i=0;i<num;i++){
      
       word=words[i];
       int wlength = word.length();
       if(wlength>10){
          char front= word.front();
          char last= word.back();
          int lenght= word.length() - 2;
          cout << front << lenght << last << "\n"; 
        }
        else{
          cout << word << "\n";
        }
    }

  return 0;
}


