add_library(primer STATIC Primer.cpp)
target_include_directories(primer PUBLIC include) 
add_executable(main main.cpp)
target_link_libraries(main primer)
	
