DESCRIPTION = "This is the recipe for CPPTutorial"
PR = "r1"

SRC_FILES = "${PROJECT_ROOT}/src/*.cpp"
INCLUDE_DIR = "${PROJECT_ROOT}/include"

do_build(){
	g++ -I${INCLUDE_DIR} ${SRC_FILES} -o CPPTutorial
}
