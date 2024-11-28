#include<stdio.h>

int main()
{
	int arr[5]={1,4,6,8,7};
	int n ;
	scanf("%d",&n);
	for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++)
	{
		if(n == arr[i])
		{
			printf("\nVi tri phan tu trong mang la : %d",i);
			
		}
		break;
		
	}
	for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++)
	{
		if(n != arr[i])
		{
			printf("\nPhan tu khong ton tai trong mang...");
			
		}
		break;
		
	}
	return 0 ; 
	
	
}