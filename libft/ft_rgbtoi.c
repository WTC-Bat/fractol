int		ft_rgbtoi(int red, int green, int blue)
{
	int		r;
	int		g;
	int		b;
	int		rgbint;

	r = 0;
	g = 0;
	b = 0;
	if (red <= 255 && red >= 0)
		r = red;
	if (green <= 255 && green >= 0)
		g = green;
	if (blue <= 255 && blue >= 0)
		b = blue;
	rgbint = r;
	rgbint = (rgbint << 8) + g;
	rgbint = (rgbint << 8) + b;
	return (rgbint);
}
