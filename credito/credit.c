#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int visa = 4;
    const int mc1 = 51;
    const int mc2 = 52;
    const int mc3 = 53;
    const int mc4 = 54;
    const int mc5 = 55;
    const int amex1 = 34;
    const int amex2 = 37;
    long sum = 0;
    int sum2 = 0;
    int mult = 0;
    int last;
    int visa_last_odd;
    int visa_last_even;

    int contador(long numero);
    int last_two(int n, long number);

    long i = get_long("Number: ");

    long num = i;
    long num_last_two = i;
    //last_number es la variable del input para realizar la operacion de obtener los ultimos 2 digitos.
    long last_number = i;

    for(int j = 0; num_last_two != 0; j++)
    {
        num_last_two = num_last_two/10;
        visa_last_odd = mult;
        mult = (num_last_two % 10)*2;
        if (j%2 == 0)
        {
            if (mult > 9)
            {
                mult = mult-10+1;
            }
            sum = sum + mult;
        }
    }
    for(int j = 1; num != 0; j++)
    {
        visa_last_even = num;
        if (j%2 != 0)
        {
            sum2 = sum2 + (num % 10);
        }
        num = num / 10;
    }

    //evaluo los ultimos dos digitos del numero llamando a la funcion para contar la cantidad de numeros.
    last = last_two(contador(last_number), last_number);
    if(contador(i) == 13 || contador(i) == 15 || contador(i) == 16)
    {
        if ((sum + sum2)%10 == 0)
        {
            if (visa_last_even == visa || visa_last_odd == visa)
            {
                printf("VISA\n");
            }
            else if (last == amex1 || last == amex2)
            {
                printf("AMEX\n");
            }
            else if (last == mc1 || last == mc2 || last == mc3 || last == mc4 || last == mc5)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int contador(long numero)
{
    int n = 0;
    while(numero > 0)
    {
        numero = numero / 10;
        n++;
    }
    return n;
}

int last_two(int n, long number)
{
    for(int i = 0; i < n - 2; i++)
    {
        number = number / 10;
    }
    return number;
}
