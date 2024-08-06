set(WOLFRAM_APPID
	""
	CACHE STRING "WloframAppha APPID")

if(WOLFRAM_APPID STREQUAL "")
	message(SEND_ERROR "WOLFRAM_APPID must not be empty")
endif()

add_library(libanswer STATIC answer.cpp)
target_include_directories(libanswer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_definitions(libanswer PRIVATE WOLFRAM_APPID="${WOLFRAM_APPID}")

target_link_libraries(libanswer PRIVATE wolfram)
