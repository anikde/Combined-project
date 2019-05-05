# comments in cmake start with '#'

# Why CMake?
# compiling a software source code is a lot of work
# involving lots of settings which varies across OS 
# and involves lots of configuration like choice of compilers
# and dependencies on other softwares etc.
# Cmake helps to keep this process neat and easy

cmake_minimum_required(VERSION 2.8) # checks for version of CMake installed on the system
project( SimpleCodes ) # set a project name

# define a new variable EXE_NAME and store a string in it. That we will use as name for the executable file we will create after compilation.  
set(EXE_NAME "${PROJECT_NAME}-bin")  
# ${PROJECT_NAME} is a variable defined in cmake. (${EXE_NAME} is a local variable we created just now)
# Here, ${PROJECT_NAME} is "SimpleCodes" and hence,  ${EXE_NAME} = "SimpleCodes-bin"
# list of all cmake variables: https://cmake.org/cmake/help/v3.0/manual/cmake-variables.7.html

message("Value of EXE_NAME is: " ${EXE_NAME}) # prints the content of a variable (or any text)

# list the places to find header files
include_directories(
		${PROJECT_SOURCE_DIR}
)
message("Lets see what is the value of PROJECT_SOURCE_DIR -> " ${PROJECT_SOURCE_DIR})

# default include directories are automatically added
# The list of default include directories can be seen by running the command (in terminal): echo | g++ -E -Wp,-v -  # don't forget the last minus sign

add_library(
	matrixOperations
	matrixOperations.h
	matrixOperations.cpp
)

# set name of executable followed by the source file(s) which needs to be compiled
add_executable(
		${EXE_NAME}
		myMain.cpp
		basics.h
		basics.cpp
)
# for one executable there can be ONLY one main function across all its source files

# set some standard properties for the compiler
set_target_properties(
		${EXE_NAME}
		PROPERTIES
		POSITION_INDEPENDENT_CODE ON
		CXX_STANDARD 11 # use C++11 
		CXX_STANDARD_REQUIRED YES
		CXX_EXTENSIONS NO
)

target_link_libraries(
		${EXE_NAME}
		matrixOperations
		# the libraries to link will go here
		# for now we don't have any libraries to link
)


# Some more (optional) settings 

# Disable insource build - to keep source neat
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON)

if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
	message(SEND_ERROR "In-source builds are not allowed.")
endif ()

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

