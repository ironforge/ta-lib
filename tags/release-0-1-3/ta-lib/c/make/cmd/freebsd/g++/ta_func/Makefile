#############################################################################
# Makefile for building ../../../../../lib/libta_func_cmd.a
# Generated by tmake;
#     Project: ta_func/ta_func
#    Template: lib
#############################################################################

####### Compiler, tools and options

CC	=	gcc
CXX	=	g++
CFLAGS	=	-pipe -Wall -W -g -D_REENTRANT -DTA_DEBUG -D_DEBUG -DQT_THREAD_SUPPORT
CXXFLAGS=	-pipe -Wall -W -g -D_REENTRANT -DTA_DEBUG -D_DEBUG -DQT_THREAD_SUPPORT
INCPATH	=	-I../../../../../src/ta_common -I/n -I../../../../../include -I/usr/local/include
AR	=	ar cqs
RANLIB	=	
MOC	=	$(QTDIR)/bin/moc
UIC	=	$(QTDIR)/bin/uic

TAR	=	tar -cf
GZIP	=	gzip -9f

####### Files

HEADERS =	
SOURCES =	../../../../../src/ta_func/ta_utility.c \
		../../../../../src/ta_func/ta_AD.c \
		../../../../../src/ta_func/ta_ADOSC.c \
		../../../../../src/ta_func/ta_ADX.c \
		../../../../../src/ta_func/ta_ADXR.c \
		../../../../../src/ta_func/ta_APO.c \
		../../../../../src/ta_func/ta_AROON.c \
		../../../../../src/ta_func/ta_AROONOSC.c \
		../../../../../src/ta_func/ta_ATR.c \
		../../../../../src/ta_func/ta_AVGPRICE.c \
		../../../../../src/ta_func/ta_BBANDS.c \
		../../../../../src/ta_func/ta_CCI.c \
		../../../../../src/ta_func/ta_CDL2CROWS.c \
		../../../../../src/ta_func/ta_CDL3BLACKCROWS.c \
		../../../../../src/ta_func/ta_CDL3INSIDE.c \
		../../../../../src/ta_func/ta_CDL3LINESTRIKE.c \
		../../../../../src/ta_func/ta_CDL3OUTSIDE.c \
		../../../../../src/ta_func/ta_CDL3WHITESOLDIERS.c \
		../../../../../src/ta_func/ta_CDLABANDONEDBABY.c \
		../../../../../src/ta_func/ta_CDLADVANCEBLOCK.c \
		../../../../../src/ta_func/ta_CDLDARKCLOUDCOVER.c \
		../../../../../src/ta_func/ta_CDLDOJISTAR.c \
		../../../../../src/ta_func/ta_CDLENGULFING.c \
		../../../../../src/ta_func/ta_CDLEVENINGDOJISTAR.c \
		../../../../../src/ta_func/ta_CDLEVENINGSTAR.c \
		../../../../../src/ta_func/ta_CDLHAMMER.c \
		../../../../../src/ta_func/ta_CDLHANGINGMAN.c \
		../../../../../src/ta_func/ta_CDLHARAMI.c \
		../../../../../src/ta_func/ta_CDLHARAMICROSS.c \
		../../../../../src/ta_func/ta_CDLHIGHWAVE.c \
		../../../../../src/ta_func/ta_CDLIDENTICAL3CROWS.c \
		../../../../../src/ta_func/ta_CDLINNECK.c \
		../../../../../src/ta_func/ta_CDLINVERTEDHAMMER.c \
		../../../../../src/ta_func/ta_CDLLONGLINE.c \
		../../../../../src/ta_func/ta_CDLMORNINGDOJISTAR.c \
		../../../../../src/ta_func/ta_CDLMORNINGSTAR.c \
		../../../../../src/ta_func/ta_CDLONNECK.c \
		../../../../../src/ta_func/ta_CDLPIERCING.c \
		../../../../../src/ta_func/ta_CDLSHOOTINGSTAR.c \
		../../../../../src/ta_func/ta_CDLSHORTLINE.c \
		../../../../../src/ta_func/ta_CDLSPINNINGTOP.c \
		../../../../../src/ta_func/ta_CDLSTALLEDPATTERN.c \
		../../../../../src/ta_func/ta_CDLTHRUSTING.c \
		../../../../../src/ta_func/ta_CDLTRISTAR.c \
		../../../../../src/ta_func/ta_CDLUPSIDEGAP2CROWS.c \
		../../../../../src/ta_func/ta_CORREL.c \
		../../../../../src/ta_func/ta_DEMA.c \
		../../../../../src/ta_func/ta_DX.c \
		../../../../../src/ta_func/ta_EMA.c \
		../../../../../src/ta_func/ta_HT_DCPERIOD.c \
		../../../../../src/ta_func/ta_HT_DCPHASE.c \
		../../../../../src/ta_func/ta_HT_PHASOR.c \
		../../../../../src/ta_func/ta_HT_SINE.c \
		../../../../../src/ta_func/ta_HT_TRENDLINE.c \
		../../../../../src/ta_func/ta_HT_TRENDMODE.c \
		../../../../../src/ta_func/ta_KAMA.c \
		../../../../../src/ta_func/ta_LINEARREG.c \
		../../../../../src/ta_func/ta_LINEARREG_ANGLE.c \
		../../../../../src/ta_func/ta_LINEARREG_INTERCEPT.c \
		../../../../../src/ta_func/ta_LINEARREG_SLOPE.c \
		../../../../../src/ta_func/ta_MA.c \
		../../../../../src/ta_func/ta_MACD.c \
		../../../../../src/ta_func/ta_MACDEXT.c \
		../../../../../src/ta_func/ta_MACDFIX.c \
		../../../../../src/ta_func/ta_MAMA.c \
		../../../../../src/ta_func/ta_MAX.c \
		../../../../../src/ta_func/ta_MEDPRICE.c \
		../../../../../src/ta_func/ta_MFI.c \
		../../../../../src/ta_func/ta_MIDPOINT.c \
		../../../../../src/ta_func/ta_MIDPRICE.c \
		../../../../../src/ta_func/ta_MIN.c \
		../../../../../src/ta_func/ta_MINUS_DI.c \
		../../../../../src/ta_func/ta_MINUS_DM.c \
		../../../../../src/ta_func/ta_MOM.c \
		../../../../../src/ta_func/ta_OBV.c \
		../../../../../src/ta_func/ta_PLUS_DI.c \
		../../../../../src/ta_func/ta_PLUS_DM.c \
		../../../../../src/ta_func/ta_PPO.c \
		../../../../../src/ta_func/ta_ROC.c \
		../../../../../src/ta_func/ta_ROCP.c \
		../../../../../src/ta_func/ta_ROCR.c \
		../../../../../src/ta_func/ta_ROCR100.c \
		../../../../../src/ta_func/ta_RSI.c \
		../../../../../src/ta_func/ta_SAR.c \
		../../../../../src/ta_func/ta_SAREXT.c \
		../../../../../src/ta_func/ta_SMA.c \
		../../../../../src/ta_func/ta_STDDEV.c \
		../../../../../src/ta_func/ta_STOCH.c \
		../../../../../src/ta_func/ta_STOCHF.c \
		../../../../../src/ta_func/ta_STOCHRSI.c \
		../../../../../src/ta_func/ta_T3.c \
		../../../../../src/ta_func/ta_TEMA.c \
		../../../../../src/ta_func/ta_TRANGE.c \
		../../../../../src/ta_func/ta_TRIMA.c \
		../../../../../src/ta_func/ta_TRIX.c \
		../../../../../src/ta_func/ta_TSF.c \
		../../../../../src/ta_func/ta_TYPPRICE.c \
		../../../../../src/ta_func/ta_VAR.c \
		../../../../../src/ta_func/ta_WCLPRICE.c \
		../../../../../src/ta_func/ta_WILLR.c \
		../../../../../src/ta_func/ta_WMA.c
