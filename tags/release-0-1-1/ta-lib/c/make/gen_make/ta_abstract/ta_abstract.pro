# Do not modify this file. It is automatically
# generated by make_pro.pl

TEMPLATE  = lib
CONFIG   -= qt
CONFIG   += staticlib

# Identify the temp dir
cmd:OBJECTS_DIR = ../../../../../temp/cmd
cmr:OBJECTS_DIR = ../../../../../temp/cmr
csd:OBJECTS_DIR = ../../../../../temp/csd
csr:OBJECTS_DIR = ../../../../../temp/csr
cdr:OBJECTS_DIR = ../../../../../temp/cdr
cdd:OBJECTS_DIR = ../../../../../temp/cdd

# Identify the target
LIBTARGET = ta_abstract
cmd:TARGET = ta_abstract_cmd
cmr:TARGET = ta_abstract_cmr
csd:TARGET = ta_abstract_csd
csr:TARGET = ta_abstract_csr
cdr:TARGET = ta_abstract_cdr
cdd:TARGET = ta_abstract_cdd

# Output info
DESTDIR     = ../../../../../lib

# Files to process
SOURCES	= ../../../../../src/ta_abstract/ta_abstract.c \ 
          ../../../../../src/ta_abstract/ta_def_ui.c \ 
          ../../../../../src/ta_abstract/ta_group_idx.c \ 
          ../../../../../src/ta_abstract/frames/ta_frame.c \ 
          ../../../../../src/ta_abstract/tables/table_a.c \ 
          ../../../../../src/ta_abstract/tables/table_b.c \ 
          ../../../../../src/ta_abstract/tables/table_c.c \ 
          ../../../../../src/ta_abstract/tables/table_d.c \ 
          ../../../../../src/ta_abstract/tables/table_e.c \ 
          ../../../../../src/ta_abstract/tables/table_f.c \ 
          ../../../../../src/ta_abstract/tables/table_g.c \ 
          ../../../../../src/ta_abstract/tables/table_h.c \ 
          ../../../../../src/ta_abstract/tables/table_i.c \ 
          ../../../../../src/ta_abstract/tables/table_j.c \ 
          ../../../../../src/ta_abstract/tables/table_k.c \ 
          ../../../../../src/ta_abstract/tables/table_l.c \ 
          ../../../../../src/ta_abstract/tables/table_m.c \ 
          ../../../../../src/ta_abstract/tables/table_n.c \ 
          ../../../../../src/ta_abstract/tables/table_o.c \ 
          ../../../../../src/ta_abstract/tables/table_p.c \ 
          ../../../../../src/ta_abstract/tables/table_q.c \ 
          ../../../../../src/ta_abstract/tables/table_r.c \ 
          ../../../../../src/ta_abstract/tables/table_s.c \ 
          ../../../../../src/ta_abstract/tables/table_t.c \ 
          ../../../../../src/ta_abstract/tables/table_u.c \ 
          ../../../../../src/ta_abstract/tables/table_v.c \ 
          ../../../../../src/ta_abstract/tables/table_w.c \ 
          ../../../../../src/ta_abstract/tables/table_x.c \ 
          ../../../../../src/ta_abstract/tables/table_y.c \ 
          ../../../../../src/ta_abstract/tables/table_z.c 
# Compiler Options
INCLUDEPATH = ../../../../../src/ta_common \ 
              ../../../../../src/ta_abstract \ 
              ../../../../../src/ta_abstract/tables \ 
              ../../../../../src/ta_abstract/frames \ 
              ../../../../../include \ 

# debug/release dependent options.
debug:DEFINES   *= TA_DEBUG
debug:DEFINES   *= _DEBUG
DEFINES        += TA_SINGLE_THREAD
thread:DEFINES -= TA_SINGLE_THREAD

# Platform dependent options.
win32:DEFINES         *= WIN32
win32-msvc:DEFINES    *= _MBCS _LIB

cmd:TEMP_CLEAN_ALL = ../../../../../temp/cmd/*.pch
cmr:TEMP_CLEAN_ALL = ../../../../../temp/cmr/*.pch
csd:TEMP_CLEAN_ALL = ../../../../../temp/csd/*.pch
csr:TEMP_CLEAN_ALL = ../../../../../temp/csr/*.pch
cdr:TEMP_CLEAN_ALL = ../../../../../temp/cdr/*.pch
cdd:TEMP_CLEAN_ALL = ../../../../../temp/cdd/*.pch

cmd:TEMP_CLEAN_ALL2 = ../../../../../temp/cmd/*.idb
cmr:TEMP_CLEAN_ALL2 = ../../../../../temp/cmr/*.idb
csd:TEMP_CLEAN_ALL2 = ../../../../../temp/csd/*.idb
csr:TEMP_CLEAN_ALL2 = ../../../../../temp/csr/*.idb
cdr:TEMP_CLEAN_ALL2 = ../../../../../temp/cdr/*.idb
cdd:TEMP_CLEAN_ALL2 = ../../../../../temp/cdd/*.idb

cmd:TEMP_CLEAN_ALL3 = ../../../../../temp/cmd/$$LIBTARGET/*.pch
cmr:TEMP_CLEAN_ALL3 = ../../../../../temp/cmr/$$LIBTARGET/*.pch
csd:TEMP_CLEAN_ALL3 = ../../../../../temp/csd/$$LIBTARGET/*.pch
csr:TEMP_CLEAN_ALL3 = ../../../../../temp/csr/$$LIBTARGET/*.pch
cdr:TEMP_CLEAN_ALL3 = ../../../../../temp/cdr/$$LIBTARGET/*.pch
cdd:TEMP_CLEAN_ALL3 = ../../../../../temp/cdd/$$LIBTARGET/*.pch

cmd:TEMP_CLEAN_ALL4 = ../../../../../temp/cmd/$$LIBTARGET/*.idb
cmr:TEMP_CLEAN_ALL4 = ../../../../../temp/cmr/$$LIBTARGET/*.idb
csd:TEMP_CLEAN_ALL4 = ../../../../../temp/csd/$$LIBTARGET/*.idb
csr:TEMP_CLEAN_ALL4 = ../../../../../temp/csr/$$LIBTARGET/*.idb
cdr:TEMP_CLEAN_ALL4 = ../../../../../temp/cdr/$$LIBTARGET/*.idb
cdd:TEMP_CLEAN_ALL4 = ../../../../../temp/cdd/$$LIBTARGET/*.idb

cmd:TEMP_CLEAN_ALL5 = ../../../../../temp/cmd/$$LIBTARGET/*.obj
cmr:TEMP_CLEAN_ALL5 = ../../../../../temp/cmr/$$LIBTARGET/*.obj
csd:TEMP_CLEAN_ALL5 = ../../../../../temp/csd/$$LIBTARGET/*.obj
csr:TEMP_CLEAN_ALL5 = ../../../../../temp/csr/$$LIBTARGET/*.obj
cdr:TEMP_CLEAN_ALL5 = ../../../../../temp/cdr/$$LIBTARGET/*.obj
cdd:TEMP_CLEAN_ALL5 = ../../../../../temp/cdd/$$LIBTARGET/*.obj

win32:CLEAN_FILES = ../../../../../bin/*.map ../../../../../bin/*._xe ../../../../../bin/*.tds ../../../../../bin/*.pdb ../../../../../bin/*.pbo ../../../../../bin/*.pbi ../../../../../bin/*.pbt $$TEMP_CLEAN_ALL $$TEMP_CLEAN_ALL2 $$TEMP_CLEAN_ALL3 $$TEMP_CLEAN_ALL4 $$TEMP_CLEAN_ALL5
