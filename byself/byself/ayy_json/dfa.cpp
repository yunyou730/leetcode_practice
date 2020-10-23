#include "dfa.h"

using namespace ayy;

DFA::DFA()
{
	initStates();
	initJump();
}

DFA::~DFA()
{

}

void DFA::initStates()
{
	for (int i = (int)EState::Start;i < (int)EState::Invalid;i++)
	{
		EState state = EState(i);
		_stateMap.insert(std::make_pair(state, new State(state)));
	}
}

void DFA::initJump()
{
	_stateMap[EState::Start]->addJump(ECharType::BraceLeft, EState::Map);
	_stateMap[EState::Start]->addJump(ECharType::BracketLeft, EState::Array);

	_stateMap[EState::Map]->addJump(ECharType::Quote,EState::Key);
	_stateMap[EState::Map]->addJump(ECharType::Bracketright, EState::Backtrack);

	_stateMap[EState::Key]->addJump(ECharType::Character, EState::Key);
	_stateMap[EState::Key]->addJump(ECharType::Colon, EState::Value);

	_stateMap[EState::Value]->addJump(ECharType::Comma, EState::Backtrack);
	
}

// State

void State::addJump(ECharType charType, EState nextState)
{
	_jumpMap.insert(std::make_pair(charType,nextState));
}
