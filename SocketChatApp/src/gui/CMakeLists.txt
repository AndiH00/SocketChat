include_directories(${PROJECT_SOURCE_DIR}/src/gui)
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(SocketChatApp
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
)

add_executable(SocketChatAppClient
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
)

link_directories(${CMAKE_SOURCE_DIR}/src/eth)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(SocketChatApp PRIVATE Qt5::Widgets SocketLib)
target_link_libraries(SocketChatAppClient PRIVATE Qt5::Widgets SocketLib)


