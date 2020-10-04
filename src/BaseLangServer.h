/*
 * BaseServer.h
 *
 *  Created on: Oct 1, 2020
 *      Author: ballance
 */

#pragma once
#include "ILangServer.h"

namespace lls {

class BaseLangServer : public virtual ILangServer {
public:
	BaseLangServer();

	virtual ~BaseLangServer();

	// virtual ServerCapabilitiesSP initialize(InitializeParamsSP params) override;

};

} /* namespace lls */
