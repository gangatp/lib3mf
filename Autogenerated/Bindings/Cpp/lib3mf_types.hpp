/*++

Copyright (C) 2019 3MF Consortium (Original Author)

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

This file has been generated by the Automatic Component Toolkit (ACT) version 1.7.0-develop.

Abstract: This is an autogenerated C++-Header file with basic types in
order to allow an easy use of the 3MF Library

Interface version: 2.0.0

*/

#ifndef __LIB3MF_TYPES_HEADER_CPP
#define __LIB3MF_TYPES_HEADER_CPP


/*************************************************************************************************************************
 Scalar types definition
**************************************************************************************************************************/

#ifdef LIB3MF_USELEGACYINTEGERTYPES

typedef unsigned char Lib3MF_uint8;
typedef unsigned short Lib3MF_uint16 ;
typedef unsigned int Lib3MF_uint32;
typedef unsigned long long Lib3MF_uint64;
typedef char Lib3MF_int8;
typedef short Lib3MF_int16;
typedef int Lib3MF_int32;
typedef long long Lib3MF_int64;

#else // LIB3MF_USELEGACYINTEGERTYPES

#include <stdint.h>

typedef uint8_t Lib3MF_uint8;
typedef uint16_t Lib3MF_uint16;
typedef uint32_t Lib3MF_uint32;
typedef uint64_t Lib3MF_uint64;
typedef int8_t Lib3MF_int8;
typedef int16_t Lib3MF_int16;
typedef int32_t Lib3MF_int32;
typedef int64_t Lib3MF_int64 ;

#endif // LIB3MF_USELEGACYINTEGERTYPES

typedef float Lib3MF_single;
typedef double Lib3MF_double;

/*************************************************************************************************************************
 General type definitions
**************************************************************************************************************************/

typedef Lib3MF_int32 Lib3MFResult;
typedef void * Lib3MFHandle;
typedef void * Lib3MF_pvoid;

/*************************************************************************************************************************
 Version for Lib3MF
**************************************************************************************************************************/

#define LIB3MF_VERSION_MAJOR 2
#define LIB3MF_VERSION_MINOR 0
#define LIB3MF_VERSION_MICRO 0
#define LIB3MF_VERSION_PRERELEASEINFO "toolpath"
#define LIB3MF_VERSION_BUILDINFO ""

/*************************************************************************************************************************
 Error constants for Lib3MF
**************************************************************************************************************************/

