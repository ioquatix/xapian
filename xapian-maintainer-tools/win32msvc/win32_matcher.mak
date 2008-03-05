# Makefile for Microsoft Visual C++ 7.0 (or compatible)
# Originally by Ulrik Petersen
# Modified by Charlie Hull, Lemur Consulting Ltd.
# www.lemurconsulting.com
# 17th March 2006

# Will build a Win32 static library (non-debug) libmatcher.lib


!INCLUDE ..\win32\config.mak

OUTDIR=..\win32\$(XAPIAN_DEBUG_OR_RELEASE)\libs
INTDIR=.\

ALL : "$(OUTDIR)\libmatcher.lib" 

OBJS= \
    $(INTDIR)\andmaybepostlist.obj\
    $(INTDIR)\andnotpostlist.obj\
    $(INTDIR)\andpostlist.obj\
    $(INTDIR)\bm25weight.obj\
    $(INTDIR)\branchpostlist.obj\
    $(INTDIR)\emptysubmatch.obj\
    $(INTDIR)\exactphrasepostlist.obj\
    $(INTDIR)\localmatch.obj\
    $(INTDIR)\mergepostlist.obj\
    $(INTDIR)\msetcmp.obj\
    $(INTDIR)\msetpostlist.obj\
    $(INTDIR)\multiandpostlist.obj\
    $(INTDIR)\multimatch.obj\
    $(INTDIR)\orpostlist.obj\
    $(INTDIR)\phrasepostlist.obj\
    $(INTDIR)\queryoptimiser.obj\
    $(INTDIR)\rset.obj\
    $(INTDIR)\scaleweight.obj\
    $(INTDIR)\selectpostlist.obj\
    $(INTDIR)\stats.obj\
    $(INTDIR)\tradweight.obj\
    $(INTDIR)\valuerangepostlist.obj\
    $(INTDIR)\valuegepostlist.obj\
    $(INTDIR)\weight.obj\
    $(INTDIR)\xorpostlist.obj\
    $(INTDIR)\remotesubmatch.obj


SRCS= \
    $(INTDIR)\andmaybepostlist.cc\
    $(INTDIR)\andnotpostlist.cc\
    $(INTDIR)\andpostlist.cc\
    $(INTDIR)\bm25weight.cc\
    $(INTDIR)\branchpostlist.cc\
    $(INTDIR)\emptysubmatch.cc\
    $(INTDIR)\exactphrasepostlist.cc\
    $(INTDIR)\localmatch.cc\
    $(INTDIR)\mergepostlist.cc\
    $(INTDIR)\msetcmp.cc\
    $(INTDIR)\msetpostlist.cc\
    $(INTDIR)\multiandpostlist.cc\
    $(INTDIR)\multimatch.cc\
    $(INTDIR)\orpostlist.cc\
    $(INTDIR)\phrasepostlist.cc\
    $(INTDIR)\queryoptimiser.cc\
    $(INTDIR)\rset.cc\
    $(INTDIR)\scaleweight.cc\
    $(INTDIR)\selectpostlist.cc\
    $(INTDIR)\stats.cc\
    $(INTDIR)\tradweight.cc\
    $(INTDIR)\valuerangepostlist.cc\
    $(INTDIR)\valuegepostlist.cc\
    $(INTDIR)\weight.cc\
    $(INTDIR)\xorpostlist.cc\
    $(INTDIR)\remotesubmatch.cc


CLEAN :
    -@erase "$(OUTDIR)\libmatcher.lib"
    -@erase "*.pch"
        -@erase "$(INTDIR)\getopt.obj"
    -@erase "$(INTDIR)\*.pdb"
    -@erase $(OBJS)


"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=$(CPPFLAGS_EXTRA) \
 -I"..\languages" \
 -Fo"$(INTDIR)\\" -Tp$(INPUTNAME)
 
CPP_OBJS=..\win32\$(XAPIAN_DEBUG_OR_RELEASE)
CPP_SBRS=.


"$(OUTDIR)\LIBMATCHER.lib" : HEADERS "$(OUTDIR)" $(DEF_FILE) $(OBJS)
    $(LIB32) @<<
  $(LIB32_FLAGS) /out:"$(OUTDIR)\libmatcher.lib" $(DEF_FLAGS) $(OBJS)
<<


# inference rules, showing how to create one type of file from another with the same root name
{.}.cc{$(INTDIR)}.obj::
    $(CPP) @<<
    $(CPP_PROJ) $< 
<<

{.}.cc{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

# Calculate any header dependencies and automatically insert them into this file
HEADERS :
            if exist ..\win32\$(DEPEND) ..\win32\$(DEPEND) -- $(CPP_PROJ) -- $(SRCS) -I"$(INCLUDE)"
# DO NOT DELETE THIS LINE -- make depend depends on it.