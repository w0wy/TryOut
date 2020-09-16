#ifndef _USER_INTERFACE_H_
#define _USER_INTERFACE_H_

#include "mngr/StudentsManager.h"

namespace mngr
{
	class StudentsManager;
}

using StudentsManagerPtr = std::shared_ptr<mngr::StudentsManager>;

namespace ui
{

class UserInterface
{
public:
	UserInterface(const StudentsManagerPtr& manager);
	~UserInterface() = default;

	void run();
private:
	StudentsManagerPtr manager_;

};


}  // namespace ui

#endif  // _USER_INTERFACE_H_
