/* ’z’ harfinden başlayarak, azalan şekilde (z’den a’ya doğru), tek satırda, hepsi küçük
harf olacak şekilde alfebeyi ekrana yazdıran bir fonksiyon yazınız.*/

#include <unistd.h>

void ft_print_alphabet(void)
{
    char b;

    b ='z';
    while (b >= 'a')
    {
        write(1, &b,1);
        b--;
    }
}

int main()
{
    ft_print_alphabet();
}

