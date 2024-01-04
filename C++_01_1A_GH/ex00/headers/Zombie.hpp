/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:02:31 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/04 09:40:54 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Zombie_H__
# define __Zombie_H__

# include "main.h"

class Zombie
{
	private:
			/// Zombies Personal Name
			std::string name; 
	
	public:
			/// The zombie speaks!
			void announce( void );

			/// Creates a Zombie class, using the newZombie class, and returns
			// for use out of the function scope.
			Zombie *newZombie( std::string name );

			/// Creates a zombie, names it, and the zombie announces itself.
			void randomChump( std::string name );

			std::string name_maker(int seed);


};

#endif