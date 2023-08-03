#include<stdio.h>
#include<conio.h>

int binary_search(int a[30],int data,int less,int greater)
{
    int mid;
    if(less<=greater)
    {
        mid=(less+greater)/2;
        if(a[mid]==data)
        return mid;
        else
        if(a[mid]>data)
        return binary_search(a,data,less,mid-1);
        else
        binary_search(a,data,mid+1,greater);
    }
}
  

  void main()
  {
    int i,a[20],n,data;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter search element which are present in the list:");
    scanf("%d",&data);

    printf("Data found at %d",binary_search(a,data,0,n-1));

    getch();

  }