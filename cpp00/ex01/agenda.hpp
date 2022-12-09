#include "iostream"
#include "unistd.h"
using namespace std;

class PhoneBook{
        private:
                int     *contacts;

        public:
		void	diary();
                PhoneBook(int *);
};

class Contact{
        private:
                string  first_name;
                string  last_name;
                int     phone_number;
                string  darkest_secret;
        public:
		void	add();
		void	exit();
		void	search();
		int	aviso;
		int	pos;
                Contact(std::string, std::string, int, std::string);
};

int	ft_atoi(const char *str);
//void	PhoneBook::diary();
