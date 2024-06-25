//set:- 1. Unique element - No two element can be equal.
//set:- 2. Immutable - We can add or remove element from a set, but we can't change the values of existing element.
//set:- 3. Sorted order - By default order is in increasing order
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> set1 ={1,1,2,2,2,3,3};


    for(int i : set1){
        cout<< i << " ";
    }
    cout<<endl;
    //iterate over the element of the set.
    int count = 0;
    for (set<int>::iterator i = set1.begin(); i != set1.end(); ++i) {
        ++count;
    }
     std::cout << "The number of unique elements in the set is: " << count << std::endl;

  

    // Count the number of elements in the set
    // int count = set1.size();
    // cout << "The number of unique elements in the set is: " << count << endl;

    return 0;
}

    
