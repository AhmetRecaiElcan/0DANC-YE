/*Bütün rakamları, tek bir satırda, küçükten büyüğe, artan düzende ekrana yazdıran
bir fonksiyon yazınız.*/

#include <unistd.h>

void ft_printable(void)
{
    char y;
    y = '0';

    while (y <= '9')
    {
        write(1, &y, 1);
        y++;
    }
}
int main(void)
{
    ft_printable();
}