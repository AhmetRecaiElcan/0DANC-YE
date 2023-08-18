/*•Bu fonksiyona parametresini parametresine böler ve bölümün sonucu divile
 belirtilen tamsayıda saklar.Aynı zamanda a’nınb’ye bölümünün kalanını mod ile
 belirtilen tamsayıda saklar*/

#include <stdio.h>
 void ft_apple(int a, int b, int *div, int *mod)
 {
    if (b != 0)
    {
         *div = a / b;
         *mod = a % b; 
    }
 }
 int main()
 {
    int a = 31;
    int b = 5;
    int x;
    int y;
    ft_apple(a,b,&x,&y);
    printf("%d\n%d", x, y);
 }