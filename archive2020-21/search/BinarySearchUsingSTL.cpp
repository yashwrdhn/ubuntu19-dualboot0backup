#include <iostream>

#include <algorithm>
#include <forward_list>

using namespace std;




int main()
{
	
	forward_list<int> f_List =  { 8,1,2,3,5,45};
	



	if(binary_search(f_List.begin(),f_List.end(),3)){
		printf("fount it %d",binary_search(f_List.begin(),f_List.end(),3));
	}
	else{
		printf("not found" );
	}

	

	return 0;
}



