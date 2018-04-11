file(GLOB src "*.hpp" "*.h" "*.cpp")

function(make_library)
	if(WIN32)
		add_library(Metalib STATIC ${src})
	else(WIN32)
		#Add more
	endif(WIN32)
endfunction(make_library)

make_library()