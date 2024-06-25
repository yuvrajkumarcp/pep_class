#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> num ={1,2,3,4};
    vector<int> :: iterator itr;
      itr = num.begin();
      cout<<*itr;



    //add

   // num.push_back(10);

  

    //iterators-> They are used to point to the memory address of a vector element,
    // they somehow act like pointer.

  
    for (int item : num){
        cout<<item<<" ";
    }
    return 0;
}