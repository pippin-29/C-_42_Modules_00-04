/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:54:21 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/05 09:06:30 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
# define __HUMANA_H__

# include "../headers/main.h"

class HumanA
{
	private:
			std::string name;
			Weapon *weapon;
	public:
			HumanA( const std::string &name, Weapon *weaponPTR);
			void attack();
			void setName(const std::string& name);
			void setWeapon(const std::string & weapontype);
			const std::string &getName( void );
};

#endif