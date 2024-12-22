/*Viết chương trình yêu cầu người dùng nhập vào 5 số nguyên,
tiến hành đếm số lượng số chẵn và số lượng số lẻ trong các số đã nhập và in kết quả ra màn hình.*/
#include<stdio.h>
int main()
{
    int n;
    int countEven = 0;
    int countOdd =0;
    for(int i =1; i<=5; i++)
    {
        printf("Nhập số nguyên thứ %d: ",i);scanf("%d",&n);
        if(n%2==0)
        {
            countEven++;
        }else
        {
            countOdd++;
        }
    }
    printf("Số lượng số chẵn là: %d\n",countEven);
    printf("Số lượng số lẻ là: %d",countOdd);
}