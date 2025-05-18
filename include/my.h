/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** bsprintf
*/

#ifndef PRINTF_H_
    #define PRINTF_H_

void my_putchar(char c);

void my_putstr(char const *str);

int my_strlen(char const *str);

int my_compute_power_rec(int nb ,int p);

char *my_put_nbr(int nb);

char *my_revstr(char *str);

void my_convert_tobin(int nb);

void my_convert_tooct(int nb);

void my_convert_to_hex(int nb);

int my_put_unsigned_nbr(unsigned int nb);

void my_convert_to_capital_hex(unsigned int nb);

void my_printf(char *s, ...);

char *my_args(va_list arg, char *s, ...);

#endif /* !PRINTF_H_ */
