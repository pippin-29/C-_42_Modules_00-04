/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:54:25 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/05 08:31:26 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON__
# define __WEAPON__

class Weapon
{
	private:
			std::string type;

	public:
			const std::string &getType();
			void setType(const std::string &weapon_type);
			std::string weapon_list[50];
			std::string conjure_weapon( void );
};

#endif