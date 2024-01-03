/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:16:09 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/03 11:27:07 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Contact
{	
	public:
		std::string fname;
		std::string lname;
		std::string nname;
		std::string phnum;
		std::string dscrt;

		void set_fname(Contact &temp);
		void set_lname(Contact &temp);
		void set_nname(Contact &temp);
		void set_phnum(Contact &temp);
		void set_dscrt(Contact &temp);
};

#endif