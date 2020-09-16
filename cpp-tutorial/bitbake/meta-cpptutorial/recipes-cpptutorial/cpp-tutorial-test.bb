DESCRIPTION = "Recipe for building CPPTutorial-test bin"
PR = "r1"

SRC_FILES = "${PROJECT_ROOT}/test/*.cpp"

do_build(){
	g++ ${SRC_FILES} -o CPPTutorial-test
}
