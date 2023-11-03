#include "Appliances.h"




int main()
{
	IElectronics* stock[4];

	stock[0] = new Player( 48, 200 );
	stock[1] = new Smartphone(72, 6, AndroidVersion::androidVersion_2);
	stock[2] = new Fridge(40, -7.5);
	stock[3] = new RobotCleaner(8, 5, "Xiaomi");

	while (true)
	{
		std::cout << "Input nomber : 0 for Player, 1 for Smartphone, 2 for Fridge, 3 for RobotCleaner   or 9 for exit\n";
		int tmp;
		std::cin >> tmp;
		if (tmp == 9)
		{
			break;
		}

		switch (tmp)
		{
			case 0:
				{
				stock[0]->ShowSpec();
				break;
				}
			case 1:
			{
				stock[1]->ShowSpec();
				break;
			}
			case 2:
			{
				stock[2]->ShowSpec();
				break;
			}
			case 3:
			{
				stock[3]->ShowSpec();
				break;
			}
			case 9:
			{
				std::cout << "Goodbye!";
				break;
			}

		    default:
			{
			std::cout << "You selected the wrong number, please try again\n";
			break;
			}
		}
	}
	
	return 0;
}