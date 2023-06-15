/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:55:35 by lumedeir          #+#    #+#             */
/*   Updated: 2023/06/14 16:16:11 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// bases
# define G_HEX_BASE_LOWER "0123456789abcdef"
# define G_HEX_BASE_UPPER "0123456789ABCDEF"

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

// ft_printf
int		ft_printf(const char *str, ...);

// utils
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa_base(size_t n, char *base);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(char *str);
int		ft_strlen(const char *str);
char	*ft_unsigned_itoa(unsigned int n);

// convert
int		ft_convert(char type, va_list ap);
int		ft_convert_to_char(char s);
int		ft_convert_to_decimal(int number);
int		ft_convert_to_lowhexa(unsigned int number);
int		ft_convert_to_pointer(unsigned long *pointer);
int		ft_convert_to_str(char *str);
int		ft_convert_to_uphexa(unsigned int number);
int		ft_convert_to_udecimal(int number);

#endif
