#include "fractol.h"

static int	check_args(char **argv)
{
	if ((ft_strequ(argv[1], "julia")) == 1 ||
			ft_strequ(argv[1], "mandelbrot") == 1)
		return (1);
	return (0);
}

int			main(int argc, char **argv)
{
	void	*mlxp;
	void	*mlxwin;

	if (argc == 1 || (check_args(argv)) == 0)
	{
		ft_putendl_fd("Usage:\n", 2);
		ft_putendl_fd("./fractol julia", 2);
		ft_putendl_fd("\tDisplay the Julia Set fractal\n", 2);
		ft_putendl_fd("./fractol mandelbrot", 2);
		ft_putendl_fd("\tDisplay the Mandelbrot Set fractal\n", 2);
		return (1);
	}
	mlxp = mlx_init();
	mlxwin = mlx_new_window(mlxp, 800, 600, "Julia Set");
	if (ft_strequ(argv[1], "julia") == 1)
	{
		julia(mlxp, mlxwin, -0.7, 0.27015);
	}
	else if (ft_strequ(argv[1], "mandelbrot") == 1)
	{
		//run mandelbrot set
	}
	mlx_loop(mlxp);
	return (0);
}
