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

Abstract: This is a stub class definition of CImplicitPortIterator

*/

#include "lib3mf_implicitportiterator.hpp"
#include "lib3mf_interfaceexception.hpp"

// Include custom headers here.
#include "lib3mf_implicitport.hpp"

using namespace Lib3MF::Impl;

/*************************************************************************************************************************
 Class definition of CImplicitPortIterator 
**************************************************************************************************************************/

Lib3MF::Impl::CImplicitPortIterator::CImplicitPortIterator(NMR::PPorts pPorts) : m_pPorts(pPorts)
{
}

Lib3MF_uint64 Lib3MF::Impl::CImplicitPortIterator::Count()
{
    return m_pPorts->size();
}

IImplicitPort * CImplicitPortIterator::GetCurrent()
{
	throwIfInvalidIndex();
	return new CImplicitPort(m_pPorts->at(getCurrentIndex()));
}

