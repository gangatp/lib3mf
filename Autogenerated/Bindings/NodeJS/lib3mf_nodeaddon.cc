/*++

Copyright (C) 2023 3MF Consortium (Original Author)

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

This file has been generated by the Automatic Component Toolkit (ACT) version 1.8.0-develop.

Abstract: This is an autogenerated C++ Implementation file for the Node addon class 
 of the 3MF Library

Interface version: 2.4.0

*/


#include <node.h>
#include "lib3mf_nodewrapper.h"

using namespace v8;

void LoadLib3MF(const FunctionCallbackInfo<Value>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);
	args.GetReturnValue().Set(CLib3MFWrapper::NewInstance(args));
}

void InitAll(v8::Local<Object> exports, v8::Local<Object> module)
{
	CLib3MFBase::Init();
	CLib3MFWriter::Init();
	CLib3MFReader::Init();
	CLib3MFPackagePart::Init();
	CLib3MFResource::Init();
	CLib3MFResourceIterator::Init();
	CLib3MFSliceStackIterator::Init();
	CLib3MFObjectIterator::Init();
	CLib3MFMeshObjectIterator::Init();
	CLib3MFComponentsObjectIterator::Init();
	CLib3MFTexture2DIterator::Init();
	CLib3MFBaseMaterialGroupIterator::Init();
	CLib3MFColorGroupIterator::Init();
	CLib3MFTexture2DGroupIterator::Init();
	CLib3MFCompositeMaterialsIterator::Init();
	CLib3MFMultiPropertyGroupIterator::Init();
	CLib3MFImage3DIterator::Init();
	CLib3MFScalarFieldIterator::Init();
	CLib3MFFunctionIterator::Init();
	CLib3MFVector3DFieldIterator::Init();
	CLib3MFMetaData::Init();
	CLib3MFMetaDataGroup::Init();
	CLib3MFObject::Init();
	CLib3MFMeshObject::Init();
	CLib3MFBeamLattice::Init();
	CLib3MFScalarField::Init();
	CLib3MFVector3DField::Init();
	CLib3MFScalarFieldFromImage3D::Init();
	CLib3MFScalarFieldConstant::Init();
	CLib3MFScalarFieldComposed::Init();
	CLib3MFVector3DFieldFromImage3D::Init();
	CLib3MFVector3DFieldConstant::Init();
	CLib3MFVector3DFieldComposed::Init();
	CLib3MFFieldReference::Init();
	CLib3MFScalarFieldReference::Init();
	CLib3MFVector3DFieldReference::Init();
	CLib3MFVolumeDataBoundary::Init();
	CLib3MFVolumeDataColor::Init();
	CLib3MFMaterialMapping::Init();
	CLib3MFVolumeDataComposite::Init();
	CLib3MFVolumeDataProperty::Init();
	CLib3MFVolumeData::Init();
	CLib3MFComponent::Init();
	CLib3MFComponentsObject::Init();
	CLib3MFBeamSet::Init();
	CLib3MFBaseMaterialGroup::Init();
	CLib3MFColorGroup::Init();
	CLib3MFTexture2DGroup::Init();
	CLib3MFCompositeMaterials::Init();
	CLib3MFMultiPropertyGroup::Init();
	CLib3MFImage3D::Init();
	CLib3MFImageStack::Init();
	CLib3MFAttachment::Init();
	CLib3MFTexture2D::Init();
	CLib3MFImplicitPort::Init();
	CLib3MFAccessor::Init();
	CLib3MFImplicitPortAccessor::Init();
	CLib3MFImplicitNode::Init();
	CLib3MFImplicitConstant::Init();
	CLib3MFImplicitVector::Init();
	CLib3MFImplicitMatrix::Init();
	CLib3MFNodeAccessor::Init();
	CLib3MFImplicitFunction::Init();
	CLib3MFBuildItem::Init();
	CLib3MFBuildItemIterator::Init();
	CLib3MFSlice::Init();
	CLib3MFSliceStack::Init();
	CLib3MFConsumer::Init();
	CLib3MFAccessRight::Init();
	CLib3MFContentEncryptionParams::Init();
	CLib3MFResourceData::Init();
	CLib3MFResourceDataGroup::Init();
	CLib3MFKeyStore::Init();
	CLib3MFModel::Init();
	CLib3MFWrapper::Init();
	NODE_SET_METHOD(module, "exports", LoadLib3MF);
}

NODE_MODULE(lib3mf_nodeaddon, InitAll)

