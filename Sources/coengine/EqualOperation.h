/*****************************************************************************
 * $Workfile: EqualOperation.h $
 * $Revision: 1 $
 * $Modtime: 3/16/01 10:41a $
 * $Author: Lw $
 ******************************************************************************
 *
 *	COPYRIGHT (C) 1999-2001 CGI NEDERLAND B.V. - ALL RIGHTS RESERVED
 *
 ******************************************************************************/

#ifndef EQUALOPERATION_H
#define EQUALOPERATION_H

// Includes.
#include <string>

using namespace std;

#include "RelationalOperation.h"	// Base-class definition.

// Define base-class.
#undef BASECLASS
#define BASECLASS RelationalOperation

// Class definition.
// Derived from RelationalOperation.
class EqualOperation : public BASECLASS
{
public:
	////////////////////////////////////////////////////////////////////////////
	// CONSTRUCTION AND DESTRUCTION

	///////////////////////////////////////////////////////////////////////////////
	// default constructor of EqualOperation
	///////////////////////////////////////////////////////////////////////////////
	EqualOperation();

	///////////////////////////////////////////////////////////////////////////////
	// destructor of EqualOperation
	///////////////////////////////////////////////////////////////////////////////
	~EqualOperation();

	////////////////////////////////////////////////////////////////////////////
	// PUBLIC INTERFACE

	///////////////////////////////////////////////////////////////////////////////
	// function		:	Evaluate()
	//
	// description	:	This function evaluates an 'equal to'-operation. If both
	//					values can be interpreted as numbers, true is returned if
	//					the numerical value of the left operand is equal to that of
	//					the right one; if they can only be interpreted as strings,
	//					true is returned if all characters match.
	//
	// parameters	:	strLeft		value of left operand
	//					strRight	value of right operand
	//
	// returns		:	true	'equal to' is true
	//					false	'equal to' is false
	///////////////////////////////////////////////////////////////////////////////
	bool Evaluate( const string& strLeft, const string& strRight );
};

#undef BASECLASS
#endif // !EQUALOPERATION_H