OBJECTS =	../../../../../temp/cmd/ta_utility.o \
		../../../../../temp/cmd/ta_AD.o \
		../../../../../temp/cmd/ta_ADOSC.o \
		../../../../../temp/cmd/ta_ADX.o \
		../../../../../temp/cmd/ta_ADXR.o \
		../../../../../temp/cmd/ta_APO.o \
		../../../../../temp/cmd/ta_AROON.o \
		../../../../../temp/cmd/ta_AROONOSC.o \
		../../../../../temp/cmd/ta_ATR.o \
		../../../../../temp/cmd/ta_AVGPRICE.o \
		../../../../../temp/cmd/ta_BBANDS.o \
		../../../../../temp/cmd/ta_CCI.o \
		../../../../../temp/cmd/ta_CDL2CROWS.o \
		../../../../../temp/cmd/ta_CDL3BLACKCROWS.o \
		../../../../../temp/cmd/ta_CDL3INSIDE.o \
		../../../../../temp/cmd/ta_CDL3LINESTRIKE.o \
		../../../../../temp/cmd/ta_CDL3OUTSIDE.o \
		../../../../../temp/cmd/ta_CDL3WHITESOLDIERS.o \
		../../../../../temp/cmd/ta_CDLABANDONEDBABY.o \
		../../../../../temp/cmd/ta_CDLADVANCEBLOCK.o \
		../../../../../temp/cmd/ta_CDLDARKCLOUDCOVER.o \
		../../../../../temp/cmd/ta_CDLDOJISTAR.o \
		../../../../../temp/cmd/ta_CDLENGULFING.o \
		../../../../../temp/cmd/ta_CDLEVENINGDOJISTAR.o \
		../../../../../temp/cmd/ta_CDLEVENINGSTAR.o \
		../../../../../temp/cmd/ta_CDLHAMMER.o \
		../../../../../temp/cmd/ta_CDLHANGINGMAN.o \
		../../../../../temp/cmd/ta_CDLHARAMI.o \
		../../../../../temp/cmd/ta_CDLHARAMICROSS.o \
		../../../../../temp/cmd/ta_CDLHIGHWAVE.o \
		../../../../../temp/cmd/ta_CDLIDENTICAL3CROWS.o \
		../../../../../temp/cmd/ta_CDLINNECK.o \
		../../../../../temp/cmd/ta_CDLINVERTEDHAMMER.o \
		../../../../../temp/cmd/ta_CDLLONGLINE.o \
		../../../../../temp/cmd/ta_CDLMORNINGDOJISTAR.o \
		../../../../../temp/cmd/ta_CDLMORNINGSTAR.o \
		../../../../../temp/cmd/ta_CDLONNECK.o \
		../../../../../temp/cmd/ta_CDLPIERCING.o \
		../../../../../temp/cmd/ta_CDLSHOOTINGSTAR.o \
		../../../../../temp/cmd/ta_CDLSHORTLINE.o \
		../../../../../temp/cmd/ta_CDLSPINNINGTOP.o \
		../../../../../temp/cmd/ta_CDLSTALLEDPATTERN.o \
		../../../../../temp/cmd/ta_CDLTHRUSTING.o \
		../../../../../temp/cmd/ta_CDLTRISTAR.o \
		../../../../../temp/cmd/ta_CDLUPSIDEGAP2CROWS.o \
		../../../../../temp/cmd/ta_CORREL.o \
		../../../../../temp/cmd/ta_DEMA.o \
		../../../../../temp/cmd/ta_DX.o \
		../../../../../temp/cmd/ta_EMA.o \
		../../../../../temp/cmd/ta_HT_DCPERIOD.o \
		../../../../../temp/cmd/ta_HT_DCPHASE.o \
		../../../../../temp/cmd/ta_HT_PHASOR.o \
		../../../../../temp/cmd/ta_HT_SINE.o \
		../../../../../temp/cmd/ta_HT_TRENDLINE.o \
		../../../../../temp/cmd/ta_HT_TRENDMODE.o \
		../../../../../temp/cmd/ta_KAMA.o \
		../../../../../temp/cmd/ta_LINEARREG.o \
		../../../../../temp/cmd/ta_LINEARREG_ANGLE.o \
		../../../../../temp/cmd/ta_LINEARREG_INTERCEPT.o \
		../../../../../temp/cmd/ta_LINEARREG_SLOPE.o \
		../../../../../temp/cmd/ta_MA.o \
		../../../../../temp/cmd/ta_MACD.o \
		../../../../../temp/cmd/ta_MACDEXT.o \
		../../../../../temp/cmd/ta_MACDFIX.o \
		../../../../../temp/cmd/ta_MAMA.o \
		../../../../../temp/cmd/ta_MAX.o \
		../../../../../temp/cmd/ta_MEDPRICE.o \
		../../../../../temp/cmd/ta_MFI.o \
		../../../../../temp/cmd/ta_MIDPOINT.o \
		../../../../../temp/cmd/ta_MIDPRICE.o \
		../../../../../temp/cmd/ta_MIN.o \
		../../../../../temp/cmd/ta_MINUS_DI.o \
		../../../../../temp/cmd/ta_MINUS_DM.o \
		../../../../../temp/cmd/ta_MOM.o \
		../../../../../temp/cmd/ta_OBV.o \
		../../../../../temp/cmd/ta_PLUS_DI.o \
		../../../../../temp/cmd/ta_PLUS_DM.o \
		../../../../../temp/cmd/ta_PPO.o \
		../../../../../temp/cmd/ta_ROC.o \
		../../../../../temp/cmd/ta_ROCP.o \
		../../../../../temp/cmd/ta_ROCR.o \
		../../../../../temp/cmd/ta_ROCR100.o \
		../../../../../temp/cmd/ta_RSI.o \
		../../../../../temp/cmd/ta_SAR.o \
		../../../../../temp/cmd/ta_SAREXT.o \
		../../../../../temp/cmd/ta_SMA.o \
		../../../../../temp/cmd/ta_STDDEV.o \
		../../../../../temp/cmd/ta_STOCH.o \
		../../../../../temp/cmd/ta_STOCHF.o \
		../../../../../temp/cmd/ta_STOCHRSI.o \
		../../../../../temp/cmd/ta_T3.o \
		../../../../../temp/cmd/ta_TEMA.o \
		../../../../../temp/cmd/ta_TRANGE.o \
		../../../../../temp/cmd/ta_TRIMA.o \
		../../../../../temp/cmd/ta_TRIX.o \
		../../../../../temp/cmd/ta_TSF.o \
		../../../../../temp/cmd/ta_TYPPRICE.o \
		../../../../../temp/cmd/ta_VAR.o \
		../../../../../temp/cmd/ta_WCLPRICE.o \
		../../../../../temp/cmd/ta_WILLR.o \
		../../../../../temp/cmd/ta_WMA.o
