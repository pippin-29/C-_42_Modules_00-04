/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:02:31 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/04 14:26:10 by dhadding         ###   ########.fr       */
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
			/// Default Constructor
			Zombie( );
			/// Constructor
			Zombie( std::string name );
			/// Destructor
			~Zombie();
			/// The zombie speaks!
			void announce( void );

			/// Creates Name from List of 10000 in main_h
			static std::string name_maker( void );
			static std::string death_described( void );
			static const std::string name_list[10000];
			static const std::string demise_list[50];

			/// Creates a Zombie class, and returns
			// for use out of the function scope.
			static Zombie *newZombie( std::string name );
			static Zombie *zombieHorde( int N, std::string name);
			/// Creates a zombie, names it, and the zombie announces itself.
			static void randomChump( std::string name );

};		

#endif