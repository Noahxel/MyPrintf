/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_functions2
*/

#include <stdio.h>
#include "../include/my.h"

char *my_revstr(char *str)
{
    int b = my_strlen(str) - 1;
    int value = 0;

    for (int i = 0; i <= b; i++, b--) {
        value = str[i];
        str[i] = str[b];
        str[b] = value;
    }
    return (str);
}
