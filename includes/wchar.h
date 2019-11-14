/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wchar.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:51:38 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/14 14:12:43 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WCHAR_H
# define WCHAR_H

/*
** reference: https://tools.ietf.org/html/rfc3629
*/

# include <wchar.h>
# include <stdlib.h>

size_t	ft_wcharlen(wchar_t wchar);
size_t	ft_wbytelen(wchar_t *ws);
size_t	ft_wstrlen(wchar_t *ws);
char	*ft_wstr_to_str(wchar_t *str);

#endif
