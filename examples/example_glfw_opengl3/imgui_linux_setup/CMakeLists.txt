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

find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)
target_include_directories(customizedImgui PUBLIC
	"${CMAKE_CURRENT_LIST_DIR}"
	"${CMAKE_CURRENT_LIST_DIR}/backend"
)

target_link_libraries(customizedImgui PUBLIC
	glfw
	OpenGL
)
