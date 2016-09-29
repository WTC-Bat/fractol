#ifndef FRACTOL_H
# define FRACTOL_H

# include	"libft.h"
# include	"mlx.h"

# define	DEF_WIN_W 500;
# define	DEF_WIN_H 500;

void		julia(void *mlxp, void *mlxwin, float const_real, float const_imag);
void		mandelbrot();

#endif
