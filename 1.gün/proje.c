/* verilen karakterleri yazdıran bir fonksiyon oluşturunuz*/

#include <unistd.h>

void apple(char x)
{
    write(1, &x, 1);
}
int main()
{
    apple('c');
}