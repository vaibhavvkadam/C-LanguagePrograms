// Input : 4
// Output : 10  (1+2+3+4)

// Input : 5
// Output : 15  (1+2+3+4+5)



#include<stdio.h>

                int Summation(int iNo)
                {
                    int iSum = 0;
                    int iCnt = 0;

                    if(iNo < 0)
                    {
                        iNo = -iNo;
                    }
                    //          1               2           3
                     for(iCnt = 1; iCnt<= iNo; iCnt++)
                    {
                        iSum = iSum + iCnt;    // 4
                    }
                    return iSum;
                }

                int main()
                {
                    int iValue = 0;
                    int iRet = 0;

                    printf("Enter number\n");
                    scanf("%d",&iValue);

                    iRet = Summation(iValue);
                    printf("Summation is : %d\n",iRet);

                    return 0;
                }


/*

iCnt = 1
iCnt = 2
iCnt = 3
iCnt = 4

iSum = 0

iSum = iSum + 1;


iSum = iSum + 2;


iSum = iSum + 3;


iSum = iSum + 4;

*/



















