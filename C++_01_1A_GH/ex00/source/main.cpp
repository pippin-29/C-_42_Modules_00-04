/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:02:19 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/04 12:53:52 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/main.h"

int main (void)
{
	int i = 0;
	Zombie *heap_Zombies[1000];
	
	while (i < 100)
	{
		std::cout << "Heap Zombie - " << i << " ::";
		heap_Zombies[i] = Zombie::newZombie(Zombie::name_maker());
		std::cout << "\n";
		std::cout << "Stack Zombie - " << i << " ::";
		Zombie::randomChump(Zombie::name_maker());
		std::cout << "\n";
		i++;
	}
	for (int j = 0; j < 100; j++) 
	{
        delete heap_Zombies[j];
		std::cout << "\n";
    }
	return (0);
}