#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<int> un_set1 ={3,4,5,6,2,5};
    //unordered_set<int, greater<int>> un_set2 = {3,4,5,6,2, 5};

    // set1.insert(20);
    // set1.erase(5);

    for(int i : un_set1){
        cout<< i << " ";
    }  
    // cout<<endl;
    //  for(int i : un_set2){
    //     cout<< i << " ";
    // }
}