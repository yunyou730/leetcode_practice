#pragma once

#include <iostream>
#include <string>
#include <stdio.h>
#include <map>
#include <vector>
#include "./lex.h"

namespace ayy
{

	enum class ETokenType
	{
		MapBegin,		// {
		MapEnd,			// }
		ArrayBegin,		// [
		ArrayEnd,		// ]
		KVSeparator,	// :
		StrSide,		// "
		ContentEnd,		// ,

		StrValue,
		NumberValue,

		Invalid,
	};

	class Token
	{
	public:
		Token();
		ETokenType			_type;
		std::string			_expression;
	};

	class Parser
	{
	public:
		JNode* parse(const std::string& str);
	private:
		size_t				_parseCharIdx;
		size_t				_contentLen;
		std::vector<Token*>	_tokenSequence;
	};
}
