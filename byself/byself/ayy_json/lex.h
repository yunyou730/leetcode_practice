#pragma once
#include <map>
#include <vector>
#include <string>

namespace ayy
{
	enum class EJNodeType
	{
		Map,
		Array,
		Value_Str,
		Value_Number,

		Invalid,
	};

	class JNode
	{
	public:
		JNode();
		~JNode();

	public:
		EJNodeType	_type;

		std::map<std::string, JNode*>	_mapContent;
		std::vector<JNode*>				_arrayContent;
		int								_intValue;
		std::string						_strValue;

	};
}
