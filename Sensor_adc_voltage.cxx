
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensor_adc_voltage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "Sensor_adc_voltage.h"

/* ========================================================================= */
const char *SensorADCVoltageTYPENAME = "SensorADCVoltage";

DDS_TypeCode* SensorADCVoltage_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SensorADCVoltage_g_tc_usi_string = DDS_INITIALIZE_STRING_TYPECODE(100);
    static DDS_TypeCode SensorADCVoltage_g_tc_value_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member SensorADCVoltage_g_tc_members[2]=
    {
        {
            (char *)"usi",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_TRUE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"value",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SensorADCVoltage_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SensorADCVoltage", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SensorADCVoltage_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SensorADCVoltage*/

    if (is_initialized) {
        return &SensorADCVoltage_g_tc;
    }

    SensorADCVoltage_g_tc_value_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    SensorADCVoltage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SensorADCVoltage_g_tc_usi_string;
    SensorADCVoltage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&SensorADCVoltage_g_tc_value_array;

    is_initialized = RTI_TRUE;

    return &SensorADCVoltage_g_tc;
}


RTIBool SensorADCVoltage_initialize(
    SensorADCVoltage* sample) {
  return SensorADCVoltage_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool SensorADCVoltage_initialize_ex(
    SensorADCVoltage* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    sample->usi = DDS_String_alloc((100));
    if (sample->usi == NULL) {
        return RTI_FALSE;
    }
                
    if (!RTICdrType_initArray(
        sample->value, (3), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void SensorADCVoltage_finalize(
    SensorADCVoltage* sample)
{
    SensorADCVoltage_finalize_ex(sample,RTI_TRUE);
}
        
void SensorADCVoltage_finalize_ex(
    SensorADCVoltage* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    DDS_String_free(sample->usi);                
            
}

RTIBool SensorADCVoltage_copy(
    SensorADCVoltage* dst,
    const SensorADCVoltage* src)
{        

    if (!RTICdrType_copyString(
        dst->usi, src->usi, (100) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyArray(
        dst->value, src->value, (3), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SensorADCVoltage' sequence class.
 */
#define T SensorADCVoltage
#define TSeq SensorADCVoltageSeq
#define T_initialize_ex SensorADCVoltage_initialize_ex
#define T_finalize_ex   SensorADCVoltage_finalize_ex
#define T_copy       SensorADCVoltage_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_ex
#undef T_initialize_ex
#undef TSeq
#undef T

