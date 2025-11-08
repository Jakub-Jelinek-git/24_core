/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 06:14:57 by Jakub             #+#    #+#             */
/*   Updated: 2025/11/08 06:48:24 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char c;
    c = 'a';
    
    while(c >= 'a' && c <= 'z')
    {
        ft_putchar(c);
        c++;
    }
}

int main()
{
    ft_print_alphabet();
    return 0;
}