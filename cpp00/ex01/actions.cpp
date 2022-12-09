#include "agenda.hpp"

void	Contact::add()
{
	char	*util;

	util = new char[500];
	cout << "Please, introduce a name for the contact" << "\n" <<  endl;
	read(0, util, 500);
	first_name = util;
	cout << "Please, introduce a second name" << "\n" << endl;
	read(0, util, 500);
	last_name = util;
	cout << "Please, introduce phone number" << "\n" << endl;
	read(0, util, 500);
	phone_number = ft_atoi(util);
	cout << "Now tell me his/her darkest secret..." << "\n" << endl;
	read(0, util, 500);
	darkest_secret = util;
	delete util;
}

void	Contact::exit()
{
	aviso = 1;
}
	
	


