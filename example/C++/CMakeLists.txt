add_executable(prog
  src/commCNS.cpp
  src/main.cpp)
set_target_properties(prog PROPERTIES LINKER_LANGUAGE CXX)
include_directories(src)
target_link_libraries(prog CNStream)

if(${CMAKE_BUILD_TYPE_UPPER} STREQUAL "COVERAGE")
    add_coverage(prog)
endif()

install(TARGETS prog
        RUNTIME DESTINATION bin)

add_test(NAME test_cpp
         COMMAND prog
         WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
