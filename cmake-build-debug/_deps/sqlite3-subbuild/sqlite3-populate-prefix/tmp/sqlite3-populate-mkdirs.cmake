# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/happy394/CLionProjects/untitled/cmake-build-debug/_deps/sqlite3-src"
  "/Users/happy394/CLionProjects/untitled/cmake-build-debug/_deps/sqlite3-build"
  "/Users/happy394/CLionProjects/untitled/cmake-build-debug/_deps/sqlite3-subbuild/sqlite3-populate-prefix"
  "/Users/happy394/CLionProjects/untitled/cmake-build-debug/_deps/sqlite3-subbuild/sqlite3-populate-prefix/tmp"
  "/Users/happy394/CLionProjects/untitled/cmake-build-debug/_deps/sqlite3-subbuild/sqlite3-populate-prefix/src/sqlite3-populate-stamp"
  "/Users/happy394/CLionProjects/untitled/cmake-build-debug/_deps/sqlite3-subbuild/sqlite3-populate-prefix/src"
  "/Users/happy394/CLionProjects/untitled/cmake-build-debug/_deps/sqlite3-subbuild/sqlite3-populate-prefix/src/sqlite3-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/happy394/CLionProjects/untitled/cmake-build-debug/_deps/sqlite3-subbuild/sqlite3-populate-prefix/src/sqlite3-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/happy394/CLionProjects/untitled/cmake-build-debug/_deps/sqlite3-subbuild/sqlite3-populate-prefix/src/sqlite3-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
