#.rst:
# FindDavix
# -------
#
# Find Davix library for file management over HTTP-based protocols.
#
# Imported Targets
# ^^^^^^^^^^^^^^^^
#
# This module defines :prop_tgt:`IMPORTED` target:
#
# ``Davix::Davix``
#   The libdavix library, if found.
#
# Result Variables
# ^^^^^^^^^^^^^^^^
#
# This module will set the following variables in your project:
#
# ``DAVIX_FOUND``
#   True if Davix has been found.
# ``DAVIX_INCLUDE_DIRS``
#   Where to find davix.hpp, etc.
# ``DAVIX_LIBRARIES``
#   The libraries to link against to use Davix.
# ``DAVIX_VERSION``
#   The version of the Davix library found (e.g. 0.6.4)
#
# Obsolete variables
# ^^^^^^^^^^^^^^^^^^
#
# The following variables may also be set, for backwards compatibility:
#
# ``DAVIX_LIBRARY``
#   where to find the DAVIX library.
# ``DAVIX_INCLUDE_DIR``
#   where to find the DAVIX headers (same as DAVIX_INCLUDE_DIRS)
#
# Since Davix depends on OpenSSL and LibXml2, none of the above will be defined
# unless both packages can be found.

if(Davix_FIND_QUIETLY)
  set(_FIND_DEPS_ARG QUIET)
endif()

foreach(var FOUND INCLUDE_DIR INCLUDE_DIRS LIBRARY LIBRARIES)
  unset(DAVIX_${var} CACHE)
endforeach()

find_package(LibXml2 ${_FIND_DEPS_ARG})
find_package(OpenSSL ${_FIND_DEPS_ARG})

if(LIBXML2_FOUND AND OPENSSL_FOUND)
  find_path(DAVIX_INCLUDE_DIR davix.hpp PATH_SUFFIXES davix/include)

  if(${Davix_FIND_REQUIRED})
    set(Davix_REQUIRED REQUIRED)
  endif()

  find_package(PkgConfig REQUIRED)
  pkg_check_modules(DAVIX ${Davix_REQUIRED} davix>=${Davix_FIND_VERSION})

  set(DAVIX_LIBRARIES ${DAVIX_LDFLAGS} ${LIBXML2_LIBRARIES} ${OPENSSL_LIBRARIES})
  set(DAVIX_LIBRARY ${DAVIX_LIBRARIES})
  set(DAVIX_INCLUDE_DIRS ${DAVIX_INCLUDE_DIRS} ${LIBXML2_INCLUDE_DIRS} ${OPENSSL_INCLUDE_DIRS})
  set(DAVIX_INCLUDE_DIR ${DAVIX_INCLUDE_DIRS})
endif()

if(DAVIX_FOUND AND NOT TARGET Davix::Davix)
  add_library(Davix::Davix INTERFACE IMPORTED)
  string(REPLACE "-D" "" DAVIX_DEFINITIONS ${DAVIX_CFLAGS_OTHER})
  set_target_properties(Davix::Davix PROPERTIES
    INTERFACE_COMPILE_DEFINITIONS "${DAVIX_DEFINITIONS}"
    INTERFACE_INCLUDE_DIRECTORIES "${DAVIX_INCLUDE_DIRS}"
    INTERFACE_LINK_LIBRARIES "${DAVIX_LIBRARIES}")
endif()

mark_as_advanced(DAVIX_INCLUDE_DIR DAVIX_LIBRARY)