INTERFACES =	
UICDECLS =	
UICIMPLS =	
SRCMOC	=	
OBJMOC	=	
DIST	=	
TARGET	=	../../../../../lib/libta_func_cmd.a
INTERFACE_DECL_PATH = .

####### Implicit rules

.SUFFIXES: .cpp .cxx .cc .C .c

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules


all: $(TARGET)

staticlib: $(TARGET)

$(TARGET): $(UICDECLS) $(OBJECTS) $(OBJMOC) 
	-rm -f $(TARGET)
	$(AR) $(TARGET) $(OBJECTS) $(OBJMOC)

moc: $(SRCMOC)

clean:
	-rm -f $(OBJECTS) $(OBJMOC) $(SRCMOC) $(UICIMPLS) $(UICDECLS) $(TARGET)
	-rm -f *~ core

####### Sub-libraries


###### Combined headers


####### Compile

../../../../../temp/cmd/ta_utility.o: ../../../../../src/ta_func/ta_utility.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_utility.o ../../../../../src/ta_func/ta_utility.c

../../../../../temp/cmd/ta_AD.o: ../../../../../src/ta_func/ta_AD.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_AD.o ../../../../../src/ta_func/ta_AD.c

../../../../../temp/cmd/ta_ADOSC.o: ../../../../../src/ta_func/ta_ADOSC.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_ADOSC.o ../../../../../src/ta_func/ta_ADOSC.c

