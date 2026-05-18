
#include <iostream>

using namespace std;

int FindPower(int x, int n);

int main(){

	int x=25;
	int n=4;

	cout<<FindPower(x,n);

	return 0;
}

int FindPower(int x, int n){



	if(n==0){
		printf("n=0\n");
		return 1;
	}

	else if(n%2 == 0 ) {
		printf("n is even \n");
		return FindPower(x,n/2)*FindPower(x,n/2);
	}

	else {
		printf("n is odd\n");	
		return x*FindPower(x,(n-1)/2)*FindPower(x,(n-1)/2);}

}