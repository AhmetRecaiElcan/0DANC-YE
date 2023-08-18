/*Parametre olarak bir tamsayı işaretçisi alan ve"54"değerini bu tamsayıya atayan
 bir fonksiyon oluşturunuz.*/

#include <stdio.h>

void ft_pointer(int *n)
{
    *n = 54;
}
int main()
{
    int elma;
    ft_pointer(&elma);
    printf("%d",elma);
}