../../../../../temp/cmd/ta_ADX.o: ../../../../../src/ta_func/ta_ADX.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_ADX.o ../../../../../src/ta_func/ta_ADX.c

../../../../../temp/cmd/ta_ADXR.o: ../../../../../src/ta_func/ta_ADXR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_ADXR.o ../../../../../src/ta_func/ta_ADXR.c

../../../../../temp/cmd/ta_APO.o: ../../../../../src/ta_func/ta_APO.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_APO.o ../../../../../src/ta_func/ta_APO.c

../../../../../temp/cmd/ta_AROON.o: ../../../../../src/ta_func/ta_AROON.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_AROON.o ../../../../../src/ta_func/ta_AROON.c

../../../../../temp/cmd/ta_AROONOSC.o: ../../../../../src/ta_func/ta_AROONOSC.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_AROONOSC.o ../../../../../src/ta_func/ta_AROONOSC.c

../../../../../temp/cmd/ta_ATR.o: ../../../../../src/ta_func/ta_ATR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_ATR.o ../../../../../src/ta_func/ta_ATR.c

../../../../../temp/cmd/ta_AVGPRICE.o: ../../../../../src/ta_func/ta_AVGPRICE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_AVGPRICE.o ../../../../../src/ta_func/ta_AVGPRICE.c

../../../../../temp/cmd/ta_BBANDS.o: ../../../../../src/ta_func/ta_BBANDS.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_BBANDS.o ../../../../../src/ta_func/ta_BBANDS.c

../../../../../temp/cmd/ta_CCI.o: ../../../../../src/ta_func/ta_CCI.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CCI.o ../../../../../src/ta_func/ta_CCI.c

../../../../../temp/cmd/ta_CDL2CROWS.o: ../../../../../src/ta_func/ta_CDL2CROWS.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDL2CROWS.o ../../../../../src/ta_func/ta_CDL2CROWS.c

../../../../../temp/cmd/ta_CDL3BLACKCROWS.o: ../../../../../src/ta_func/ta_CDL3BLACKCROWS.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDL3BLACKCROWS.o ../../../../../src/ta_func/ta_CDL3BLACKCROWS.c

../../../../../temp/cmd/ta_CDL3INSIDE.o: ../../../../../src/ta_func/ta_CDL3INSIDE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDL3INSIDE.o ../../../../../src/ta_func/ta_CDL3INSIDE.c

