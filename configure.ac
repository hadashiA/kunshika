#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([kunshika], [0.0.1], [https://github.com/f-kubotar/kunshika])
AC_CONFIG_SRCDIR([src/kunshika.cc])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([foreign])

# Checks for programs.
AC_PROG_CXX

# Checks for libraries.
AC_PATH_PROG(MECAB_CONFIG, mecab-config, "none")
if test x"$MECAB_CONFIG" = x"none"; then
  mecab_exists=no
  MECAB_LIBS=''
  MECAB_CFLAGS=''
else
  mecab_exists=yes
  MECAB_LIBS=`$MECAB_CONFIG --libs`
  MECAB_CFLAGS=`$MECAB_CONFIG --cflags`  
fi        

AC_SUBST([MECAB_CFLAGS])
AC_SUBST([MECAB_LIBS])

AC_PATH_PROG(MAGICKCPP_CONFIG, Magick++-config, "none")
if test x"$MAGICKCPP_CONFIG" = x"none"; then
  magickcpp_exists=no
  MAGICKCPP_LIBS=''
  MAGICKCPP_CXXFLAGS=''
else
  magickcpp_exists=yes
  MAGICKCPP_LIBS=`$MAGICKCPP_CONFIG --libs`
  MAGICKCPP_CXXFLAGS=`$MAGICKCPP_CONFIG --cxxflags`
fi        

AC_SUBST([MAGICKCPP_CXXFLAGS])
AC_SUBST([MAGICKCPP_LIBS])

LIBS="$LIBS $MECAB_LIBS $MAGICKCPP_LIBS"
CXXFLAGS="$CXXFLAGS $MECAB_CFLAGS $MAGICKCPP_CXXFLAGS"

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT
