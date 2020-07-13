#include "ft_point.h"

void	set_point(t_point *point)
{
	// Assigning value to x, y variable
	// of point using arrow operator
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;
	set_point(&point); // &variable = a pointer
	return (0);
}
