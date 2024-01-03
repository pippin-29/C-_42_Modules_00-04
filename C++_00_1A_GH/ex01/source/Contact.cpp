/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:49:59 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/03 12:03:28 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/mapb.h"

	void Contact::set_fname(Contact &temp)
	{
		std::cout << "Set first name > ";
		std::cin >> temp.fname;
	}
	void Contact::set_lname(Contact &temp)
	{
		std::cout << "Set last name > ";
		std::cin >> temp.lname;
	}
	void Contact::set_nname(Contact &temp)
	{
		std::cout << "Set nick name > ";
		std::cin >> temp.nname;
	}
	void Contact::set_phnum(Contact &temp)
	{
		std::cout << "Set phone number > ";
		std::cin >> temp.phnum;
	}
	void Contact::set_dscrt(Contact &temp)
	{
		std::cout << "Set darkest secret > ";
		std::cin >> temp.dscrt;
	}
