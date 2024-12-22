/*Viết chương trình khai báo và gán giá trị cho một biến mật khẩu cho trước,
yêu cầu người dùng nhập vào mật khẩu và kiểm tra xem có nhập đúng không và in kết quả ra màn hình.*/
#include<stdio.h>
int main()
{
    char pass[100]="matkhau123";
    char ans[100];
    printf("Nhập mật khẩu: ");
    gets(ans);
    int active =1;
    for (int i =0; ans[i]!='\0'|| pass[i]!='\0';i++)//Duyệt từng chữ trong pass và ans
    {
        if(ans[i]!=pass[i])// chữ thứ i trong ans khác chữ thứ i trong pass => kết thúc vòng lặp
        {
            active = 0;
            break;
        }
    }
    if(active)
    {
        printf("Mật khẩu đúng");
    }else
    {
        printf("Mật khẩu sai");
    }
}