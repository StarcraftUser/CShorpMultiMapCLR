#pragma once
#include <map>
/////////////////////////////////////////////////////////////////
//iterator Class
/////////////////////////////////////////////////////////////////



template<typename Key, typename Value>
class MultiMap;

/////////////////////////////////////////////////////////////////
//iterator Wapper Node
/////////////////////////////////////////////////////////////////

template<typename Key, typename Value>
class MultiNode
{
	friend class MultiMap<Key, Value>;
protected:
	template<typename Key, typename Value>
	class iterNode
	{
	public:
		typename std::multimap<Key, Value>::iterator iter;
	};

	iterNode<Key, Value> Node;
	virtual void Next()
	{
		Node.iter++;
	}
	virtual void Previous()
	{
		Node.iter--;
	}
	virtual [[nodiscard]] iterNode<Key, Value>& GetNode()
	{
			return Node;
	}
public:
	virtual [[nodiscard]] Value& GetValue()
	{
		return (Node.iter->second);
	}
	virtual [[nodiscard]] Key GetKey()
	{
		return (Node.iter->first);
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& operator++()
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& operator++(int)
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& operator--()
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& operator--(int)
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& operator=(const MultiNode<Key, Value>& other)
	{
		//if (*this == other) return *this;
		this->Node.iter = other.Node.iter;
		return *this;
	}
	virtual bool operator==(const MultiNode<Key, Value>& other) const
	{
		return (Node.iter == other.Node.iter);
	}
	virtual bool operator!=(const MultiNode<Key, Value>& other) const
	{
		{
			return (Node.iter != other.Node.iter);
		}
	}
};


template<typename Key, typename Value>
class MultiConstNode
{
	friend class MultiMap<Key, Value>;
protected:
	template<typename Key, typename Value>
	class iterCNode
	{
	public:
		typename std::multimap<Key, Value>::const_iterator citer;
	};

	iterCNode<Key, Value> cNode;
	virtual void Next()
	{
		cNode.citer++;
	}
	virtual void Previous()
	{
		cNode.citer--;
	}
	virtual [[nodiscard]] iterCNode<Key, Value>& GetNode()
	{
		return cNode;
	}
public:
	virtual [[nodiscard]] const Value& GetValue()
	{
		return (cNode.citer->second);
	}
	virtual [[nodiscard]] const Key& GetKey()
	{
		return (cNode.citer->first);
	}
	virtual [[nodiscard]] MultiConstNode<Key, Value>& operator++()
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] MultiConstNode<Key, Value>& operator++(int)
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] MultiConstNode<Key, Value>& operator--()
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] MultiConstNode<Key, Value>& operator--(int)
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] MultiConstNode<Key, Value>& operator=(const MultiConstNode<Key, Value>& other)
	{
		//if (*this == other) return *this;
		this->cNode.citer = other.cNode.citer;
		return *this;
	}
	virtual bool operator==(const MultiConstNode<Key, Value>& other) const
	{
		return (this->cNode.citer == other.cNode.citer);
	}
	virtual bool operator!=(const MultiConstNode<Key, Value>& other) const
	{
		return (cNode.citer != other.cNode.citer);
	}
};

template<typename Key, typename Value>
class ReverseNode
{
	friend class MultiMap<Key, Value>;
protected:
	template<typename Key, typename Value>
	class ReverseIterNode
	{
	public:
		typename std::multimap<Key, Value>::reverse_iterator riter;
	};

	ReverseIterNode<Key, Value> RNode;
	virtual void Next()
	{
		RNode.riter++;
	}
	virtual void Previous()
	{
		RNode.riter--;
	}
	virtual [[nodiscard]] ReverseIterNode<Key, Value>& GetNode()
	{
		return RNode;
	}
public:
	virtual [[nodiscard]] Value& GetValue()
	{
		return RNode.riter->second;
	}
	virtual [[nodiscard]] Key GetKey()
	{
		return RNode.riter->first;
	}
	virtual [[nodiscard]] ReverseNode<Key, Value>& operator++()
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] ReverseNode<Key, Value>& operator++(int)
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] ReverseNode<Key, Value>& operator--()
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] ReverseNode<Key, Value>& operator--(int)
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] ReverseNode<Key, Value>& operator=(const ReverseNode<Key, Value>& other)
	{
		//if (*this == other) return *this;
		this->RNode.riter = other.RNode.riter;
		return *this;
	}
	virtual bool operator==(const ReverseNode<Key, Value>& other) const
	{
		return (this->RNode.riter == other.RNode.riter);
	}
	virtual bool operator!=(const ReverseNode<Key, Value>& other) const
	{
		return (this->RNode.riter != other.RNode.riter);
	}
};

template<typename Key, typename Value>
class CReverseNode
{
	friend class MultiMap<Key, Value>;
protected:
	template<typename Key, typename Value>
	class CReverseIterNode
	{
	public:
		typename std::multimap<Key, Value>::const_reverse_iterator criter;
	};

	CReverseIterNode<Key, Value> CRNode;
	virtual void Next()
	{
		CRNode.criter++;
	}
	virtual void Previous()
	{
		CRNode.criter--;
	}
	virtual [[nodiscard]] CReverseIterNode<Key, Value>& GetNode()
	{
		return CRNode;
	}
public:
	virtual [[nodiscard]] const Value& GetValue()
	{
		return CRNode.criter->second;
	}
	virtual [[nodiscard]] const Key& GetKey()
	{
		return CRNode.criter->first;
	}
	virtual [[nodiscard]] CReverseNode<Key, Value>& operator++()
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] CReverseNode<Key, Value>& operator++(int)
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] CReverseNode<Key, Value>& operator--()
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] CReverseNode<Key, Value>& operator--(int)
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] CReverseNode<Key, Value>& operator=(const CReverseNode<Key, Value>& other)
	{
		//if (*this == other) return *this;
		this->CRNode.criter = other.CRNode.criter;
		return *this;
	}
	virtual bool operator==(const CReverseNode<Key, Value>& other) const
	{
		return (this->CRNode.criter == other.CRNode.criter);
	}
	virtual bool operator!=(const CReverseNode<Key, Value>& other) const
	{
		return (this->CRNode.criter != other.CRNode.criter);
	}
};


template<typename Key, typename Value>
class MultiMap
{
protected:
	template<typename Key, typename Value>
	class MultiMapObject
	{
	public:
		std::multimap<Key, Value> Multimap;
	public:
		virtual ~MultiMapObject()
		{
			Multimap.clear();
		}
	};
	MultiMapObject<Key, Value> multimapObject;
	MultiNode<Key, Value> multiNode;
	MultiNode<Key, Value> KeyEndNode;
	ReverseNode<Key, Value> RIterNode;
	//MultiConstNode<Key, Value> multiConstNode;
public:
	virtual void clear()
	{
		multimapObject.Multimap.clear();
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace(Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace(std::pair<Key, Value>(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace(Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace(std::pair<Key, Value>(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace(Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace(std::pair<Key, Value>(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace(Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace(std::pair<Key, Value>(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] size_t size() const noexcept
	{
		return multimapObject.Multimap.size();
	}
	virtual [[nodiscard]] size_t count(const Key& _Keyval) const
	{
		return multimapObject.Multimap.count(_Keyval);
	}
	virtual size_t erase(const Key& Keyval) noexcept
	{
		return multimapObject.Multimap.erase(Keyval);
	}
	virtual [[nodiscard]] bool empty() const noexcept
	{
		return multimapObject.Multimap.empty();
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& find(const Key& key)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.find(key);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& begin()
	{
		multiNode.GetNode().iter = multimapObject.Multimap.begin();
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& end()
	{
		multiNode.GetNode().iter = multimapObject.Multimap.end();
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& KeyEnd()
	{
		return KeyEndNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& erase(MultiNode<Key, Value>& _Where) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(_Where.GetNode().iter);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& erase(MultiNode<Key, Value>& First, MultiNode<Key, Value>& Last) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(First.GetNode().iter, Last.GetNode().iter);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& erase(MultiConstNode<Key, Value>& _Where) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(_Where.GetNode().citer);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& erase(MultiConstNode<Key, Value>&& _Where) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(_Where.GetNode().citer);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& erase(MultiConstNode<Key, Value>& First, MultiConstNode<Key, Value>& Last) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(First.GetNode().citer, Last.GetNode().citer);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& erase(MultiConstNode<Key, Value>&& First, MultiConstNode<Key, Value>&& Last) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(First.GetNode().citer, Last.GetNode().citer);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& equal_range(const Key& _Keyval)
	{
		auto temp = multimapObject.Multimap.equal_range(_Keyval);
		multiNode.GetNode().iter = temp.first;
		KeyEndNode.GetNode().iter = temp.second;
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiNode<Key, Value>& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiNode<Key, Value>& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiNode<Key, Value>& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiNode<Key, Value>& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiNode<Key, Value>&& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiNode<Key, Value>&& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiNode<Key, Value>&& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiNode<Key, Value>&& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiConstNode<Key, Value>& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiConstNode<Key, Value>& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiConstNode<Key, Value>& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiConstNode<Key, Value>& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiConstNode<Key, Value>&& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiConstNode<Key, Value>&& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiConstNode<Key, Value>&& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& insert(MultiConstNode<Key, Value>&& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] MultiConstNode<Key, Value> cbegin()
	{
		MultiConstNode<Key, Value> tempNode;
		tempNode.GetNode().citer = multimapObject.Multimap.cbegin();
		//multiConstNode.GetNode().citer = multimapObject.Multimap.cbegin();
		return tempNode;
	}
	virtual [[nodiscard]] MultiConstNode<Key, Value> cend()
	{
		MultiConstNode<Key, Value> tempNode;
		tempNode.GetNode().citer = multimapObject.Multimap.cend();
		//multiConstNode.GetNode().citer = multimapObject.Multimap.cbegin();
		return tempNode;
	}
	virtual [[nodiscard]] ReverseNode<Key, Value>& rbegin()
	{
		RIterNode.GetNode().riter = multimapObject.Multimap.rbegin();
		return RIterNode;
	}
	virtual [[nodiscard]] ReverseNode<Key, Value>& rend()
	{
		RIterNode.GetNode().riter = multimapObject.Multimap.rend();
		return RIterNode;
	}
	virtual [[nodiscard]] CReverseNode<Key, Value> crbegin()
	{
		CReverseNode<Key, Value> tempCRNode;
		tempCRNode.GetNode().criter = multimapObject.Multimap.crbegin();
		return tempCRNode;
	}
	virtual [[nodiscard]] CReverseNode<Key, Value> crend()
	{
		CReverseNode<Key, Value> tempCRNode;
		tempCRNode.GetNode().criter = multimapObject.Multimap.crend();
		return tempCRNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiNode<Key, Value>& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiNode<Key, Value>& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiNode<Key, Value>& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiNode<Key, Value>& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiNode<Key, Value>&& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiNode<Key, Value>&& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiNode<Key, Value>&& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiNode<Key, Value>&& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiConstNode<Key, Value>& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiConstNode<Key, Value>& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiConstNode<Key, Value>& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiConstNode<Key, Value>& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiConstNode<Key, Value>&& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiConstNode<Key, Value>&& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiConstNode<Key, Value>&& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] MultiNode<Key, Value>& emplace_hint(MultiConstNode<Key, Value>&& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual void Swap(MultiMap<Key, Value>& OtherMultiMap)
	{
		multimapObject.Multimap.swap(OtherMultiMap.multimapObject.Multimap);
	}
	virtual [[nodiscard]] size_t max_size() const noexcept
	{
		return multimapObject.Multimap.max_size();
	}

	//virtual [[nodiscard]] Value& operator[](int index)
	//{
	//	return multimapObject.Multimap[index];
	//}
};
