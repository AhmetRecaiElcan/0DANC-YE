/* ’a’ harfinden başlayarak, artan şekilde (a’dan z’ye doğru), tek satırda, hepsi küçük
harf olacak şekilde alfabeyi ekrana yazdıran bir fonksiyon yazınız.*/

#include <unistd.h>

void ft_print_alphabet(void)
{
    char b;

    b ='a';
    while (b <= 'z')
    {
        write(1, &b,1);
        b++;
    }
}

int main()
{
    ft_print_alphabet();
}

