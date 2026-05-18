#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool is_odd(int n){
	return (n%2 == 1);
}

int main(){


vector<int> vec = {10,20,30,45,50,20,25};
vector<int> vec2(7) ;
vector<int> vec3(7) ;

copy(vec.begin(), vec.end(),vec2.begin());
cout<<vec2.front()<<"\n";

copy_n(vec.begin(),3,vec3.begin());
cout<<vec3.back()<<"\n";
vec3.clear();

copy_if(vec.begin(),vec.end(),vec3.begin(),is_odd);
cout<<vec3.front()<<"\n";

//assign values
// vec2.clear();
fill(vec2.begin(), vec2.end(),1);
cout<<vec2.front()<<" "<<"\n";
fill_n(vec2.begin(),2,4);
cout<<vec2.front()<<" "<<"\n";

	return 0;
}