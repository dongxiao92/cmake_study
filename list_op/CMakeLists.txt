cmake_minimum_required(VERSION 3.15)

project(learn_list_op)

set( mylist )
# 1. append alements to list
list( APPEND mylist a )
list( APPEND mylist b )
list( APPEND mylist c )
message( STATUS "mylist = ${mylist}" )

# 2. copy and reverse a list
set( revlist ${mylist} )
message( STATUS "revlist = ${revlist}" )
list( REVERSE revlist )
message(STATUS "after reverse: revlist=${revlist}" )

# 3. iterate over a list
set( names )
set( values )
list( APPEND names x )
list( APPEND names y )
list( APPEND values 1 )
list( APPEND values 2)
# get length
list( LENGTH names len)
math( EXPR my_len "${len} - 1" )
message( STATUS "len = ${len}, my_len = ${my_len}" )
# loop, [0, len-1]?
foreach ( val RANGE ${my_len} )
    list( GET names ${val} name)
    list( GET values ${val} value)
    message( STATUS "${name} : ${value}")
endforeach()
