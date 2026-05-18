#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct points{
	int x,y,z;
};

bool comp(struct points n1,struct points n2){

	return  n1.x > n2.x ;
}

int main(){

	//minimum of two
	cout<<min(3,4)<<"\n";

	//max of two
	cout<<max(5,6)<<"\n";

	//min/max using a comparator function
	struct points a = {1,2,3};
	struct points b = {9,8,7};

	struct points point3 = min(a,b,comp);
	struct points point4 = max(a,b,comp);

	cout<<point3.x<<" "<<point3.y<<" "<<point3.z<<"\n";
	cout<<point4.x<<" "<<point4.y<<" "<<point4.z<<"\n";


	vector <int> v = {3,21,76,30,4,5,06};
	//smallest element from a range 
	cout<<*min_element(v.begin(),v.end())<<"\n";
	cout<<*max_element(v.begin(),v.end())<<"\n";

	//comp functions can be used with vectors also look it up

	return 0;
}