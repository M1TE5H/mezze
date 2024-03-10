cmake_minimum_required ( VERSION 3.14..3.25 FATAL_ERROR )

set ( CXX_STANDARD 23 )

set ( CMAKE_CXX_EXTENSIONS OFF )

project (
    mezze
    VERSION
        0.0.0
    DESCRIPTION
        "Diverse Platter Selection of Small Starter Codes"
    LANGUAGES
        C CXX
)

set ( SOURCE_DIR src )

set ( SOURCE
    ${SOURCE_DIR}/mezze.cpp
) 

foreach ( SRC ${SOURCE} )
    get_filename_component( EXECUTABLE ${SRC} NAME_WE )
    add_executable ( EXECUTABLE ${SRC} )
endforeach ()