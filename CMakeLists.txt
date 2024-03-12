cmake_minimum_required ( VERSION 3.14..3.25 FATAL_ERROR )

set ( CXX_STANDARD 23 )

set ( CMAKE_CXX_EXTENSIONS OFF )

set (
    MEZZE_LIBRARY_NAME
    mezze
)

project (
    mezze
    VERSION
        0.0.0
    DESCRIPTION
        "Diverse Platter Selection of Small Starter Codes"
    LANGUAGES
        C CXX
)

set ( MEZZE_HEADERS_DIR
    include/mezze )

set ( MEZZE_HEADERS )

set ( MEZZE_SOURCE_DIR
    src )

set ( MEZZE_SOURCE
    ${MEZZE_SOURCE_DIR}/mezze.cpp
)

add_library (
    ${MEZZE_LIBRARY_NAME}
    ${MEZZE_HEADERS}
    ${MEZZE_SOURCE}
)

target_include_directories (
    ${MEZZE_LIBRARY_NAME} PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/${MEZZE_LIBRARY_NAME}>
    $<INSTALL_INTERFACE:include/${MEZZE_LIBRARY_NAME}>
)

target_include_directories (
    ${MEZZE_LIBRARY_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

include ( CTest )
if ( BUILD_TESTING )
    message ( "BUILD | TEST" )
    add_subdirectory ( test )
endif ( BUILD_TESTING )