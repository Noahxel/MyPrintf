/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_functions
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}

int my_strlen(char const *str)
{
    int	i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int my_compute_power_rec(int nb , int p)
{
    int res = 1;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    res = nb * my_compute_power_rec(nb, p - 1);
    return (res);
}

int my_put_nbr(int nb)
{
    if (nb >= 0 && nb < 10)
        my_putchar(nb + '0');
    else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (nb);
}
