set ( MEZZE_TEST
    mezze.test.cpp
)

foreach ( TEST ${MEZZE_TEST} )
    get_filename_component( EXECUTABLE ${TEST} NAME_WLE )
    add_executable ( ${EXECUTABLE} ${TEST} )
    target_link_libraries ( ${EXECUTABLE} ${MEZZE_LIBRARY_NAME} )
endforeach ()