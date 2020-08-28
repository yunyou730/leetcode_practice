#pragma once

namespace ayy
{
	template<typename T>
	struct BTreeNode
	{
		BTreeNode<T>* _leftChild	= nullptr;
		BTreeNode<T>* _rightChild	= nullptr;
		T _value;

		BTreeNode<T>::BTreeNode(T value)
		{
			_value = value;
		}
	};

	template<typename T>
	class BTree
	{
	private:
		BTreeNode<T>* _root = nullptr;

	public:
		void AddItem(T value)
		{

		}
	};
}
