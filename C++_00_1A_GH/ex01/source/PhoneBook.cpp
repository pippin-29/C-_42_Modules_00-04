/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:01:54 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/03 12:06:49 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/mapb.h"

void PhoneBook::add_contact(Contact &temp, PhoneBook &_pb)
{
	if (_pb.current_contact == 8)
		_pb.current_contact = 0;
	_pb.contacts[_pb.current_contact].fname = temp.fname;
	_pb.contacts[_pb.current_contact].lname = temp.lname;
	_pb.contacts[_pb.current_contact].nname = temp.nname;
	_pb.contacts[_pb.current_contact].phnum = temp.phnum;
	_pb.contacts[_pb.current_contact].dscrt = temp.dscrt;
	_pb.current_contact++;
}

void PhoneBook::display_contact_field(PhoneBook &_pb, int _index)
{
	if (_index < 0 || _index > 7)
	{
		std::cout << "PhoneBook Contains Only 8 Entries (0-7)!\n";
		return ;
	}
	std::cout << " | ";
    _pb.printColumn("index", 10);
    std::cout << " | ";
    
    _pb.printColumn("first name", 10);
    std::cout << " | ";
    
     _pb.printColumn("last name", 10);
    std::cout << " | ";

	 _pb.printColumn("nick name", 10);
    std::cout << " | ";

	 _pb.printColumn("phone number", 10);
    std::cout << " | ";

	 _pb.printColumn("darkest secret", 10);
    std::cout << " |\n";



    std::cout << " | ";
	 _pb.printColumn(std::to_string(_index), 10);
    std::cout << " | ";
    
     _pb.printColumn(_pb.contacts[_index].fname, 10);
    std::cout << " | ";
    
     _pb.printColumn(_pb.contacts[_index].lname, 10);
    std::cout << " | ";

	 _pb.printColumn(_pb.contacts[_index].nname, 10);
    std::cout << " | ";

	 _pb.printColumn(_pb.contacts[_index].phnum, 10);
    std::cout << " | ";

	 _pb.printColumn(_pb.contacts[_index].dscrt, 10);
    std::cout << " |\n";

}

void PhoneBook::display_all_contacts(PhoneBook &_pb)
{
	int i = 0;
	int _index;

	std::cout << " | ";
    _pb.printColumn("index", 10);
    std::cout << " | ";
    
    _pb.printColumn("first name", 10);
    std::cout << " | ";
    
    _pb.printColumn("last name", 10);
    std::cout << " | ";

	_pb.printColumn("nick name", 10);
    std::cout << " |\n";

	while (_pb.contacts[i].fname != "")
	{
		std::cout << " | ";
		_pb.printColumn(std::to_string(i), 10);
		std::cout << " | ";
		
		_pb.printColumn(_pb.contacts[i].fname, 10);
		std::cout << " | ";
		
		_pb.printColumn(_pb.contacts[i].lname, 10);
		std::cout << " | ";

		_pb.printColumn(_pb.contacts[i].nname, 10);
		std::cout << " |\n";
		i++;
		if (i == 8)
			break;
	}
	std::cout << "Please Enter Index To Display Contact Information >  ";
	std::cin >> _index;
	_pb.display_contact_field(_pb, _index);
}

void PhoneBook::printColumn(const std::string& text, int width) 
{
    std::cout << std::setw(width) << std::right << (text.length() > (size_t)width ? text.substr(0, width - 1) + "." : text);
}