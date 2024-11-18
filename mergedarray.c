#include<stdio.h>
void main()
{
	int a[10],b[10],c[20];
	int i,j,n,m,k,size;
	printf("Enter the size of the first array\n");
	scanf("%d",&n);
	printf("Enter the size of the second array\n");
	scanf("%d",&m);
	printf("\n Enter the first array elements : \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Enter the second array elements : \n");
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	printf("The first array elements : \n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\nThe second array elements : \n");
	for(i=0;i<m;i++)
	printf("%d\t",b[i]);
	size=m+n;
	for(i=0;i<n;i++)
	c[i]=a[i];
	for(i=0;i<m;i++)
	c[i+n]=b[i];
	for(i=0;i<size;i++)
	{
	for(j=i+1;j<size;j++)
		{
		if(c[i]>c[j])
			{
			k=c[i];
			c[i]=c[j];
			c[j]=k;
			}
		}
	}
	printf("\n The merged array is : \n");
	for(i=0;i<size;i++)
	printf("%d\t",c[i]);
}


