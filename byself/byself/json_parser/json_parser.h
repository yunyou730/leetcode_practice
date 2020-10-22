#pragma once

#include <iostream>
#include <string>
#include <stdio.h>
#include <map>
#include <vector>

namespace ayyjson
{

	enum ENodeType
	{
		Map,
		Array,
		Value_Str,
		Value_Number,

		Invalid,
	};


	
	class Node
	{
	public:
		Node();
		~Node();

	public:
		ENodeType	_type;

		std::map<std::string, Node*>	_mapContent;
		std::vector<Node*>				_arrayContent;
		int								_intValue;
		std::string						_strValue;

	};


	enum ETokenType
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

		Max,
	}
	;

	class Token
	{
	public:
		Token();
		ETokenType			_type;
		const std::string	_expression;
	};

	class Reader
	{
	public:
		Node* read(const std::string& str);
	private:
		size_t				_parseCharIdx;
		size_t				_contentLen;
		std::vector<Token*>	_tokenSequence;
	};
	
	class Writer
	{

	};


}
