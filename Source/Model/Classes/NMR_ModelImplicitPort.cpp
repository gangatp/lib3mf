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

--*/

#include "Model/Classes/NMR_ModelImplicitPort.h"

#include "Common/NMR_Exception.h"

namespace NMR
{
    CModelImplicitPort::CModelImplicitPort(CModelImplicitNode* parent,

                                           ImplicitIdentifier const& identifier,
                                           std::string const& displayname)
        : m_parent(parent), m_identifier(identifier), m_displayname(displayname)
    {
    }

    CModelImplicitPort::CModelImplicitPort(ImplicitIdentifier const& identifier,
                                           std::string const& displayname,
                                           Lib3MF::eImplicitPortType type)
        : m_identifier(identifier), m_displayname(displayname), m_type(type)
    {
    }

    CModelImplicitPort::CModelImplicitPort(ImplicitIdentifier const& identifier,
                                           std::string const& displayname,
                                           Lib3MF::eImplicitPortType type,
                                           ImplicitIdentifier const& reference)
        : m_identifier(identifier),
          m_displayname(displayname),
          m_type(type),
          m_reference(reference)
    {
    }

    ImplicitIdentifier const& CModelImplicitPort::getIdentifier() const
    {
        throwIfNotAnInstance();
        return m_identifier;
    }

    std::string const& CModelImplicitPort::getDisplayName() const
    {
        throwIfNotAnInstance();
        return m_displayname;
    }

    void CModelImplicitPort::setIdentifier(std::string const& identifier)
    {
        throwIfNotAnInstance();
        m_identifier = identifier;
    }

    void CModelImplicitPort::setDisplayName(std::string const& displayname)
    {
        throwIfNotAnInstance();
        m_displayname = displayname;
    }

    Lib3MF::eImplicitPortType CModelImplicitPort::getType() const
    {
        throwIfNotAnInstance();
        return m_type;
    }

    void CModelImplicitPort::setType(Lib3MF::eImplicitPortType type)
    {
        throwIfNotAnInstance();
        m_type = type;
    }

    ImplicitIdentifier const& NMR::CModelImplicitPort::getReference() const
    {
        throwIfNotAnInstance();
        return m_reference;
    }

    void NMR::CModelImplicitPort::setReference(
        ImplicitIdentifier const& reference)
    {
        throwIfNotAnInstance();
        m_reference = reference;
    }

    CModelImplicitNode* NMR::CModelImplicitPort::getParent() const
    {
        throwIfNotAnInstance();
        return m_parent;
    }

    void CModelImplicitPort::throwIfNotAnInstance() const
    {
        if(!this)
        {
            throw CNMRException(NMR_ERROR_IMPLICIT_PORT_DOES_NOT_EXIST);
        }
    }
}  // namespace NMR
