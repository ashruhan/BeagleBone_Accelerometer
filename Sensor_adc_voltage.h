
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensor_adc_voltage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Sensor_adc_voltage_1476623439_h
#define Sensor_adc_voltage_1476623439_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SensorADCVoltageTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SensorADCVoltageSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SensorADCVoltageTypeSupport;
    class SensorADCVoltageDataWriter;
    class SensorADCVoltageDataReader;
#endif

#endif

            
    

typedef struct SensorADCVoltage
{
#ifdef __cplusplus
    typedef struct SensorADCVoltageSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SensorADCVoltageTypeSupport TypeSupport;
    typedef SensorADCVoltageDataWriter DataWriter;
    typedef SensorADCVoltageDataReader DataReader;
#endif

#endif

    char*  usi; /* maximum length = (100) */
    DDS_Double  value[3];

} SensorADCVoltage;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SensorADCVoltage_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SensorADCVoltageSeq, SensorADCVoltage);
        
NDDSUSERDllExport
RTIBool SensorADCVoltage_initialize(
        SensorADCVoltage* self);
        
NDDSUSERDllExport
RTIBool SensorADCVoltage_initialize_ex(
        SensorADCVoltage* self,RTIBool allocatePointers);

NDDSUSERDllExport
void SensorADCVoltage_finalize(
        SensorADCVoltage* self);
                        
NDDSUSERDllExport
void SensorADCVoltage_finalize_ex(
        SensorADCVoltage* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SensorADCVoltage_copy(
        SensorADCVoltage* dst,
        const SensorADCVoltage* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* Sensor_adc_voltage_1476623439_h */
