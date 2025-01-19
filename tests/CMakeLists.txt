include(FetchContent)

FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest.git
	GIT_TAG 2b6b042a77446ff322cd7522ca068d9f2a21c1d1
)

FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(primer_test test_primer.cpp)
target_link_libraries(primer_test PRIVATE GTest::GTest primer)
