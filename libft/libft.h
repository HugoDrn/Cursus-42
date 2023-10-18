/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hderian <hderian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:04:06 by hderian           #+#    #+#             */
/*   Updated: 2023/10/18 04:17:50 by hderian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/**
 * @brief Return `1` if `c` is a letter, `0` otherwise.
 * 
 * @param c 
 * @return int 
 */
int		ft_isalpha(int c);
/**
 * @brief Return `1` if `c` is a digit, `0` otherwise.
 * 
 * @param c 
 * @return int 
 */
int		ft_isdigit(int c);
/**
 * @brief Return `1` if `c` is a digit or a letter, `0` otherwise.
 * 
 * @param c 
 * @return int 
 */
int		ft_isalnum(int c);
/**
 * @brief Return `1` if `c` is a printable character, `0` otherwise.
 * 
 * @param c 
 * @return int 
 */
int		ft_isascii(int c);
/**
 * @brief Return `1` if `c` is a printable character, `0` otherwise.
 * 
 * @param c 
 * @return int 
 */
int		ft_isprint(int c);
/**
 * @brief Return the `length` of the `string`.
 * 
 * @param str 
 * @return int 
 */
int		ft_strlen(const char *str);
/**
 * @brief Cette fonction permet de remplir une `zone mémoire`,
 *  identifiée par son `adresse` et sa `taille`, avec une `valeur précise`.
 * 
 * @param ptr 
 * @param value 
 * @param num 
 * @return void* 
 */
void	*ft_memset(void *ptr, int value, size_t num);
/**
 * @brief Cette fonction permet de remplir une `zone mémoire`,
 *  identifiée par son `adresse` et sa `taille`, avec une `valeur` `NULL`.
 * 
 * @param dst 
 * @param n 
 */
void	ft_bzero(void *dst, size_t n);
/**
 * @brief Cette fonction permet de copier une `zone mémoire`,
 *  identifiée par son `adresse` et sa `taille`, vers une autre.
 * 
 * @param destination 
 * @param source 
 * @param num 
 * @return void* 
 */
void	*ft_memcpy(void *destination, const void *source, size_t num);
/**
 * @brief Cette fonction permet de copier un bloc de mémoire spécifié par
 *  le paramètre source dans un nouvel emplacement désigné par le paramètre 
 * destination. On peut donc dire que cette fonction est proche de la fonction
 *  memcpy. Néanmoins, la différence réside dans le fait que la fonction
 *  memmove accepte que les deux zones de mémoire puissent se chevaucher.
 * 
 * @param destination 
 * @param source 
 * @param num 
 * @return void* 
 */
void	*ft_memmove(void *destination, const void *source, size_t num);
/**
 * @brief Cette fonction permet de localiser la première occurrence 
 * du caractère c (converti en unsigned char) dans la chaîne pointée par s.
 * 
 * @param destination 
 * @param source 
 * @param size 
 * @return size_t 
 */
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
/**
 * @brief Cette fonction permet de concaténer la chaîne source à 
 * la chaîne destination en écrasant le caractère nul (« \0 ») à 
 * la fin de destination, puis en y ajoutant un nouveau caractère 
 * nul final. Les chaînes ne doivent pas se chevaucher, et la chaîne
 *  destination doit être assez grande pour accueillir le résultat.
 * 
 * @param destination 
 * @param source 
 * @param size 
 * @return size_t 
 */
size_t	ft_strlcat(char *destination, const char *source, size_t size);
/**
 * @brief Cette fonction permet de convertir 
 * une lettre minuscule en lettre majuscule.
 * 
 * @param c 
 * @return int 
 */
int		ft_toupper(int c);
/**
 * @brief Cette fonction permet de convertir 
 * une lettre majuscule en lettre minuscule.
 * 
 * @param c 
 * @return int 
 */
int		ft_tolower(int c);
/**
 * @brief Cette fonction permet de localiser la première occurrence 
 * du caractère c (converti en unsigned char) dans la chaîne pointée par s.
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strchr(const char *s, int c);
/**
 * @brief Cette fonction permet de localiser la dernière occurrence 
 * du caractère c (converti en unsigned char) dans la chaîne pointée par s.
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief Cette fonction permet de comparer les deux chaînes s1 et s2.
 *  Elle renvoie un entier négatif, nul, ou positif, 
 * si s1 est respectivement inférieure,
 *  égale ou supérieure à s2.
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief Recherche la première occurence d'une valeur typée int,
 *  mais interprétée en tant que char, dans un bloc de mémoire.
 * 
 * @param ptr 
 * @param value 
 * @param num 
 * @return void* 
 */
