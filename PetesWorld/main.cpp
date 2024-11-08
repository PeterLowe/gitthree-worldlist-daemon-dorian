// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Daemon Medeiros
// Dorian Pazur
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>

enum ERegion { // added for readability - Dorian
	Americas = 1,
	Europe,
	Africa,
	Asia,
	RestOfWorld
};

int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 1;
	}
	std::cout << "Pick a letter from A to B or Y to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 1; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}
	else if (letter == 'b' || letter == 'B') // written by Dorian
	{
		switch (region)
		{
			case Americas:
				printf("Bermuda, Belize, Brazil, Bolivia\n");
				break;
			case Europe:
				printf("Belgium, Belarus, Bosnia and Herzegovina, Bulgaria\n");
				break;
			case Africa:
				printf("Benin, Botswana, Burkina Faso, Burundi\n");
				break;
			case Asia:
				printf("Bangladesh, Bhutan, Brunei Darussalam\n");
				break;
			case RestOfWorld:
				printf("Bahamas, Bahrain, Barbados\n");
				break;
		}
	}

	else if (letter == 'v' || letter == 'V') // Written by Daemon Medeiros
	{
		if (region == 1)
		{
			std::cout << "Venezuala" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Vatican City State (Holy See)" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu, Virgin Islands (British), Virgin Islands (U.S.)" << std::endl;
		}
	}

	else if (letter == 'w' || letter == 'W') // Written by Daemon Medeiros
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futana Island" << std::endl;
		}
	}

	else if (letter == 'y' || letter == 'Y') // Written by Daemon Medeiros
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ys in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Yemen, Arabian Peninsula" << std::endl;
		}
	}
	else if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	
	return 0;
}