#define LIB3MF_SUCCESS 0
#define LIB3MF_ERROR_NOTIMPLEMENTED 1 /** functionality not implemented */
#define LIB3MF_ERROR_INVALIDPARAM 2 /** an invalid parameter was passed */
#define LIB3MF_ERROR_INVALIDCAST 3 /** a type cast failed */
#define LIB3MF_ERROR_BUFFERTOOSMALL 4 /** a provided buffer is too small */
#define LIB3MF_ERROR_GENERICEXCEPTION 5 /** a generic exception occurred */
#define LIB3MF_ERROR_COULDNOTLOADLIBRARY 6 /** the library could not be loaded */
#define LIB3MF_ERROR_COULDNOTFINDLIBRARYEXPORT 7 /** a required exported symbol could not be found in the library */
#define LIB3MF_ERROR_INCOMPATIBLEBINARYVERSION 8 /** the version of the binary interface does not match the bindings interface */
#define LIB3MF_ERROR_CALCULATIONABORTED 10 /** a calculation has been aborted */
#define LIB3MF_ERROR_SHOULDNOTBECALLED 11 /** functionality should not be called */
#define LIB3MF_ERROR_READERCLASSUNKNOWN 100 /** the queried reader class is unknown */
#define LIB3MF_ERROR_WRITERCLASSUNKNOWN 101 /** the queried writer class is unknown */
#define LIB3MF_ERROR_ITERATORINVALIDINDEX 102 /** the current index of an iterator is invalid */
#define LIB3MF_ERROR_INVALIDMODELRESOURCE 103 /** no Model Resource has been given */
#define LIB3MF_ERROR_RESOURCENOTFOUND 104 /** Resource not found */
#define LIB3MF_ERROR_INVALIDMODEL 105 /** A model is invalid */
#define LIB3MF_ERROR_INVALIDOBJECT 106 /** An object is invalid */
#define LIB3MF_ERROR_INVALIDMESHOBJECT 107 /** A mesh object is invalid */
#define LIB3MF_ERROR_INVALIDCOMPONENTSOBJECT 108 /** A components object is invalid */
#define LIB3MF_ERROR_INVALIDCOMPONENT 109 /** A component is invalid */
#define LIB3MF_ERROR_INVALIDBUILDITEM 110 /** A build item is invalid */
#define LIB3MF_ERROR_INVALIDBASEMATERIALGROUP 111 /** A basematerialgroup is invalid */
#define LIB3MF_ERROR_INVALIDSLICESTACKRESOURCE 112 /** A slicestack resource is invalid */
#define LIB3MF_ERROR_INVALIDTEXTURERESOURCE 113 /** A texture resource is invalid */
#define LIB3MF_ERROR_INVALIDCOLORGROUP 114 /** A color group resource is invalid */
#define LIB3MF_ERROR_INVALIDTEXTURE2DGROUP 115 /** A texture2d group resource is invalid */
#define LIB3MF_ERROR_INVALIDCOMPOSITEMATERIALS 116 /** A composite materials resource is invalid */
#define LIB3MF_ERROR_INVALIDMULTIPROPERTYGROUP 117 /** A MultiPropertyGroup resource is invalid */
#define LIB3MF_ERROR_INVALIDRESOURCEINDEX 120 /** A resource index is invalid */
#define LIB3MF_ERROR_ATTACHMENTNOTFOUND 121 /** Attachment not found */
#define LIB3MF_ERROR_FORBIDDENCYCLICREFERENCE 130 /** A component references one of its ancestors */
#define LIB3MF_ERROR_INVALIDATTACHMENTSTREAM 131 /** An attachment stream is invalid */
#define LIB3MF_ERROR_INVALIDPROPERTYCOUNT 132 /** Invalid property count. */
#define LIB3MF_ERROR_UNKOWNPROGRESSIDENTIFIER 140 /** A progress identifier is unknown */
#define LIB3MF_ERROR_METADATANOTFOUND 141 /** Metadata has not been found. */
#define LIB3MF_ERROR_BEAMLATTICE_INVALID_OBJECTTYPE 2000 /** This object type is not valid for beamlattices */
#define LIB3MF_ERROR_TOOLPATH_NOTWRITINGHEADER 3000 /** Not in toolpath header writing mode */
#define LIB3MF_ERROR_TOOLPATH_NOTWRITINGDATA 3001 /** Not in toolpath data writing mode */
#define LIB3MF_ERROR_TOOLPATH_DATAHASBEENWRITTEN 3002 /** Toolpath has already been written out */
#define LIB3MF_ERROR_TOOLPATH_INVALIDPOINTCOUNT 3003 /** Toolpath has an invalid number of points */

/*************************************************************************************************************************
 Error strings for Lib3MF
**************************************************************************************************************************/

