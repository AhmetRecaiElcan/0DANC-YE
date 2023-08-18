/*•Bir işaretleyiciyi başka bir işaretliyiciden başka işaretleyiciye oradan başka işaret
leyiciye ve başka işaretleyiciye ve başka işaretleyiciye ve başka işaretleyiciye ve
 başka işaretleyiciye ve başka işaretleyiciyiden tamsayıya atayan bir fonksiyon oluş
turunuz.Bu fonksiyonun parametresi olsun ve fonksiyon o tamsayıya"23"değerini
 atasın*/

#include <stdio.h>
void ft_pointer(int ******n)
{
    ******n = 23;
}
int main()
{
    int armut = 11;
    int *k1 = &armut;
    int **k2 = &k1;
    int ***k3 = &k2;
    int ****k4 = &k3;
    int *****k5 = &k4;
    ft_pointer(&k5);
    printf("%d",armut);

}