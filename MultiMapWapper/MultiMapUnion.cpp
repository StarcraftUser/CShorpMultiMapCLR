#include "pch.h"

generic<typename Key, typename Value>
inline MultiMapWapper::CSharpMultiMap<Key, Value>::CSharpMultiMap()
{
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
	else if (keyType->IsEnum)
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
	else if (valueType->IsEnum)
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
		multimapUnion->CPPmultimap1 = new MultiMap<unsigned char, unsigned char>();
		break;
	case 2:
		multimapUnion->CPPmultimap2 = new MultiMap<unsigned char, char>();
		break;
	case 3:
		multimapUnion->CPPmultimap3 = new MultiMap<unsigned char, short>();
		break;
	case 4:
		multimapUnion->CPPmultimap4 = new MultiMap<unsigned char, unsigned short>();
		break;
	case 5:
		multimapUnion->CPPmultimap5 = new MultiMap<unsigned char, int>();
		break;
	case 6:
		multimapUnion->CPPmultimap6 = new MultiMap<unsigned char, unsigned int>();
		break;
	case 7:
		multimapUnion->CPPmultimap7 = new MultiMap<unsigned char, long long>();
		break;
	case 8:
		multimapUnion->CPPmultimap8 = new MultiMap<unsigned char, unsigned long long>();
		break;
	case 9:
		multimapUnion->CPPmultimap9 = new MultiMap<unsigned char, float>();
		break;
	case 10:
		multimapUnion->CPPmultimap10 = new MultiMap<unsigned char, double>();
		break;
	case 11:
		multimapUnion->CPPmultimap11 = new MultiMap<unsigned char, wchar_t>();
		break;
	case 12:
		multimapUnion->CPPmultimap12 = new MultiMap<unsigned char, bool>();
		break;
	case 13:
		multimapUnion->CPPmultimap13 = new MultiMap<unsigned char, std::wstring>();
		break;
	case 14:
		multimapUnion->CPPmultimap14 = new MultiMap<unsigned char, __int64>();
		break;
	case 15:
		multimapUnion->CPPmultimap15 = new MultiMap<char, unsigned char>();
		break;
	case 16:
		multimapUnion->CPPmultimap16 = new MultiMap<char, char>();
		break;
	case 17:
		multimapUnion->CPPmultimap17 = new MultiMap<char, short>();
		break;
	case 18:
		multimapUnion->CPPmultimap18 = new MultiMap<char, unsigned short>();
		break;
	case 19:
		multimapUnion->CPPmultimap19 = new MultiMap<char, int>();
		break;
	case 20:
		multimapUnion->CPPmultimap20 = new MultiMap<char, unsigned int>();
		break;
	case 21:
		multimapUnion->CPPmultimap21 = new MultiMap<char, long long>();
		break;
	case 22:
		multimapUnion->CPPmultimap22 = new MultiMap<char, unsigned long long>();
		break;
	case 23:
		multimapUnion->CPPmultimap23 = new MultiMap<char, float>();
		break;
	case 24:
		multimapUnion->CPPmultimap24 = new MultiMap<char, double>();
		break;
	case 25:
		multimapUnion->CPPmultimap25 = new MultiMap<char, wchar_t>();
		break;
	case 26:
		multimapUnion->CPPmultimap26 = new MultiMap<char, bool>();
		break;
	case 27:
		multimapUnion->CPPmultimap27 = new MultiMap<char, std::wstring>();
		break;
	case 28:
		multimapUnion->CPPmultimap28 = new MultiMap<char, __int64>();
		break;
	case 29:
		multimapUnion->CPPmultimap29 = new MultiMap<short, unsigned char>();
		break;
	case 30:
		multimapUnion->CPPmultimap30 = new MultiMap<short, char>();
		break;
	case 31:
		multimapUnion->CPPmultimap31 = new MultiMap<short, short>();
		break;
	case 32:
		multimapUnion->CPPmultimap32 = new MultiMap<short, unsigned short>();
		break;
	case 33:
		multimapUnion->CPPmultimap33 = new MultiMap<short, int>();
		break;
	case 34:
		multimapUnion->CPPmultimap34 = new MultiMap<short, unsigned int>();
		break;
	case 35:
		multimapUnion->CPPmultimap35 = new MultiMap<short, long long>();
		break;
	case 36:
		multimapUnion->CPPmultimap36 = new MultiMap<short, unsigned long long>();
		break;
	case 37:
		multimapUnion->CPPmultimap37 = new MultiMap<short, float>();
		break;
	case 38:
		multimapUnion->CPPmultimap38 = new MultiMap<short, double>();
		break;
	case 39:
		multimapUnion->CPPmultimap39 = new MultiMap<short, wchar_t>();
		break;
	case 40:
		multimapUnion->CPPmultimap40 = new MultiMap<short, bool>();
		break;
	case 41:
		multimapUnion->CPPmultimap41 = new MultiMap<short, std::wstring>();
		break;
	case 42:
		multimapUnion->CPPmultimap42 = new MultiMap<short, __int64>();
		break;
	case 43:
		multimapUnion->CPPmultimap43 = new MultiMap<unsigned short, unsigned char>();
		break;
	case 44:
		multimapUnion->CPPmultimap44 = new MultiMap<unsigned short, char>();
		break;
	case 45:
		multimapUnion->CPPmultimap45 = new MultiMap<unsigned short, short>();
		break;
	case 46:
		multimapUnion->CPPmultimap46 = new MultiMap<unsigned short, unsigned short>();
		break;
	case 47:
		multimapUnion->CPPmultimap47 = new MultiMap<unsigned short, int>();
		break;
	case 48:
		multimapUnion->CPPmultimap48 = new MultiMap<unsigned short, unsigned int>();
		break;
	case 49:
		multimapUnion->CPPmultimap49 = new MultiMap<unsigned short, long long>();
		break;
	case 50:
		multimapUnion->CPPmultimap50 = new MultiMap<unsigned short, unsigned long long>();
		break;
	case 51:
		multimapUnion->CPPmultimap51 = new MultiMap<unsigned short, float>();
		break;
	case 52:
		multimapUnion->CPPmultimap52 = new MultiMap<unsigned short, double>();
		break;
	case 53:
		multimapUnion->CPPmultimap53 = new MultiMap<unsigned short, wchar_t>();
		break;
	case 54:
		multimapUnion->CPPmultimap54 = new MultiMap<unsigned short, bool>();
		break;
	case 55:
		multimapUnion->CPPmultimap55 = new MultiMap<unsigned short, std::wstring>();
		break;
	case 56:
		multimapUnion->CPPmultimap56 = new MultiMap<unsigned short, __int64>();
		break;
	case 57:
		multimapUnion->CPPmultimap57 = new MultiMap<int, unsigned char>();
		break;
	case 58:
		multimapUnion->CPPmultimap58 = new MultiMap<int, char>();
		break;
	case 59:
		multimapUnion->CPPmultimap59 = new MultiMap<int, short>();
		break;
	case 60:
		multimapUnion->CPPmultimap60 = new MultiMap<int, unsigned short>();
		break;
	case 61:
		multimapUnion->CPPmultimap61 = new MultiMap<int, int>();
		break;
	case 62:
		multimapUnion->CPPmultimap62 = new MultiMap<int, unsigned int>();
		break;
	case 63:
		multimapUnion->CPPmultimap63 = new MultiMap<int, long long>();
		break;
	case 64:
		multimapUnion->CPPmultimap64 = new MultiMap<int, unsigned long long>();
		break;
	case 65:
		multimapUnion->CPPmultimap65 = new MultiMap<int, float>();
		break;
	case 66:
		multimapUnion->CPPmultimap66 = new MultiMap<int, double>();
		break;
	case 67:
		multimapUnion->CPPmultimap67 = new MultiMap<int, wchar_t>();
		break;
	case 68:
		multimapUnion->CPPmultimap68 = new MultiMap<int, bool>();
		break;
	case 69:
		multimapUnion->CPPmultimap69 = new MultiMap<int, std::wstring>();
		break;
	case 70:
		multimapUnion->CPPmultimap70 = new MultiMap<int, __int64>();
		break;
	case 71:
		multimapUnion->CPPmultimap71 = new MultiMap<unsigned int, unsigned char>();
		break;
	case 72:
		multimapUnion->CPPmultimap72 = new MultiMap<unsigned int, char>();
		break;
	case 73:
		multimapUnion->CPPmultimap73 = new MultiMap<unsigned int, short>();
		break;
	case 74:
		multimapUnion->CPPmultimap74 = new MultiMap<unsigned int, unsigned short>();
		break;
	case 75:
		multimapUnion->CPPmultimap75 = new MultiMap<unsigned int, int>();
		break;
	case 76:
		multimapUnion->CPPmultimap76 = new MultiMap<unsigned int, unsigned int>();
		break;
	case 77:
		multimapUnion->CPPmultimap77 = new MultiMap<unsigned int, long long>();
		break;
	case 78:
		multimapUnion->CPPmultimap78 = new MultiMap<unsigned int, unsigned long long>();
		break;
	case 79:
		multimapUnion->CPPmultimap79 = new MultiMap<unsigned int, float>();
		break;
	case 80:
		multimapUnion->CPPmultimap80 = new MultiMap<unsigned int, double>();
		break;
	case 81:
		multimapUnion->CPPmultimap81 = new MultiMap<unsigned int, wchar_t>();
		break;
	case 82:
		multimapUnion->CPPmultimap82 = new MultiMap<unsigned int, bool>();
		break;
	case 83:
		multimapUnion->CPPmultimap83 = new MultiMap<unsigned int, std::wstring>();
		break;
	case 84:
		multimapUnion->CPPmultimap84 = new MultiMap<unsigned int, __int64>();
		break;
	case 85:
		multimapUnion->CPPmultimap85 = new MultiMap<long long, unsigned char>();
		break;
	case 86:
		multimapUnion->CPPmultimap86 = new MultiMap<long long, char>();
		break;
	case 87:
		multimapUnion->CPPmultimap87 = new MultiMap<long long, short>();
		break;
	case 88:
		multimapUnion->CPPmultimap88 = new MultiMap<long long, unsigned short>();
		break;
	case 89:
		multimapUnion->CPPmultimap89 = new MultiMap<long long, int>();
		break;
	case 90:
		multimapUnion->CPPmultimap90 = new MultiMap<long long, unsigned int>();
		break;
	case 91:
		multimapUnion->CPPmultimap91 = new MultiMap<long long, long long>();
		break;
	case 92:
		multimapUnion->CPPmultimap92 = new MultiMap<long long, unsigned long long>();
		break;
	case 93:
		multimapUnion->CPPmultimap93 = new MultiMap<long long, float>();
		break;
	case 94:
		multimapUnion->CPPmultimap94 = new MultiMap<long long, double>();
		break;
	case 95:
		multimapUnion->CPPmultimap95 = new MultiMap<long long, wchar_t>();
		break;
	case 96:
		multimapUnion->CPPmultimap96 = new MultiMap<long long, bool>();
		break;
	case 97:
		multimapUnion->CPPmultimap97 = new MultiMap<long long, std::wstring>();
		break;
	case 98:
		multimapUnion->CPPmultimap98 = new MultiMap<long long, __int64>();
		break;
	case 99:
		multimapUnion->CPPmultimap99 = new MultiMap<unsigned long long, unsigned char>();
		break;
	case 100:
		multimapUnion->CPPmultimap100 = new MultiMap<unsigned long long, char>();
		break;
	case 101:
		multimapUnion->CPPmultimap101 = new MultiMap<unsigned long long, short>();
		break;
	case 102:
		multimapUnion->CPPmultimap102 = new MultiMap<unsigned long long, unsigned short>();
		break;
	case 103:
		multimapUnion->CPPmultimap103 = new MultiMap<unsigned long long, int>();
		break;
	case 104:
		multimapUnion->CPPmultimap104 = new MultiMap<unsigned long long, unsigned int>();
		break;
	case 105:
		multimapUnion->CPPmultimap105 = new MultiMap<unsigned long long, long long>();
		break;
	case 106:
		multimapUnion->CPPmultimap106 = new MultiMap<unsigned long long, unsigned long long>();
		break;
	case 107:
		multimapUnion->CPPmultimap107 = new MultiMap<unsigned long long, float>();
		break;
	case 108:
		multimapUnion->CPPmultimap108 = new MultiMap<unsigned long long, double>();
		break;
	case 109:
		multimapUnion->CPPmultimap109 = new MultiMap<unsigned long long, wchar_t>();
		break;
	case 110:
		multimapUnion->CPPmultimap110 = new MultiMap<unsigned long long, bool>();
		break;
	case 111:
		multimapUnion->CPPmultimap111 = new MultiMap<unsigned long long, std::wstring>();
		break;
	case 112:
		multimapUnion->CPPmultimap112 = new MultiMap<unsigned long long, __int64>();
		break;
	case 113:
		multimapUnion->CPPmultimap113 = new MultiMap<float, unsigned char>();
		break;
	case 114:
		multimapUnion->CPPmultimap114 = new MultiMap<float, char>();
		break;
	case 115:
		multimapUnion->CPPmultimap115 = new MultiMap<float, short>();
		break;
	case 116:
		multimapUnion->CPPmultimap116 = new MultiMap<float, unsigned short>();
		break;
	case 117:
		multimapUnion->CPPmultimap117 = new MultiMap<float, int>();
		break;
	case 118:
		multimapUnion->CPPmultimap118 = new MultiMap<float, unsigned int>();
		break;
	case 119:
		multimapUnion->CPPmultimap119 = new MultiMap<float, long long>();
		break;
	case 120:
		multimapUnion->CPPmultimap120 = new MultiMap<float, unsigned long long>();
		break;
	case 121:
		multimapUnion->CPPmultimap121 = new MultiMap<float, float>();
		break;
	case 122:
		multimapUnion->CPPmultimap122 = new MultiMap<float, double>();
		break;
	case 123:
		multimapUnion->CPPmultimap123 = new MultiMap<float, wchar_t>();
		break;
	case 124:
		multimapUnion->CPPmultimap124 = new MultiMap<float, bool>();
		break;
	case 125:
		multimapUnion->CPPmultimap125 = new MultiMap<float, std::wstring>();
		break;
	case 126:
		multimapUnion->CPPmultimap126 = new MultiMap<float, __int64>();
		break;
	case 127:
		multimapUnion->CPPmultimap127 = new MultiMap<double, unsigned char>();
		break;
	case 128:
		multimapUnion->CPPmultimap128 = new MultiMap<double, char>();
		break;
	case 129:
		multimapUnion->CPPmultimap129 = new MultiMap<double, short>();
		break;
	case 130:
		multimapUnion->CPPmultimap130 = new MultiMap<double, unsigned short>();
		break;
	case 131:
		multimapUnion->CPPmultimap131 = new MultiMap<double, int>();
		break;
	case 132:
		multimapUnion->CPPmultimap132 = new MultiMap<double, unsigned int>();
		break;
	case 133:
		multimapUnion->CPPmultimap133 = new MultiMap<double, long long>();
		break;
	case 134:
		multimapUnion->CPPmultimap134 = new MultiMap<double, unsigned long long>();
		break;
	case 135:
		multimapUnion->CPPmultimap135 = new MultiMap<double, float>();
		break;
	case 136:
		multimapUnion->CPPmultimap136 = new MultiMap<double, double>();
		break;
	case 137:
		multimapUnion->CPPmultimap137 = new MultiMap<double, wchar_t>();
		break;
	case 138:
		multimapUnion->CPPmultimap138 = new MultiMap<double, bool>();
		break;
	case 139:
		multimapUnion->CPPmultimap139 = new MultiMap<double, std::wstring>();
		break;
	case 140:
		multimapUnion->CPPmultimap140 = new MultiMap<double, __int64>();
		break;
	case 141:
		multimapUnion->CPPmultimap141 = new MultiMap<wchar_t, unsigned char>();
		break;
	case 142:
		multimapUnion->CPPmultimap142 = new MultiMap<wchar_t, char>();
		break;
	case 143:
		multimapUnion->CPPmultimap143 = new MultiMap<wchar_t, short>();
		break;
	case 144:
		multimapUnion->CPPmultimap144 = new MultiMap<wchar_t, unsigned short>();
		break;
	case 145:
		multimapUnion->CPPmultimap145 = new MultiMap<wchar_t, int>();
		break;
	case 146:
		multimapUnion->CPPmultimap146 = new MultiMap<wchar_t, unsigned int>();
		break;
	case 147:
		multimapUnion->CPPmultimap147 = new MultiMap<wchar_t, long long>();
		break;
	case 148:
		multimapUnion->CPPmultimap148 = new MultiMap<wchar_t, unsigned long long>();
		break;
	case 149:
		multimapUnion->CPPmultimap149 = new MultiMap<wchar_t, float>();
		break;
	case 150:
		multimapUnion->CPPmultimap150 = new MultiMap<wchar_t, double>();
		break;
	case 151:
		multimapUnion->CPPmultimap151 = new MultiMap<wchar_t, wchar_t>();
		break;
	case 152:
		multimapUnion->CPPmultimap152 = new MultiMap<wchar_t, bool>();
		break;
	case 153:
		multimapUnion->CPPmultimap153 = new MultiMap<wchar_t, std::wstring>();
		break;
	case 154:
		multimapUnion->CPPmultimap154 = new MultiMap<wchar_t, __int64>();
		break;
	case 155:
		multimapUnion->CPPmultimap155 = new MultiMap<bool, unsigned char>();
		break;
	case 156:
		multimapUnion->CPPmultimap156 = new MultiMap<bool, char>();
		break;
	case 157:
		multimapUnion->CPPmultimap157 = new MultiMap<bool, short>();
		break;
	case 158:
		multimapUnion->CPPmultimap158 = new MultiMap<bool, unsigned short>();
		break;
	case 159:
		multimapUnion->CPPmultimap159 = new MultiMap<bool, int>();
		break;
	case 160:
		multimapUnion->CPPmultimap160 = new MultiMap<bool, unsigned int>();
		break;
	case 161:
		multimapUnion->CPPmultimap161 = new MultiMap<bool, long long>();
		break;
	case 162:
		multimapUnion->CPPmultimap162 = new MultiMap<bool, unsigned long long>();
		break;
	case 163:
		multimapUnion->CPPmultimap163 = new MultiMap<bool, float>();
		break;
	case 164:
		multimapUnion->CPPmultimap164 = new MultiMap<bool, double>();
		break;
	case 165:
		multimapUnion->CPPmultimap165 = new MultiMap<bool, wchar_t>();
		break;
	case 166:
		multimapUnion->CPPmultimap166 = new MultiMap<bool, bool>();
		break;
	case 167:
		multimapUnion->CPPmultimap167 = new MultiMap<bool, std::wstring>();
		break;
	case 168:
		multimapUnion->CPPmultimap168 = new MultiMap<bool, __int64>();
		break;
	case 169:
		multimapUnion->CPPmultimap169 = new MultiMap<std::wstring, unsigned char>();
		break;
	case 170:
		multimapUnion->CPPmultimap170 = new MultiMap<std::wstring, char>();
		break;
	case 171:
		multimapUnion->CPPmultimap171 = new MultiMap<std::wstring, short>();
		break;
	case 172:
		multimapUnion->CPPmultimap172 = new MultiMap<std::wstring, unsigned short>();
		break;
	case 173:
		multimapUnion->CPPmultimap173 = new MultiMap<std::wstring, int>();
		break;
	case 174:
		multimapUnion->CPPmultimap174 = new MultiMap<std::wstring, unsigned int>();
		break;
	case 175:
		multimapUnion->CPPmultimap175 = new MultiMap<std::wstring, long long>();
		break;
	case 176:
		multimapUnion->CPPmultimap176 = new MultiMap<std::wstring, unsigned long long>();
		break;
	case 177:
		multimapUnion->CPPmultimap177 = new MultiMap<std::wstring, float>();
		break;
	case 178:
		multimapUnion->CPPmultimap178 = new MultiMap<std::wstring, double>();
		break;
	case 179:
		multimapUnion->CPPmultimap179 = new MultiMap<std::wstring, wchar_t>();
		break;
	case 180:
		multimapUnion->CPPmultimap180 = new MultiMap<std::wstring, bool>();
		break;
	case 181:
		multimapUnion->CPPmultimap181 = new MultiMap<std::wstring, std::wstring>();
		break;
	case 182:
		multimapUnion->CPPmultimap182 = new MultiMap<std::wstring, __int64>();
		break;
	case 183:
		multimapUnion->CPPmultimap183 = new MultiMap<__int64, unsigned char>();
		break;
	case 184:
		multimapUnion->CPPmultimap184 = new MultiMap<__int64, char>();
		break;
	case 185:
		multimapUnion->CPPmultimap185 = new MultiMap<__int64, short>();
		break;
	case 186:
		multimapUnion->CPPmultimap186 = new MultiMap<__int64, unsigned short>();
		break;
	case 187:
		multimapUnion->CPPmultimap187 = new MultiMap<__int64, int>();
		break;
	case 188:
		multimapUnion->CPPmultimap188 = new MultiMap<__int64, unsigned int>();
		break;
	case 189:
		multimapUnion->CPPmultimap189 = new MultiMap<__int64, long long>();
		break;
	case 190:
		multimapUnion->CPPmultimap190 = new MultiMap<__int64, unsigned long long>();
		break;
	case 191:
		multimapUnion->CPPmultimap191 = new MultiMap<__int64, float>();
		break;
	case 192:
		multimapUnion->CPPmultimap192 = new MultiMap<__int64, double>();
		break;
	case 193:
		multimapUnion->CPPmultimap193 = new MultiMap<__int64, wchar_t>();
		break;
	case 194:
		multimapUnion->CPPmultimap194 = new MultiMap<__int64, bool>();
		break;
	case 195:
		multimapUnion->CPPmultimap195 = new MultiMap<__int64, std::wstring>();
		break;
	case 196:
		multimapUnion->CPPmultimap196 = new MultiMap<__int64, __int64>();
		break;
	}

	if (bgClassValueDictionaryInit == true)
		if (gValueClassDictionary == nullptr)
		{
			gValueClassDictionary = gcnew System::Collections::Generic::Dictionary<System::Int64, Value>();

			multiNode->SetValueClassDictionary(gValueClassDictionary);
			KeyEndNode->SetValueClassDictionary(gValueClassDictionary);
			RIterNode->SetValueClassDictionary(gValueClassDictionary);
		}

	if (bgClassKeyDictionaryInit == true)
	{

		if (gKeyClassDictionary == nullptr)
			gKeyClassDictionary = gcnew System::Collections::Generic::Dictionary<Key, System::Int64>();

		if (gIntKeyClassDictionary == nullptr)
			gIntKeyClassDictionary = gcnew System::Collections::Generic::Dictionary<System::Int64, Key>();

		multiNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
		KeyEndNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
		RIterNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	}
}
