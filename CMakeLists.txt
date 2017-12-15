cmake_minimum_required(VERSION 3.8)
project(Lab678)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp source/Date.cpp headers/Date.h source/Person.cpp headers/Person.h source/FileType.cpp headers/FileType.h source/Document.cpp headers/Document.h source/Generator.cpp headers/Generator.h source/Path.cpp headers/Path.h source/File.cpp headers/File.h source/Record.cpp headers/Record.h headers/Statictic.h source/Person_old.cpp headers/Person_old.h source/RegisterComponent.cpp headers/RegisterComponent.h source/UnsupportedOperationException.cpp headers/UnsupportedOperationException.h)
add_executable(Lab678 ${SOURCE_FILES})