/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** bsprintf
*/

#ifndef PRINTF_H_
#define PRINTF_H_

// Used Functions 
void my_putchar(char c);

void my_putstr(char const *str);

int my_strlen(char const *str);

int my_compute_power_rec(int nb ,int p);

char *my_put_nbr(int nb);

char *my_revstr(char *str);

void my_convert_tobin(int nb);

void my_convert_tooct(int nb);

void my_convert_to_hex(int nb);

#endif /* !PRINTF_H_ */