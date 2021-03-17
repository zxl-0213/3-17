#include"Sort.h"
int main()
{
	int a[10] = { 4,5,3,6,2,8,9,7,1,0 };
	
	//InsertSort(a, sizeof(a) / sizeof(a[0]));
	print(a, sizeof(a)/sizeof(a[0]));


	//ShellSort(a, sizeof(a)/sizeof(a[0]));
	//print(a, sizeof(a) / sizeof(a[0]));

	//SelectSort(a, 10, 0, 9);
	//print(a, sizeof(a) / sizeof(a[0]));



	//HeapSort(a,10);
	//print(a, sizeof(a) / sizeof(a[0]));

	//ButtleSort(a, 10);
	//print(a, sizeof(a) / sizeof(a[0]));

	
	QuickMethod(a, 0, 9);
	print(a, sizeof(a) / sizeof(a[0]));


	return 0;
}