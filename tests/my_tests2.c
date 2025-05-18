/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_tests2
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std2(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(my_printf , simple_octal , .init = redirect_all_std2)
{
    my_printf("%o", 88452);
    cr_assert_stdout_eq_str("254604");
}

Test(my_printf , simple_binary , .init = redirect_all_std2)
{
    my_printf("%b", 12785);
    cr_assert_stdout_eq_str("11000111110001");
}

Test(my_printf , simple_hex , .init = redirect_all_std2)
{
    my_printf("%x", 3224);
    cr_assert_stdout_eq_str("c98");
}

Test(my_printf , hardconv_af , .init = redirect_all_std2)
{
    my_printf("nb = %d, = %o = %b = %x", 775, 775, 775, 775);
    cr_assert_stdout_eq_str("nb = 775, = 1407 = 1100000111 = 307");
}
