#############################################################################
#																			#
#		 			CMakeList created by ecore4CPP Generator				# 
#																			#
#############################################################################

# C++ project of model libraryModel_ecore.ecore, generated by Ecore4CPP

CMAKE_MINIMUM_REQUIRED(VERSION 3.9)

if(UNIX AND NOT APPLE)
    # for Linux, BSD, Solaris, Minix
SET(CMAKE_C_COMPILER "gcc")
SET(CMAKE_CXX_COMPILER "g++")
else()
   SET(CMAKE_C_COMPILER "gcc.exe")
   SET(CMAKE_CXX_COMPILER "g++.exe")
endif()

PROJECT(libraryModel_ecore)

IF(NOT CMAKE_BUILD_TYPE) 
    SET(CMAKE_BUILD_TYPE Debug)
ENDIF(NOT CMAKE_BUILD_TYPE)
SET(CMAKE_DEBUG_POSTFIX d)

SET(CMAKE_CXX_STANDARD 14)
SET(GCC_COVERAGE_LINK_FLAGS "-fopenmp")
SET(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wno-overloaded-virtual -Wdeprecated-declarations -fopenmp -fmax-errors=5")
SET(CMAKE_CXX_FLAGS_DEBUG " -Og -ggdb -DACTIVITY_DEBUG_ON")
SET(CMAKE_CXX_FLAGS_RELEASE " -O3 -DNDEBUG")

string(REPLACE "\\" "/" MDE4CPP_HOME $ENV{MDE4CPP_HOME})

SET(SOURCE_FILES
	impl/LibraryModel_ecoreFactoryImpl.cpp
	LibraryModel_ecoreFactory.cpp
	impl/LibraryModel_ecorePackageImpl.cpp
	LibraryModel_ecorePackage.cpp
	impl/LibraryModel_ecorePluginImpl.cpp
	LibraryModel_ecorePlugin.cpp
	impl/AuthorImpl.cpp
	impl/BookImpl.cpp
	impl/LibraryModelImpl.cpp
	impl/NamedElementImpl.cpp
	impl/PictureImpl.cpp
)

INCLUDE_DIRECTORIES(
	.
	${MDE4CPP_HOME}/application/include
	${MDE4CPP_HOME}/application/include/abstractDataTypes
if(NOT UNIX)
	${MDE4CPP_HOME}/application/include/PluginFramework
endif()
	${MDE4CPP_HOME}/application/include/ecore
	${MDE4CPP_HOME}/application/include/types
)

if(NOT UNIX)
	FIND_LIBRARY(PLUGINFRAMEWORK_DEBUG PluginFrameworkd ${MDE4CPP_HOME}/application/lib)
	FIND_LIBRARY(PLUGINFRAMEWORK_RELEASE PluginFramework ${MDE4CPP_HOME}/application/lib)
endif()

if(UNIX AND NOT APPLE)
    # for Linux, BSD, Solaris, Minix
	FIND_LIBRARY(ECORE_DEBUG ecored.so ${MDE4CPP_HOME}/application/bin)
	FIND_LIBRARY(ECORE_RELEASE ecore.so ${MDE4CPP_HOME}/application/bin)
	FIND_LIBRARY(TYPES_DEBUG typesd.so ${MDE4CPP_HOME}/application/bin)
	FIND_LIBRARY(TYPES_RELEASE types.so ${MDE4CPP_HOME}/application/bin)
else()
	FIND_LIBRARY(ECORE_DEBUG ecored ${MDE4CPP_HOME}/application/lib)
	FIND_LIBRARY(ECORE_RELEASE ecore ${MDE4CPP_HOME}/application/lib)
	FIND_LIBRARY(TYPES_DEBUG typesd ${MDE4CPP_HOME}/application/lib)
	FIND_LIBRARY(TYPES_RELEASE types ${MDE4CPP_HOME}/application/lib)
endif()

ADD_LIBRARY(${PROJECT_NAME} SHARED ${SOURCE_FILES})
if(NOT UNIX)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} 
	debug ${PLUGINFRAMEWORK_DEBUG}
	debug ${ECORE_DEBUG}
	debug ${TYPES_DEBUG}
)
else()
TARGET_LINK_LIBRARIES(${PROJECT_NAME} 
	#debug ${PLUGINFRAMEWORK_DEBUG}
	debug ${ECORE_DEBUG}
	debug ${TYPES_DEBUG}
)
endif()

if(NOT UNIX) 
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
	optimized ${PLUGINFRAMEWORK_RELEASE}
	optimized ${ECORE_RELEASE}
	optimized ${TYPES_RELEASE}
)
else()
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
	#optimized ${PLUGINFRAMEWORK_RELEASE}
	optimized ${ECORE_RELEASE}
	optimized ${TYPES_RELEASE}
)
endif()

SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PREFIX "")

#-----------------------------------------------------
# DELIVERING binaries and header to ${MDE4CPP_HOME}
#-----------------------------------------------------

INSTALL(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION ${MDE4CPP_HOME}/application/bin
    LIBRARY DESTINATION ${MDE4CPP_HOME}/application/bin
    ARCHIVE DESTINATION ${MDE4CPP_HOME}/application/lib
)

INSTALL(DIRECTORY . DESTINATION ${MDE4CPP_HOME}/application/include/${PROJECT_NAME}
	FILES_MATCHING PATTERN "*.hpp"
	PATTERN ".cmake" EXCLUDE
)
