#include "iostream"
#include <cstring>

int main(int arg, char **args)
{
	int	i;
	char	*up_phrase;

	if (arg != 2)
	{
		std::cout << "Just right one argument as a phrase";
		return (0);
	}
	i = 0;
	up_phrase = new char[strlen(args[1])];
	while (args[1][i])
	{
		if (args[1][i] >= 'a' && args[1][i] <= 'z')
			args[1][i] = args[1][i] - 32;
		up_phrase[i] = args[1][i];
		i++;
	}
	up_phrase[i] = '\0';
	std::cout << up_phrase;
	return (0);
}


