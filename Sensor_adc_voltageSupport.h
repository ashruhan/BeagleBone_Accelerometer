
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensor_adc_voltage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Sensor_adc_voltageSupport_1476623439_h
#define Sensor_adc_voltageSupport_1476623439_h

/* Uses */
#include "Sensor_adc_voltage.h"



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)

#ifdef __cplusplus
  /* If we're building on Windows, explicitly import the superclasses of
   * the types declared below.
   */        
  class __declspec(dllimport) DDSTypeSupport;
  class __declspec(dllimport) DDSDataWriter;
  class __declspec(dllimport) DDSDataReader;
#endif

#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(SensorADCVoltageTypeSupport, SensorADCVoltage);

DDS_DATAWRITER_CPP(SensorADCVoltageDataWriter, SensorADCVoltage);
DDS_DATAREADER_CPP(SensorADCVoltageDataReader, SensorADCVoltageSeq, SensorADCVoltage);


#else

DDS_TYPESUPPORT_C(SensorADCVoltageTypeSupport, SensorADCVoltage);
DDS_DATAWRITER_C(SensorADCVoltageDataWriter, SensorADCVoltage);
DDS_DATAREADER_C(SensorADCVoltageDataReader, SensorADCVoltageSeq, SensorADCVoltage);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* Sensor_adc_voltageSupport_1476623439_h */
