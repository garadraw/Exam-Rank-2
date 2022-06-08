/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/

#include <unistd.h>
  ///// NOT WORKING YET /////
// int	main(int argc, char **argv)
// {
// 	int		i;
// 	int		j;
// 	int		flag[1000];

// 	i = 0;
// 	while (i <= 1000)
// 	{
// 		flag[i] = 0;
// 		i++;
// 	}
// 	i = 1;
// 	if (argc == 3)
// 	{
// 		while(i < 3)
// 		{
// 			j = 0;
// 			while (argv[i][j] != '\0')
// 			{
// 				if (!flag[(unsigned char)argv[i][j]])
// 				{
// 					write(1, &argv[i][j], 1);
// 					flag[(unsigned char)argv[i][j]] = 1;
// 				}
// 				j++;
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
    char *av1;
    char *av2;
    int i;
    int j;
    int stock;

    i = 0;
    j = 0;
    stock = 0;
    av1 = av[1];
    av2 = av[2];
    if (ac == 3)
    {
        while (av1[i] != '\0')
        {
            while (av2[j] != '\0')
            {
                if (av1[i] == av2[j])
                {
                    stock++;
                    j++;
                    break ;
                }
                j++;
            }
            i++;
        }
    if (stock == ft_strlen(av1))
        ft_putstr(av1);
    }
    ft_putstr("\n");
    return (0);
}
