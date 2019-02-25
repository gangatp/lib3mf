/*++

Copyright (C) 2018 3MF Consortium (Original Author)

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

Abstract: This is the class declaration of CLib3MFComponent

*/


#ifndef __LIB3MF_LIB3MFCOMPONENT
#define __LIB3MF_LIB3MFCOMPONENT

#include "lib3mf_interfaces.hpp"
#include "lib3mf_base.hpp"
#pragma warning( push)
#pragma warning( disable : 4250)


// Include custom headers here.
#include "Model/Classes/NMR_ModelComponent.h"

namespace Lib3MF {
namespace Impl {


/*************************************************************************************************************************
 Class declaration of CLib3MFComponent 
**************************************************************************************************************************/

class CLib3MFComponent : public virtual ILib3MFComponent, public virtual CLib3MFBase {
private:

	/**
	* Put private members here.
	*/
	NMR::PModelComponent m_pComponent;

protected:

	/**
	* Put protected members here.
	*/

public:

	/**
	* Put additional public members here. They will not be visible in the external API.
	*/
	CLib3MFComponent(NMR::PModelComponent pComponent);

	/**
	* Public member functions to implement.
	*/

	ILib3MFObject * GetObjectResource ();

	Lib3MF_uint32 GetObjectResourceID ();

	std::string GetUUID (bool & bHasUUID);

	void SetUUID (const std::string & sUUID);

	bool HasTransform ();

	void SetTransform (const sLib3MFTransform Transform);

	virtual sLib3MFTransform GetTransform();
};

}
}

#pragma warning( pop )
#endif // __LIB3MF_LIB3MFCOMPONENT
