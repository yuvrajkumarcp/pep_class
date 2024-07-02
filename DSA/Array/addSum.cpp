#include <iostream>
using namespace std;

// int add(int a, int b) {
//     int add = a+b;
// 	return add;
// }

int main(){

	int n;
	cout<<"enter any integer for add";
	cin>> n;
	int add =0;
	for (int i=0; i<=n; i++){
		add = add + i;
	}
	cout<<add;
	
	
	
	return 0;
}