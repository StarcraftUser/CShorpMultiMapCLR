#include "pch.h"
//#include "MultiMapWapper.h"


generic<typename Key, typename Value>
MultiMapWapper::CSharpMultiMap<Key, Value>::~CSharpMultiMap()
{
	if (multimapUnion->ptrToDelete)
		delete multimapUnion->ptrToDelete;
	delete multimapUnion;

	if (gIntKeyClassDictionary && gKeyClassDictionary)
	{
		gIntKeyClassDictionary->Clear();
		gKeyClassDictionary->Clear();
	}

	if (gValueClassDictionary)
	{
		gValueClassDictionary->Clear();
	}
}


generic<typename Key, typename Value>
MultiMapWapper::CShorpMultiNode<Key, Value>^ MultiMapWapper::CSharpMultiMap<Key, Value>::KeyEnd()
{
	return KeyEndNode;
}

generic<typename Key, typename Value>
MultiMapWapper::CShorpMultiNode<Key, Value>^ MultiMapWapper::CSharpMultiMap<Key, Value>::KeyEndCopy()
{
	return KeyEndNode->DeepCopy();
}


generic<typename Key, typename Value>
MultiMapWapper::CShorpMultiNode<Key, Value>^ MultiMapWapper::CSharpMultiMap<Key, Value>::endCopy()
{
	if (nKeyValueType == 0 || nKeyValueType > 196)return nullptr;

	return end()->DeepCopy();
}


generic<typename Key, typename Value>
MultiMapWapper::CShorpReverseNode<Key, Value>^ MultiMapWapper::CSharpMultiMap<Key, Value>::rendCopy()
{
	if (nKeyValueType == 0 || nKeyValueType > 196)return nullptr;
	return rend()->DeepCopy();
}


generic<typename Key, typename Value>
System::Collections::Generic::Dictionary<System::Int64, Value>^ MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()
{
	if (gValueClassDictionary == nullptr) return nullptr;
	return gValueClassDictionary;
}

generic<typename Key, typename Value>
System::Collections::Generic::Dictionary<System::Int64, Key>^ MultiMapWapper::CSharpMultiMap<Key, Value>::KeyClassDictionary()
{
	if (gIntKeyClassDictionary == nullptr) return nullptr;
	return gIntKeyClassDictionary;
}