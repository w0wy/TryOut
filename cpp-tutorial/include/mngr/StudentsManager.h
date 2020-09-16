#ifndef STUDENTS_MANAGER_H_
#define STUDENTS_MANAGER_H_

#include <memory>

namespace mngr
{

class LocalStorage;
using LocalStoragePtr = std::shared_ptr<LocalStorage>;

class StudentsManager
{
public:
	StudentsManager(const LocalStoragePtr& storage);
	~StudentsManager();

private:
	LocalStoragePtr storage_;
};

}  // namespace mngr

#endif  // STUDENTS_MANAGER_H_
