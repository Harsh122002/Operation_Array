/* Date:25/01
	programe: Traval,Insert,Upadte,Delete element of array
 */


#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100],i,j,n,s,value,size,k;
	clrscr();
	printf("Enter size of array(max size:100): ");
	scanf("%d",&n);
	if(n<100&&n>0){

		for(i=0;i<n;i++)
			{
			printf("Enter value of array: ");
			scanf("%d",&arr[i]);
			}
		}
	printf("click 1 travalprograme array\nclick 2 insert programe array\nclick 3 update programe array\nclick 4 Delete programe array\n ");
	printf("Enter click value: ");
	scanf("%d",&s);

	if(s==1){
		printf("[ ");
		for(j=0;j<n;j++){
			printf("%d ",arr[j]);
			}
		printf("]");
		}
	else if(s==2){
		printf("Enter add array value: ");
		scanf("%d",&value);
		printf("Enter add size of value(max size:98): ");
		scanf("%d",&size);
		for(k=n-1;k>=size;k--){
			arr[k+1]=arr[k];
		}
		arr[size]=value;
		printf("[ ");
		for(j=0;j<=n;j++){
			printf("%d ",arr[j]);
			}
		printf("]");


		}
	else if(s==3){
		printf("Enter add update value: ");
		scanf("%d",&value);
		printf("Enter add size of array update: ");
		scanf("%d",&size);
		arr[size]=value;
		printf("[ ");
		for(j=0;j<n;j++){
			printf("%d ",arr[j]);
			}
		printf("]");

	       }
	else if(s==4){
		  printf("Enter delete value :");
		  scanf("%d",&value);
		  printf("[ ");
		  for(j=0;j<n;j++){
			if(arr[j]==value){
				continue;
				}
			printf("%d ",arr[j]);
			}
		printf("]");

	}
	else{
		printf("Click value select is wrong ");
	}

	getch();
}