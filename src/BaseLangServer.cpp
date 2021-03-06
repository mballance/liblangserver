/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
/*
 * BaseServer.cpp
 *
 *  Created on: Oct 1, 2020
 *      Author: ballance
 */

#include "BaseLangServer.h"
#include "ValNull.h"

namespace lls {

BaseLangServer::BaseLangServer() {
	// TODO Auto-generated constructor stub

}

BaseLangServer::~BaseLangServer() {
	// TODO Auto-generated destructor stub
}

void BaseLangServer::didChangeTextDocument(DidChangeTextDocumentParamsSP params) {

}

void BaseLangServer::didOpenTextDocument(DidOpenTextDocumentParamsSP params) {
	//
}

HoverSP BaseLangServer::hoverRequest(HoverParamsSP params) {
	// Null response means no hover info
	return HoverSP();
}

} /* namespace lls */
