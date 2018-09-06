int		ft_atoi(char *str)
{
	int let;
	int resultat;
	int i;
	int up;

	up = 0;
	let = 1;
	resultat = 0;
	i = 0;
	if (str[i] > 0 && str[i] < 32)
		i++;
	if (str[i] == ' ')
		i++;
	if (str[i] == '+' && up == 0 && let == 1)
		up == 1;
		i++;
	if (str[i] == '-' && let == 1 && up == 0)
	{
		let = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + str[i] - '0';
		i++;
	}
	return (resultat * let);
}
