/*Artan düzende listelenen 00 ile 99 arasındaki iki basamağın, tüm farklı kombinasyonlarını ekrana yazdıran bir fonksiyon yazınız.
• İstenilen çıktı aşağıdaki gibidir :
$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>*/

#include <unistd.h>
void ft_print(char x)
{
    write(1, &x, 1);
}

void ft_number(void)
{
    int a;
    int b;

    a =0;
    while (a <= 98)
    {
        b = a+1;
        while (b <= 99)
        {
            ft_print((a/10) + 48);
            ft_print((a%10) + '0');
            ft_print(' ');
            ft_print((b/10) + '0');
            ft_print((b%10) + '0');
            if (a !=98)
            {
                write(1, ", ",2);
            }
            
            b++;
        }
        a++;
    }
    
}
int main()
{
    ft_number();
}



