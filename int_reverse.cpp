//integer reverse
#include <iostream>
using namespace std;
int main(){
	static int sum=1;
	int i=1;
//	1x2x3x4x5x6x7x8x9
while(i<=10)
{
	sum=sum*i;
	i++;
	
}
cout<<sum;	
	
	
	return 0;
}
