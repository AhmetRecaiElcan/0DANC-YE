/*Parametre olarak girilen sayıyı ekrana yazıdıran bir fonksiyon yazınız. Yazdığnız
fonksiyon int tipindeki tüm sayı değerlerini yazdırabilmelidir.
Örneğin:
◦ ft_putnbr(42) , "42" ’i gösterir.
*/

#include <unistd.h>
void ft_print(char  c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_print('-');
        ft_print('2');
        ft_putnbr(147483648);
    }
    
    else if (nb < 0)
    {
        ft_print('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_print(nb + 48);
    }
    
    
}
int main()
{
    ft_putnbr(-2147483648);
}