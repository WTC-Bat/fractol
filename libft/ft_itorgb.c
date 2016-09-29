#include "libft.h"

int		*ft_itorgb(int rgbint)
{
	//	if rgbint < 0?
	//	if rgbint > x?
	int		r;
	int		g;
	int		b;
	int		*rgb;

	r = 0;
	g = 0;
	b = 0;
	rgb = (int *)malloc(sizeof(int) * 3);
	// r = (rgbint >> 16) & 255;
	// g = (rgbint >> 8) & 255;
	// b = rgb & 255;
	rgb[0] = (rgbint >> 16) & 255;
	rgb[1] = (rgbint >> 8) & 255;
	rgb[2] = rgbint & 255;
	return (rgb);
}
