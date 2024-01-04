/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:54:19 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/05 08:47:20 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
# define __HUMANB_H__

# include "../headers/main.h"

class HumanB
{
	private:
			std::string name;
			std::string weapon;
	public:
			HumanB( const std::string &name, Weapon *weapon);
			void attack();
			void setName(const std::string& name);
			const std::string &getName( void );
};

#endif