#include "pch.h"

#define Bound_CASE(Upper, NUM, key_Type) \
	case NUM:\
		*(multiNode->GetNode()->CPPmultinode##NUM) = multimapUnion->CPPmultimap##NUM->Upper##_bound(key_Type);\
		break;

void MarshalString(String^ s, std::string & os);

void MarshalString(String^ s, std::wstring & os);

generic<typename Key, typename Value>
MultiMapWapper::CShorpMultiNode<Key, Value>^ MultiMapWapper::CSharpMultiMap<Key, Value>::upper_bound(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0:	default:
		return nullptr;
		Bound_CASE(upper, 1, KeyUchar)
		Bound_CASE(upper, 2, KeyUchar)
		Bound_CASE(upper, 3, KeyUchar)
		Bound_CASE(upper, 4, KeyUchar)
		Bound_CASE(upper, 5, KeyUchar)
		Bound_CASE(upper, 6, KeyUchar)
		Bound_CASE(upper, 7, KeyUchar)
		Bound_CASE(upper, 8, KeyUchar)
		Bound_CASE(upper, 9, KeyUchar)
		Bound_CASE(upper, 10, KeyUchar)
		Bound_CASE(upper, 11, KeyUchar)
		Bound_CASE(upper, 12, KeyUchar)
		Bound_CASE(upper, 13, KeyUchar)
		Bound_CASE(upper, 14, KeyUchar)
		Bound_CASE(upper, 15, KeyChar)
		Bound_CASE(upper, 16, KeyChar)
		Bound_CASE(upper, 17, KeyChar)
		Bound_CASE(upper, 18, KeyChar)
		Bound_CASE(upper, 20, KeyChar)
		Bound_CASE(upper, 21, KeyChar)
		Bound_CASE(upper, 22, KeyChar)
		Bound_CASE(upper, 23, KeyChar)
		Bound_CASE(upper, 24, KeyChar)
		Bound_CASE(upper, 25, KeyChar)
		Bound_CASE(upper, 26, KeyChar)
		Bound_CASE(upper, 27, KeyChar)
		Bound_CASE(upper, 28, KeyChar)
		Bound_CASE(upper, 29, KeyShort)
		Bound_CASE(upper, 30, KeyShort)
		Bound_CASE(upper, 31, KeyShort)
		Bound_CASE(upper, 32, KeyShort)
		Bound_CASE(upper, 33, KeyShort)
		Bound_CASE(upper, 34, KeyShort)
		Bound_CASE(upper, 35, KeyShort)
		Bound_CASE(upper, 36, KeyShort)
		Bound_CASE(upper, 37, KeyShort)
		Bound_CASE(upper, 38, KeyShort)
		Bound_CASE(upper, 39, KeyShort)
		Bound_CASE(upper, 40, KeyShort)
		Bound_CASE(upper, 41, KeyShort)
		Bound_CASE(upper, 42, KeyShort)
		Bound_CASE(upper, 43, KeyUshort)
		Bound_CASE(upper, 44, KeyUshort)
		Bound_CASE(upper, 45, KeyUshort)
		Bound_CASE(upper, 46, KeyUshort)
		Bound_CASE(upper, 47, KeyUshort)
		Bound_CASE(upper, 48, KeyUshort)
		Bound_CASE(upper, 49, KeyUshort)
		Bound_CASE(upper, 50, KeyUshort)
		Bound_CASE(upper, 51, KeyUshort)
		Bound_CASE(upper, 52, KeyUshort)
		Bound_CASE(upper, 53, KeyUshort)
		Bound_CASE(upper, 54, KeyUshort)
		Bound_CASE(upper, 55, KeyUshort)
		Bound_CASE(upper, 56, KeyUshort)
		Bound_CASE(upper, 57, KeyInt)
		Bound_CASE(upper, 58, KeyInt)
		Bound_CASE(upper, 59, KeyInt)
		Bound_CASE(upper, 60, KeyInt)
		Bound_CASE(upper, 61, KeyInt)
		Bound_CASE(upper, 62, KeyInt)
		Bound_CASE(upper, 63, KeyInt)
		Bound_CASE(upper, 64, KeyInt)
		Bound_CASE(upper, 65, KeyInt)
		Bound_CASE(upper, 66, KeyInt)
		Bound_CASE(upper, 67, KeyInt)
		Bound_CASE(upper, 68, KeyInt)
		Bound_CASE(upper, 69, KeyInt)
		Bound_CASE(upper, 70, KeyInt)
		Bound_CASE(upper, 71, KeyUint)
		Bound_CASE(upper, 72, KeyUint)
		Bound_CASE(upper, 73, KeyUint)
		Bound_CASE(upper, 74, KeyUint)
		Bound_CASE(upper, 75, KeyUint)
		Bound_CASE(upper, 76, KeyUint)
		Bound_CASE(upper, 77, KeyUint)
		Bound_CASE(upper, 78, KeyUint)
		Bound_CASE(upper, 79, KeyUint)
		Bound_CASE(upper, 80, KeyUint)
		Bound_CASE(upper, 81, KeyUint)
		Bound_CASE(upper, 82, KeyUint)
		Bound_CASE(upper, 83, KeyUint)
		Bound_CASE(upper, 84, KeyUint)
		Bound_CASE(upper, 85, KeyLonglong)
		Bound_CASE(upper, 86, KeyLonglong)
		Bound_CASE(upper, 87, KeyLonglong)
		Bound_CASE(upper, 88, KeyLonglong)
		Bound_CASE(upper, 89, KeyLonglong)
		Bound_CASE(upper, 90, KeyLonglong)
		Bound_CASE(upper, 91, KeyLonglong)
		Bound_CASE(upper, 92, KeyLonglong)
		Bound_CASE(upper, 93, KeyLonglong)
		Bound_CASE(upper, 94, KeyLonglong)
		Bound_CASE(upper, 95, KeyLonglong)
		Bound_CASE(upper, 96, KeyLonglong)
		Bound_CASE(upper, 97, KeyLonglong)
		Bound_CASE(upper, 98, KeyLonglong)
		Bound_CASE(upper, 99, KeyUlonglong)
		Bound_CASE(upper, 100, KeyUlonglong)
		Bound_CASE(upper, 101, KeyUlonglong)
		Bound_CASE(upper, 102, KeyUlonglong)
		Bound_CASE(upper, 103, KeyUlonglong)
		Bound_CASE(upper, 104, KeyUlonglong)
		Bound_CASE(upper, 105, KeyUlonglong)
		Bound_CASE(upper, 106, KeyUlonglong)
		Bound_CASE(upper, 107, KeyUlonglong)
		Bound_CASE(upper, 108, KeyUlonglong)
		Bound_CASE(upper, 109, KeyUlonglong)
		Bound_CASE(upper, 110, KeyUlonglong)
		Bound_CASE(upper, 111, KeyUlonglong)
		Bound_CASE(upper, 112, KeyUlonglong)
		Bound_CASE(upper, 113, KeyFloat)
		Bound_CASE(upper, 114, KeyFloat)
		Bound_CASE(upper, 115, KeyFloat)
		Bound_CASE(upper, 116, KeyFloat)
		Bound_CASE(upper, 117, KeyFloat)
		Bound_CASE(upper, 118, KeyFloat)
		Bound_CASE(upper, 119, KeyFloat)
		Bound_CASE(upper, 120, KeyFloat)
		Bound_CASE(upper, 121, KeyFloat)
		Bound_CASE(upper, 122, KeyFloat)
		Bound_CASE(upper, 123, KeyFloat)
		Bound_CASE(upper, 124, KeyFloat)
		Bound_CASE(upper, 125, KeyFloat)
		Bound_CASE(upper, 126, KeyFloat)
		Bound_CASE(upper, 127, KeyDouble)
		Bound_CASE(upper, 128, KeyDouble)
		Bound_CASE(upper, 129, KeyDouble)
		Bound_CASE(upper, 130, KeyDouble)
		Bound_CASE(upper, 131, KeyDouble)
		Bound_CASE(upper, 132, KeyDouble)
		Bound_CASE(upper, 133, KeyDouble)
		Bound_CASE(upper, 134, KeyDouble)
		Bound_CASE(upper, 135, KeyDouble)
		Bound_CASE(upper, 136, KeyDouble)
		Bound_CASE(upper, 137, KeyDouble)
		Bound_CASE(upper, 138, KeyDouble)
		Bound_CASE(upper, 139, KeyDouble)
		Bound_CASE(upper, 140, KeyDouble)
		Bound_CASE(upper, 141, KeyWchar)
		Bound_CASE(upper, 142, KeyWchar)
		Bound_CASE(upper, 143, KeyWchar)
		Bound_CASE(upper, 144, KeyWchar)
		Bound_CASE(upper, 145, KeyWchar)
		Bound_CASE(upper, 146, KeyWchar)
		Bound_CASE(upper, 147, KeyWchar)
		Bound_CASE(upper, 148, KeyWchar)
		Bound_CASE(upper, 149, KeyWchar)
		Bound_CASE(upper, 150, KeyWchar)
		Bound_CASE(upper, 151, KeyWchar)
		Bound_CASE(upper, 152, KeyWchar)
		Bound_CASE(upper, 153, KeyWchar)
		Bound_CASE(upper, 154, KeyWchar)
		Bound_CASE(upper, 155, KeyBool)
		Bound_CASE(upper, 156, KeyBool)
		Bound_CASE(upper, 157, KeyBool)
		Bound_CASE(upper, 158, KeyBool)
		Bound_CASE(upper, 159, KeyBool)
		Bound_CASE(upper, 160, KeyBool)
		Bound_CASE(upper, 161, KeyBool)
		Bound_CASE(upper, 162, KeyBool)
		Bound_CASE(upper, 163, KeyBool)
		Bound_CASE(upper, 164, KeyBool)
		Bound_CASE(upper, 165, KeyBool)
		Bound_CASE(upper, 166, KeyBool)
		Bound_CASE(upper, 167, KeyBool)
		Bound_CASE(upper, 168, KeyBool)
		Bound_CASE(upper, 169, KeyWstring)
		Bound_CASE(upper, 170, KeyWstring)
		Bound_CASE(upper, 171, KeyWstring)
		Bound_CASE(upper, 172, KeyWstring)
		Bound_CASE(upper, 173, KeyWstring)
		Bound_CASE(upper, 174, KeyWstring)
		Bound_CASE(upper, 175, KeyWstring)
		Bound_CASE(upper, 176, KeyWstring)
		Bound_CASE(upper, 177, KeyWstring)
		Bound_CASE(upper, 178, KeyWstring)
		Bound_CASE(upper, 179, KeyWstring)
		Bound_CASE(upper, 180, KeyWstring)
		Bound_CASE(upper, 181, KeyWstring)
		Bound_CASE(upper, 182, KeyWstring)
		Bound_CASE(upper, 183, Key__Int)
		Bound_CASE(upper, 184, Key__Int)
		Bound_CASE(upper, 185, Key__Int)
		Bound_CASE(upper, 186, Key__Int)
		Bound_CASE(upper, 187, Key__Int)
		Bound_CASE(upper, 188, Key__Int)
		Bound_CASE(upper, 189, Key__Int)
		Bound_CASE(upper, 190, Key__Int)
		Bound_CASE(upper, 191, Key__Int)
		Bound_CASE(upper, 192, Key__Int)
		Bound_CASE(upper, 193, Key__Int)
		Bound_CASE(upper, 194, Key__Int)
		Bound_CASE(upper, 195, Key__Int)
		Bound_CASE(upper, 196, Key__Int)
	}

	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
MultiMapWapper::CShorpMultiNode<Key, Value>^ MultiMapWapper::CSharpMultiMap<Key, Value>::lower_bound(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0:	default:
		return nullptr;
		Bound_CASE(lower, 1, KeyUchar)
		Bound_CASE(lower, 2, KeyUchar)
		Bound_CASE(lower, 3, KeyUchar)
		Bound_CASE(lower, 4, KeyUchar)
		Bound_CASE(lower, 5, KeyUchar)
		Bound_CASE(lower, 6, KeyUchar)
		Bound_CASE(lower, 7, KeyUchar)
		Bound_CASE(lower, 8, KeyUchar)
		Bound_CASE(lower, 9, KeyUchar)
		Bound_CASE(lower, 10, KeyUchar)
		Bound_CASE(lower, 11, KeyUchar)
		Bound_CASE(lower, 12, KeyUchar)
		Bound_CASE(lower, 13, KeyUchar)
		Bound_CASE(lower, 14, KeyUchar)
		Bound_CASE(lower, 15, KeyChar)
		Bound_CASE(lower, 16, KeyChar)
		Bound_CASE(lower, 17, KeyChar)
		Bound_CASE(lower, 18, KeyChar)
		Bound_CASE(lower, 20, KeyChar)
		Bound_CASE(lower, 21, KeyChar)
		Bound_CASE(lower, 22, KeyChar)
		Bound_CASE(lower, 23, KeyChar)
		Bound_CASE(lower, 24, KeyChar)
		Bound_CASE(lower, 25, KeyChar)
		Bound_CASE(lower, 26, KeyChar)
		Bound_CASE(lower, 27, KeyChar)
		Bound_CASE(lower, 28, KeyChar)
		Bound_CASE(lower, 29, KeyShort)
		Bound_CASE(lower, 30, KeyShort)
		Bound_CASE(lower, 31, KeyShort)
		Bound_CASE(lower, 32, KeyShort)
		Bound_CASE(lower, 33, KeyShort)
		Bound_CASE(lower, 34, KeyShort)
		Bound_CASE(lower, 35, KeyShort)
		Bound_CASE(lower, 36, KeyShort)
		Bound_CASE(lower, 37, KeyShort)
		Bound_CASE(lower, 38, KeyShort)
		Bound_CASE(lower, 39, KeyShort)
		Bound_CASE(lower, 40, KeyShort)
		Bound_CASE(lower, 41, KeyShort)
		Bound_CASE(lower, 42, KeyShort)
		Bound_CASE(lower, 43, KeyUshort)
		Bound_CASE(lower, 44, KeyUshort)
		Bound_CASE(lower, 45, KeyUshort)
		Bound_CASE(lower, 46, KeyUshort)
		Bound_CASE(lower, 47, KeyUshort)
		Bound_CASE(lower, 48, KeyUshort)
		Bound_CASE(lower, 49, KeyUshort)
		Bound_CASE(lower, 50, KeyUshort)
		Bound_CASE(lower, 51, KeyUshort)
		Bound_CASE(lower, 52, KeyUshort)
		Bound_CASE(lower, 53, KeyUshort)
		Bound_CASE(lower, 54, KeyUshort)
		Bound_CASE(lower, 55, KeyUshort)
		Bound_CASE(lower, 56, KeyUshort)
		Bound_CASE(lower, 57, KeyInt)
		Bound_CASE(lower, 58, KeyInt)
		Bound_CASE(lower, 59, KeyInt)
		Bound_CASE(lower, 60, KeyInt)
		Bound_CASE(lower, 61, KeyInt)
		Bound_CASE(lower, 62, KeyInt)
		Bound_CASE(lower, 63, KeyInt)
		Bound_CASE(lower, 64, KeyInt)
		Bound_CASE(lower, 65, KeyInt)
		Bound_CASE(lower, 66, KeyInt)
		Bound_CASE(lower, 67, KeyInt)
		Bound_CASE(lower, 68, KeyInt)
		Bound_CASE(lower, 69, KeyInt)
		Bound_CASE(lower, 70, KeyInt)
		Bound_CASE(lower, 71, KeyUint)
		Bound_CASE(lower, 72, KeyUint)
		Bound_CASE(lower, 73, KeyUint)
		Bound_CASE(lower, 74, KeyUint)
		Bound_CASE(lower, 75, KeyUint)
		Bound_CASE(lower, 76, KeyUint)
		Bound_CASE(lower, 77, KeyUint)
		Bound_CASE(lower, 78, KeyUint)
		Bound_CASE(lower, 79, KeyUint)
		Bound_CASE(lower, 80, KeyUint)
		Bound_CASE(lower, 81, KeyUint)
		Bound_CASE(lower, 82, KeyUint)
		Bound_CASE(lower, 83, KeyUint)
		Bound_CASE(lower, 84, KeyUint)
		Bound_CASE(lower, 85, KeyLonglong)
		Bound_CASE(lower, 86, KeyLonglong)
		Bound_CASE(lower, 87, KeyLonglong)
		Bound_CASE(lower, 88, KeyLonglong)
		Bound_CASE(lower, 89, KeyLonglong)
		Bound_CASE(lower, 90, KeyLonglong)
		Bound_CASE(lower, 91, KeyLonglong)
		Bound_CASE(lower, 92, KeyLonglong)
		Bound_CASE(lower, 93, KeyLonglong)
		Bound_CASE(lower, 94, KeyLonglong)
		Bound_CASE(lower, 95, KeyLonglong)
		Bound_CASE(lower, 96, KeyLonglong)
		Bound_CASE(lower, 97, KeyLonglong)
		Bound_CASE(lower, 98, KeyLonglong)
		Bound_CASE(lower, 99, KeyUlonglong)
		Bound_CASE(lower, 100, KeyUlonglong)
		Bound_CASE(lower, 101, KeyUlonglong)
		Bound_CASE(lower, 102, KeyUlonglong)
		Bound_CASE(lower, 103, KeyUlonglong)
		Bound_CASE(lower, 104, KeyUlonglong)
		Bound_CASE(lower, 105, KeyUlonglong)
		Bound_CASE(lower, 106, KeyUlonglong)
		Bound_CASE(lower, 107, KeyUlonglong)
		Bound_CASE(lower, 108, KeyUlonglong)
		Bound_CASE(lower, 109, KeyUlonglong)
		Bound_CASE(lower, 110, KeyUlonglong)
		Bound_CASE(lower, 111, KeyUlonglong)
		Bound_CASE(lower, 112, KeyUlonglong)
		Bound_CASE(lower, 113, KeyFloat)
		Bound_CASE(lower, 114, KeyFloat)
		Bound_CASE(lower, 115, KeyFloat)
		Bound_CASE(lower, 116, KeyFloat)
		Bound_CASE(lower, 117, KeyFloat)
		Bound_CASE(lower, 118, KeyFloat)
		Bound_CASE(lower, 119, KeyFloat)
		Bound_CASE(lower, 120, KeyFloat)
		Bound_CASE(lower, 121, KeyFloat)
		Bound_CASE(lower, 122, KeyFloat)
		Bound_CASE(lower, 123, KeyFloat)
		Bound_CASE(lower, 124, KeyFloat)
		Bound_CASE(lower, 125, KeyFloat)
		Bound_CASE(lower, 126, KeyFloat)
		Bound_CASE(lower, 127, KeyDouble)
		Bound_CASE(lower, 128, KeyDouble)
		Bound_CASE(lower, 129, KeyDouble)
		Bound_CASE(lower, 130, KeyDouble)
		Bound_CASE(lower, 131, KeyDouble)
		Bound_CASE(lower, 132, KeyDouble)
		Bound_CASE(lower, 133, KeyDouble)
		Bound_CASE(lower, 134, KeyDouble)
		Bound_CASE(lower, 135, KeyDouble)
		Bound_CASE(lower, 136, KeyDouble)
		Bound_CASE(lower, 137, KeyDouble)
		Bound_CASE(lower, 138, KeyDouble)
		Bound_CASE(lower, 139, KeyDouble)
		Bound_CASE(lower, 140, KeyDouble)
		Bound_CASE(lower, 141, KeyWchar)
		Bound_CASE(lower, 142, KeyWchar)
		Bound_CASE(lower, 143, KeyWchar)
		Bound_CASE(lower, 144, KeyWchar)
		Bound_CASE(lower, 145, KeyWchar)
		Bound_CASE(lower, 146, KeyWchar)
		Bound_CASE(lower, 147, KeyWchar)
		Bound_CASE(lower, 148, KeyWchar)
		Bound_CASE(lower, 149, KeyWchar)
		Bound_CASE(lower, 150, KeyWchar)
		Bound_CASE(lower, 151, KeyWchar)
		Bound_CASE(lower, 152, KeyWchar)
		Bound_CASE(lower, 153, KeyWchar)
		Bound_CASE(lower, 154, KeyWchar)
		Bound_CASE(lower, 155, KeyBool)
		Bound_CASE(lower, 156, KeyBool)
		Bound_CASE(lower, 157, KeyBool)
		Bound_CASE(lower, 158, KeyBool)
		Bound_CASE(lower, 159, KeyBool)
		Bound_CASE(lower, 160, KeyBool)
		Bound_CASE(lower, 161, KeyBool)
		Bound_CASE(lower, 162, KeyBool)
		Bound_CASE(lower, 163, KeyBool)
		Bound_CASE(lower, 164, KeyBool)
		Bound_CASE(lower, 165, KeyBool)
		Bound_CASE(lower, 166, KeyBool)
		Bound_CASE(lower, 167, KeyBool)
		Bound_CASE(lower, 168, KeyBool)
		Bound_CASE(lower, 169, KeyWstring)
		Bound_CASE(lower, 170, KeyWstring)
		Bound_CASE(lower, 171, KeyWstring)
		Bound_CASE(lower, 172, KeyWstring)
		Bound_CASE(lower, 173, KeyWstring)
		Bound_CASE(lower, 174, KeyWstring)
		Bound_CASE(lower, 175, KeyWstring)
		Bound_CASE(lower, 176, KeyWstring)
		Bound_CASE(lower, 177, KeyWstring)
		Bound_CASE(lower, 178, KeyWstring)
		Bound_CASE(lower, 179, KeyWstring)
		Bound_CASE(lower, 180, KeyWstring)
		Bound_CASE(lower, 181, KeyWstring)
		Bound_CASE(lower, 182, KeyWstring)
		Bound_CASE(lower, 183, Key__Int)
		Bound_CASE(lower, 184, Key__Int)
		Bound_CASE(lower, 185, Key__Int)
		Bound_CASE(lower, 186, Key__Int)
		Bound_CASE(lower, 187, Key__Int)
		Bound_CASE(lower, 188, Key__Int)
		Bound_CASE(lower, 189, Key__Int)
		Bound_CASE(lower, 190, Key__Int)
		Bound_CASE(lower, 191, Key__Int)
		Bound_CASE(lower, 192, Key__Int)
		Bound_CASE(lower, 193, Key__Int)
		Bound_CASE(lower, 194, Key__Int)
		Bound_CASE(lower, 195, Key__Int)
		Bound_CASE(lower, 196, Key__Int)
	}

	return multiNode->DeepCopy();
}
