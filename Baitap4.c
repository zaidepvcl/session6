//Viết chương trình yêu cầu người dùng nhập vào 3 số a, b, c, giải phương trình bậc 2 : ax^2 + bx + c = 0 và in kết quả ra màn hình.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Nhập số a (a!=0): ");scanf("%d",&a);
    if(a==0)
    {
        printf("Dữ liệu không hợp lệ");
        return 0;
    }
    printf("Nhập số b: ");scanf("%d",&b);
    printf("Nhập só c: ");scanf("%d",&c);
    int delta = b*b - 4*a*c;
    float x1,x2;
    if(delta <0)
    {
        printf("Phương trình vô nghiệm");
    }else if(delta == 0)
    {
        x1 = x2 = (-b)/(2*a);
        printf("Phương trình có nghiệm kép x1 = x2 = %.2f",x1);
    }else if(delta > 0)
    {
        x1 = (-b +sqrt(delta))/(2*a);
        x2 = (-b -sqrt(delta))/(2*a);
        printf("Phương trình có 2 nghiệm phân biệt x1 = %.2f, x2 = %.2f",x1,x2);
    }
}