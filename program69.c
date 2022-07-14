#include<stdio.h>
#include<stdlib.h>      

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    printf("Elements of array are : \n");
  
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);  
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iSize = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

   printf("Enter elements : \n");
   for(iCnt = 0; iCnt < iSize; iCnt++ )
   {
        scanf("%d",&ptr[iCnt]);
   }

    Display(ptr, iSize);     
    free(ptr);  
    return 0;
}
