#include <iostream>
#include "ui/UserInterface.h"
#include "mngr/StudentsManager.h"
#include "mngr/LocalStorage.h"
#include "db/OpenTextFile.h"

int main()
{
	std::cout << "\n It works! \n";

	std::shared_ptr<mngr::LocalStorage> storage = 
		std::make_shared<mngr::LocalStorage>();
	
	std::shared_ptr<mngr::StudentsManager> manager = 
		std::make_shared<mngr::StudentsManager>(storage);
	
	std::shared_ptr<ui::UserInterface> interface = 
		std::make_shared<ui::UserInterface>(manager);

	interface->run();

	return 0;
}
