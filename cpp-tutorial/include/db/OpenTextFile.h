#ifndef OPEN_TEXT_FILE_H_
#define OPEN_TEXT_FILE_H_

#include <fstream>
#include <vector>

#include "utils/Utils.h"

namespace model
{
	class Student;
}

namespace db
{

enum class FileOperation
{
	EFileOperation_Read,
	EFileOperation_Write
};

class OpenTextFile
{
public:
	OpenTextFile(const char* filename, FileOperation operation);
	~OpenTextFile();
	
	utils::StudentsVec readEntries();
       	void writeEntries(const utils::StudentsVec& students);

private:
	const char* filename_;
	FileOperation operation_;

	std::fstream file_;
};

}  // namespace db

#endif  // OPEN_TEXT_FILE_H_
