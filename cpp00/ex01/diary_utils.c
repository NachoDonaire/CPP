#include "agenda.hpp"

int     il_mio_compare(char     *s, char const *coin)
{
        int     i;
        int     y;

        i = 0;
        y = 0;
        while (s[i])
        {
                while (s[i] == coin[y])
                {
                        i++;
                        y++;
                }
                i++;
        }
        if (coin[y] == '\0')
                return (1);
        return (0);
}

void	first_comments()
{
       	cout << "Please choose an action to do:\n" << endl;
        cout << "-ADD: create new contact\n" << endl;
        cout << "-SEARCH: seek a contact in your diary\n" << endl;
        cout << "-EXIT: finish execution\n" << endl;
}

void	PhoneBook::diary()
{
	char	*cmd;
	Contact *contactillo;

	//contactillo.aviso = 0;
	contactillo = malloc(sizeof(Contact) * 8);
	first_comments();
	cmd = new char[6];
	while (contactillo.aviso == 0)
	{
		read(0, cmd, 6);
		if (il_mio_compare(cmd, "EXIT") == 1)
			contactillo.exit();
		else if (il_mio_compare(cmd, "ADD") == 1)
			contactillo.add();
		//else if (il_mio_compare(cmd, "SEARCH") == 1)
		//	contactillo.search();
		
	}
}
		



