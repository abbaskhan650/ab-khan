#include <stdio.h>
#include <conio.h>

main()
{
	int no=0;
	printf("how many inputs do you want to give: ");
	scanf("%d",&no);
	
	int num[no];
	
	
	for(int i=0;i<no;i++)
	{
		printf("enter %d value :",(i+1));
		scanf("%d",&num[i]);
		
}

   printf("\nthe values of a numeric array is : \n");

 for(int i=0;i<no;i++)
 {
 	
 	printf("%d \t",num[i]);
 	
 	
 }
}
