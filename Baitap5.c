/*Viết chương trình yêu cầu người dùng nhập vào số năm và số tháng, từ đó in ra số ngày trong tháng và năm đã nhập*/
#include<stdio.h>
int main()
{
    int year,month,day;
    int checkYear;
    printf("Nhập năm: ");scanf("%d",&year);
    printf("Nhập tháng: ");scanf("%d",&month);
    if(year % 400 == 0 || (year % 4 == 0 && year %100 != 0))
    {
        checkYear =1;
    }else
    {
        checkYear =0;
    }
    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Năm %d Tháng %d có 31 ngày",year,month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Năm %d Tháng %d có 30 ngày",year,month);
            break;
        case 2:
            if(checkYear)
            {
                printf("Năm %d Tháng %d có 29 ngày",year,month);
            }else
            {
                printf("Năm %d Tháng %d có 28 ngày",year,month);
            }
            break;
        default:
            printf("Dữ liệu không phù hợp");
    }
}