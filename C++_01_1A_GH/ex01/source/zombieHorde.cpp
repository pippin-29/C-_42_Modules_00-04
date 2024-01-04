/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:38:40 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/04 14:37:14 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/main.h"

Zombie* Zombie::zombieHorde(int N, std::string name) {
   	std::cout << "A Wild Zombie Horde Appears!\n";
	(void)(name);
   
    Zombie *horde = new Zombie[N];

    return horde;
}