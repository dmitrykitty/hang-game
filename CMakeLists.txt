cmake_minimum_required(VERSION 3.30)
project(HangManQT)

#set(CMAKE_PREFIX_PATH "C:/Qt/6.9.0/mingw_64/lib/cmake/Qt6"
#        CACHE PATH "Only use this one Qt6 location" FORCE)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_AUTOMOC ON) #makry Q-object
set(CMAKE_AUTOUIC ON) #konwertuje .ui -> .h
set(CMAKE_AUTORCC ON) #kompiluje .qrc -> .cpp
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 REQUIRED COMPONENTS
        Core
        Widgets
        Network
        Sql
        Multimedia
)
set(CMAKE_AUTOUIC_SEARCH_PATHS "${CMAKE_SOURCE_DIR}/GUI/Forms")

add_executable(${PROJECT_NAME}
        main.cpp
        GUI/Source/mainwindow.cpp
        GUI/Forms/mainwindow.ui
        GUI/Source/mainwindow.h
        GUI/Source/windows/difficultydialog.h
        GUI/Source/windows/difficultydialog.cpp
        GUI/Forms/difficultydialog.ui
        GameLogic/Game.h
        GameLogic/Game.cpp
        Resources.qrc
        GameController/GameController.cpp
        GameController/GameController.h
)

target_link_libraries(${PROJECT_NAME}
        Qt6::Core # klasy podstawowe (QObject, QString)
        Qt6::Widgets # GUI(QWidgets, QPushButton)
        Qt6::Network
        Qt6::Sql
        Qt6::Multimedia

)

#get_target_property(_AUTOGEN_INC ${PROJECT_NAME} AUTOGEN_INCLUDE_DIRECTORIES)
#message(STATUS ">>> Qt AUTOGEN include dirs: ${_AUTOGEN_INC}")

target_include_directories(${PROJECT_NAME} PRIVATE
        "${CMAKE_BINARY_DIR}/${PROJECT_NAME}_autogen/include"
)


#-DQT_QMAKE_EXECUTABLE:FILEPATH=%{Qt:qmakeExecutable}
#-DCMAKE_PREFIX_PATH:PATH=%{Qt:QT_INSTALL_PREFIX}
#-DCMAKE_C_COMPILER:FILEPATH=%{Compiler:Executable:C}
#-DCMAKE_CXX_COMPILER:FILEPATH=%{Compiler:Executable:Cxx}