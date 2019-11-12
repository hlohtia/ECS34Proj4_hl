LIBCSVDIR = libcsv-3.0.3
LIBCSVLIB = libcsv.a

INCDIR = ./include
SRCDIR = ./src
OBJDIR = ./obj
BINDIR = ./bin
TESTBINDIR = ./testbin
S
all: $(LIBCSVDIR)/.libs/$(LIBCSVLIB) directories RUNTESTS


RUNTESTS: CSVTEST
	CSVTEST

CSVTEST:

$(LIBCSVDIR)/.libs/$(LIBCSVLIB): $(LIBCSVDIR)/Makefile
	cd $(LIBCSVDIR); make ; ..cd

$(LIBCSVDIR)/Makefile
	cd $(LIBCSVDIR); ./configure; ..cd
directories: $(BINDIR) $(OBJDIR) $(TESTBINDIR)

$(BINDIR):
	mdir -p
clean:
	cd $(LIBCSVDIR); make clean; cd ..
	rm -f $(LIBCSVDIR)/Makefile