../../../../../temp/cmd/ta_CDL3LINESTRIKE.o: ../../../../../src/ta_func/ta_CDL3LINESTRIKE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDL3LINESTRIKE.o ../../../../../src/ta_func/ta_CDL3LINESTRIKE.c

../../../../../temp/cmd/ta_CDL3OUTSIDE.o: ../../../../../src/ta_func/ta_CDL3OUTSIDE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDL3OUTSIDE.o ../../../../../src/ta_func/ta_CDL3OUTSIDE.c

../../../../../temp/cmd/ta_CDL3WHITESOLDIERS.o: ../../../../../src/ta_func/ta_CDL3WHITESOLDIERS.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDL3WHITESOLDIERS.o ../../../../../src/ta_func/ta_CDL3WHITESOLDIERS.c

../../../../../temp/cmd/ta_CDLABANDONEDBABY.o: ../../../../../src/ta_func/ta_CDLABANDONEDBABY.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLABANDONEDBABY.o ../../../../../src/ta_func/ta_CDLABANDONEDBABY.c

../../../../../temp/cmd/ta_CDLADVANCEBLOCK.o: ../../../../../src/ta_func/ta_CDLADVANCEBLOCK.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLADVANCEBLOCK.o ../../../../../src/ta_func/ta_CDLADVANCEBLOCK.c

../../../../../temp/cmd/ta_CDLDARKCLOUDCOVER.o: ../../../../../src/ta_func/ta_CDLDARKCLOUDCOVER.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLDARKCLOUDCOVER.o ../../../../../src/ta_func/ta_CDLDARKCLOUDCOVER.c

../../../../../temp/cmd/ta_CDLDOJISTAR.o: ../../../../../src/ta_func/ta_CDLDOJISTAR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLDOJISTAR.o ../../../../../src/ta_func/ta_CDLDOJISTAR.c

../../../../../temp/cmd/ta_CDLENGULFING.o: ../../../../../src/ta_func/ta_CDLENGULFING.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLENGULFING.o ../../../../../src/ta_func/ta_CDLENGULFING.c

../../../../../temp/cmd/ta_CDLEVENINGDOJISTAR.o: ../../../../../src/ta_func/ta_CDLEVENINGDOJISTAR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLEVENINGDOJISTAR.o ../../../../../src/ta_func/ta_CDLEVENINGDOJISTAR.c

../../../../../temp/cmd/ta_CDLEVENINGSTAR.o: ../../../../../src/ta_func/ta_CDLEVENINGSTAR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLEVENINGSTAR.o ../../../../../src/ta_func/ta_CDLEVENINGSTAR.c

../../../../../temp/cmd/ta_CDLHAMMER.o: ../../../../../src/ta_func/ta_CDLHAMMER.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLHAMMER.o ../../../../../src/ta_func/ta_CDLHAMMER.c

../../../../../temp/cmd/ta_CDLHANGINGMAN.o: ../../../../../src/ta_func/ta_CDLHANGINGMAN.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLHANGINGMAN.o ../../../../../src/ta_func/ta_CDLHANGINGMAN.c

../../../../../temp/cmd/ta_CDLHARAMI.o: ../../../../../src/ta_func/ta_CDLHARAMI.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLHARAMI.o ../../../../../src/ta_func/ta_CDLHARAMI.c

../../../../../temp/cmd/ta_CDLHARAMICROSS.o: ../../../../../src/ta_func/ta_CDLHARAMICROSS.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLHARAMICROSS.o ../../../../../src/ta_func/ta_CDLHARAMICROSS.c

../../../../../temp/cmd/ta_CDLHIGHWAVE.o: ../../../../../src/ta_func/ta_CDLHIGHWAVE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLHIGHWAVE.o ../../../../../src/ta_func/ta_CDLHIGHWAVE.c

../../../../../temp/cmd/ta_CDLIDENTICAL3CROWS.o: ../../../../../src/ta_func/ta_CDLIDENTICAL3CROWS.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLIDENTICAL3CROWS.o ../../../../../src/ta_func/ta_CDLIDENTICAL3CROWS.c

../../../../../temp/cmd/ta_CDLINNECK.o: ../../../../../src/ta_func/ta_CDLINNECK.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLINNECK.o ../../../../../src/ta_func/ta_CDLINNECK.c

../../../../../temp/cmd/ta_CDLINVERTEDHAMMER.o: ../../../../../src/ta_func/ta_CDLINVERTEDHAMMER.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLINVERTEDHAMMER.o ../../../../../src/ta_func/ta_CDLINVERTEDHAMMER.c

../../../../../temp/cmd/ta_CDLLONGLINE.o: ../../../../../src/ta_func/ta_CDLLONGLINE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLLONGLINE.o ../../../../../src/ta_func/ta_CDLLONGLINE.c

