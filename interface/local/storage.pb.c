/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.2.9 at Mon Nov 10 00:32:26 2014. */

#include "storage.pb.h"



const pb_field_t Storage_fields[9] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC  , FIRST, Storage, version, version, 0),
    PB_FIELD2(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, Storage, node, version, &HDNodeType_fields),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, Storage, mnemonic, node, 0),
    PB_FIELD2(  4, BOOL    , OPTIONAL, STATIC  , OTHER, Storage, passphrase_protection, mnemonic, 0),
    PB_FIELD2(  5, UINT32  , OPTIONAL, STATIC  , OTHER, Storage, pin_failed_attempts, passphrase_protection, 0),
    PB_FIELD2(  6, STRING  , OPTIONAL, STATIC  , OTHER, Storage, pin, pin_failed_attempts, 0),
    PB_FIELD2(  7, STRING  , OPTIONAL, STATIC  , OTHER, Storage, language, pin, 0),
    PB_FIELD2(  8, STRING  , OPTIONAL, STATIC  , OTHER, Storage, label, language, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
STATIC_ASSERT((pb_membersize(Storage, node) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_Storage)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
STATIC_ASSERT((pb_membersize(Storage, node) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_Storage)
#endif

