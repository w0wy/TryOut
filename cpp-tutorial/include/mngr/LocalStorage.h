#ifndef LOCAL_STORAGE_H_
#define LOCAL_STORAGE_H_

#include <map>

#include "model/Student.h"
#include "utils/Utils.h"

namespace mngr
{

class LocalStorage
{
public:
	LocalStorage();
	~LocalStorage();

	LocalStorage(const LocalStorage&) = delete;
	LocalStorage& operator=(const LocalStorage&) = delete;

	model::Student getStudent(const std::string& name);
	void addStudent(const model::Student& student);
	utils::StudentsVec getAllStudents();

private:
	utils::StudentsVec students_;
};

}  // namespace mngr

#endif  // LOCAL_STORAGE_H_