../../../../../temp/cmd/ta_CDLMORNINGDOJISTAR.o: ../../../../../src/ta_func/ta_CDLMORNINGDOJISTAR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLMORNINGDOJISTAR.o ../../../../../src/ta_func/ta_CDLMORNINGDOJISTAR.c

../../../../../temp/cmd/ta_CDLMORNINGSTAR.o: ../../../../../src/ta_func/ta_CDLMORNINGSTAR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLMORNINGSTAR.o ../../../../../src/ta_func/ta_CDLMORNINGSTAR.c

../../../../../temp/cmd/ta_CDLONNECK.o: ../../../../../src/ta_func/ta_CDLONNECK.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLONNECK.o ../../../../../src/ta_func/ta_CDLONNECK.c

../../../../../temp/cmd/ta_CDLPIERCING.o: ../../../../../src/ta_func/ta_CDLPIERCING.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLPIERCING.o ../../../../../src/ta_func/ta_CDLPIERCING.c

../../../../../temp/cmd/ta_CDLSHOOTINGSTAR.o: ../../../../../src/ta_func/ta_CDLSHOOTINGSTAR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLSHOOTINGSTAR.o ../../../../../src/ta_func/ta_CDLSHOOTINGSTAR.c

../../../../../temp/cmd/ta_CDLSHORTLINE.o: ../../../../../src/ta_func/ta_CDLSHORTLINE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLSHORTLINE.o ../../../../../src/ta_func/ta_CDLSHORTLINE.c

../../../../../temp/cmd/ta_CDLSPINNINGTOP.o: ../../../../../src/ta_func/ta_CDLSPINNINGTOP.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLSPINNINGTOP.o ../../../../../src/ta_func/ta_CDLSPINNINGTOP.c

../../../../../temp/cmd/ta_CDLSTALLEDPATTERN.o: ../../../../../src/ta_func/ta_CDLSTALLEDPATTERN.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLSTALLEDPATTERN.o ../../../../../src/ta_func/ta_CDLSTALLEDPATTERN.c

../../../../../temp/cmd/ta_CDLTHRUSTING.o: ../../../../../src/ta_func/ta_CDLTHRUSTING.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLTHRUSTING.o ../../../../../src/ta_func/ta_CDLTHRUSTING.c

../../../../../temp/cmd/ta_CDLTRISTAR.o: ../../../../../src/ta_func/ta_CDLTRISTAR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLTRISTAR.o ../../../../../src/ta_func/ta_CDLTRISTAR.c

../../../../../temp/cmd/ta_CDLUPSIDEGAP2CROWS.o: ../../../../../src/ta_func/ta_CDLUPSIDEGAP2CROWS.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CDLUPSIDEGAP2CROWS.o ../../../../../src/ta_func/ta_CDLUPSIDEGAP2CROWS.c

../../../../../temp/cmd/ta_CORREL.o: ../../../../../src/ta_func/ta_CORREL.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_CORREL.o ../../../../../src/ta_func/ta_CORREL.c

../../../../../temp/cmd/ta_DEMA.o: ../../../../../src/ta_func/ta_DEMA.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_DEMA.o ../../../../../src/ta_func/ta_DEMA.c

../../../../../temp/cmd/ta_DX.o: ../../../../../src/ta_func/ta_DX.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_DX.o ../../../../../src/ta_func/ta_DX.c

../../../../../temp/cmd/ta_EMA.o: ../../../../../src/ta_func/ta_EMA.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_EMA.o ../../../../../src/ta_func/ta_EMA.c

../../../../../temp/cmd/ta_HT_DCPERIOD.o: ../../../../../src/ta_func/ta_HT_DCPERIOD.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_HT_DCPERIOD.o ../../../../../src/ta_func/ta_HT_DCPERIOD.c

../../../../../temp/cmd/ta_HT_DCPHASE.o: ../../../../../src/ta_func/ta_HT_DCPHASE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_HT_DCPHASE.o ../../../../../src/ta_func/ta_HT_DCPHASE.c

../../../../../temp/cmd/ta_HT_PHASOR.o: ../../../../../src/ta_func/ta_HT_PHASOR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_HT_PHASOR.o ../../../../../src/ta_func/ta_HT_PHASOR.c

../../../../../temp/cmd/ta_HT_SINE.o: ../../../../../src/ta_func/ta_HT_SINE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_HT_SINE.o ../../../../../src/ta_func/ta_HT_SINE.c

../../../../../temp/cmd/ta_HT_TRENDLINE.o: ../../../../../src/ta_func/ta_HT_TRENDLINE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_HT_TRENDLINE.o ../../../../../src/ta_func/ta_HT_TRENDLINE.c

