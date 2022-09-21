#  create CMakeLists.txt

# Older versions of CMake are likely to work just fine but, since
# I don't know where to cut off I just use the version I'm using
cmake_minimum_required(VERSION "3.17")

# name of this example project chnage this c++
project(c++)

# set OpenCV_DIR variable equal to the path to the cmake
# files within the previously installed opencv program
set(OpenCV_DIR //opt/homebrew/Cellar/opencv/4.6.0/lib/cmake/opencv4)

# Tell compiler to use C++ 14 features which is needed because
# Clang version is often behind in the XCode installation
set(CMAKE_CXX_STANDARD 14)

# configure the necessary common CMake environment variables
# needed to include and link the OpenCV program into this
# demo project, namely OpenCV_INCLUDE_DIRS and OpenCV_LIBS
find_package( OpenCV REQUIRED )

# tell the build to include the headers from OpenCV
include_directories( ${OpenCV_INCLUDE_DIRS} )

# specify the executable target to be built change this c++
add_executable(c++ main.cpp)

# tell it to link the executable target against OpenCV change this c++

target_link_libraries(c++ ${OpenCV_LIBS} )



# then inside that folder create new folder build
mkdir build && cd build


# then run this command
cmake ..

# then run this command
make

# then run this command change the c++ with your folder name

./c++ /Users/thrilok/Documents/mount-kailash.jpeg