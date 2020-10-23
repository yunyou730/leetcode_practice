#pragma once
#include <string>
#include <map>
#include <vector>

namespace ayy
{
	enum class EState
	{
		Start,
		Map,
		Array,
		Key,
		Value,
		Seperator,

		Backtrack,		// special , backtrack

		Invalid,
	};


	enum class ECharType
	{
		BraceLeft,		// {
		BraceRight,		// }

		BracketLeft,		// [
		Bracketright,		// ]

		Comma,			// ,
		Quote,			// "		
		Colon,			// :

		Number,			// 0 - 9
		Character,		// any character

		Invalid,
	};
	
	class State
	{
	public:
		State(EState stateType):_type(stateType)
		{
		}
		void addJump(ECharType charType, EState nextState);
	public:
		EState						_type;
		//std::string					_expression;
		std::map<ECharType, EState>	_jumpMap;
	};

	class DFA
	{
	public:
		DFA();
		~DFA();

		

	private:
		void initStates();
		void initJump();

	private:
		std::map<EState, State*>		_stateMap;
	};
}
