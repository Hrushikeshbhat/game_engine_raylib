########################################################################
####################### Makefile Template ##############################
########################################################################

# Makefile settings - Can be customized.
APPNAME = FlappyBird
EXT = .cpp
SRCDIR = src
OBJDIR = obj

INCLUDE_DIRS = $(SRCDIR)/Core/Utils 
INCLUDE_DIRS += $(SRCDIR)/Core/GameBase 
INCLUDE_DIRS += $(SRCDIR)/Core/ 
INCLUDE_DIRS += $(SRCDIR)/FlappyBird

RAYLIB_PATH        ?= RaylibRepo/src/libraylib.a

# Define default options
# One of PLATFORM_DESKTOP, PLATFORM_RPI, PLATFORM_ANDROID, PLATFORM_WEB
PLATFORM           ?= PLATFORM_DESKTOP

# Compiler settings - Can be customized.
CC = clang
CXXFLAGS = -std=c++11 -Wall
LDFLAGS = 
LDLIBS = -framework OpenGL -framework OpenAL -framework Cocoa -framework IOKit -framework OpenGL $(RAYLIB_PATH)
STDLIBS = -lstdc++


############## Do not change anything from here downwards! #############
#The line below is doing the same as 'SRC = $(SRCDIR)/main.cpp $(wildcard $(SRCDIR)/Core/GameBase/*.cpp) $(wildcard $(SRCDIR)/Core/*.cpp)'
SRC = $(SRCDIR)/main.cpp $(foreach dir, $(INCLUDE_DIRS), $(wildcard $(dir)/*$(EXT)))
OBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)
DEP = $(OBJ:$(OBJDIR)/%.o=%.d)
# UNIX-based OS variables & settings
RM = rm
DELOBJ = $(OBJ)
# Windows OS variables & settings
DEL = del
EXE = .exe
WDELOBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)\\%.o)

########################################################################
####################### Targets beginning here #########################
########################################################################

all: $(APPNAME)

# build command example
# clang -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL libraylib.a my_app.c -o my_app
# Builds the app
$(APPNAME): $(OBJ)
	$(CC) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS) -D$(PLATFORM) $(STDLIBS)

# Creates the dependecy rules
%.d: $(SRCDIR)/%$(EXT)
	@$(CPP) $(CFLAGS) $< -MM -MT $(@:%.d=$(OBJDIR)/%.o) >$@

# Includes all .h files
-include $(DEP)

# Building rule for .o files and its .c/.cpp in combination with all .h
$(OBJDIR)/%.o: $(SRCDIR)/%$(EXT)
	@mkdir -p $(@D)
	$(CC) $(CXXFLAGS) -o $@ -c $< -D$(PLATFORM)

################### Cleaning rules for Unix-based OS ###################
# Cleans complete project
.PHONY: clean
clean:
	$(RM) $(DELOBJ) $(DEP) $(APPNAME)

# Cleans only all files with the extension .d
.PHONY: cleandep
cleandep:
	$(RM) $(DEP)

#################### Cleaning rules for Windows OS #####################
# Cleans complete project
.PHONY: cleanw
cleanw:
	$(DEL) $(WDELOBJ) $(DEP) $(APPNAME)$(EXE)

# Cleans only all files with the extension .d
.PHONY: cleandepw
cleandepw:
	$(DEL) $(DEP)