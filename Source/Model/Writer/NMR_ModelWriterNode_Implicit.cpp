/*++

Copyright (C) 2023 3MF Consortium

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

Abstract:
Writer node for implicit functions

--*/
#include "Model/Writer/NMR_ModelWriterNode_Implicit.h"
#include "Common/NMR_Exception.h"
#include "lib3mf_types.hpp"


namespace NMR
{
    CModelWriterNode_Implicit::CModelWriterNode_Implicit(_In_ CModel * pModel,
                                                         _In_ CXmlWriter * pXMLWriter,
                                                         _In_ PProgressMonitor pProgressMonitor)
        : CModelWriterNode_ModelBase(pModel, pXMLWriter, pProgressMonitor)
    {
    }

    void CModelWriterNode_Implicit::writeImplicitFunctions()
    {
        nfUint32 const nCount = m_pModel->getFunctionCount();

        for (nfUint32 nIndex = 0; nIndex < nCount; nIndex++)
        {
            m_pProgressMonitor->IncrementProgress(1);
            CModelImplicitFunction * pFunction = m_pModel->getFunction(nIndex);

            writeStartElementWithPrefix(XML_3MF_ELEMENT_IMPLICIT_FUNCTION,
                                        XML_3MF_NAMESPACEPREFIX_VOLUMETRIC);
            writeIntAttribute(XML_3MF_ELEMENT_IMPLICIT_FUNCTION_ID,
                              pFunction->getPackageResourceID()->getModelResourceID());
            writeStringAttribute(XML_3MF_ELEMENT_IMPLICIT_FUNCTION_DISPLAY_NAME,
                                 pFunction->getDisplayName());

            writeImplicitFunctionElements(*pFunction);

            writeFullEndElement();
        }
    }

    void CModelWriterNode_Implicit::writeToXML()
    {
        throw CNMRException(NMR_ERROR_NOTIMPLEMENTED);
    }

    void CModelWriterNode_Implicit::writeImplicitFunctionElements(CModelImplicitFunction & function)
    {
        for (auto node : *function.getNodes())
        {
            writeImplicitNode(*node);
        }
    }

   

    void CModelWriterNode_Implicit::writeImplicitNode(CModelImplicitNode & node)
    {
        auto name = elementNameFromNodeType(node.getNodeType());
        writeStartElementWithPrefix(name.c_str(), XML_3MF_NAMESPACEPREFIX_VOLUMETRIC);

        writeStringAttribute(XML_3MF_ELEMENT_IMPLICIT_NODE_ID, node.getIdentifier());
        writeStringAttribute(XML_3MF_ELEMENT_IMPLICIT_NODE_DISPLAY_NAME, node.getDisplayName());
        
        writeFullEndElement();
    }
}
