/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:57:44 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/11 10:03:35 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	char	*prefix;
	char	*suffix;
	char	*sep;
	char	**arrtotal;
	int		len;

	len = ft_strlen(s);
	prefix = malloc(ft_strlen(s) + 1);
	suffix = malloc(ft_strlen(s) + 1);
	arrtotal = malloc(48);
	sep = ft_strchr(s, c);
	if (!sep || !prefix || !suffix || !arrtotal)
		return (0);
	ft_strncpy(prefix, s, sep - s);
	ft_strncpy(suffix, sep + 1, len - (sep - s + 1));
	prefix[sep - s] = '\0';
	suffix[len - (sep - s)] = '\0';
	arrtotal[0] = prefix;
	arrtotal[1] = suffix;
	arrtotal[2] = '\0';
	return (arrtotal);
}
