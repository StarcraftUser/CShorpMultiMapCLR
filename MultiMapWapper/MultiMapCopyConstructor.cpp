#include "pch.h"


generic<typename Key, typename Value>
MultiMapWapper::CSharpMultiMap<Key, Value>::CSharpMultiMap(MultiMapWapper::CSharpMultiMap<Key, Value>^ other)
{
	if (Object::ReferenceEquals(other, nullptr)) return;

	nDictionaryCount = other->nDictionaryCount;

	multimapUnion = new Utilities::MultiMapUnion();
	multiNode = gcnew CShorpMultiNode<Key, Value>();
	KeyEndNode = gcnew CShorpMultiNode<Key, Value>();
	RIterNode = gcnew CShorpReverseNode<Key, Value>();
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;
	int KeyNum = 0;
	int ValueNum = 0;
	bool bgClassKeyDictionaryInit = false;
	bool bgClassValueDictionaryInit = false;
	if (keyType->Equals(System::Byte::typeid))
	{
		KeyNum = 0;
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		KeyNum = 14;
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		KeyNum = 14 * 2;
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		KeyNum = 14 * 3;
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		KeyNum = 14 * 4;
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		KeyNum = 14 * 5;
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		KeyNum = 14 * 6;
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		KeyNum = 14 * 7;
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		KeyNum = 14 * 8;
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		KeyNum = 14 * 9;
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		KeyNum = 14 * 10;
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		KeyNum = 14 * 11;
	}
	else if (keyType->Equals(System::String::typeid))
	{
		KeyNum = 14 * 12;
	}
	else if (keyType->IsClass)
	{
		KeyNum = 14 * 13;
		bgClassKeyDictionaryInit = true;
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		KeyNum = 14 * 13;
		bgClassKeyDictionaryInit = true;
	}
	else if (keyType->IsInterface)
	{
		KeyNum = 14 * 13;
		bgClassKeyDictionaryInit = true;
	}
	else
	{
		KeyNum = 200;
	}

	if (valueType->Equals(System::Byte::typeid))
	{
		ValueNum = 1;
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		ValueNum = 2;
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		ValueNum = 3;
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		ValueNum = 4;
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		ValueNum = 5;
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		ValueNum = 6;
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		ValueNum = 7;
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		ValueNum = 8;
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		ValueNum = 9;
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		ValueNum = 10;
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		ValueNum = 11;
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		ValueNum = 12;
	}
	else if (valueType->Equals(System::String::typeid))
	{
		ValueNum = 13;
	}
	else if (valueType->IsClass)
	{
		ValueNum = 14;
		bgClassValueDictionaryInit = true;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		ValueNum = 14;
		bgClassValueDictionaryInit = true;
	}
	else if (valueType->IsInterface)
	{
		ValueNum = 14;
		bgClassValueDictionaryInit = true;
	}
	else
	{
		ValueNum = 200;
	}

	nKeyValueType = KeyNum + ValueNum;


	switch (nKeyValueType)
	{
	case 0: default:
		multimapUnion->ptrToDelete = nullptr;
		break;
	case 1:
		multimapUnion->CPPmultimap1 = new MultiMap<unsigned char, unsigned char>(*other->multimapUnion->CPPmultimap1);
		break;
	case 2:
		multimapUnion->CPPmultimap2 = new MultiMap<unsigned char, char>(*other->multimapUnion->CPPmultimap2);
		break;
	case 3:
		multimapUnion->CPPmultimap3 = new MultiMap<unsigned char, short>(*other->multimapUnion->CPPmultimap3);
		break;
	case 4:
		multimapUnion->CPPmultimap4 = new MultiMap<unsigned char, unsigned short>(*other->multimapUnion->CPPmultimap4);
		break;
	case 5:
		multimapUnion->CPPmultimap5 = new MultiMap<unsigned char, int>(*other->multimapUnion->CPPmultimap5);
		break;
	case 6:
		multimapUnion->CPPmultimap6 = new MultiMap<unsigned char, unsigned int>(*other->multimapUnion->CPPmultimap6);
		break;
	case 7:
		multimapUnion->CPPmultimap7 = new MultiMap<unsigned char, long long>(*other->multimapUnion->CPPmultimap7);
		break;
	case 8:
		multimapUnion->CPPmultimap8 = new MultiMap<unsigned char, unsigned long long>(*other->multimapUnion->CPPmultimap8);
		break;
	case 9:
		multimapUnion->CPPmultimap9 = new MultiMap<unsigned char, float>(*other->multimapUnion->CPPmultimap9);
		break;
	case 10:
		multimapUnion->CPPmultimap10 = new MultiMap<unsigned char, double>(*other->multimapUnion->CPPmultimap10);
		break;
	case 11:
		multimapUnion->CPPmultimap11 = new MultiMap<unsigned char, wchar_t>(*other->multimapUnion->CPPmultimap11);
		break;
	case 12:
		multimapUnion->CPPmultimap12 = new MultiMap<unsigned char, bool>(*other->multimapUnion->CPPmultimap12);
		break;
	case 13:
		multimapUnion->CPPmultimap13 = new MultiMap<unsigned char, std::wstring>(*other->multimapUnion->CPPmultimap13);
		break;
	case 14:
		multimapUnion->CPPmultimap14 = new MultiMap<unsigned char, __int64>(*other->multimapUnion->CPPmultimap14);
		break;
	case 15:
		multimapUnion->CPPmultimap15 = new MultiMap<char, unsigned char>(*other->multimapUnion->CPPmultimap15);
		break;
	case 16:
		multimapUnion->CPPmultimap16 = new MultiMap<char, char>(*other->multimapUnion->CPPmultimap16);
		break;
	case 17:
		multimapUnion->CPPmultimap17 = new MultiMap<char, short>(*other->multimapUnion->CPPmultimap17);
		break;
	case 18:
		multimapUnion->CPPmultimap18 = new MultiMap<char, unsigned short>(*other->multimapUnion->CPPmultimap18);
		break;
	case 19:
		multimapUnion->CPPmultimap19 = new MultiMap<char, int>(*other->multimapUnion->CPPmultimap19);
		break;
	case 20:
		multimapUnion->CPPmultimap20 = new MultiMap<char, unsigned int>(*other->multimapUnion->CPPmultimap20);
		break;
	case 21:
		multimapUnion->CPPmultimap21 = new MultiMap<char, long long>(*other->multimapUnion->CPPmultimap21);
		break;
	case 22:
		multimapUnion->CPPmultimap22 = new MultiMap<char, unsigned long long>(*other->multimapUnion->CPPmultimap22);
		break;
	case 23:
		multimapUnion->CPPmultimap23 = new MultiMap<char, float>(*other->multimapUnion->CPPmultimap23);
		break;
	case 24:
		multimapUnion->CPPmultimap24 = new MultiMap<char, double>(*other->multimapUnion->CPPmultimap24);
		break;
	case 25:
		multimapUnion->CPPmultimap25 = new MultiMap<char, wchar_t>(*other->multimapUnion->CPPmultimap25);
		break;
	case 26:
		multimapUnion->CPPmultimap26 = new MultiMap<char, bool>(*other->multimapUnion->CPPmultimap26);
		break;
	case 27:
		multimapUnion->CPPmultimap27 = new MultiMap<char, std::wstring>(*other->multimapUnion->CPPmultimap27);
		break;
	case 28:
		multimapUnion->CPPmultimap28 = new MultiMap<char, __int64>(*other->multimapUnion->CPPmultimap28);
		break;
	case 29:
		multimapUnion->CPPmultimap29 = new MultiMap<short, unsigned char>(*other->multimapUnion->CPPmultimap29);
		break;
	case 30:
		multimapUnion->CPPmultimap30 = new MultiMap<short, char>(*other->multimapUnion->CPPmultimap30);
		break;
	case 31:
		multimapUnion->CPPmultimap31 = new MultiMap<short, short>(*other->multimapUnion->CPPmultimap31);
		break;
	case 32:
		multimapUnion->CPPmultimap32 = new MultiMap<short, unsigned short>(*other->multimapUnion->CPPmultimap32);
		break;
	case 33:
		multimapUnion->CPPmultimap33 = new MultiMap<short, int>(*other->multimapUnion->CPPmultimap33);
		break;
	case 34:
		multimapUnion->CPPmultimap34 = new MultiMap<short, unsigned int>(*other->multimapUnion->CPPmultimap34);
		break;
	case 35:
		multimapUnion->CPPmultimap35 = new MultiMap<short, long long>(*other->multimapUnion->CPPmultimap35);
		break;
	case 36:
		multimapUnion->CPPmultimap36 = new MultiMap<short, unsigned long long>(*other->multimapUnion->CPPmultimap36);
		break;
	case 37:
		multimapUnion->CPPmultimap37 = new MultiMap<short, float>(*other->multimapUnion->CPPmultimap37);
		break;
	case 38:
		multimapUnion->CPPmultimap38 = new MultiMap<short, double>(*other->multimapUnion->CPPmultimap38);
		break;
	case 39:
		multimapUnion->CPPmultimap39 = new MultiMap<short, wchar_t>(*other->multimapUnion->CPPmultimap39);
		break;
	case 40:
		multimapUnion->CPPmultimap40 = new MultiMap<short, bool>(*other->multimapUnion->CPPmultimap40);
		break;
	case 41:
		multimapUnion->CPPmultimap41 = new MultiMap<short, std::wstring>(*other->multimapUnion->CPPmultimap41);
		break;
	case 42:
		multimapUnion->CPPmultimap42 = new MultiMap<short, __int64>(*other->multimapUnion->CPPmultimap42);
		break;
	case 43:
		multimapUnion->CPPmultimap43 = new MultiMap<unsigned short, unsigned char>(*other->multimapUnion->CPPmultimap43);
		break;
	case 44:
		multimapUnion->CPPmultimap44 = new MultiMap<unsigned short, char>(*other->multimapUnion->CPPmultimap44);
		break;
	case 45:
		multimapUnion->CPPmultimap45 = new MultiMap<unsigned short, short>(*other->multimapUnion->CPPmultimap45);
		break;
	case 46:
		multimapUnion->CPPmultimap46 = new MultiMap<unsigned short, unsigned short>(*other->multimapUnion->CPPmultimap46);
		break;
	case 47:
		multimapUnion->CPPmultimap47 = new MultiMap<unsigned short, int>(*other->multimapUnion->CPPmultimap47);
		break;
	case 48:
		multimapUnion->CPPmultimap48 = new MultiMap<unsigned short, unsigned int>(*other->multimapUnion->CPPmultimap48);
		break;
	case 49:
		multimapUnion->CPPmultimap49 = new MultiMap<unsigned short, long long>(*other->multimapUnion->CPPmultimap49);
		break;
	case 50:
		multimapUnion->CPPmultimap50 = new MultiMap<unsigned short, unsigned long long>(*other->multimapUnion->CPPmultimap50);
		break;
	case 51:
		multimapUnion->CPPmultimap51 = new MultiMap<unsigned short, float>(*other->multimapUnion->CPPmultimap51);
		break;
	case 52:
		multimapUnion->CPPmultimap52 = new MultiMap<unsigned short, double>(*other->multimapUnion->CPPmultimap52);
		break;
	case 53:
		multimapUnion->CPPmultimap53 = new MultiMap<unsigned short, wchar_t>(*other->multimapUnion->CPPmultimap53);
		break;
	case 54:
		multimapUnion->CPPmultimap54 = new MultiMap<unsigned short, bool>(*other->multimapUnion->CPPmultimap54);
		break;
	case 55:
		multimapUnion->CPPmultimap55 = new MultiMap<unsigned short, std::wstring>(*other->multimapUnion->CPPmultimap55);
		break;
	case 56:
		multimapUnion->CPPmultimap56 = new MultiMap<unsigned short, __int64>(*other->multimapUnion->CPPmultimap56);
		break;
	case 57:
		multimapUnion->CPPmultimap57 = new MultiMap<int, unsigned char>(*other->multimapUnion->CPPmultimap57);
		break;
	case 58:
		multimapUnion->CPPmultimap58 = new MultiMap<int, char>(*other->multimapUnion->CPPmultimap58);
		break;
	case 59:
		multimapUnion->CPPmultimap59 = new MultiMap<int, short>(*other->multimapUnion->CPPmultimap59);
		break;
	case 60:
		multimapUnion->CPPmultimap60 = new MultiMap<int, unsigned short>(*other->multimapUnion->CPPmultimap60);
		break;
	case 61:
		multimapUnion->CPPmultimap61 = new MultiMap<int, int>(*other->multimapUnion->CPPmultimap61);
		break;
	case 62:
		multimapUnion->CPPmultimap62 = new MultiMap<int, unsigned int>(*other->multimapUnion->CPPmultimap62);
		break;
	case 63:
		multimapUnion->CPPmultimap63 = new MultiMap<int, long long>(*other->multimapUnion->CPPmultimap63);
		break;
	case 64:
		multimapUnion->CPPmultimap64 = new MultiMap<int, unsigned long long>(*other->multimapUnion->CPPmultimap64);
		break;
	case 65:
		multimapUnion->CPPmultimap65 = new MultiMap<int, float>(*other->multimapUnion->CPPmultimap65);
		break;
	case 66:
		multimapUnion->CPPmultimap66 = new MultiMap<int, double>(*other->multimapUnion->CPPmultimap66);
		break;
	case 67:
		multimapUnion->CPPmultimap67 = new MultiMap<int, wchar_t>(*other->multimapUnion->CPPmultimap67);
		break;
	case 68:
		multimapUnion->CPPmultimap68 = new MultiMap<int, bool>(*other->multimapUnion->CPPmultimap68);
		break;
	case 69:
		multimapUnion->CPPmultimap69 = new MultiMap<int, std::wstring>(*other->multimapUnion->CPPmultimap69);
		break;
	case 70:
		multimapUnion->CPPmultimap70 = new MultiMap<int, __int64>(*other->multimapUnion->CPPmultimap70);
		break;
	case 71:
		multimapUnion->CPPmultimap71 = new MultiMap<unsigned int, unsigned char>(*other->multimapUnion->CPPmultimap71);
		break;
	case 72:
		multimapUnion->CPPmultimap72 = new MultiMap<unsigned int, char>(*other->multimapUnion->CPPmultimap72);
		break;
	case 73:
		multimapUnion->CPPmultimap73 = new MultiMap<unsigned int, short>(*other->multimapUnion->CPPmultimap73);
		break;
	case 74:
		multimapUnion->CPPmultimap74 = new MultiMap<unsigned int, unsigned short>(*other->multimapUnion->CPPmultimap74);
		break;
	case 75:
		multimapUnion->CPPmultimap75 = new MultiMap<unsigned int, int>(*other->multimapUnion->CPPmultimap75);
		break;
	case 76:
		multimapUnion->CPPmultimap76 = new MultiMap<unsigned int, unsigned int>(*other->multimapUnion->CPPmultimap76);
		break;
	case 77:
		multimapUnion->CPPmultimap77 = new MultiMap<unsigned int, long long>(*other->multimapUnion->CPPmultimap77);
		break;
	case 78:
		multimapUnion->CPPmultimap78 = new MultiMap<unsigned int, unsigned long long>(*other->multimapUnion->CPPmultimap78);
		break;
	case 79:
		multimapUnion->CPPmultimap79 = new MultiMap<unsigned int, float>(*other->multimapUnion->CPPmultimap79);
		break;
	case 80:
		multimapUnion->CPPmultimap80 = new MultiMap<unsigned int, double>(*other->multimapUnion->CPPmultimap80);
		break;
	case 81:
		multimapUnion->CPPmultimap81 = new MultiMap<unsigned int, wchar_t>(*other->multimapUnion->CPPmultimap81);
		break;
	case 82:
		multimapUnion->CPPmultimap82 = new MultiMap<unsigned int, bool>(*other->multimapUnion->CPPmultimap82);
		break;
	case 83:
		multimapUnion->CPPmultimap83 = new MultiMap<unsigned int, std::wstring>(*other->multimapUnion->CPPmultimap83);
		break;
	case 84:
		multimapUnion->CPPmultimap84 = new MultiMap<unsigned int, __int64>(*other->multimapUnion->CPPmultimap84);
		break;
	case 85:
		multimapUnion->CPPmultimap85 = new MultiMap<long long, unsigned char>(*other->multimapUnion->CPPmultimap85);
		break;
	case 86:
		multimapUnion->CPPmultimap86 = new MultiMap<long long, char>(*other->multimapUnion->CPPmultimap86);
		break;
	case 87:
		multimapUnion->CPPmultimap87 = new MultiMap<long long, short>(*other->multimapUnion->CPPmultimap87);
		break;
	case 88:
		multimapUnion->CPPmultimap88 = new MultiMap<long long, unsigned short>(*other->multimapUnion->CPPmultimap88);
		break;
	case 89:
		multimapUnion->CPPmultimap89 = new MultiMap<long long, int>(*other->multimapUnion->CPPmultimap89);
		break;
	case 90:
		multimapUnion->CPPmultimap90 = new MultiMap<long long, unsigned int>(*other->multimapUnion->CPPmultimap90);
		break;
	case 91:
		multimapUnion->CPPmultimap91 = new MultiMap<long long, long long>(*other->multimapUnion->CPPmultimap91);
		break;
	case 92:
		multimapUnion->CPPmultimap92 = new MultiMap<long long, unsigned long long>(*other->multimapUnion->CPPmultimap92);
		break;
	case 93:
		multimapUnion->CPPmultimap93 = new MultiMap<long long, float>(*other->multimapUnion->CPPmultimap93);
		break;
	case 94:
		multimapUnion->CPPmultimap94 = new MultiMap<long long, double>(*other->multimapUnion->CPPmultimap94);
		break;
	case 95:
		multimapUnion->CPPmultimap95 = new MultiMap<long long, wchar_t>(*other->multimapUnion->CPPmultimap95);
		break;
	case 96:
		multimapUnion->CPPmultimap96 = new MultiMap<long long, bool>(*other->multimapUnion->CPPmultimap96);
		break;
	case 97:
		multimapUnion->CPPmultimap97 = new MultiMap<long long, std::wstring>(*other->multimapUnion->CPPmultimap97);
		break;
	case 98:
		multimapUnion->CPPmultimap98 = new MultiMap<long long, __int64>(*other->multimapUnion->CPPmultimap98);
		break;
	case 99:
		multimapUnion->CPPmultimap99 = new MultiMap<unsigned long long, unsigned char>(*other->multimapUnion->CPPmultimap99);
		break;
	case 100:
		multimapUnion->CPPmultimap100 = new MultiMap<unsigned long long, char>(*other->multimapUnion->CPPmultimap100);
		break;
	case 101:
		multimapUnion->CPPmultimap101 = new MultiMap<unsigned long long, short>(*other->multimapUnion->CPPmultimap101);
		break;
	case 102:
		multimapUnion->CPPmultimap102 = new MultiMap<unsigned long long, unsigned short>(*other->multimapUnion->CPPmultimap102);
		break;
	case 103:
		multimapUnion->CPPmultimap103 = new MultiMap<unsigned long long, int>(*other->multimapUnion->CPPmultimap103);
		break;
	case 104:
		multimapUnion->CPPmultimap104 = new MultiMap<unsigned long long, unsigned int>(*other->multimapUnion->CPPmultimap104);
		break;
	case 105:
		multimapUnion->CPPmultimap105 = new MultiMap<unsigned long long, long long>(*other->multimapUnion->CPPmultimap105);
		break;
	case 106:
		multimapUnion->CPPmultimap106 = new MultiMap<unsigned long long, unsigned long long>(*other->multimapUnion->CPPmultimap106);
		break;
	case 107:
		multimapUnion->CPPmultimap107 = new MultiMap<unsigned long long, float>(*other->multimapUnion->CPPmultimap107);
		break;
	case 108:
		multimapUnion->CPPmultimap108 = new MultiMap<unsigned long long, double>(*other->multimapUnion->CPPmultimap108);
		break;
	case 109:
		multimapUnion->CPPmultimap109 = new MultiMap<unsigned long long, wchar_t>(*other->multimapUnion->CPPmultimap109);
		break;
	case 110:
		multimapUnion->CPPmultimap110 = new MultiMap<unsigned long long, bool>(*other->multimapUnion->CPPmultimap110);
		break;
	case 111:
		multimapUnion->CPPmultimap111 = new MultiMap<unsigned long long, std::wstring>(*other->multimapUnion->CPPmultimap111);
		break;
	case 112:
		multimapUnion->CPPmultimap112 = new MultiMap<unsigned long long, __int64>(*other->multimapUnion->CPPmultimap112);
		break;
	case 113:
		multimapUnion->CPPmultimap113 = new MultiMap<float, unsigned char>(*other->multimapUnion->CPPmultimap113);
		break;
	case 114:
		multimapUnion->CPPmultimap114 = new MultiMap<float, char>(*other->multimapUnion->CPPmultimap114);
		break;
	case 115:
		multimapUnion->CPPmultimap115 = new MultiMap<float, short>(*other->multimapUnion->CPPmultimap115);
		break;
	case 116:
		multimapUnion->CPPmultimap116 = new MultiMap<float, unsigned short>(*other->multimapUnion->CPPmultimap116);
		break;
	case 117:
		multimapUnion->CPPmultimap117 = new MultiMap<float, int>(*other->multimapUnion->CPPmultimap117);
		break;
	case 118:
		multimapUnion->CPPmultimap118 = new MultiMap<float, unsigned int>(*other->multimapUnion->CPPmultimap118);
		break;
	case 119:
		multimapUnion->CPPmultimap119 = new MultiMap<float, long long>(*other->multimapUnion->CPPmultimap119);
		break;
	case 120:
		multimapUnion->CPPmultimap120 = new MultiMap<float, unsigned long long>(*other->multimapUnion->CPPmultimap120);
		break;
	case 121:
		multimapUnion->CPPmultimap121 = new MultiMap<float, float>(*other->multimapUnion->CPPmultimap121);
		break;
	case 122:
		multimapUnion->CPPmultimap122 = new MultiMap<float, double>(*other->multimapUnion->CPPmultimap122);
		break;
	case 123:
		multimapUnion->CPPmultimap123 = new MultiMap<float, wchar_t>(*other->multimapUnion->CPPmultimap123);
		break;
	case 124:
		multimapUnion->CPPmultimap124 = new MultiMap<float, bool>(*other->multimapUnion->CPPmultimap124);
		break;
	case 125:
		multimapUnion->CPPmultimap125 = new MultiMap<float, std::wstring>(*other->multimapUnion->CPPmultimap125);
		break;
	case 126:
		multimapUnion->CPPmultimap126 = new MultiMap<float, __int64>(*other->multimapUnion->CPPmultimap126);
		break;
	case 127:
		multimapUnion->CPPmultimap127 = new MultiMap<double, unsigned char>(*other->multimapUnion->CPPmultimap127);
		break;
	case 128:
		multimapUnion->CPPmultimap128 = new MultiMap<double, char>(*other->multimapUnion->CPPmultimap128);
		break;
	case 129:
		multimapUnion->CPPmultimap129 = new MultiMap<double, short>(*other->multimapUnion->CPPmultimap129);
		break;
	case 130:
		multimapUnion->CPPmultimap130 = new MultiMap<double, unsigned short>(*other->multimapUnion->CPPmultimap130);
		break;
	case 131:
		multimapUnion->CPPmultimap131 = new MultiMap<double, int>(*other->multimapUnion->CPPmultimap131);
		break;
	case 132:
		multimapUnion->CPPmultimap132 = new MultiMap<double, unsigned int>(*other->multimapUnion->CPPmultimap132);
		break;
	case 133:
		multimapUnion->CPPmultimap133 = new MultiMap<double, long long>(*other->multimapUnion->CPPmultimap133);
		break;
	case 134:
		multimapUnion->CPPmultimap134 = new MultiMap<double, unsigned long long>(*other->multimapUnion->CPPmultimap134);
		break;
	case 135:
		multimapUnion->CPPmultimap135 = new MultiMap<double, float>(*other->multimapUnion->CPPmultimap135);
		break;
	case 136:
		multimapUnion->CPPmultimap136 = new MultiMap<double, double>(*other->multimapUnion->CPPmultimap136);
		break;
	case 137:
		multimapUnion->CPPmultimap137 = new MultiMap<double, wchar_t>(*other->multimapUnion->CPPmultimap137);
		break;
	case 138:
		multimapUnion->CPPmultimap138 = new MultiMap<double, bool>(*other->multimapUnion->CPPmultimap138);
		break;
	case 139:
		multimapUnion->CPPmultimap139 = new MultiMap<double, std::wstring>(*other->multimapUnion->CPPmultimap139);
		break;
	case 140:
		multimapUnion->CPPmultimap140 = new MultiMap<double, __int64>(*other->multimapUnion->CPPmultimap140);
		break;
	case 141:
		multimapUnion->CPPmultimap141 = new MultiMap<wchar_t, unsigned char>(*other->multimapUnion->CPPmultimap141);
		break;
	case 142:
		multimapUnion->CPPmultimap142 = new MultiMap<wchar_t, char>(*other->multimapUnion->CPPmultimap142);
		break;
	case 143:
		multimapUnion->CPPmultimap143 = new MultiMap<wchar_t, short>(*other->multimapUnion->CPPmultimap143);
		break;
	case 144:
		multimapUnion->CPPmultimap144 = new MultiMap<wchar_t, unsigned short>(*other->multimapUnion->CPPmultimap144);
		break;
	case 145:
		multimapUnion->CPPmultimap145 = new MultiMap<wchar_t, int>(*other->multimapUnion->CPPmultimap145);
		break;
	case 146:
		multimapUnion->CPPmultimap146 = new MultiMap<wchar_t, unsigned int>(*other->multimapUnion->CPPmultimap146);
		break;
	case 147:
		multimapUnion->CPPmultimap147 = new MultiMap<wchar_t, long long>(*other->multimapUnion->CPPmultimap147);
		break;
	case 148:
		multimapUnion->CPPmultimap148 = new MultiMap<wchar_t, unsigned long long>(*other->multimapUnion->CPPmultimap148);
		break;
	case 149:
		multimapUnion->CPPmultimap149 = new MultiMap<wchar_t, float>(*other->multimapUnion->CPPmultimap149);
		break;
	case 150:
		multimapUnion->CPPmultimap150 = new MultiMap<wchar_t, double>(*other->multimapUnion->CPPmultimap150);
		break;
	case 151:
		multimapUnion->CPPmultimap151 = new MultiMap<wchar_t, wchar_t>(*other->multimapUnion->CPPmultimap151);
		break;
	case 152:
		multimapUnion->CPPmultimap152 = new MultiMap<wchar_t, bool>(*other->multimapUnion->CPPmultimap152);
		break;
	case 153:
		multimapUnion->CPPmultimap153 = new MultiMap<wchar_t, std::wstring>(*other->multimapUnion->CPPmultimap153);
		break;
	case 154:
		multimapUnion->CPPmultimap154 = new MultiMap<wchar_t, __int64>(*other->multimapUnion->CPPmultimap154);
		break;
	case 155:
		multimapUnion->CPPmultimap155 = new MultiMap<bool, unsigned char>(*other->multimapUnion->CPPmultimap155);
		break;
	case 156:
		multimapUnion->CPPmultimap156 = new MultiMap<bool, char>(*other->multimapUnion->CPPmultimap156);
		break;
	case 157:
		multimapUnion->CPPmultimap157 = new MultiMap<bool, short>(*other->multimapUnion->CPPmultimap157);
		break;
	case 158:
		multimapUnion->CPPmultimap158 = new MultiMap<bool, unsigned short>(*other->multimapUnion->CPPmultimap158);
		break;
	case 159:
		multimapUnion->CPPmultimap159 = new MultiMap<bool, int>(*other->multimapUnion->CPPmultimap159);
		break;
	case 160:
		multimapUnion->CPPmultimap160 = new MultiMap<bool, unsigned int>(*other->multimapUnion->CPPmultimap160);
		break;
	case 161:
		multimapUnion->CPPmultimap161 = new MultiMap<bool, long long>(*other->multimapUnion->CPPmultimap161);
		break;
	case 162:
		multimapUnion->CPPmultimap162 = new MultiMap<bool, unsigned long long>(*other->multimapUnion->CPPmultimap162);
		break;
	case 163:
		multimapUnion->CPPmultimap163 = new MultiMap<bool, float>(*other->multimapUnion->CPPmultimap163);
		break;
	case 164:
		multimapUnion->CPPmultimap164 = new MultiMap<bool, double>(*other->multimapUnion->CPPmultimap164);
		break;
	case 165:
		multimapUnion->CPPmultimap165 = new MultiMap<bool, wchar_t>(*other->multimapUnion->CPPmultimap165);
		break;
	case 166:
		multimapUnion->CPPmultimap166 = new MultiMap<bool, bool>(*other->multimapUnion->CPPmultimap166);
		break;
	case 167:
		multimapUnion->CPPmultimap167 = new MultiMap<bool, std::wstring>(*other->multimapUnion->CPPmultimap167);
		break;
	case 168:
		multimapUnion->CPPmultimap168 = new MultiMap<bool, __int64>(*other->multimapUnion->CPPmultimap168);
		break;
	case 169:
		multimapUnion->CPPmultimap169 = new MultiMap<std::wstring, unsigned char>(*other->multimapUnion->CPPmultimap169);
		break;
	case 170:
		multimapUnion->CPPmultimap170 = new MultiMap<std::wstring, char>(*other->multimapUnion->CPPmultimap170);
		break;
	case 171:
		multimapUnion->CPPmultimap171 = new MultiMap<std::wstring, short>(*other->multimapUnion->CPPmultimap171);
		break;
	case 172:
		multimapUnion->CPPmultimap172 = new MultiMap<std::wstring, unsigned short>(*other->multimapUnion->CPPmultimap172);
		break;
	case 173:
		multimapUnion->CPPmultimap173 = new MultiMap<std::wstring, int>(*other->multimapUnion->CPPmultimap173);
		break;
	case 174:
		multimapUnion->CPPmultimap174 = new MultiMap<std::wstring, unsigned int>(*other->multimapUnion->CPPmultimap174);
		break;
	case 175:
		multimapUnion->CPPmultimap175 = new MultiMap<std::wstring, long long>(*other->multimapUnion->CPPmultimap175);
		break;
	case 176:
		multimapUnion->CPPmultimap176 = new MultiMap<std::wstring, unsigned long long>(*other->multimapUnion->CPPmultimap176);
		break;
	case 177:
		multimapUnion->CPPmultimap177 = new MultiMap<std::wstring, float>(*other->multimapUnion->CPPmultimap177);
		break;
	case 178:
		multimapUnion->CPPmultimap178 = new MultiMap<std::wstring, double>(*other->multimapUnion->CPPmultimap178);
		break;
	case 179:
		multimapUnion->CPPmultimap179 = new MultiMap<std::wstring, wchar_t>(*other->multimapUnion->CPPmultimap179);
		break;
	case 180:
		multimapUnion->CPPmultimap180 = new MultiMap<std::wstring, bool>(*other->multimapUnion->CPPmultimap180);
		break;
	case 181:
		multimapUnion->CPPmultimap181 = new MultiMap<std::wstring, std::wstring>(*other->multimapUnion->CPPmultimap181);
		break;
	case 182:
		multimapUnion->CPPmultimap182 = new MultiMap<std::wstring, __int64>(*other->multimapUnion->CPPmultimap182);
		break;
	case 183:
		multimapUnion->CPPmultimap183 = new MultiMap<__int64, unsigned char>(*other->multimapUnion->CPPmultimap183);
		break;
	case 184:
		multimapUnion->CPPmultimap184 = new MultiMap<__int64, char>(*other->multimapUnion->CPPmultimap184);
		break;
	case 185:
		multimapUnion->CPPmultimap185 = new MultiMap<__int64, short>(*other->multimapUnion->CPPmultimap185);
		break;
	case 186:
		multimapUnion->CPPmultimap186 = new MultiMap<__int64, unsigned short>(*other->multimapUnion->CPPmultimap186);
		break;
	case 187:
		multimapUnion->CPPmultimap187 = new MultiMap<__int64, int>(*other->multimapUnion->CPPmultimap187);
		break;
	case 188:
		multimapUnion->CPPmultimap188 = new MultiMap<__int64, unsigned int>(*other->multimapUnion->CPPmultimap188);
		break;
	case 189:
		multimapUnion->CPPmultimap189 = new MultiMap<__int64, long long>(*other->multimapUnion->CPPmultimap189);
		break;
	case 190:
		multimapUnion->CPPmultimap190 = new MultiMap<__int64, unsigned long long>(*other->multimapUnion->CPPmultimap190);
		break;
	case 191:
		multimapUnion->CPPmultimap191 = new MultiMap<__int64, float>(*other->multimapUnion->CPPmultimap191);
		break;
	case 192:
		multimapUnion->CPPmultimap192 = new MultiMap<__int64, double>(*other->multimapUnion->CPPmultimap192);
		break;
	case 193:
		multimapUnion->CPPmultimap193 = new MultiMap<__int64, wchar_t>(*other->multimapUnion->CPPmultimap193);
		break;
	case 194:
		multimapUnion->CPPmultimap194 = new MultiMap<__int64, bool>(*other->multimapUnion->CPPmultimap194);
		break;
	case 195:
		multimapUnion->CPPmultimap195 = new MultiMap<__int64, std::wstring>(*other->multimapUnion->CPPmultimap195);
		break;
	case 196:
		multimapUnion->CPPmultimap196 = new MultiMap<__int64, __int64>(*other->multimapUnion->CPPmultimap196);
		break;
	}

	if (bgClassValueDictionaryInit == true)
		if (gValueClassDictionary == nullptr)
		{
			gValueClassDictionary = gcnew System::Collections::Generic::Dictionary<System::Int64, Value>(other->gValueClassDictionary);

			multiNode->SetValueClassDictionary(gValueClassDictionary);
			KeyEndNode->SetValueClassDictionary(gValueClassDictionary);
			RIterNode->SetValueClassDictionary(gValueClassDictionary);
		}
	if (bgClassKeyDictionaryInit == true)
	{

		if (gKeyClassDictionary == nullptr)
		{
			gKeyClassDictionary = gcnew System::Collections::Generic::Dictionary<Key, System::Int64>(other->gKeyClassDictionary);
		}

		if (gIntKeyClassDictionary == nullptr)
		{
			gIntKeyClassDictionary = gcnew System::Collections::Generic::Dictionary<System::Int64, Key>(other->gIntKeyClassDictionary);
		}

		multiNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
		KeyEndNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
		RIterNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	}

}
	//if (bCopyKeyValue)
	//{
	//	for (auto iter = other->begin(); iter != other->end(); ++iter)
	//	{
	//		emplace(iter->GetKey(), iter->GetValue());
	//	}
	//}