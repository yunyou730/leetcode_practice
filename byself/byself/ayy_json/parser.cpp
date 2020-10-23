#include "parser.h"
#include "dfa.h"

using namespace ayy;

const int STATE_START = 0;
const int STATE_

/*
	JsonParser 
*/
JNode* Parser::parse(const std::string& str)
{

	DFA dfa;
	
	_contentLen = str.size();
	if (_contentLen < 2)
	{
		return nullptr;
	}

	_parseCharIdx = 0;
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
	}
	return nullptr;
}
