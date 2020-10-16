cmake_minimum_required(VERSION 3.17)
project(convertisseur)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON )

add_executable(convertisseur main.cpp Mdonnees.cpp Mdonnees.h View.cpp View.h Presenter.cpp Presenter.h)
find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets)
target_link_libraries(convertisseur Qt5::Core Qt5::Gui Qt5::Widgets)
