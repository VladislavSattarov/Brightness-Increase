cmake_minimum_required(VERSION 3.16)

project(BrightnessIncrease LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Gui REQUIRED)

add_executable(BrightnessIncrease
  main.cpp
  Source/ImageData.h
  Source/Properties.h
  Source/IImageFilter.h
  Source/BrightnessFilter.h Source/BrightnessFilter.cpp
  Source/IImageSaver.h
  Source/IImageLoader.h
  Source/QtImageSaver.h Source/QtImageSaver.cpp
  Source/QtImageLoader.h Source/QtImageLoader.cpp
  Source/Pixel.h
)
target_link_libraries(BrightnessIncrease Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(BrightnessIncrease Qt${QT_VERSION_MAJOR}::Gui)

include(GNUInstallDirs)
install(TARGETS BrightnessIncrease
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