inline const char * LIB3MF_GETERRORSTRING (Lib3MFResult nErrorCode) {
  switch (nErrorCode) {
    case LIB3MF_SUCCESS: return "no error";
    case LIB3MF_ERROR_NOTIMPLEMENTED: return "functionality not implemented";
    case LIB3MF_ERROR_INVALIDPARAM: return "an invalid parameter was passed";
    case LIB3MF_ERROR_INVALIDCAST: return "a type cast failed";
    case LIB3MF_ERROR_BUFFERTOOSMALL: return "a provided buffer is too small";
    case LIB3MF_ERROR_GENERICEXCEPTION: return "a generic exception occurred";
    case LIB3MF_ERROR_COULDNOTLOADLIBRARY: return "the library could not be loaded";
    case LIB3MF_ERROR_COULDNOTFINDLIBRARYEXPORT: return "a required exported symbol could not be found in the library";
    case LIB3MF_ERROR_INCOMPATIBLEBINARYVERSION: return "the version of the binary interface does not match the bindings interface";
    case LIB3MF_ERROR_CALCULATIONABORTED: return "a calculation has been aborted";
    case LIB3MF_ERROR_SHOULDNOTBECALLED: return "functionality should not be called";
    case LIB3MF_ERROR_READERCLASSUNKNOWN: return "the queried reader class is unknown";
    case LIB3MF_ERROR_WRITERCLASSUNKNOWN: return "the queried writer class is unknown";
    case LIB3MF_ERROR_ITERATORINVALIDINDEX: return "the current index of an iterator is invalid";
    case LIB3MF_ERROR_INVALIDMODELRESOURCE: return "no Model Resource has been given";
    case LIB3MF_ERROR_RESOURCENOTFOUND: return "Resource not found";
    case LIB3MF_ERROR_INVALIDMODEL: return "A model is invalid";
    case LIB3MF_ERROR_INVALIDOBJECT: return "An object is invalid";
    case LIB3MF_ERROR_INVALIDMESHOBJECT: return "A mesh object is invalid";
    case LIB3MF_ERROR_INVALIDCOMPONENTSOBJECT: return "A components object is invalid";
    case LIB3MF_ERROR_INVALIDCOMPONENT: return "A component is invalid";
    case LIB3MF_ERROR_INVALIDBUILDITEM: return "A build item is invalid";
    case LIB3MF_ERROR_INVALIDBASEMATERIALGROUP: return "A basematerialgroup is invalid";
    case LIB3MF_ERROR_INVALIDSLICESTACKRESOURCE: return "A slicestack resource is invalid";
    case LIB3MF_ERROR_INVALIDTEXTURERESOURCE: return "A texture resource is invalid";
    case LIB3MF_ERROR_INVALIDCOLORGROUP: return "A color group resource is invalid";
    case LIB3MF_ERROR_INVALIDTEXTURE2DGROUP: return "A texture2d group resource is invalid";
    case LIB3MF_ERROR_INVALIDCOMPOSITEMATERIALS: return "A composite materials resource is invalid";
    case LIB3MF_ERROR_INVALIDMULTIPROPERTYGROUP: return "A MultiPropertyGroup resource is invalid";
    case LIB3MF_ERROR_INVALIDRESOURCEINDEX: return "A resource index is invalid";
    case LIB3MF_ERROR_ATTACHMENTNOTFOUND: return "Attachment not found";
    case LIB3MF_ERROR_FORBIDDENCYCLICREFERENCE: return "A component references one of its ancestors";
    case LIB3MF_ERROR_INVALIDATTACHMENTSTREAM: return "An attachment stream is invalid";
    case LIB3MF_ERROR_INVALIDPROPERTYCOUNT: return "Invalid property count.";
    case LIB3MF_ERROR_UNKOWNPROGRESSIDENTIFIER: return "A progress identifier is unknown";
    case LIB3MF_ERROR_METADATANOTFOUND: return "Metadata has not been found.";
    case LIB3MF_ERROR_BEAMLATTICE_INVALID_OBJECTTYPE: return "This object type is not valid for beamlattices";
    case LIB3MF_ERROR_TOOLPATH_NOTWRITINGHEADER: return "Not in toolpath header writing mode";
    case LIB3MF_ERROR_TOOLPATH_NOTWRITINGDATA: return "Not in toolpath data writing mode";
    case LIB3MF_ERROR_TOOLPATH_DATAHASBEENWRITTEN: return "Toolpath has already been written out";
    case LIB3MF_ERROR_TOOLPATH_INVALIDPOINTCOUNT: return "Toolpath has an invalid number of points";
    default: return "unknown error";
  }
}

/*************************************************************************************************************************
 Declaration of handle classes 
**************************************************************************************************************************/

typedef Lib3MFHandle Lib3MF_Base;
typedef Lib3MFHandle Lib3MF_BinaryStream;
typedef Lib3MFHandle Lib3MF_Writer;
typedef Lib3MFHandle Lib3MF_Reader;
typedef Lib3MFHandle Lib3MF_Resource;
typedef Lib3MFHandle Lib3MF_ResourceIterator;
typedef Lib3MFHandle Lib3MF_SliceStackIterator;
typedef Lib3MFHandle Lib3MF_ObjectIterator;
typedef Lib3MFHandle Lib3MF_MeshObjectIterator;
typedef Lib3MFHandle Lib3MF_ComponentsObjectIterator;
typedef Lib3MFHandle Lib3MF_Texture2DIterator;
typedef Lib3MFHandle Lib3MF_BaseMaterialGroupIterator;
typedef Lib3MFHandle Lib3MF_ColorGroupIterator;
typedef Lib3MFHandle Lib3MF_Texture2DGroupIterator;
typedef Lib3MFHandle Lib3MF_CompositeMaterialsIterator;
typedef Lib3MFHandle Lib3MF_MultiPropertyGroupIterator;
typedef Lib3MFHandle Lib3MF_MetaData;
typedef Lib3MFHandle Lib3MF_MetaDataGroup;
typedef Lib3MFHandle Lib3MF_Object;
typedef Lib3MFHandle Lib3MF_MeshObject;
typedef Lib3MFHandle Lib3MF_BeamLattice;
typedef Lib3MFHandle Lib3MF_Component;
typedef Lib3MFHandle Lib3MF_ComponentsObject;
typedef Lib3MFHandle Lib3MF_BeamSet;
typedef Lib3MFHandle Lib3MF_BaseMaterialGroup;
typedef Lib3MFHandle Lib3MF_ColorGroup;
typedef Lib3MFHandle Lib3MF_Texture2DGroup;
typedef Lib3MFHandle Lib3MF_CompositeMaterials;
typedef Lib3MFHandle Lib3MF_MultiPropertyGroup;
typedef Lib3MFHandle Lib3MF_Attachment;
typedef Lib3MFHandle Lib3MF_Texture2D;
typedef Lib3MFHandle Lib3MF_BuildItem;
typedef Lib3MFHandle Lib3MF_BuildItemIterator;
typedef Lib3MFHandle Lib3MF_Slice;
typedef Lib3MFHandle Lib3MF_ToolpathProfile;
typedef Lib3MFHandle Lib3MF_ToolpathLayerReader;
typedef Lib3MFHandle Lib3MF_ToolpathLayerData;
typedef Lib3MFHandle Lib3MF_Toolpath;
typedef Lib3MFHandle Lib3MF_ToolpathIterator;
typedef Lib3MFHandle Lib3MF_SliceStack;
typedef Lib3MFHandle Lib3MF_Model;

namespace Lib3MF {

  /*************************************************************************************************************************
   Declaration of enums
  **************************************************************************************************************************/
  
  enum class ePropertyType : Lib3MF_int32 {
    NoPropertyType = 0,
    BaseMaterial = 1,
    TexCoord = 2,
    Colors = 3,
    Composite = 4,
    Multi = 5
  };
  
  enum class eSlicesMeshResolution : Lib3MF_int32 {
    Fullres = 0,
    Lowres = 1
  };
  
  enum class eModelUnit : Lib3MF_int32 {
    MicroMeter = 0,
    MilliMeter = 1,
    CentiMeter = 2,
    Inch = 3,
    Foot = 4,
    Meter = 5
  };
  
  enum class eObjectType : Lib3MF_int32 {
    Other = 0,
    Model = 1,
    Support = 2,
    SolidSupport = 3
  };
  
  enum class eTextureType : Lib3MF_int32 {
    Unknown = 0,
    PNG = 1,
    JPEG = 2
  };
  
  enum class eTextureTileStyle : Lib3MF_int32 {
    Wrap = 0,
    Mirror = 1,
    Clamp = 2,
    NoTileStyle = 3
  };
  
  enum class eTextureFilter : Lib3MF_int32 {
    Auto = 0,
    Linear = 1,
    Nearest = 2
  };
  
  enum class eBeamLatticeCapMode : Lib3MF_int32 {
    Sphere = 0,
    HemiSphere = 1,
    Butt = 2
  };
  
  enum class eBeamLatticeClipMode : Lib3MF_int32 {
    NoClipMode = 0,
    Inside = 1,
    Outside = 2
  };
  
  enum class eProgressIdentifier : Lib3MF_int32 {
    QUERYCANCELED = 0,
    DONE = 1,
    CLEANUP = 2,
    READSTREAM = 3,
    EXTRACTOPCPACKAGE = 4,
    READNONROOTMODELS = 5,
    READROOTMODEL = 6,
    READRESOURCES = 7,
    READMESH = 8,
    READSLICES = 9,
    READBUILD = 10,
    READCUSTOMATTACHMENT = 11,
    READTEXTURETACHMENTS = 12,
    CREATEOPCPACKAGE = 13,
    WRITEMODELSTOSTREAM = 14,
    WRITEROOTMODEL = 15,
    WRITENONROOTMODELS = 16,
    WRITEATTACHMENTS = 17,
    WRITECONTENTTYPES = 18,
    WRITENOBJECTS = 19,
    WRITENODES = 20,
    WRITETRIANGLES = 21,
    WRITESLICES = 22
  };
  
  enum class eBlendMethod : Lib3MF_int32 {
    NoBlendMethod = 0,
    Mix = 1,
    Multiply = 2
  };
  
  enum class eToolpathSegmentType : Lib3MF_int32 {
    Unknown = 0,
    Hatch = 1,
    Loop = 2,
    Polyline = 3
  };
  
  /*************************************************************************************************************************
   Declaration of structs
  **************************************************************************************************************************/
  
  #pragma pack (1)
  
  typedef struct {
      Lib3MF_uint32 m_Indices[3];
  } sTriangle;
  
  typedef struct {
      Lib3MF_uint32 m_ResourceID;
      Lib3MF_uint32 m_PropertyIDs[3];
  } sTriangleProperties;
  
  typedef struct {
      Lib3MF_single m_Coordinates[3];
  } sPosition;
  
  typedef struct {
      Lib3MF_single m_Coordinates[2];
  } sPosition2D;
  
  typedef struct {
      Lib3MF_uint32 m_PropertyID;
      Lib3MF_double m_MixingRatio;
  } sCompositeConstituent;
  
  typedef struct {
      Lib3MF_uint32 m_ResourceID;
      eBlendMethod m_TheBlendMethod;
  } sMultiPropertyLayer;
  
  typedef struct {
      Lib3MF_double m_U;
      Lib3MF_double m_V;
  } sTex2Coord;
  
  typedef struct {
      Lib3MF_single m_Fields[4][3];
  } sTransform;
  
  typedef struct {
      Lib3MF_single m_MinCoordinate[3];
      Lib3MF_single m_MaxCoordinate[3];
  } sBox;
  
  typedef struct {
      Lib3MF_uint8 m_Red;
      Lib3MF_uint8 m_Green;
      Lib3MF_uint8 m_Blue;
      Lib3MF_uint8 m_Alpha;
  } sColor;
  
  typedef struct {
      Lib3MF_uint32 m_Indices[2];
      Lib3MF_double m_Radii[2];
      eBeamLatticeCapMode m_CapModes[2];
  } sBeam;
  
  #pragma pack ()
  
  /*************************************************************************************************************************
   Declaration of function pointers 
  **************************************************************************************************************************/
  
  /**
  * ProgressCallback - A callback function
  *
  * @param[out] pAbort - Returns whether the calculation should be aborted
  * @param[in] dProgressValue - The value of the progress function: values in the interval [0,1] are progress; < mean no progress update
  * @param[in] eProgressIdentifier - An identifier of progress
  * @param[in] pUserData - Userdata that is passed to the callback function
  */
  typedef void(*ProgressCallback)(bool *, Lib3MF_double, Lib3MF::eProgressIdentifier, Lib3MF_pvoid);
  
  /**
  * WriteCallback - Callback to call for writing a data chunk
  *
  * @param[in] nByteData - Pointer to the data to be written
  * @param[in] nNumBytes - Number of bytes to write
  * @param[in] pUserData - Userdata that is passed to the callback function
  */
  typedef void(*WriteCallback)(Lib3MF_uint64, Lib3MF_uint64, Lib3MF_pvoid);
  
  /**
  * ReadCallback - Callback to call for reading a data chunk
  *
  * @param[in] nByteData - Pointer to a buffer to read data into
  * @param[in] nNumBytes - Number of bytes to read
  * @param[in] pUserData - Userdata that is passed to the callback function
  */
  typedef void(*ReadCallback)(Lib3MF_uint64, Lib3MF_uint64, Lib3MF_pvoid);
  
  /**
  * SeekCallback - Callback to call for seeking in the stream
  *
  * @param[in] nPosition - Position in the stream to move to
  * @param[in] pUserData - Userdata that is passed to the callback function
  */
  typedef void(*SeekCallback)(Lib3MF_uint64, Lib3MF_pvoid);
  
} // namespace Lib3MF;

// define legacy C-names for enums, structs and function types
typedef Lib3MF::ePropertyType eLib3MFPropertyType;
typedef Lib3MF::eSlicesMeshResolution eLib3MFSlicesMeshResolution;
typedef Lib3MF::eModelUnit eLib3MFModelUnit;
typedef Lib3MF::eObjectType eLib3MFObjectType;
typedef Lib3MF::eTextureType eLib3MFTextureType;
typedef Lib3MF::eTextureTileStyle eLib3MFTextureTileStyle;
typedef Lib3MF::eTextureFilter eLib3MFTextureFilter;
typedef Lib3MF::eBeamLatticeCapMode eLib3MFBeamLatticeCapMode;
typedef Lib3MF::eBeamLatticeClipMode eLib3MFBeamLatticeClipMode;
typedef Lib3MF::eProgressIdentifier eLib3MFProgressIdentifier;
typedef Lib3MF::eBlendMethod eLib3MFBlendMethod;
typedef Lib3MF::eToolpathSegmentType eLib3MFToolpathSegmentType;
typedef Lib3MF::sTriangle sLib3MFTriangle;
typedef Lib3MF::sTriangleProperties sLib3MFTriangleProperties;
typedef Lib3MF::sPosition sLib3MFPosition;
typedef Lib3MF::sPosition2D sLib3MFPosition2D;
typedef Lib3MF::sCompositeConstituent sLib3MFCompositeConstituent;
typedef Lib3MF::sMultiPropertyLayer sLib3MFMultiPropertyLayer;
typedef Lib3MF::sTex2Coord sLib3MFTex2Coord;
typedef Lib3MF::sTransform sLib3MFTransform;
typedef Lib3MF::sBox sLib3MFBox;
typedef Lib3MF::sColor sLib3MFColor;
typedef Lib3MF::sBeam sLib3MFBeam;
typedef Lib3MF::ProgressCallback Lib3MFProgressCallback;
typedef Lib3MF::WriteCallback Lib3MFWriteCallback;
typedef Lib3MF::ReadCallback Lib3MFReadCallback;
typedef Lib3MF::SeekCallback Lib3MFSeekCallback;

#endif // __LIB3MF_TYPES_HEADER_CPP
