#include "testcase.h"
#include "../json_parser/json_parser.h"

namespace ayyjson
{
	void Testcase::test(const std::string& json)
	{
		ayyjson::Reader reader;
		ayyjson::Node* node = reader.read(json);
		delete node;
		node = nullptr;
	}
}
