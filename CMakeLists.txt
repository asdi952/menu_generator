
cmake_minimum_required(VERSION 3.13)  # CMake version check

Project(menu0)

set( CMAKE_CXX_STANDARD 17)            # Enable c++14 standard
set( CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall")
set( CMAKE_BUILD_TYPE Debug)

##------------------------------------------------------------
file( GLOB_RECURSE LOCAL_SRC CONFIGURE_DEPENDS "src/*.cpp")
file( GLOB LOCAL_HEADERS CONFIGURE_DEPENDS "src/" )
file( GLOB LOCAL_PRE_HEADERS CONFIGURE_DEPENDS "src/pre/*.h")
##------------------------------------------------------------
set( LIBS_INCLUDE_DIRS 
)
set( LIBS_INCLUDE_DEPS
)
message("--------------------------" ${LOCAL_SRC})
##------------------------------------------------------------

#message( "message " ${LOCAL_HEADERS})
add_executable(${PROJECT_NAME} ${LOCAL_SRC})

target_include_directories(${PROJECT_NAME} PRIVATE ${LOCAL_HEADERS} ${LIBS_INCLUDE_DIRS})
target_precompile_headers(${PROJECT_NAME} PRIVATE ${LOCAL_PRE_HEADERS})


target_link_libraries(${PROJECT_NAME} ${LIBS_INCLUDE_DEPS})



#target_include_directories(${PROJECT_NAME} PRIVATE  include/)

