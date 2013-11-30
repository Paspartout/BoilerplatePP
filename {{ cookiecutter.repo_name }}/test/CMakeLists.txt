FILE (GLOB_RECURSE test_SRCS *.cpp *.cxx *.cc *.C *.c *.h *.hpp)
SET (test_BIN ${PROJECT_NAME}_test)
SET (test_LIBS ${PROJECT_NAME})

# configure the executable
LINK_DIRECTORIES(${MAINFOLDER}/lib)
INCLUDE_DIRECTORIES("${CATCH_DIR}/include")
ADD_EXECUTABLE(${test_BIN} ${test_SRCS})
TARGET_LINK_LIBRARIES(${test_BIN} ${test_LIBS})

# configure unit tests via CTest
ADD_TEST(NAME AllTests COMMAND ${test_BIN})

# run catch tests directly
ADD_CUSTOM_TARGET(catch "${MAINFOLDER}/bin/${test_BIN}" DEPENDS ${test_BIN} COMMENT "Executing unit tests..." VERBATIM SOURCES ${test_SRCS})
