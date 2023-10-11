#include"stdio.h"


int tinh_tong(int x,int y)
{
    int tong ;
    tong = x+y;
    return tong;

}
int tinh_hieu(int x,int y)
{
    float hieu ;
    hieu = x-y;
    return hieu;

}
int tinh_tich(int x,int y)
{
    float tich;
    tich = x * y;
    return  tich;
}
float tinh_thuong(int x ,int y)
{
    float thuong;
    thuong =(float )x / y;
    return thuong;
}
int main()
{
    printf("Calculation:\n");
    printf("============\n");
    int x,y;
    printf("Number 1 :\n");
    scanf("%d",&x);
    getchar();
    char i;
    printf("Calculation(+-*/):\n");
    scanf(" %c",&i);
    printf("number 2 :\n");
    scanf ("%d",&y);

    int tong , tich;
    float hieu , thuong;

    switch (i)
    {
        case '+':
            tong = tinh_tong(x,y);
            printf("Sum : %d\n",tong);
            break;
        case '-':
            hieu = tinh_hieu( x ,y);
            printf(" Substraction : %f\n",hieu);
            break;
        case'*':
            tich = tinh_tich(x,y);
            printf("Multiplication : %d\n",tich);
            break;
        case '/':
            thuong = tinh_thuong(x ,y);
            printf("Division : %f\n",thuong);
            break;
    }
    return 0;

}