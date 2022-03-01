PROJ_NAME = Sci_calc
	SRC = Sci_calc.c main.c Sci_calc.h

TEST_SRC= test_Sci_calc.c unity.c Sci_calc.c

ifdef os
	RM = del /q
	FixPath = $(subst /,\,$1 )
	EXEC = exe 
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
      EXEC = out
   endif
endif

Build:
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
run:Build
	-./$(call FixPath,$(PROJ_NAME).$(EXEC))

Build_test:
	gcc$(TEST_SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
run:Build_test
	-./$(call FixPath,$(PROJ_NAME).$(EXEC))