../../../../../temp/cmd/ta_HT_TRENDMODE.o: ../../../../../src/ta_func/ta_HT_TRENDMODE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_HT_TRENDMODE.o ../../../../../src/ta_func/ta_HT_TRENDMODE.c

../../../../../temp/cmd/ta_KAMA.o: ../../../../../src/ta_func/ta_KAMA.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_KAMA.o ../../../../../src/ta_func/ta_KAMA.c

../../../../../temp/cmd/ta_LINEARREG.o: ../../../../../src/ta_func/ta_LINEARREG.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_LINEARREG.o ../../../../../src/ta_func/ta_LINEARREG.c

../../../../../temp/cmd/ta_LINEARREG_ANGLE.o: ../../../../../src/ta_func/ta_LINEARREG_ANGLE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_LINEARREG_ANGLE.o ../../../../../src/ta_func/ta_LINEARREG_ANGLE.c

../../../../../temp/cmd/ta_LINEARREG_INTERCEPT.o: ../../../../../src/ta_func/ta_LINEARREG_INTERCEPT.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_LINEARREG_INTERCEPT.o ../../../../../src/ta_func/ta_LINEARREG_INTERCEPT.c

../../../../../temp/cmd/ta_LINEARREG_SLOPE.o: ../../../../../src/ta_func/ta_LINEARREG_SLOPE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_LINEARREG_SLOPE.o ../../../../../src/ta_func/ta_LINEARREG_SLOPE.c

../../../../../temp/cmd/ta_MA.o: ../../../../../src/ta_func/ta_MA.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MA.o ../../../../../src/ta_func/ta_MA.c

../../../../../temp/cmd/ta_MACD.o: ../../../../../src/ta_func/ta_MACD.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MACD.o ../../../../../src/ta_func/ta_MACD.c

../../../../../temp/cmd/ta_MACDEXT.o: ../../../../../src/ta_func/ta_MACDEXT.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MACDEXT.o ../../../../../src/ta_func/ta_MACDEXT.c

../../../../../temp/cmd/ta_MACDFIX.o: ../../../../../src/ta_func/ta_MACDFIX.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MACDFIX.o ../../../../../src/ta_func/ta_MACDFIX.c

../../../../../temp/cmd/ta_MAMA.o: ../../../../../src/ta_func/ta_MAMA.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MAMA.o ../../../../../src/ta_func/ta_MAMA.c

../../../../../temp/cmd/ta_MAX.o: ../../../../../src/ta_func/ta_MAX.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MAX.o ../../../../../src/ta_func/ta_MAX.c

../../../../../temp/cmd/ta_MEDPRICE.o: ../../../../../src/ta_func/ta_MEDPRICE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MEDPRICE.o ../../../../../src/ta_func/ta_MEDPRICE.c

../../../../../temp/cmd/ta_MFI.o: ../../../../../src/ta_func/ta_MFI.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MFI.o ../../../../../src/ta_func/ta_MFI.c

../../../../../temp/cmd/ta_MIDPOINT.o: ../../../../../src/ta_func/ta_MIDPOINT.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MIDPOINT.o ../../../../../src/ta_func/ta_MIDPOINT.c

../../../../../temp/cmd/ta_MIDPRICE.o: ../../../../../src/ta_func/ta_MIDPRICE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MIDPRICE.o ../../../../../src/ta_func/ta_MIDPRICE.c

../../../../../temp/cmd/ta_MIN.o: ../../../../../src/ta_func/ta_MIN.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MIN.o ../../../../../src/ta_func/ta_MIN.c

../../../../../temp/cmd/ta_MINUS_DI.o: ../../../../../src/ta_func/ta_MINUS_DI.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MINUS_DI.o ../../../../../src/ta_func/ta_MINUS_DI.c

../../../../../temp/cmd/ta_MINUS_DM.o: ../../../../../src/ta_func/ta_MINUS_DM.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MINUS_DM.o ../../../../../src/ta_func/ta_MINUS_DM.c

../../../../../temp/cmd/ta_MOM.o: ../../../../../src/ta_func/ta_MOM.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_MOM.o ../../../../../src/ta_func/ta_MOM.c

../../../../../temp/cmd/ta_OBV.o: ../../../../../src/ta_func/ta_OBV.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_OBV.o ../../../../../src/ta_func/ta_OBV.c

../../../../../temp/cmd/ta_PLUS_DI.o: ../../../../../src/ta_func/ta_PLUS_DI.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_PLUS_DI.o ../../../../../src/ta_func/ta_PLUS_DI.c

