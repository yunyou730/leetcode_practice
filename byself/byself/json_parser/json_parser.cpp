#include "json_parser.h"

using namespace ayyjson;


Node::Node()
	:_type(ENodeType::Invalid)
	,_intValue(0)

{

}

Node::~Node()
{

}


/*
	Token
*/
Token::Token()
	:_type(ETokenType::Max)
{

}

/*
	JsonParser 
*/

Node* Reader::read(const std::string& str)
{
	_contentLen = str.size();
	if (_contentLen < 2)
	{
		return nullptr;
	}

	_parseCharIdx = 0;
	bool isHandleValue = false;
	while (_parseCharIdx < _contentLen)
	{
		char ch = str[_parseCharIdx];
		if (!isHandleValue)
		{
			switch (ch)
			{
			case '{':
				Token * token = new Token();
				break;
			}
		}
		else
		{

		}
	}
	return nullptr;
}
