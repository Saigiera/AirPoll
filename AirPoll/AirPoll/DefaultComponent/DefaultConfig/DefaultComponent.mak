
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

CleanupFlagForSimulink=
SIMULINK_CONFIG=False
ifeq ($(SIMULINK_CONFIG),True)
CleanupFlagForSimulink=-DOM_WITH_CLEANUP
endif

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)CYGWIN $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -Wno-write-strings $(CPPCompileDebug) -c  $(CleanupFlagForSimulink)
ConfigurationCCCompileSwitches=$(INCLUDE_PATH) -c 

#########################################
###### Predefined macros ################
RM=/bin/rm -rf
INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=g++
LIB_CMD=ar
LINK_CMD=g++
LIB_FLAGS=rvu
LINK_FLAGS= $(LinkDebug)   

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/ProgramData/IBM/Rational/Rhapsody/8.3.1/Share"
RHPROOT="C:/Program Files/IBM/Rational/Rhapsody/8.3.1"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  Ikona.o \
  OdbiornikGPS.o \
  Aplikacja.o \
  Norma.o \
  Czujnik.o \
  PowiadomieniePrz.o \
  Paczka.o \
  Ustawienia.o \
  User.o \
  Zanieczyszczenia.o \
  Default.o




#########################################
####### Predefined macros ###############
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwinaomanim$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinoxsiminst$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwintomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinaomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinoxsiminst$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxsim$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxf$(LIB_EXT)
SOCK_LIB=-lws2_32

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)

#####################################################################
##################### Context dependencies and commands #############






Ikona.o : Ikona.cpp Ikona.h    Default.h OdbiornikGPS.h 
	@echo Compiling Ikona.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Ikona.o Ikona.cpp




OdbiornikGPS.o : OdbiornikGPS.cpp OdbiornikGPS.h    Default.h Aplikacja.h Ikona.h 
	@echo Compiling OdbiornikGPS.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o OdbiornikGPS.o OdbiornikGPS.cpp




Aplikacja.o : Aplikacja.cpp Aplikacja.h    Default.h Paczka.h PowiadomieniePrz.h OdbiornikGPS.h Czujnik.h Norma.h 
	@echo Compiling Aplikacja.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Aplikacja.o Aplikacja.cpp




Norma.o : Norma.cpp Norma.h    Default.h Aplikacja.h 
	@echo Compiling Norma.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Norma.o Norma.cpp




Czujnik.o : Czujnik.cpp Czujnik.h    Default.h Aplikacja.h 
	@echo Compiling Czujnik.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Czujnik.o Czujnik.cpp




PowiadomieniePrz.o : PowiadomieniePrz.cpp PowiadomieniePrz.h    Default.h Aplikacja.h 
	@echo Compiling PowiadomieniePrz.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PowiadomieniePrz.o PowiadomieniePrz.cpp




Paczka.o : Paczka.cpp Paczka.h    Default.h Aplikacja.h Ustawienia.h 
	@echo Compiling Paczka.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Paczka.o Paczka.cpp




Ustawienia.o : Ustawienia.cpp Ustawienia.h    Default.h Paczka.h 
	@echo Compiling Ustawienia.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Ustawienia.o Ustawienia.cpp




User.o : User.cpp User.h    Default.h 
	@echo Compiling User.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o User.o User.cpp




Zanieczyszczenia.o : Zanieczyszczenia.cpp Zanieczyszczenia.h    Default.h 
	@echo Compiling Zanieczyszczenia.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Zanieczyszczenia.o Zanieczyszczenia.cpp




Default.o : Default.cpp Default.h    Ikona.h OdbiornikGPS.h Aplikacja.h Norma.h Czujnik.h PowiadomieniePrz.h Paczka.h Ustawienia.h 
	@echo Compiling Default.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Default.o Default.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) Ikona.o
	$(RM) OdbiornikGPS.o
	$(RM) Aplikacja.o
	$(RM) Norma.o
	$(RM) Czujnik.o
	$(RM) PowiadomieniePrz.o
	$(RM) Paczka.o
	$(RM) Ustawienia.o
	$(RM) User.o
	$(RM) Zanieczyszczenia.o
	$(RM) Default.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

