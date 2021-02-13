## Queetech LbpLibrary 
## 
## Module : MAIN
## Author : Ing. Petr Neduchal

cmake_minimum_required(VERSION 2.8)

ADD_LIBRARY(CentristLibrary SHARED centrist.cxx centrist.hpp 
							 centristCxx.cxx centristCxx.hpp  	                     

              )
              
TARGET_LINK_LIBRARIES(CentristLibrary ${Libraries} )	

IF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    SET(DYNLIB "centristLibrary.so")
		# Instalace sdilene knihovny
	  install(TARGETS CentristLibrary DESTINATION /lib)  

ELSEIF(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    SET(DYNLIB "CentristLibrary.dll")

ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

set_target_properties(CentristLibrary PROPERTIES
											LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/CentristLibrary/shared
                      LIBRARY_OUTPUT_DIRECTORY_DEBUG ${PROJECT_BINARY_DIR}/CentristLibrary/shared/debug
                      LIBRARY_OUTPUT_DIRECTORY_RELEASE ${PROJECT_BINARY_DIR}/CentristLibrary/shared/release
)  
 
				 
