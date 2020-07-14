#include <stdlib.h>
#include <stdio.h>

#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int main(void)
{
	char *str1 = "aaaaa";
	char *str2 = "bbbbb";
	char *str3 = "ccccc";
	char *str4 = "ddddd";
	char **strs;

	strs = (char**)malloc(4 * sizeof(char *));
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	// printf("%s\n", "main f has been called successfully.");
	ft_show_tab(ft_strs_to_tab(4, strs));
	return (0);
}
