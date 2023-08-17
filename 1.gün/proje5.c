/*Artan sıraya göre listelenen üç farklı basamağın tüm farklı kombinasyonlarını, artan
düzende ekrana yazdıran bir fonksiyon yazınız. - evet, sayıların tekrar etmesi isteğe
bağlıdır.
• İstenilen çıktı aşağıdaki gibidir :
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>*/

#include <unistd.h>

void ft_prinntable(void)
{
    char a;
    char b;
    char c;

    a = '0';
    while (a <= '7')
    {
        b = a+1;
        while (b <= '8')
        {
            c = b+1;
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if (a != '7')
                    write(1,", ",2);
                c++;
            }
            b++;
        }
       a++; 
    }
    
}
int main()
{
    ft_prinntable();
}