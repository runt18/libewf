AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	-I$(top_srcdir)/libcstring \
	-I$(top_srcdir)/liberror \
	-I$(top_srcdir)/libsystem \
	@MEMWATCH_CPPFLAGS@

if HAVE_PYTHON
TESTS_PYEWF  = \
	test_pyewf.sh
endif

TESTS = \
	test_glob.sh \
	test_ewfverify.sh \
	test_ewfinfo.sh \
	test_ewfexport.sh \
	$(TESTS_PYEWF)

check_SCRIPTS = \
	test_glob.sh \
	test_ewfinfo.sh \
	test_ewfexport.sh \
	test_ewfverify.sh \
	test_pyewf.sh

EXTRA_DIST = \
	$(check_SCRIPTS)

check_PROGRAMS = \
	ewf_test_glob

ewf_test_glob_SOURCES = \
	ewf_test_glob.c

ewf_test_glob_LDADD = \
	../libcstring/libcstring.la \
	../libewf/libewf.la \
        @MEMWATCH_LIBADD@

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile
