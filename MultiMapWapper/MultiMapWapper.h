#pragma once

using namespace System;

namespace MultiMapWapper
{
	generic<typename Key, typename Value>
	public ref class CShorpMultiNode
	{
	private:
		Utilities::MultiNodeUnion* multiNodeUnion;
		System::Collections::Generic::Dictionary<System::Int64, Key>^ gIntKeyClassDictionary;
		System::Collections::Generic::Dictionary<System::Int64, Value>^ gValueClassDictionary;
		int nKeyValueType = 0;
		int isInitialized = 0;
		/*virtual*/ void Next();
		/*virtual*/ void Previous();
	internal:
		/*virtual*/ Utilities::MultiNodeUnion* GetNode()
		{
			if (Object::ReferenceEquals(this, nullptr)) return nullptr;
			isInitialized = 1;
			return multiNodeUnion;
		}
		/*virtual*/ int GetKVType()
		{
			return this->nKeyValueType;
		}
		/*virtual*/ int GetInit()
		{
			return this->isInitialized;
		}
		/*virtual*/ void SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary);
		/*virtual*/ void SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary);
	public:
		CShorpMultiNode();
		/*virtual*/ ~CShorpMultiNode();
		/*virtual*/ Value GetValue();
		/*virtual*/ Key GetKey();
		/*virtual*/ void SetValue(Value value);
		/*virtual*/ CShorpMultiNode<Key, Value>^ DeepCopy();
		static CShorpMultiNode<Key, Value>^ operator ++(CShorpMultiNode<Key, Value>^ thisObj);
		static CShorpMultiNode<Key, Value>^ operator --(CShorpMultiNode<Key, Value>^ thisObj);
		//static CShorpMultiNode<Key, Value>^ operator ++(CShorpMultiNode<Key, Value>^ thisObj, int);
		///*virtual*/ CShorpMultiNode<Key, Value>^ operator++();
		///*virtual*/ CShorpMultiNode<Key, Value>^ operator++(int);
		static bool operator==(const CShorpMultiNode<Key, Value>^ thisObj, const CShorpMultiNode<Key, Value>^ other);
		static bool operator!=(const CShorpMultiNode<Key, Value>^ thisObj, const CShorpMultiNode<Key, Value>^ other);
		static CShorpMultiNode<Key, Value>^ operator%(CShorpMultiNode<Key, Value>^ thisObj, CShorpMultiNode<Key, Value>^ other);
	};

	generic<typename Key, typename Value>
	public ref class CShorpMultiConstNode
	{
	private:
		Utilities::MultiConstNodeUnion* multiConstNodeUnion;
		System::Collections::Generic::Dictionary<System::Int64, Key>^ gIntKeyClassDictionary;
		System::Collections::Generic::Dictionary<System::Int64, Value>^ gValueClassDictionary;
		int nKeyValueType = 0;
		int isInitialized = 0;
		/*virtual*/ void Next();
		/*virtual*/ void Previous();
	internal:
		/*virtual*/ Utilities::MultiConstNodeUnion* GetNode()
		{
			if (Object::ReferenceEquals(this, nullptr)) return nullptr;
			isInitialized = 1;
			return multiConstNodeUnion;
		}
		/*virtual*/ int GetKVType()
		{
			return this->nKeyValueType;
		}
		/*virtual*/ int GetInit()
		{
			return this->isInitialized;
		}
		/*virtual*/ void SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary);
		/*virtual*/ void SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary);
	public:
		CShorpMultiConstNode();
		/*virtual*/ ~CShorpMultiConstNode();
		/*virtual*/ Value GetValue();
		/*virtual*/ Key GetKey();
		/*virtual*/ CShorpMultiConstNode<Key, Value>^ DeepCopy();
		static CShorpMultiConstNode<Key, Value>^ operator ++(CShorpMultiConstNode<Key, Value>^ thisObj);
		static CShorpMultiConstNode<Key, Value>^ operator --(CShorpMultiConstNode<Key, Value>^ thisObj);
		///*virtual*/ CShorpMultiConstNode<Key, Value>^ operator++();
		///*virtual*/ CShorpMultiConstNode<Key, Value>^ operator++(int);
		static bool operator==(const CShorpMultiConstNode<Key, Value>^ thisObj, const CShorpMultiConstNode<Key, Value>^ other);
		static bool operator!=(const CShorpMultiConstNode<Key, Value>^ thisObj, const CShorpMultiConstNode<Key, Value>^ other);
		static CShorpMultiConstNode<Key, Value>^ operator%(CShorpMultiConstNode<Key, Value>^ thisObj, CShorpMultiConstNode<Key, Value>^ other);
	};

	generic<typename Key, typename Value>
	public ref class CShorpReverseNode
	{
	private:
		Utilities::ReverseNodeUnion* reverseNodeUnion;
		System::Collections::Generic::Dictionary<System::Int64, Key>^ gIntKeyClassDictionary;
		System::Collections::Generic::Dictionary<System::Int64, Value>^ gValueClassDictionary;
		int nKeyValueType = 0;
		int isInitialized = 0;
		/*virtual*/ void Next();
		/*virtual*/ void Previous();
	internal:
		/*virtual*/ Utilities::ReverseNodeUnion* GetNode()
		{
			if (Object::ReferenceEquals(this, nullptr)) return nullptr;
			isInitialized = 1;
			return reverseNodeUnion;
		}
		/*virtual*/ int GetKVType()
		{
			return this->nKeyValueType;
		}
		/*virtual*/ int GetInit()
		{
			return this->isInitialized;
		}
		/*virtual*/ void SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary);
		/*virtual*/ void SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary);
	public:
		CShorpReverseNode();
		/*virtual*/ ~CShorpReverseNode();
		/*virtual*/ Value GetValue();
		/*virtual*/ Key GetKey();
		/*virtual*/ void SetValue(Value value);
		/*virtual*/ CShorpReverseNode<Key, Value>^ DeepCopy();
		static CShorpReverseNode<Key, Value>^ operator ++(CShorpReverseNode<Key, Value>^ thisObj);
		static CShorpReverseNode<Key, Value>^ operator --(CShorpReverseNode<Key, Value>^ thisObj);
		///*virtual*/ CShorpReverseNode<Key, Value>^ operator++();
		///*virtual*/ CShorpReverseNode<Key, Value>^ operator++(int);
		static bool operator==(const CShorpReverseNode<Key, Value>^ thisObj, const CShorpReverseNode<Key, Value>^ other);
		static bool operator!=(const CShorpReverseNode<Key, Value>^ thisObj, const CShorpReverseNode<Key, Value>^ other);
		static CShorpReverseNode<Key, Value>^ operator%(CShorpReverseNode<Key, Value>^ thisObj, CShorpReverseNode<Key, Value>^ other);
	};

	generic <typename Key, typename Value>
	public ref class CShorpCReverseNode
	{
	private :
		Utilities::CReverseNodeUnion* creverseNodeUnion;
		System::Collections::Generic::Dictionary<System::Int64, Key>^ gIntKeyClassDictionary;
		System::Collections::Generic::Dictionary<System::Int64, Value>^ gValueClassDictionary;
		int nKeyValueType = 0;
		int isInitialized = 0;
		/*virtual*/ void Next();
		/*virtual*/ void Previous();
	internal:
		/*virtual*/ Utilities::CReverseNodeUnion* GetNode()
		{
			if (Object::ReferenceEquals(this, nullptr)) return nullptr;
			isInitialized = 1;
			return creverseNodeUnion;
		}
		/*virtual*/ int GetKVType()
		{
			return this->nKeyValueType;
		}
		/*virtual*/ int GetInit()
		{
			return this->isInitialized;
		}
		/*virtual*/ void SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary);
		/*virtual*/ void SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary);
	public:
		CShorpCReverseNode();
		/*virtual*/ ~CShorpCReverseNode();
		/*virtual*/ Value GetValue();
		/*virtual*/ Key GetKey();
		/*virtual*/ CShorpCReverseNode<Key, Value>^ DeepCopy();
		static CShorpCReverseNode<Key, Value>^ operator ++(CShorpCReverseNode<Key, Value>^ thisObj);
		static CShorpCReverseNode<Key, Value>^ operator --(CShorpCReverseNode<Key, Value>^ thisObj);
		///*virtual*/ CShorpCReverseNode<Key, Value>^ operator++();
		///*virtual*/ CShorpCReverseNode<Key, Value>^ operator++(int);
		static bool operator==(const CShorpCReverseNode<Key, Value>^ thisObj, const CShorpCReverseNode<Key, Value>^ other);
		static bool operator!=(const CShorpCReverseNode<Key, Value>^ thisObj, const CShorpCReverseNode<Key, Value>^ other);
		static CShorpCReverseNode<Key, Value>^ operator%(CShorpCReverseNode<Key, Value>^ thisObj, CShorpCReverseNode<Key, Value>^ other);
	};

	generic <typename Key, typename Value>
	public ref class CSharpMultiMap : public System::Collections::IEnumerable
	{
	private :
		Utilities::MultiMapUnion* multimapUnion;
		CShorpMultiNode<Key, Value>^ multiNode;
		CShorpMultiNode<Key, Value>^ KeyEndNode;
		CShorpReverseNode<Key, Value>^ RIterNode;
		System::Collections::Generic::Dictionary<Key, System::Int64>^ gKeyClassDictionary = nullptr;
		System::Collections::Generic::Dictionary<System::Int64, Key>^ gIntKeyClassDictionary = nullptr;
		System::Collections::Generic::Dictionary<System::Int64, Value>^ gValueClassDictionary = nullptr;
		//static System::Int64 nDictionaryValueCount = 0;
		System::Int64 nDictionaryCount = 0;
		int nKeyValueType = 0;
	public :
		CSharpMultiMap();
		CSharpMultiMap(CSharpMultiMap<Key, Value>^ other);
		/*virtual*/ ~CSharpMultiMap();
		/*virtual*/ void clear();
		/*virtual*/ CShorpMultiNode<Key, Value>^ emplace(Key key, Value value);
		/*virtual*/ System::UInt64 size();
		/*virtual*/ System::UInt64 count(const Key key);
		/*virtual*/ System::UInt64 erase(const Key key);
		/*virtual*/ System::Boolean empty();
		/*virtual*/ CShorpMultiNode<Key, Value>^ find(const Key key);
		/*virtual*/ CShorpMultiNode<Key, Value>^ begin();
		/*virtual*/ CShorpMultiNode<Key, Value>^ end();
		/*virtual*/ CShorpMultiNode<Key, Value>^ endCopy();
		/*virtual*/ CShorpMultiNode<Key, Value>^ KeyEnd();
		/*virtual*/ CShorpMultiNode<Key, Value>^ KeyEndCopy();
		/*virtual*/ CShorpMultiNode<Key, Value>^ erase(CShorpMultiNode<Key, Value>^ _Where);
		/*virtual*/ CShorpMultiNode<Key, Value>^ erase(CShorpMultiNode<Key, Value>^ First, CShorpMultiNode<Key, Value>^ Last);
		/*virtual*/ CShorpMultiNode<Key, Value>^ erase(CShorpMultiConstNode<Key, Value>^ _Where);
		/*virtual*/ CShorpMultiNode<Key, Value>^ erase(CShorpMultiConstNode<Key, Value>^ First, CShorpMultiConstNode<Key, Value>^ Last);
		/*virtual*/ CShorpMultiNode<Key, Value>^ equal_range(const Key key);
		/*virtual*/ CShorpMultiNode<Key, Value>^ insert(Key key, Value value);
		/*virtual*/ CShorpMultiNode<Key, Value>^ insert(CShorpMultiNode<Key, Value>^ _Where, Key key, Value value);
		/*virtual*/ CShorpMultiNode<Key, Value>^ insert(CShorpMultiConstNode<Key, Value>^ _Where, Key key, Value value);
		/*virtual*/ CShorpMultiConstNode<Key, Value>^ cbegin();
		/*virtual*/ CShorpMultiConstNode<Key, Value>^ cend();
		/*virtual*/ CShorpReverseNode<Key, Value>^ rbegin();
		/*virtual*/ CShorpReverseNode<Key, Value>^ rend();
		/*virtual*/ CShorpReverseNode<Key, Value>^ rendCopy();
		/*virtual*/ CShorpCReverseNode<Key, Value>^ crbegin();
		/*virtual*/ CShorpCReverseNode<Key, Value>^ crend();
		/*virtual*/ CShorpMultiNode<Key, Value>^ emplace_hint(CShorpMultiNode<Key, Value>^ _Where, Key key, Value value);
		/*virtual*/ CShorpMultiNode<Key, Value>^ emplace_hint(CShorpMultiConstNode<Key, Value>^ _Where, Key key, Value value);
		/*virtual*/ void Swap(CSharpMultiMap<Key, Value>^ OtherCSharpMultiMap);
		/*virtual*/ System::UInt64 max_size();
		/*virtual*/ System::Boolean contains(const Key key);
		/*virtual*/ CShorpMultiNode<Key, Value>^ upper_bound(const Key key);
		/*virtual*/ CShorpMultiNode<Key, Value>^ lower_bound(const Key key);
		///*virtual*/ Value operator[](System::Int32 index);

		virtual System::Collections::IEnumerator^ GetEnumerator() sealed = System::Collections::IEnumerable::GetEnumerator
		{
			return gcnew CSharpMultiMapEnumerator(this);
		}
	internal:
		System::Collections::Generic::Dictionary<System::Int64, Value>^ ValueClassDictionary();
		System::Collections::Generic::Dictionary<System::Int64, Key>^ KeyClassDictionary();

	private:
		ref class CSharpMultiMapEnumerator : public System::Collections::IEnumerator
		{
		private:
			CSharpMultiMap<Key, Value>^ multiMap;
			CShorpMultiNode<Key, Value>^ currentNode;
			System::Int32 nFirst;

		public:
			CSharpMultiMapEnumerator(CSharpMultiMap<Key, Value>^ map)
			{
				// 초기화
				multiMap = map;
				currentNode = multiMap->begin();
				nFirst = 1;
			}

			virtual bool MoveNext()
			{
				if (nFirst == 1)
				{
					nFirst = 0;
					return currentNode != multiMap->end();
				}

				if (currentNode == multiMap->end())
					return false;

				currentNode = ++currentNode; // 다음 노드로 이동
				return currentNode != multiMap->end();
			}

			virtual void Reset()// 리셋
			{
				nFirst = 1;
				currentNode = multiMap->begin();
			}

			property Object^ Current
			{
				virtual Object^ get() = System::Collections::IEnumerator::Current::get
				{
					if (currentNode == nullptr || currentNode == multiMap->end()) return nullptr;
					return currentNode;
				}
			}
		};
	};
}