void	*ft_memchr(const void *ptr, int value, size_t num);
/**
 * @brief Cette fonction permet de comparer le contenu de deux 
 * blocs de mémoire spécifiés par les deux premiers paramètres de la fonction.
 * Le troisième paramètre, size, permet de spécifier le nombre d'octets
 * sur lequel comparer les deux blocs.
 * 
 * @param ptr1 
 * @param ptr2 
 * @param num 
 * @return int 
 */
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
/**
 * @brief Cette fonction permet de localiser la première occurrence 
 * de n'importe quel caractère de la chaîne little dans la chaîne big, 
 * en ne comparant pas plus de len caractères.
 * 
 * @param big 
 * @param little 
 * @param len 
 * @return char* 
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);
/**
 * @brief Cette fonction permet de convertir 
 * une chaîne de caractères en un entier de type int.
 * 
 * @param str 
 * @return int 
 */
int		ft_atoi(const char *str);
/**
 * @brief Cette fonction alloue un bloc de mémoire en initialisant 
 * tous ces octets à la valeur 0. Bien que relativement proche de la 
 * fonction malloc, deux aspects les différencient :
 * L'initialisation : calloc met tous les octets du bloc à la valeur 0 
 * alors que malloc ne modifie pas la zone de mémoire.
 * Les paramètres d'appels : calloc requière deux paramètres 
 * (le nombre d'éléments consécutifs à allouer et la taille d'un élément) 
 * alors que malloc attend la taille totale du bloc à allouer.


 * 
 * @param num 
 * @param size 
 * @return void* 
 */
void	*ft_calloc(size_t num, size_t size);
/**
 * @brief Cette fonction permet de dupliquer une chaîne de caractères. 
 * Elle renvoie un pointeur sur la nouvelle chaîne, ou NULL 
 * s'il n'y a pas assez de mémoire.
 * 
 * @param s1 
 * @return char* 
 */
char	*ft_strdup(const char *s1);
/**
 * @brief Alloue (avec malloc) et renvoie 
 * une sous-chaîne à partir de la chaîne 's'.
 * La sous-chaîne commence à l'index 'start' et est de
 * taille maximale 'len'.
 * 
 * @param s 
 * @param start 
 * @param len 
 * @return char* 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief Alloue (avec malloc) et renvoie un nouveau chaîne, 
 * qui est le résultat de la concaténation de 's1' et 's2'.
 * 
 * @param s1 
 * @param s2 
 * @return char* 
 */
char	*ft_strjoin(char const *s1, char const *s2);
/**
 * @brief Alloue (avec malloc) et renvoie une copie de
 * s1' avec les caractères ,spécifiés dans 'set', supprimés
 * depuis le début et la fin de la chaîne.
 * 
 * @param s1 
 * @param set 
 * @return char* 
 */
char	*ft_strtrim(char const *s1, char const *set);
/**
 * @brief 
 * Alloue (avec malloc) et renvoie un tableau
 * de chaînes obtenues en divisant les `s` à l'aide de la
 * caractère `«c»` comme délimiteur. Le tableau doit se terminer
 * avec un pointeur NULL.
 * 
 * @param s 
 * @param c 
 * @return char** 
 */
char	**ft_split(char const *s, char c);
/**
 * @brief Alloue (avec malloc) et renvoie la `chaîne de caractères` 
 * du nombre passé en argument.
 * 
 * @param n 
 * @return char* 
 */
char	*ft_itoa(int n);
/**
 * @brief Applique la fonction `f` à chaque caractère de 
 * la chaîne passée en argument
 * 
 * @param s 
 * @param f 
 * @return char* 
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @brief Applique la fonction `f` sur chaque caractère de
 * la chaîne passée en argument, en passant son index
 * comme premier argument. Chaque characters est passé par
 * adresse à `f` à modifier si nécessaire.
 * 
 * @param s 
 * @param f 
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/**
 * @brief Output le caractère `c` sur le `file descriptor` donné.
 * 
 * @param c 
 * @param fd 
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief Output la chaîne `s` sur le `file descriptor` donné.
 * 
 * @param s 
 * @param fd 
 */
void	ft_putstr_fd(char *s, int fd);
/**
 * @brief Output la chaîne `s` sur le `file descriptor` donné
 * suivi d'un retour à la ligne.
 * 
 * @param s 
 * @param fd 
 */
void	ft_putendl_fd(char *s, int fd);
/**
 * @brief Output l'integer `n` sur le `file descriptor` donné.
 * 
 * @param n 
 * @param fd 
 */
void	ft_putnbr_fd(int n, int fd);
#endif