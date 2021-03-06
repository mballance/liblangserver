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
 * Diagnostic.h
 *
 *  Created on: Oct 5, 2020
 *      Author: ballance
 */

#pragma once
#include "DiagnosticSeverity.h"
#include "Range.h"
#include "Val.h"
#include "ValStr.h"

namespace lls {

class Diagnostic;
typedef std::shared_ptr<Diagnostic> DiagnosticSP;
class Diagnostic : public Val {
public:

	Diagnostic(
			RangeSP			range,
			ValStrSP		message);

	virtual ~Diagnostic();

	RangeSP range() const { return m_range; }

	void range(RangeSP v) { m_range = v; }

	DiagnosticSeveritySP severity() const { return m_severity; }

	void severity(DiagnosticSeveritySP v) { m_severity = v; }

	ValSP code() const { return m_code; }

	void code(ValSP v) { m_code = v; }

	ValStrSP source() const { return m_source; }

	void source(ValStrSP v) { m_source = v; }

	ValStrSP message() const { return m_message; }

	void message(ValStrSP v) { m_message = v; }

	virtual nlohmann::json dump();

	static DiagnosticSP mk(
			RangeSP			range,
			ValStrSP		message);

private:

		RangeSP					m_range;

//		/**
//		 * The diagnostic's severity. Can be omitted. If omitted it is up to the
//		 * client to interpret diagnostics as error, warning, info or hint.
//		 */
		DiagnosticSeveritySP	m_severity;
//
//		/**
//		 * The diagnostic's code, which might appear in the user interface.
//		 */
		ValSP					m_code;
//
//		/**
//		 * A human-readable string describing the source of this
//		 * diagnostic, e.g. 'typescript' or 'super lint'.
//		 */
		ValStrSP			m_source;

//		/**
//		 * The diagnostic's message.
//		 */
		ValStrSP			m_message;
//
//		/**
//		 * Additional metadata about the diagnostic.
//		 *
//		 * @since 3.15.0
//		 */
//		tags?: DiagnosticTag[];
//
//		/**
//		 * An array of related diagnostic information, e.g. when symbol-names within
//		 * a scope collide all definitions can be marked via this property.
//		 */
//		relatedInformation?: DiagnosticRelatedInformation[];
};


}
