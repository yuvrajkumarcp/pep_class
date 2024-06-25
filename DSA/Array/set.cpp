//set:- 1. Unique element - No two element can be equal.
//set:- 2. Immutable - We can add or remove element from a set, but we can't change the values of existing element.
//set:- 3. Sorted order - By default order is in increasing order
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> set1 ={3,4,5,6,2, 5};
    set<int, greater<int>> set2 = {3,4,5,6,2, 5};

    set1.insert(20);
    set1.erase(5);

    for(int i : set1){
        cout<< i << " ";
    }
    cout<<endl;
     for(int i : set2){
        cout<< i << " ";
    }

    
    
}