
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Sensor_adc_voltage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Sensor_adc_voltagePlugin_1476623439_h
#define Sensor_adc_voltagePlugin_1476623439_h

#include "Sensor_adc_voltage.h"




struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* The type used to store keys for instances of type struct
 * SensorADCVoltage.
 *
 * By default, this type is struct SensorADCVoltage
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SensorADCVoltage)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SensorADCVoltage, the
 * following restriction applies: the key of struct
 * SensorADCVoltage must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SensorADCVoltage.
*/
typedef  struct SensorADCVoltage SensorADCVoltageKeyHolder;


#define SensorADCVoltagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SensorADCVoltagePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SensorADCVoltagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SensorADCVoltagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SensorADCVoltagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SensorADCVoltagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SensorADCVoltagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SensorADCVoltagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SensorADCVoltage*
SensorADCVoltagePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SensorADCVoltage*
SensorADCVoltagePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePluginSupport_copy_data(
    SensorADCVoltage *out,
    const SensorADCVoltage *in);

NDDSUSERDllExport extern void 
SensorADCVoltagePluginSupport_destroy_data_ex(
    SensorADCVoltage *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SensorADCVoltagePluginSupport_destroy_data(
    SensorADCVoltage *sample);

NDDSUSERDllExport extern void 
SensorADCVoltagePluginSupport_print_data(
    const SensorADCVoltage *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SensorADCVoltage*
SensorADCVoltagePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SensorADCVoltage*
SensorADCVoltagePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SensorADCVoltagePluginSupport_destroy_key_ex(
    SensorADCVoltageKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SensorADCVoltagePluginSupport_destroy_key(
    SensorADCVoltageKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SensorADCVoltagePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SensorADCVoltagePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SensorADCVoltagePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SensorADCVoltagePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorADCVoltage *out,
    const SensorADCVoltage *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SensorADCVoltage *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorADCVoltage *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SensorADCVoltage **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
SensorADCVoltagePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SensorADCVoltagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SensorADCVoltagePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SensorADCVoltagePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SensorADCVoltage * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SensorADCVoltagePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SensorADCVoltagePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SensorADCVoltage *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorADCVoltage * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorADCVoltage ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SensorADCVoltagePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorADCVoltage *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorADCVoltageKeyHolder *key, 
    const SensorADCVoltage *instance);

NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SensorADCVoltage *instance, 
    const SensorADCVoltageKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SensorADCVoltage *instance);

NDDSUSERDllExport extern RTIBool 
SensorADCVoltagePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SensorADCVoltagePlugin_new(void);

NDDSUSERDllExport extern void
SensorADCVoltagePlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* Sensor_adc_voltagePlugin_1476623439_h */
