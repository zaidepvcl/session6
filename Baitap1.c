/*Viết chương trình yêu cầu người dùng nhập vào 5 số nguyên,
tiến hành tính tổng các số lẻ trong các số đã nhập và in kết quả ra màn hình.*/
#include <stdio.h>
int main()
{
    int n;
    int sum =0;
    for(int i =1; i<=5; i++)
    {
        printf("Nhập số nguyên thứ %d: ",i);scanf("%d",&n);
        if(n%2!=0)
        {
            sum+=n;
        }
    }
    printf("Tổng các số lẻ đã nhập là: %d",sum);
}