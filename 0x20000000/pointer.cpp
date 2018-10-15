#include <stdio.h>

using namespace std;

void func(int *x){
	int temp = 0;
	temp = *x;
}

int main(){
	int a = 1;
	func(&a);
}
