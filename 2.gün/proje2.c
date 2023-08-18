/*Adresleri parametre olarak girilmiş iki tam sayının değerini değiştiren bir fonsksiyon
 oluşturunuz*/

 #include <stdio.h>

 void ft_swap(int *a,int *b)
 {
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
 }
 int main()
 {
    int x = 5;
    int y = 12;
    ft_swap(&x,&y);
    printf("%d \n %d",x, y);
 }