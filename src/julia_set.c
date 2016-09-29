#include "fractol.h"
#include <stdlib.h>

// static int	randcol()
// {
// 	int		d;
// 	int		ret;
//
// 	d = RAND_MAX / 256;
// 	ret = rand() / d;
// 	while (ret > 255)
// 	{
// 		ret = rand() / d;
// 	}
// 	return (ret);
// }

void		julia(void *mlxp, void *mlxwin, float const_real, float const_imag)
{
	float new_real;
	float new_imag;
	float old_real;
	float old_imag;
	//zoom, x, y, etc.
	int colour;

	int xcnt;
	int ycnt;
	int iter;

	int iters = 300;
	int w = 800;
	int h = 600;

	xcnt = 0;
	ycnt = 0;
	iter = 0;
	while (ycnt < h)
	{
		while (xcnt < w)
		{
			new_real = 1.5 * (xcnt - w / 2) / (0.5 * 0.5 * w);	//(0.5 * zoom * w) + xpos
			new_imag = (ycnt - h / 2) / (0.5 * 0.5 * h);
			while (iter < iters)
			{
				old_real = new_real;
				old_imag = new_imag;
				new_real = old_real * old_real - old_imag * old_imag + const_real;
				new_imag = 2 * old_real * old_imag * const_imag;
				if ((new_real * new_real + new_imag * new_imag) > 4)
					break;
				iter++;
			}
			//colour = ft_rgbtoi(iter % 256, 255, 255 * (iter < iters));
			//colour = ft_rgbtoi(randcol(), randcol(), randcol());
			//colour = ft_rgbtoi(128, randcol(), 128);
			colour = ft_rgbtoi(128, 64, 32);
			if (iter < iters)
				colour = ft_rgbtoi(0, 0, 0);
			mlx_pixel_put(mlxp, mlxwin, xcnt, ycnt, colour);
			iter = 0;
			xcnt++;
		}
		xcnt = 0;
		ycnt++;
	}
}
