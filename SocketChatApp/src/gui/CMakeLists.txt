include_directories(${PROJECT_SOURCE_DIR}/src/gui)
include_directories(${PROJECT_SOURCE_DIR}/src)

# add the include directory for the socket posix
link_directories(${CMAKE_SOURCE_DIR}/src/eth)

# Qt library check
find_package(Qt5 COMPONENTS Widgets REQUIRED)


#
#build the server
#
add_executable(ChatAppServer
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
)

target_link_libraries(ChatAppServer PRIVATE Qt5::Widgets SocketLib)
TARGET_COMPILE_DEFINITIONS (ChatAppServer PUBLIC -DBUILD_ETH_SERVER=1)

#
# build the client
#
add_executable(ChatAppClient
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
)

target_link_libraries(ChatAppClient PRIVATE Qt5::Widgets SocketLib)
TARGET_COMPILE_DEFINITIONS (ChatAppClient PUBLIC -DBUILD_ETH_CLIENT=1)

