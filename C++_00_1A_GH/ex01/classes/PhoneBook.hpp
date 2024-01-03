/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:16:12 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/03 11:31:04 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class PhoneBook 
{
	public:
		Contact contacts[MAX_CONTACTS];
		int current_contact;
		void add_contact(Contact &temp, PhoneBook &_pb);
		void display_contact_field(PhoneBook &_pb, int _index);
		void display_all_contacts(PhoneBook &_pb);
		void printColumn(const std::string& text, int width);
};

#endif