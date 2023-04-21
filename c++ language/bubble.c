#include<stdio.h>
// #include
void read(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter the element at %d index\n",i);

            scanf("%d",arr[i]);
        
    }
}
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void bubble(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    for(int j=0;j<size-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

  }
}
int main(){
    int arr[5]={10,5,8,90,54};
   //read(arr,5);
   display(arr,5);
   printf("Array after sorting\n");
   bubble(arr,5);
   display(arr,5);


    
    return 0;
}