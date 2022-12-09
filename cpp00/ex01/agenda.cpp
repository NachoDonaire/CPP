#include "agenda.hpp"

Contact::Contact(std::string firstname, std::string lastname, int phonenumber, std::string darkestsecret)
{
        first_name = firstname;
        last_name = lastname;
        phone_number = phonenumber;
        darkest_secret = darkestsecret;
}

PhoneBook::PhoneBook(int *cnt)
{
	contacts = cnt;
}


int	main(int arg, char **args)
{
	int		i;
	int		contacts[8];
	//Contact		contactillo = Contact("Joseph", "Tukle", 34, "He fucked his sister");

	i = 0;
	while (i <= 8)
	{
		contacts[i] = i;
		i++;
	}
	PhoneBook	pb(contacts);
	pb.diary();
	return (0);
}
		



