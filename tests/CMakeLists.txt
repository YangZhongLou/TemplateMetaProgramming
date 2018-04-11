
set(test_name Test)

file(GLOB source *.cpp *.hpp)
		
if(WIN32)
	add_executable(${test_name} ${source})
	target_link_libraries(${test_name} Metalib)
else(WIN32)
	add_executable(${test_name} ${source})
	target_link_libraries(${test_name} )
endif(WIN32)
