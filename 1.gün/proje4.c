/*Parametre olarak verilen tam sayının işaretine bağlı olarak ’N’ ya da ’P’ yazdıran
bir fonksiyon yazınız. Eğer n negatifse, fonksiyon ’N’ göstermeli. Eğer n pozitif ya
da sıfır ise, fonksiyon ’P’ göstermeli.*/

#include "unistd.h"

void ft_number(int x)
{
    if (x < 0)
    {
        write(1, "N", 1);
    }
    else
    {
        write(1, "P", 1);
    }
}
int main()
{
    ft_number(-32);
} 