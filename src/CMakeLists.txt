INCLUDE_DIRECTORIES (../header)

file(MAKE_DIRECTORY "../../output")

set(SRC_FILES main.c delete.c insert.c print.c find.c RegFromFile.c RegToFile.c sort.c)
set(OUTPUT_DIR ../../output)

add_executable(project ${SRC_FILES})
set_target_properties(project PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})