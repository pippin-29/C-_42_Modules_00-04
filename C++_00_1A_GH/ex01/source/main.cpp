/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:16:05 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/03 12:02:09 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mapb.h"

static void clearInputBuffer() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.clear();
}

static std::string str2upper(std::string &str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int main ()
{
	int 		CASE;
	PhoneBook 	_pb;
	Contact 	temp;
	std::string cmd = "";
	std::string name, no;
	CASE = -1;
	_pb.current_contact = 0;
	while (1)
	{
		std::cout << "PRESS ENTER. (To Clear Buffer)\n";
		clearInputBuffer();
		std::cout << "ADD, SEARCH, or EXIT > ";
		std::getline(std::cin, cmd);
		if (str2upper(cmd) == "ADD")
			CASE = ADD;
		else if (str2upper(cmd) == "SEARCH")
			CASE = SEARCH;
		else if (str2upper(cmd) == "EXIT")
			CASE = EXIT;
		else if (cmd.empty())
			continue;
		else 
			CASE = -1;

		switch(CASE)
		{
			case ADD:
				temp.set_fname(temp);
				temp.set_lname(temp);
				temp.set_nname(temp);
				temp.set_phnum(temp);
				temp.set_dscrt(temp);
				_pb.add_contact(temp, _pb);
				break;

			case SEARCH:
				if (_pb.current_contact > 0)
					_pb.display_all_contacts(_pb);
				break;

			case EXIT:
				std::cout << "Exiting...\n";
				exit(0);
				break;

			default:
				std::cout << "What.. What DID you do??.\n";
				break;
		}
	}
}