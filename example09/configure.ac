AC_PREREQ([2.69])
AC_INIT(actest, 1.0, lostjared@lostsidedead.com)

AC_CANONICAL_SYSTEM
AM_INIT_AUTOMAKE
AM_PROG_AS
AC_LANG_CPLUSPLUS
AC_PROG_CXX
AC_PROG_LN_S
AC_PROG_MAKE_SET


PKG_CHECK_MODULES(OPENCV, opencv, found=1, found=0)

if test $found = 0; then
AC_MSG_ERROR(Error could not find OpenCV library pkg-config file is it installed?)
else
echo "OpenCV Library Found!"
fi

PKG_CHECK_MODULES(ACIDCAM, acidcam, found=1, found=0)

if test $found = 0; then
AC_MSG_ERROR(Error could not find libacidcam library pkg-config file is it installed?)
else
echo "libacidcam Library Found!"
fi

EXT_CFLAGS=$ACIDCAM_CFLAGS
EXT_LIBS=$ACIDCAM_LIBS


echo "FLAGS: $EXT_CFLAGS $OPENCV_CFLAGS"
echo "LIBS: $EXT_LIBS $OPENCV_LIBS"

AC_SUBST(EXT_CFLAGS)
AC_SUBST(EXT_LIBS)
AC_SUBST(OPENCV_CFLAGS)
AC_SUBST(OPENCV_LIBS)
AC_OUTPUT(Makefile code/Makefile)
