#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT(extest, 1.0, lostjared@lostsidedead.com)

AC_CANONICAL_SYSTEM
AM_INIT_AUTOMAKE
AM_PROG_AS
AC_LANG_CPLUSPLUS
AC_PROG_CXX
AC_PROG_LN_S
AC_PROG_MAKE_SET

PKG_CHECK_MODULES(EXAMPLE, example, found=1, found=0)
EXT_CFLAGS=$EXAMPLE_CFLAGS
EXT_LIBS=$EXAMPLE_LIBS

echo $EXT CFLAGS
echo $EXT_LIBS

AC_SUBST(EXT_CFLAGS)
AC_SUBST(EXT_LIBS)

AC_OUTPUT(Makefile src/Makefile)