../../../../../temp/cmd/ta_PLUS_DM.o: ../../../../../src/ta_func/ta_PLUS_DM.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_PLUS_DM.o ../../../../../src/ta_func/ta_PLUS_DM.c

../../../../../temp/cmd/ta_PPO.o: ../../../../../src/ta_func/ta_PPO.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_PPO.o ../../../../../src/ta_func/ta_PPO.c

../../../../../temp/cmd/ta_ROC.o: ../../../../../src/ta_func/ta_ROC.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_ROC.o ../../../../../src/ta_func/ta_ROC.c

../../../../../temp/cmd/ta_ROCP.o: ../../../../../src/ta_func/ta_ROCP.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_ROCP.o ../../../../../src/ta_func/ta_ROCP.c

../../../../../temp/cmd/ta_ROCR.o: ../../../../../src/ta_func/ta_ROCR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_ROCR.o ../../../../../src/ta_func/ta_ROCR.c

../../../../../temp/cmd/ta_ROCR100.o: ../../../../../src/ta_func/ta_ROCR100.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_ROCR100.o ../../../../../src/ta_func/ta_ROCR100.c

../../../../../temp/cmd/ta_RSI.o: ../../../../../src/ta_func/ta_RSI.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_RSI.o ../../../../../src/ta_func/ta_RSI.c

../../../../../temp/cmd/ta_SAR.o: ../../../../../src/ta_func/ta_SAR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_SAR.o ../../../../../src/ta_func/ta_SAR.c

../../../../../temp/cmd/ta_SAREXT.o: ../../../../../src/ta_func/ta_SAREXT.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_SAREXT.o ../../../../../src/ta_func/ta_SAREXT.c

../../../../../temp/cmd/ta_SMA.o: ../../../../../src/ta_func/ta_SMA.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_SMA.o ../../../../../src/ta_func/ta_SMA.c

../../../../../temp/cmd/ta_STDDEV.o: ../../../../../src/ta_func/ta_STDDEV.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_STDDEV.o ../../../../../src/ta_func/ta_STDDEV.c

../../../../../temp/cmd/ta_STOCH.o: ../../../../../src/ta_func/ta_STOCH.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_STOCH.o ../../../../../src/ta_func/ta_STOCH.c

../../../../../temp/cmd/ta_STOCHF.o: ../../../../../src/ta_func/ta_STOCHF.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_STOCHF.o ../../../../../src/ta_func/ta_STOCHF.c

../../../../../temp/cmd/ta_STOCHRSI.o: ../../../../../src/ta_func/ta_STOCHRSI.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_STOCHRSI.o ../../../../../src/ta_func/ta_STOCHRSI.c

../../../../../temp/cmd/ta_T3.o: ../../../../../src/ta_func/ta_T3.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_T3.o ../../../../../src/ta_func/ta_T3.c

../../../../../temp/cmd/ta_TEMA.o: ../../../../../src/ta_func/ta_TEMA.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_TEMA.o ../../../../../src/ta_func/ta_TEMA.c

../../../../../temp/cmd/ta_TRANGE.o: ../../../../../src/ta_func/ta_TRANGE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_TRANGE.o ../../../../../src/ta_func/ta_TRANGE.c

../../../../../temp/cmd/ta_TRIMA.o: ../../../../../src/ta_func/ta_TRIMA.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_TRIMA.o ../../../../../src/ta_func/ta_TRIMA.c

../../../../../temp/cmd/ta_TRIX.o: ../../../../../src/ta_func/ta_TRIX.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_TRIX.o ../../../../../src/ta_func/ta_TRIX.c

../../../../../temp/cmd/ta_TSF.o: ../../../../../src/ta_func/ta_TSF.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_TSF.o ../../../../../src/ta_func/ta_TSF.c

../../../../../temp/cmd/ta_TYPPRICE.o: ../../../../../src/ta_func/ta_TYPPRICE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_TYPPRICE.o ../../../../../src/ta_func/ta_TYPPRICE.c

../../../../../temp/cmd/ta_VAR.o: ../../../../../src/ta_func/ta_VAR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_VAR.o ../../../../../src/ta_func/ta_VAR.c

../../../../../temp/cmd/ta_WCLPRICE.o: ../../../../../src/ta_func/ta_WCLPRICE.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_WCLPRICE.o ../../../../../src/ta_func/ta_WCLPRICE.c

../../../../../temp/cmd/ta_WILLR.o: ../../../../../src/ta_func/ta_WILLR.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_WILLR.o ../../../../../src/ta_func/ta_WILLR.c

../../../../../temp/cmd/ta_WMA.o: ../../../../../src/ta_func/ta_WMA.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o ../../../../../temp/cmd/ta_WMA.o ../../../../../src/ta_func/ta_WMA.c

