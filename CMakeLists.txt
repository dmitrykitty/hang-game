cmake_minimum_required(VERSION 3.30)
project(HangManQT
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# ← Make sure this matches your Qt install!
#set(CMAKE_PREFIX_PATH "C:/Qt/6.9.0/mingw_64/lib/cmake/Qt6" CACHE PATH "" FORCE)

# enable Qt’s automatic moc/uic/rcc handling
set(CMAKE_AUTOMOC   ON)
set(CMAKE_AUTOUIC   ON)
set(CMAKE_AUTORCC   ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS "${CMAKE_SOURCE_DIR}/GUI/Forms")

# find all the Qt6 modules you need in one go
find_package(Qt6 REQUIRED COMPONENTS
    Core
    Widgets
    Network
    Sql
    Multimedia
)

# turn your sources list into an actual target
qt_standard_project_setup()
qt_add_executable(${PROJECT_NAME}
    main.cpp
    GUI/Source/mainwindow.cpp
    GUI/Source/mainwindow.h
    GUI/Forms/mainwindow.ui
    GUI/Source/windows/difficultydialog.cpp
    GUI/Source/windows/difficultydialog.h
    GUI/Forms/difficultydialog.ui
    GameLogic/Game.cpp
    GameLogic/Game.h
    GameController/GameController.cpp
    GameController/GameController.h
    DataBase/DataBaseManager.cpp
    DataBase/DataBaseManager.h
    Resources.qrc
)

# link against Qt libraries
target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Core
    Qt6::Widgets
    Qt6::Network
    Qt6::Sql        # ← this brings in QSQLITE support at build time
    Qt6::Multimedia
)

# ensure the generated ui headers are found
target_include_directories(${PROJECT_NAME} PRIVATE
    "$<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/${PROJECT_NAME}_autogen/include>"
)

# this will copy the Qt DLLs **and** the sqldrivers plugins for you
#qt_finalize_executable(${PROJECT_NAME})
