cmake_minimum_required(VERSION 3.16)

project(QtNoteBookProject VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp

        notebook.h
        notebook.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Widgets)

    qt_add_executable(QtNoteBookProject
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        Pictures.qrc
        shortcut.h
        tipswindows.h
        TipsWindows/tipswindows.cpp
        Shortcut/Shortcut.cpp
        TestEdit/TestEdit.cpp
        TestShow/TextShow.cpp
        Event/NoteBookEvent.cpp
        QPushButtonRealize/NoteBookQPushButton.cpp
        InterFace/SlotInterface.cpp
        AboutNoteBook/SetUi.cpp
        AboutNoteBook/SignalSlot.cpp
        Document/newFile.cpp
        Document/openFile.cpp
        Document/saveFile.cpp
        Document/saveFileAs.cpp
        Document/printFile.cpp
        Document/closeFile.cpp
        Document/copyFile.cpp
        Document/throwFile.cpp
        TipsWindows/openWindow.cpp
        TipsWindows/openWindows.cpp
        TipsWindows/saveWindow.cpp
        TipsWindows/errorTipsWindow.cpp
        TipsWindows/informationTipsWindow.cpp
        TipsWindows/writeWayTipsWindow.cpp
        TipsWindows/readWayTipsWindow.cpp
        headerFiles.h
        login.h  login.ui
        AboutLogin/SetUi.cpp AboutLogin/SignalSlot.cpp
        QPushButtonRealize/LoginQPushButton.cpp QPushButtonRealize/NoteBookQPushButton.cpp
        AboutNoteBook/notebook.cpp AboutNoteBook/SetUi.cpp AboutNoteBook/SignalSlot.cpp
        AboutLogin/login.cpp AboutLogin/SetUi.cpp AboutLogin/SignalSlot.cpp
        NoteBook.md
        Event/LoginEvent.cpp

        LoginEncrypt/LoginEncrypt.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET QtNoteBookProject APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(QtNoteBookProject SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(QtNoteBookProject
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(QtNoteBookProject PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(QtNoteBookProject PRIVATE Qt6::Widgets)
target_link_libraries(QtNoteBookProject PRIVATE Qt6::Widgets)
target_link_libraries(QtNoteBookProject PRIVATE Qt6::Widgets)
target_link_libraries(QtNoteBookProject PRIVATE Qt6::Core)
target_link_libraries(QtNoteBookProject PRIVATE Qt6::Core)
target_link_libraries(QtNoteBookProject PRIVATE Qt6::Widgets)
target_link_libraries(QtNoteBookProject PRIVATE Qt6::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.QtNoteBookProject)
endif()
set_target_properties(QtNoteBookProject PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS QtNoteBookProject
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(QtNoteBookProject)
endif()
