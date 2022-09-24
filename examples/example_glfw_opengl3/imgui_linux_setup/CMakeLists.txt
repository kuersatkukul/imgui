cmake_minimum_required(VERSION 3.24 FATAL_ERROR)
project(customizedImgui)

add_executable(customizedImgui 
	"main.cpp"	
	"imgui.cpp"
	"imgui_demo.cpp"
	"imgui_draw.cpp"
	"imgui_tables.cpp"
	"imgui_widgets.cpp"
	"backend/imgui_impl_glfw.cpp"
	"backend/imgui_impl_opengl3.cpp"
)

if(WIN32)
	find_package(glfw3 REQUIRED PATHS "C:/Program Files (x86)/GLFW")
elseif(UNIX)
	find_package(glfw3 REQUIRED)
else()
	message(FATAL_ERROR "Supported platforms: Windows, Linux")
endif()

find_package(OpenGL REQUIRED)

target_include_directories(customizedImgui PUBLIC
	"${CMAKE_CURRENT_LIST_DIR}"
	"${CMAKE_CURRENT_LIST_DIR}/backend"
)

target_link_libraries(customizedImgui PUBLIC
	glfw
	OpenGL::GL
)
