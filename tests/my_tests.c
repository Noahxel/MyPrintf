/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** tests_disp_stdarg
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(my_printf , simple_string , .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf , simple_decimal , .init = redirect_all_std)
{
    my_printf("%d%i", 12, 21);
    cr_assert_stdout_eq_str("1221");
}

Test(my_printf , simple_char , .init = redirect_all_std)
{
    my_printf("%c", 'a');
    cr_assert_stdout_eq_str("a");
}

Test(my_printf , hard_af , .init = redirect_all_std)
{
    my_printf("%s %c %d%c%i %s", "demain", 'a', 13, 'h', 30, "pluie");
    cr_assert_stdout_eq_str("demain a 13h30 pluie");
}
