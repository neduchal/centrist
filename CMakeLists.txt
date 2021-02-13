## Centrist LIBRARY - MAIN CMAKE FILE 
## 
## author : Ing. Petr Neduchal
## version : 1.0.0.
## last update : 2020

cmake_minimum_required(VERSION 2.8)

# Project name
PROJECT(Centrist_Library)

###############################################################################

# The version number.
set (Centrist_VERSION_MAJOR 1)
set (Centrist_VERSION_MINOR 0)
set (Centrist_VERSION_PATCH 0)
set (Centrist_VERSION_STRING ${Centrist_VERSION_MAJOR}.${Centrist_VERSION_MINOR}.${Centrist_VERSION_PATCH})


message("PROJECT Centrist Library ${Centrist_VERSION_STRING}")

#configure_file (
#  "${PROJECT_SOURCE_DIR}/centrist_constants.h.in"
#  "${PROJECT_BINARY_DIR}/centrist_constants.h"
#  )

configure_file (
  "${PROJECT_SOURCE_DIR}/setup.py.in"
  "${PROJECT_BINARY_DIR}/setup.py"
  )
  
configure_file (
  "${PROJECT_SOURCE_DIR}/__init__.py.temp"
  "${PROJECT_BINARY_DIR}/CentristLibrary/python/centrist/__init__.py"
  )
    

include_directories("${PROJECT_BINARY_DIR}")

add_subdirectory(centrist_2d)
message("Main module was successfully configured.")   

				 
