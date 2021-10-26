#include <stdio.h>
#include <math.h>
int CountDigit(int n)	
{
    int diem = 0;
    while (n > 0)
    {
        n /= 10;
        ++diem;
    }
    return diem;
}
bool IsArmstrong(int n)
{
    int numDigit = CountDigit(n);
    int tmp = n, sum = 0, last;
    while (tmp > 0)
    {
        last = tmp % 10; 
        tmp /= 10;       
        sum += pow(last, numDigit);
    }
    if (sum == n)
        return true;
    return false;
}
 
int main()
{
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
 
    if (IsArmstrong(n) == true)
    {
        printf("\n%d la so armstrong!", n);
    }else{
        printf("\n%d khong la so armstrong!", n);
    }
}

