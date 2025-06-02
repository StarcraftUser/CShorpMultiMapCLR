#include "pch.h"

generic<typename Key, typename Value>
MultiMapWapper::CShorpReverseNode<Key, Value>::CShorpReverseNode()
{
	gIntKeyClassDictionary = nullptr;
	gValueClassDictionary = nullptr;
	reverseNodeUnion = new Utilities::ReverseNodeUnion();
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;
	int KeyNum = 0;
	int ValueNum = 0;

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
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		KeyNum = 14 * 13;
	}
	else if (keyType->IsInterface)
	{
		KeyNum = 14 * 13;
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
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		ValueNum = 14;
	}
	else if (valueType->IsInterface)
	{
		ValueNum = 14;
	}
	else
	{
		ValueNum = 200;
	}

	nKeyValueType = KeyNum + ValueNum;

	switch (nKeyValueType)
	{
	case 0: default:
		reverseNodeUnion->ptrToDelete = nullptr;
		break;
	case 1:
		reverseNodeUnion->CPPreversenode1 = new ReverseNode<unsigned char, unsigned char>();
		break;
	case 2:
		reverseNodeUnion->CPPreversenode2 = new ReverseNode<unsigned char, char>();
		break;
	case 3:
		reverseNodeUnion->CPPreversenode3 = new ReverseNode<unsigned char, short>();
		break;
	case 4:
		reverseNodeUnion->CPPreversenode4 = new ReverseNode<unsigned char, unsigned short>();
		break;
	case 5:
		reverseNodeUnion->CPPreversenode5 = new ReverseNode<unsigned char, int>();
		break;
	case 6:
		reverseNodeUnion->CPPreversenode6 = new ReverseNode<unsigned char, unsigned int>();
		break;
	case 7:
		reverseNodeUnion->CPPreversenode7 = new ReverseNode<unsigned char, long long>();
		break;
	case 8:
		reverseNodeUnion->CPPreversenode8 = new ReverseNode<unsigned char, unsigned long long>();
		break;
	case 9:
		reverseNodeUnion->CPPreversenode9 = new ReverseNode<unsigned char, float>();
		break;
	case 10:
		reverseNodeUnion->CPPreversenode10 = new ReverseNode<unsigned char, double>();
		break;
	case 11:
		reverseNodeUnion->CPPreversenode11 = new ReverseNode<unsigned char, wchar_t>();
		break;
	case 12:
		reverseNodeUnion->CPPreversenode12 = new ReverseNode<unsigned char, bool>();
		break;
	case 13:
		reverseNodeUnion->CPPreversenode13 = new ReverseNode<unsigned char, std::wstring>();
		break;
	case 14:
		reverseNodeUnion->CPPreversenode14 = new ReverseNode<unsigned char, __int64>();
		break;
	case 15:
		reverseNodeUnion->CPPreversenode15 = new ReverseNode<char, unsigned char>();
		break;
	case 16:
		reverseNodeUnion->CPPreversenode16 = new ReverseNode<char, char>();
		break;
	case 17:
		reverseNodeUnion->CPPreversenode17 = new ReverseNode<char, short>();
		break;
	case 18:
		reverseNodeUnion->CPPreversenode18 = new ReverseNode<char, unsigned short>();
		break;
	case 19:
		reverseNodeUnion->CPPreversenode19 = new ReverseNode<char, int>();
		break;
	case 20:
		reverseNodeUnion->CPPreversenode20 = new ReverseNode<char, unsigned int>();
		break;
	case 21:
		reverseNodeUnion->CPPreversenode21 = new ReverseNode<char, long long>();
		break;
	case 22:
		reverseNodeUnion->CPPreversenode22 = new ReverseNode<char, unsigned long long>();
		break;
	case 23:
		reverseNodeUnion->CPPreversenode23 = new ReverseNode<char, float>();
		break;
	case 24:
		reverseNodeUnion->CPPreversenode24 = new ReverseNode<char, double>();
		break;
	case 25:
		reverseNodeUnion->CPPreversenode25 = new ReverseNode<char, wchar_t>();
		break;
	case 26:
		reverseNodeUnion->CPPreversenode26 = new ReverseNode<char, bool>();
		break;
	case 27:
		reverseNodeUnion->CPPreversenode27 = new ReverseNode<char, std::wstring>();
		break;
	case 28:
		reverseNodeUnion->CPPreversenode28 = new ReverseNode<char, __int64>();
		break;
	case 29:
		reverseNodeUnion->CPPreversenode29 = new ReverseNode<short, unsigned char>();
		break;
	case 30:
		reverseNodeUnion->CPPreversenode30 = new ReverseNode<short, char>();
		break;
	case 31:
		reverseNodeUnion->CPPreversenode31 = new ReverseNode<short, short>();
		break;
	case 32:
		reverseNodeUnion->CPPreversenode32 = new ReverseNode<short, unsigned short>();
		break;
	case 33:
		reverseNodeUnion->CPPreversenode33 = new ReverseNode<short, int>();
		break;
	case 34:
		reverseNodeUnion->CPPreversenode34 = new ReverseNode<short, unsigned int>();
		break;
	case 35:
		reverseNodeUnion->CPPreversenode35 = new ReverseNode<short, long long>();
		break;
	case 36:
		reverseNodeUnion->CPPreversenode36 = new ReverseNode<short, unsigned long long>();
		break;
	case 37:
		reverseNodeUnion->CPPreversenode37 = new ReverseNode<short, float>();
		break;
	case 38:
		reverseNodeUnion->CPPreversenode38 = new ReverseNode<short, double>();
		break;
	case 39:
		reverseNodeUnion->CPPreversenode39 = new ReverseNode<short, wchar_t>();
		break;
	case 40:
		reverseNodeUnion->CPPreversenode40 = new ReverseNode<short, bool>();
		break;
	case 41:
		reverseNodeUnion->CPPreversenode41 = new ReverseNode<short, std::wstring>();
		break;
	case 42:
		reverseNodeUnion->CPPreversenode42 = new ReverseNode<short, __int64>();
		break;
	case 43:
		reverseNodeUnion->CPPreversenode43 = new ReverseNode<unsigned short, unsigned char>();
		break;
	case 44:
		reverseNodeUnion->CPPreversenode44 = new ReverseNode<unsigned short, char>();
		break;
	case 45:
		reverseNodeUnion->CPPreversenode45 = new ReverseNode<unsigned short, short>();
		break;
	case 46:
		reverseNodeUnion->CPPreversenode46 = new ReverseNode<unsigned short, unsigned short>();
		break;
	case 47:
		reverseNodeUnion->CPPreversenode47 = new ReverseNode<unsigned short, int>();
		break;
	case 48:
		reverseNodeUnion->CPPreversenode48 = new ReverseNode<unsigned short, unsigned int>();
		break;
	case 49:
		reverseNodeUnion->CPPreversenode49 = new ReverseNode<unsigned short, long long>();
		break;
	case 50:
		reverseNodeUnion->CPPreversenode50 = new ReverseNode<unsigned short, unsigned long long>();
		break;
	case 51:
		reverseNodeUnion->CPPreversenode51 = new ReverseNode<unsigned short, float>();
		break;
	case 52:
		reverseNodeUnion->CPPreversenode52 = new ReverseNode<unsigned short, double>();
		break;
	case 53:
		reverseNodeUnion->CPPreversenode53 = new ReverseNode<unsigned short, wchar_t>();
		break;
	case 54:
		reverseNodeUnion->CPPreversenode54 = new ReverseNode<unsigned short, bool>();
		break;
	case 55:
		reverseNodeUnion->CPPreversenode55 = new ReverseNode<unsigned short, std::wstring>();
		break;
	case 56:
		reverseNodeUnion->CPPreversenode56 = new ReverseNode<unsigned short, __int64>();
		break;
	case 57:
		reverseNodeUnion->CPPreversenode57 = new ReverseNode<int, unsigned char>();
		break;
	case 58:
		reverseNodeUnion->CPPreversenode58 = new ReverseNode<int, char>();
		break;
	case 59:
		reverseNodeUnion->CPPreversenode59 = new ReverseNode<int, short>();
		break;
	case 60:
		reverseNodeUnion->CPPreversenode60 = new ReverseNode<int, unsigned short>();
		break;
	case 61:
		reverseNodeUnion->CPPreversenode61 = new ReverseNode<int, int>();
		break;
	case 62:
		reverseNodeUnion->CPPreversenode62 = new ReverseNode<int, unsigned int>();
		break;
	case 63:
		reverseNodeUnion->CPPreversenode63 = new ReverseNode<int, long long>();
		break;
	case 64:
		reverseNodeUnion->CPPreversenode64 = new ReverseNode<int, unsigned long long>();
		break;
	case 65:
		reverseNodeUnion->CPPreversenode65 = new ReverseNode<int, float>();
		break;
	case 66:
		reverseNodeUnion->CPPreversenode66 = new ReverseNode<int, double>();
		break;
	case 67:
		reverseNodeUnion->CPPreversenode67 = new ReverseNode<int, wchar_t>();
		break;
	case 68:
		reverseNodeUnion->CPPreversenode68 = new ReverseNode<int, bool>();
		break;
	case 69:
		reverseNodeUnion->CPPreversenode69 = new ReverseNode<int, std::wstring>();
		break;
	case 70:
		reverseNodeUnion->CPPreversenode70 = new ReverseNode<int, __int64>();
		break;
	case 71:
		reverseNodeUnion->CPPreversenode71 = new ReverseNode<unsigned int, unsigned char>();
		break;
	case 72:
		reverseNodeUnion->CPPreversenode72 = new ReverseNode<unsigned int, char>();
		break;
	case 73:
		reverseNodeUnion->CPPreversenode73 = new ReverseNode<unsigned int, short>();
		break;
	case 74:
		reverseNodeUnion->CPPreversenode74 = new ReverseNode<unsigned int, unsigned short>();
		break;
	case 75:
		reverseNodeUnion->CPPreversenode75 = new ReverseNode<unsigned int, int>();
		break;
	case 76:
		reverseNodeUnion->CPPreversenode76 = new ReverseNode<unsigned int, unsigned int>();
		break;
	case 77:
		reverseNodeUnion->CPPreversenode77 = new ReverseNode<unsigned int, long long>();
		break;
	case 78:
		reverseNodeUnion->CPPreversenode78 = new ReverseNode<unsigned int, unsigned long long>();
		break;
	case 79:
		reverseNodeUnion->CPPreversenode79 = new ReverseNode<unsigned int, float>();
		break;
	case 80:
		reverseNodeUnion->CPPreversenode80 = new ReverseNode<unsigned int, double>();
		break;
	case 81:
		reverseNodeUnion->CPPreversenode81 = new ReverseNode<unsigned int, wchar_t>();
		break;
	case 82:
		reverseNodeUnion->CPPreversenode82 = new ReverseNode<unsigned int, bool>();
		break;
	case 83:
		reverseNodeUnion->CPPreversenode83 = new ReverseNode<unsigned int, std::wstring>();
		break;
	case 84:
		reverseNodeUnion->CPPreversenode84 = new ReverseNode<unsigned int, __int64>();
		break;
	case 85:
		reverseNodeUnion->CPPreversenode85 = new ReverseNode<long long, unsigned char>();
		break;
	case 86:
		reverseNodeUnion->CPPreversenode86 = new ReverseNode<long long, char>();
		break;
	case 87:
		reverseNodeUnion->CPPreversenode87 = new ReverseNode<long long, short>();
		break;
	case 88:
		reverseNodeUnion->CPPreversenode88 = new ReverseNode<long long, unsigned short>();
		break;
	case 89:
		reverseNodeUnion->CPPreversenode89 = new ReverseNode<long long, int>();
		break;
	case 90:
		reverseNodeUnion->CPPreversenode90 = new ReverseNode<long long, unsigned int>();
		break;
	case 91:
		reverseNodeUnion->CPPreversenode91 = new ReverseNode<long long, long long>();
		break;
	case 92:
		reverseNodeUnion->CPPreversenode92 = new ReverseNode<long long, unsigned long long>();
		break;
	case 93:
		reverseNodeUnion->CPPreversenode93 = new ReverseNode<long long, float>();
		break;
	case 94:
		reverseNodeUnion->CPPreversenode94 = new ReverseNode<long long, double>();
		break;
	case 95:
		reverseNodeUnion->CPPreversenode95 = new ReverseNode<long long, wchar_t>();
		break;
	case 96:
		reverseNodeUnion->CPPreversenode96 = new ReverseNode<long long, bool>();
		break;
	case 97:
		reverseNodeUnion->CPPreversenode97 = new ReverseNode<long long, std::wstring>();
		break;
	case 98:
		reverseNodeUnion->CPPreversenode98 = new ReverseNode<long long, __int64>();
		break;
	case 99:
		reverseNodeUnion->CPPreversenode99 = new ReverseNode<unsigned long long, unsigned char>();
		break;
	case 100:
		reverseNodeUnion->CPPreversenode100 = new ReverseNode<unsigned long long, char>();
		break;
	case 101:
		reverseNodeUnion->CPPreversenode101 = new ReverseNode<unsigned long long, short>();
		break;
	case 102:
		reverseNodeUnion->CPPreversenode102 = new ReverseNode<unsigned long long, unsigned short>();
		break;
	case 103:
		reverseNodeUnion->CPPreversenode103 = new ReverseNode<unsigned long long, int>();
		break;
	case 104:
		reverseNodeUnion->CPPreversenode104 = new ReverseNode<unsigned long long, unsigned int>();
		break;
	case 105:
		reverseNodeUnion->CPPreversenode105 = new ReverseNode<unsigned long long, long long>();
		break;
	case 106:
		reverseNodeUnion->CPPreversenode106 = new ReverseNode<unsigned long long, unsigned long long>();
		break;
	case 107:
		reverseNodeUnion->CPPreversenode107 = new ReverseNode<unsigned long long, float>();
		break;
	case 108:
		reverseNodeUnion->CPPreversenode108 = new ReverseNode<unsigned long long, double>();
		break;
	case 109:
		reverseNodeUnion->CPPreversenode109 = new ReverseNode<unsigned long long, wchar_t>();
		break;
	case 110:
		reverseNodeUnion->CPPreversenode110 = new ReverseNode<unsigned long long, bool>();
		break;
	case 111:
		reverseNodeUnion->CPPreversenode111 = new ReverseNode<unsigned long long, std::wstring>();
		break;
	case 112:
		reverseNodeUnion->CPPreversenode112 = new ReverseNode<unsigned long long, __int64>();
		break;
	case 113:
		reverseNodeUnion->CPPreversenode113 = new ReverseNode<float, unsigned char>();
		break;
	case 114:
		reverseNodeUnion->CPPreversenode114 = new ReverseNode<float, char>();
		break;
	case 115:
		reverseNodeUnion->CPPreversenode115 = new ReverseNode<float, short>();
		break;
	case 116:
		reverseNodeUnion->CPPreversenode116 = new ReverseNode<float, unsigned short>();
		break;
	case 117:
		reverseNodeUnion->CPPreversenode117 = new ReverseNode<float, int>();
		break;
	case 118:
		reverseNodeUnion->CPPreversenode118 = new ReverseNode<float, unsigned int>();
		break;
	case 119:
		reverseNodeUnion->CPPreversenode119 = new ReverseNode<float, long long>();
		break;
	case 120:
		reverseNodeUnion->CPPreversenode120 = new ReverseNode<float, unsigned long long>();
		break;
	case 121:
		reverseNodeUnion->CPPreversenode121 = new ReverseNode<float, float>();
		break;
	case 122:
		reverseNodeUnion->CPPreversenode122 = new ReverseNode<float, double>();
		break;
	case 123:
		reverseNodeUnion->CPPreversenode123 = new ReverseNode<float, wchar_t>();
		break;
	case 124:
		reverseNodeUnion->CPPreversenode124 = new ReverseNode<float, bool>();
		break;
	case 125:
		reverseNodeUnion->CPPreversenode125 = new ReverseNode<float, std::wstring>();
		break;
	case 126:
		reverseNodeUnion->CPPreversenode126 = new ReverseNode<float, __int64>();
		break;
	case 127:
		reverseNodeUnion->CPPreversenode127 = new ReverseNode<double, unsigned char>();
		break;
	case 128:
		reverseNodeUnion->CPPreversenode128 = new ReverseNode<double, char>();
		break;
	case 129:
		reverseNodeUnion->CPPreversenode129 = new ReverseNode<double, short>();
		break;
	case 130:
		reverseNodeUnion->CPPreversenode130 = new ReverseNode<double, unsigned short>();
		break;
	case 131:
		reverseNodeUnion->CPPreversenode131 = new ReverseNode<double, int>();
		break;
	case 132:
		reverseNodeUnion->CPPreversenode132 = new ReverseNode<double, unsigned int>();
		break;
	case 133:
		reverseNodeUnion->CPPreversenode133 = new ReverseNode<double, long long>();
		break;
	case 134:
		reverseNodeUnion->CPPreversenode134 = new ReverseNode<double, unsigned long long>();
		break;
	case 135:
		reverseNodeUnion->CPPreversenode135 = new ReverseNode<double, float>();
		break;
	case 136:
		reverseNodeUnion->CPPreversenode136 = new ReverseNode<double, double>();
		break;
	case 137:
		reverseNodeUnion->CPPreversenode137 = new ReverseNode<double, wchar_t>();
		break;
	case 138:
		reverseNodeUnion->CPPreversenode138 = new ReverseNode<double, bool>();
		break;
	case 139:
		reverseNodeUnion->CPPreversenode139 = new ReverseNode<double, std::wstring>();
		break;
	case 140:
		reverseNodeUnion->CPPreversenode140 = new ReverseNode<double, __int64>();
		break;
	case 141:
		reverseNodeUnion->CPPreversenode141 = new ReverseNode<wchar_t, unsigned char>();
		break;
	case 142:
		reverseNodeUnion->CPPreversenode142 = new ReverseNode<wchar_t, char>();
		break;
	case 143:
		reverseNodeUnion->CPPreversenode143 = new ReverseNode<wchar_t, short>();
		break;
	case 144:
		reverseNodeUnion->CPPreversenode144 = new ReverseNode<wchar_t, unsigned short>();
		break;
	case 145:
		reverseNodeUnion->CPPreversenode145 = new ReverseNode<wchar_t, int>();
		break;
	case 146:
		reverseNodeUnion->CPPreversenode146 = new ReverseNode<wchar_t, unsigned int>();
		break;
	case 147:
		reverseNodeUnion->CPPreversenode147 = new ReverseNode<wchar_t, long long>();
		break;
	case 148:
		reverseNodeUnion->CPPreversenode148 = new ReverseNode<wchar_t, unsigned long long>();
		break;
	case 149:
		reverseNodeUnion->CPPreversenode149 = new ReverseNode<wchar_t, float>();
		break;
	case 150:
		reverseNodeUnion->CPPreversenode150 = new ReverseNode<wchar_t, double>();
		break;
	case 151:
		reverseNodeUnion->CPPreversenode151 = new ReverseNode<wchar_t, wchar_t>();
		break;
	case 152:
		reverseNodeUnion->CPPreversenode152 = new ReverseNode<wchar_t, bool>();
		break;
	case 153:
		reverseNodeUnion->CPPreversenode153 = new ReverseNode<wchar_t, std::wstring>();
		break;
	case 154:
		reverseNodeUnion->CPPreversenode154 = new ReverseNode<wchar_t, __int64>();
		break;
	case 155:
		reverseNodeUnion->CPPreversenode155 = new ReverseNode<bool, unsigned char>();
		break;
	case 156:
		reverseNodeUnion->CPPreversenode156 = new ReverseNode<bool, char>();
		break;
	case 157:
		reverseNodeUnion->CPPreversenode157 = new ReverseNode<bool, short>();
		break;
	case 158:
		reverseNodeUnion->CPPreversenode158 = new ReverseNode<bool, unsigned short>();
		break;
	case 159:
		reverseNodeUnion->CPPreversenode159 = new ReverseNode<bool, int>();
		break;
	case 160:
		reverseNodeUnion->CPPreversenode160 = new ReverseNode<bool, unsigned int>();
		break;
	case 161:
		reverseNodeUnion->CPPreversenode161 = new ReverseNode<bool, long long>();
		break;
	case 162:
		reverseNodeUnion->CPPreversenode162 = new ReverseNode<bool, unsigned long long>();
		break;
	case 163:
		reverseNodeUnion->CPPreversenode163 = new ReverseNode<bool, float>();
		break;
	case 164:
		reverseNodeUnion->CPPreversenode164 = new ReverseNode<bool, double>();
		break;
	case 165:
		reverseNodeUnion->CPPreversenode165 = new ReverseNode<bool, wchar_t>();
		break;
	case 166:
		reverseNodeUnion->CPPreversenode166 = new ReverseNode<bool, bool>();
		break;
	case 167:
		reverseNodeUnion->CPPreversenode167 = new ReverseNode<bool, std::wstring>();
		break;
	case 168:
		reverseNodeUnion->CPPreversenode168 = new ReverseNode<bool, __int64>();
		break;
	case 169:
		reverseNodeUnion->CPPreversenode169 = new ReverseNode<std::wstring, unsigned char>();
		break;
	case 170:
		reverseNodeUnion->CPPreversenode170 = new ReverseNode<std::wstring, char>();
		break;
	case 171:
		reverseNodeUnion->CPPreversenode171 = new ReverseNode<std::wstring, short>();
		break;
	case 172:
		reverseNodeUnion->CPPreversenode172 = new ReverseNode<std::wstring, unsigned short>();
		break;
	case 173:
		reverseNodeUnion->CPPreversenode173 = new ReverseNode<std::wstring, int>();
		break;
	case 174:
		reverseNodeUnion->CPPreversenode174 = new ReverseNode<std::wstring, unsigned int>();
		break;
	case 175:
		reverseNodeUnion->CPPreversenode175 = new ReverseNode<std::wstring, long long>();
		break;
	case 176:
		reverseNodeUnion->CPPreversenode176 = new ReverseNode<std::wstring, unsigned long long>();
		break;
	case 177:
		reverseNodeUnion->CPPreversenode177 = new ReverseNode<std::wstring, float>();
		break;
	case 178:
		reverseNodeUnion->CPPreversenode178 = new ReverseNode<std::wstring, double>();
		break;
	case 179:
		reverseNodeUnion->CPPreversenode179 = new ReverseNode<std::wstring, wchar_t>();
		break;
	case 180:
		reverseNodeUnion->CPPreversenode180 = new ReverseNode<std::wstring, bool>();
		break;
	case 181:
		reverseNodeUnion->CPPreversenode181 = new ReverseNode<std::wstring, std::wstring>();
		break;
	case 182:
		reverseNodeUnion->CPPreversenode182 = new ReverseNode<std::wstring, __int64>();
		break;
	case 183:
		reverseNodeUnion->CPPreversenode183 = new ReverseNode<__int64, unsigned char>();
		break;
	case 184:
		reverseNodeUnion->CPPreversenode184 = new ReverseNode<__int64, char>();
		break;
	case 185:
		reverseNodeUnion->CPPreversenode185 = new ReverseNode<__int64, short>();
		break;
	case 186:
		reverseNodeUnion->CPPreversenode186 = new ReverseNode<__int64, unsigned short>();
		break;
	case 187:
		reverseNodeUnion->CPPreversenode187 = new ReverseNode<__int64, int>();
		break;
	case 188:
		reverseNodeUnion->CPPreversenode188 = new ReverseNode<__int64, unsigned int>();
		break;
	case 189:
		reverseNodeUnion->CPPreversenode189 = new ReverseNode<__int64, long long>();
		break;
	case 190:
		reverseNodeUnion->CPPreversenode190 = new ReverseNode<__int64, unsigned long long>();
		break;
	case 191:
		reverseNodeUnion->CPPreversenode191 = new ReverseNode<__int64, float>();
		break;
	case 192:
		reverseNodeUnion->CPPreversenode192 = new ReverseNode<__int64, double>();
		break;
	case 193:
		reverseNodeUnion->CPPreversenode193 = new ReverseNode<__int64, wchar_t>();
		break;
	case 194:
		reverseNodeUnion->CPPreversenode194 = new ReverseNode<__int64, bool>();
		break;
	case 195:
		reverseNodeUnion->CPPreversenode195 = new ReverseNode<__int64, std::wstring>();
		break;
	case 196:
		reverseNodeUnion->CPPreversenode196 = new ReverseNode<__int64, __int64>();
		break;
	}
}

generic<typename Key, typename Value>
MultiMapWapper::CShorpReverseNode<Key, Value>::~CShorpReverseNode()
{
	if (reverseNodeUnion->ptrToDelete)
		delete reverseNodeUnion->ptrToDelete;
	delete reverseNodeUnion;
}

#define ReverseNode_Next_CASE(NUM) \
	case NUM: \
		(*(reverseNodeUnion->CPPreversenode##NUM))++; \
		return;

generic<typename Key, typename Value>
inline void MultiMapWapper::CShorpReverseNode<Key, Value>::Next()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		ReverseNode_Next_CASE(1)
		ReverseNode_Next_CASE(2)
		ReverseNode_Next_CASE(3)
		ReverseNode_Next_CASE(4)
		ReverseNode_Next_CASE(5)
		ReverseNode_Next_CASE(6)
		ReverseNode_Next_CASE(7)
		ReverseNode_Next_CASE(8)
		ReverseNode_Next_CASE(9)
		ReverseNode_Next_CASE(10)
		ReverseNode_Next_CASE(11)
		ReverseNode_Next_CASE(12)
		ReverseNode_Next_CASE(13)
		ReverseNode_Next_CASE(14)
		ReverseNode_Next_CASE(15)
		ReverseNode_Next_CASE(16)
		ReverseNode_Next_CASE(17)
		ReverseNode_Next_CASE(18)
		ReverseNode_Next_CASE(19)
		ReverseNode_Next_CASE(20)
		ReverseNode_Next_CASE(21)
		ReverseNode_Next_CASE(22)
		ReverseNode_Next_CASE(23)
		ReverseNode_Next_CASE(24)
		ReverseNode_Next_CASE(25)
		ReverseNode_Next_CASE(26)
		ReverseNode_Next_CASE(27)
		ReverseNode_Next_CASE(28)
		ReverseNode_Next_CASE(29)
		ReverseNode_Next_CASE(30)
		ReverseNode_Next_CASE(31)
		ReverseNode_Next_CASE(32)
		ReverseNode_Next_CASE(33)
		ReverseNode_Next_CASE(34)
		ReverseNode_Next_CASE(35)
		ReverseNode_Next_CASE(36)
		ReverseNode_Next_CASE(37)
		ReverseNode_Next_CASE(38)
		ReverseNode_Next_CASE(39)
		ReverseNode_Next_CASE(40)
		ReverseNode_Next_CASE(41)
		ReverseNode_Next_CASE(42)
		ReverseNode_Next_CASE(43)
		ReverseNode_Next_CASE(44)
		ReverseNode_Next_CASE(45)
		ReverseNode_Next_CASE(46)
		ReverseNode_Next_CASE(47)
		ReverseNode_Next_CASE(48)
		ReverseNode_Next_CASE(49)
		ReverseNode_Next_CASE(50)
		ReverseNode_Next_CASE(51)
		ReverseNode_Next_CASE(52)
		ReverseNode_Next_CASE(53)
		ReverseNode_Next_CASE(54)
		ReverseNode_Next_CASE(55)
		ReverseNode_Next_CASE(56)
		ReverseNode_Next_CASE(57)
		ReverseNode_Next_CASE(58)
		ReverseNode_Next_CASE(59)
		ReverseNode_Next_CASE(60)
		ReverseNode_Next_CASE(61)
		ReverseNode_Next_CASE(62)
		ReverseNode_Next_CASE(63)
		ReverseNode_Next_CASE(64)
		ReverseNode_Next_CASE(65)
		ReverseNode_Next_CASE(66)
		ReverseNode_Next_CASE(67)
		ReverseNode_Next_CASE(68)
		ReverseNode_Next_CASE(69)
		ReverseNode_Next_CASE(70)
		ReverseNode_Next_CASE(71)
		ReverseNode_Next_CASE(72)
		ReverseNode_Next_CASE(73)
		ReverseNode_Next_CASE(74)
		ReverseNode_Next_CASE(75)
		ReverseNode_Next_CASE(76)
		ReverseNode_Next_CASE(77)
		ReverseNode_Next_CASE(78)
		ReverseNode_Next_CASE(79)
		ReverseNode_Next_CASE(80)
		ReverseNode_Next_CASE(81)
		ReverseNode_Next_CASE(82)
		ReverseNode_Next_CASE(83)
		ReverseNode_Next_CASE(84)
		ReverseNode_Next_CASE(85)
		ReverseNode_Next_CASE(86)
		ReverseNode_Next_CASE(87)
		ReverseNode_Next_CASE(88)
		ReverseNode_Next_CASE(89)
		ReverseNode_Next_CASE(90)
		ReverseNode_Next_CASE(91)
		ReverseNode_Next_CASE(92)
		ReverseNode_Next_CASE(93)
		ReverseNode_Next_CASE(94)
		ReverseNode_Next_CASE(95)
		ReverseNode_Next_CASE(96)
		ReverseNode_Next_CASE(97)
		ReverseNode_Next_CASE(98)
		ReverseNode_Next_CASE(99)
		ReverseNode_Next_CASE(100)
		ReverseNode_Next_CASE(101)
		ReverseNode_Next_CASE(102)
		ReverseNode_Next_CASE(103)
		ReverseNode_Next_CASE(104)
		ReverseNode_Next_CASE(105)
		ReverseNode_Next_CASE(106)
		ReverseNode_Next_CASE(107)
		ReverseNode_Next_CASE(108)
		ReverseNode_Next_CASE(109)
		ReverseNode_Next_CASE(110)
		ReverseNode_Next_CASE(111)
		ReverseNode_Next_CASE(112)
		ReverseNode_Next_CASE(113)
		ReverseNode_Next_CASE(114)
		ReverseNode_Next_CASE(115)
		ReverseNode_Next_CASE(116)
		ReverseNode_Next_CASE(117)
		ReverseNode_Next_CASE(118)
		ReverseNode_Next_CASE(119)
		ReverseNode_Next_CASE(120)
		ReverseNode_Next_CASE(121)
		ReverseNode_Next_CASE(122)
		ReverseNode_Next_CASE(123)
		ReverseNode_Next_CASE(124)
		ReverseNode_Next_CASE(125)
		ReverseNode_Next_CASE(126)
		ReverseNode_Next_CASE(127)
		ReverseNode_Next_CASE(128)
		ReverseNode_Next_CASE(129)
		ReverseNode_Next_CASE(130)
		ReverseNode_Next_CASE(131)
		ReverseNode_Next_CASE(132)
		ReverseNode_Next_CASE(133)
		ReverseNode_Next_CASE(134)
		ReverseNode_Next_CASE(135)
		ReverseNode_Next_CASE(136)
		ReverseNode_Next_CASE(137)
		ReverseNode_Next_CASE(138)
		ReverseNode_Next_CASE(139)
		ReverseNode_Next_CASE(140)
		ReverseNode_Next_CASE(141)
		ReverseNode_Next_CASE(142)
		ReverseNode_Next_CASE(143)
		ReverseNode_Next_CASE(144)
		ReverseNode_Next_CASE(145)
		ReverseNode_Next_CASE(146)
		ReverseNode_Next_CASE(147)
		ReverseNode_Next_CASE(148)
		ReverseNode_Next_CASE(149)
		ReverseNode_Next_CASE(150)
		ReverseNode_Next_CASE(151)
		ReverseNode_Next_CASE(152)
		ReverseNode_Next_CASE(153)
		ReverseNode_Next_CASE(154)
		ReverseNode_Next_CASE(155)
		ReverseNode_Next_CASE(156)
		ReverseNode_Next_CASE(157)
		ReverseNode_Next_CASE(158)
		ReverseNode_Next_CASE(159)
		ReverseNode_Next_CASE(160)
		ReverseNode_Next_CASE(161)
		ReverseNode_Next_CASE(162)
		ReverseNode_Next_CASE(163)
		ReverseNode_Next_CASE(164)
		ReverseNode_Next_CASE(165)
		ReverseNode_Next_CASE(166)
		ReverseNode_Next_CASE(167)
		ReverseNode_Next_CASE(168)
		ReverseNode_Next_CASE(169)
		ReverseNode_Next_CASE(170)
		ReverseNode_Next_CASE(171)
		ReverseNode_Next_CASE(172)
		ReverseNode_Next_CASE(173)
		ReverseNode_Next_CASE(174)
		ReverseNode_Next_CASE(175)
		ReverseNode_Next_CASE(176)
		ReverseNode_Next_CASE(177)
		ReverseNode_Next_CASE(178)
		ReverseNode_Next_CASE(179)
		ReverseNode_Next_CASE(180)
		ReverseNode_Next_CASE(181)
		ReverseNode_Next_CASE(182)
		ReverseNode_Next_CASE(183)
		ReverseNode_Next_CASE(184)
		ReverseNode_Next_CASE(185)
		ReverseNode_Next_CASE(186)
		ReverseNode_Next_CASE(187)
		ReverseNode_Next_CASE(188)
		ReverseNode_Next_CASE(189)
		ReverseNode_Next_CASE(190)
		ReverseNode_Next_CASE(191)
		ReverseNode_Next_CASE(192)
		ReverseNode_Next_CASE(193)
		ReverseNode_Next_CASE(194)
		ReverseNode_Next_CASE(195)
		ReverseNode_Next_CASE(196)
	}
}

#define ReverseNode_Previous_CASE(NUM) \
	case NUM: \
		(*(reverseNodeUnion->CPPreversenode##NUM))--; \
		return;

generic<typename Key, typename Value>
void MultiMapWapper::CShorpReverseNode<Key, Value>::Previous()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		ReverseNode_Previous_CASE(1)
		ReverseNode_Previous_CASE(2)
		ReverseNode_Previous_CASE(3)
		ReverseNode_Previous_CASE(4)
		ReverseNode_Previous_CASE(5)
		ReverseNode_Previous_CASE(6)
		ReverseNode_Previous_CASE(7)
		ReverseNode_Previous_CASE(8)
		ReverseNode_Previous_CASE(9)
		ReverseNode_Previous_CASE(10)
		ReverseNode_Previous_CASE(11)
		ReverseNode_Previous_CASE(12)
		ReverseNode_Previous_CASE(13)
		ReverseNode_Previous_CASE(14)
		ReverseNode_Previous_CASE(15)
		ReverseNode_Previous_CASE(16)
		ReverseNode_Previous_CASE(17)
		ReverseNode_Previous_CASE(18)
		ReverseNode_Previous_CASE(19)
		ReverseNode_Previous_CASE(20)
		ReverseNode_Previous_CASE(21)
		ReverseNode_Previous_CASE(22)
		ReverseNode_Previous_CASE(23)
		ReverseNode_Previous_CASE(24)
		ReverseNode_Previous_CASE(25)
		ReverseNode_Previous_CASE(26)
		ReverseNode_Previous_CASE(27)
		ReverseNode_Previous_CASE(28)
		ReverseNode_Previous_CASE(29)
		ReverseNode_Previous_CASE(30)
		ReverseNode_Previous_CASE(31)
		ReverseNode_Previous_CASE(32)
		ReverseNode_Previous_CASE(33)
		ReverseNode_Previous_CASE(34)
		ReverseNode_Previous_CASE(35)
		ReverseNode_Previous_CASE(36)
		ReverseNode_Previous_CASE(37)
		ReverseNode_Previous_CASE(38)
		ReverseNode_Previous_CASE(39)
		ReverseNode_Previous_CASE(40)
		ReverseNode_Previous_CASE(41)
		ReverseNode_Previous_CASE(42)
		ReverseNode_Previous_CASE(43)
		ReverseNode_Previous_CASE(44)
		ReverseNode_Previous_CASE(45)
		ReverseNode_Previous_CASE(46)
		ReverseNode_Previous_CASE(47)
		ReverseNode_Previous_CASE(48)
		ReverseNode_Previous_CASE(49)
		ReverseNode_Previous_CASE(50)
		ReverseNode_Previous_CASE(51)
		ReverseNode_Previous_CASE(52)
		ReverseNode_Previous_CASE(53)
		ReverseNode_Previous_CASE(54)
		ReverseNode_Previous_CASE(55)
		ReverseNode_Previous_CASE(56)
		ReverseNode_Previous_CASE(57)
		ReverseNode_Previous_CASE(58)
		ReverseNode_Previous_CASE(59)
		ReverseNode_Previous_CASE(60)
		ReverseNode_Previous_CASE(61)
		ReverseNode_Previous_CASE(62)
		ReverseNode_Previous_CASE(63)
		ReverseNode_Previous_CASE(64)
		ReverseNode_Previous_CASE(65)
		ReverseNode_Previous_CASE(66)
		ReverseNode_Previous_CASE(67)
		ReverseNode_Previous_CASE(68)
		ReverseNode_Previous_CASE(69)
		ReverseNode_Previous_CASE(70)
		ReverseNode_Previous_CASE(71)
		ReverseNode_Previous_CASE(72)
		ReverseNode_Previous_CASE(73)
		ReverseNode_Previous_CASE(74)
		ReverseNode_Previous_CASE(75)
		ReverseNode_Previous_CASE(76)
		ReverseNode_Previous_CASE(77)
		ReverseNode_Previous_CASE(78)
		ReverseNode_Previous_CASE(79)
		ReverseNode_Previous_CASE(80)
		ReverseNode_Previous_CASE(81)
		ReverseNode_Previous_CASE(82)
		ReverseNode_Previous_CASE(83)
		ReverseNode_Previous_CASE(84)
		ReverseNode_Previous_CASE(85)
		ReverseNode_Previous_CASE(86)
		ReverseNode_Previous_CASE(87)
		ReverseNode_Previous_CASE(88)
		ReverseNode_Previous_CASE(89)
		ReverseNode_Previous_CASE(90)
		ReverseNode_Previous_CASE(91)
		ReverseNode_Previous_CASE(92)
		ReverseNode_Previous_CASE(93)
		ReverseNode_Previous_CASE(94)
		ReverseNode_Previous_CASE(95)
		ReverseNode_Previous_CASE(96)
		ReverseNode_Previous_CASE(97)
		ReverseNode_Previous_CASE(98)
		ReverseNode_Previous_CASE(99)
		ReverseNode_Previous_CASE(100)
		ReverseNode_Previous_CASE(101)
		ReverseNode_Previous_CASE(102)
		ReverseNode_Previous_CASE(103)
		ReverseNode_Previous_CASE(104)
		ReverseNode_Previous_CASE(105)
		ReverseNode_Previous_CASE(106)
		ReverseNode_Previous_CASE(107)
		ReverseNode_Previous_CASE(108)
		ReverseNode_Previous_CASE(109)
		ReverseNode_Previous_CASE(110)
		ReverseNode_Previous_CASE(111)
		ReverseNode_Previous_CASE(112)
		ReverseNode_Previous_CASE(113)
		ReverseNode_Previous_CASE(114)
		ReverseNode_Previous_CASE(115)
		ReverseNode_Previous_CASE(116)
		ReverseNode_Previous_CASE(117)
		ReverseNode_Previous_CASE(118)
		ReverseNode_Previous_CASE(119)
		ReverseNode_Previous_CASE(120)
		ReverseNode_Previous_CASE(121)
		ReverseNode_Previous_CASE(122)
		ReverseNode_Previous_CASE(123)
		ReverseNode_Previous_CASE(124)
		ReverseNode_Previous_CASE(125)
		ReverseNode_Previous_CASE(126)
		ReverseNode_Previous_CASE(127)
		ReverseNode_Previous_CASE(128)
		ReverseNode_Previous_CASE(129)
		ReverseNode_Previous_CASE(130)
		ReverseNode_Previous_CASE(131)
		ReverseNode_Previous_CASE(132)
		ReverseNode_Previous_CASE(133)
		ReverseNode_Previous_CASE(134)
		ReverseNode_Previous_CASE(135)
		ReverseNode_Previous_CASE(136)
		ReverseNode_Previous_CASE(137)
		ReverseNode_Previous_CASE(138)
		ReverseNode_Previous_CASE(139)
		ReverseNode_Previous_CASE(140)
		ReverseNode_Previous_CASE(141)
		ReverseNode_Previous_CASE(142)
		ReverseNode_Previous_CASE(143)
		ReverseNode_Previous_CASE(144)
		ReverseNode_Previous_CASE(145)
		ReverseNode_Previous_CASE(146)
		ReverseNode_Previous_CASE(147)
		ReverseNode_Previous_CASE(148)
		ReverseNode_Previous_CASE(149)
		ReverseNode_Previous_CASE(150)
		ReverseNode_Previous_CASE(151)
		ReverseNode_Previous_CASE(152)
		ReverseNode_Previous_CASE(153)
		ReverseNode_Previous_CASE(154)
		ReverseNode_Previous_CASE(155)
		ReverseNode_Previous_CASE(156)
		ReverseNode_Previous_CASE(157)
		ReverseNode_Previous_CASE(158)
		ReverseNode_Previous_CASE(159)
		ReverseNode_Previous_CASE(160)
		ReverseNode_Previous_CASE(161)
		ReverseNode_Previous_CASE(162)
		ReverseNode_Previous_CASE(163)
		ReverseNode_Previous_CASE(164)
		ReverseNode_Previous_CASE(165)
		ReverseNode_Previous_CASE(166)
		ReverseNode_Previous_CASE(167)
		ReverseNode_Previous_CASE(168)
		ReverseNode_Previous_CASE(169)
		ReverseNode_Previous_CASE(170)
		ReverseNode_Previous_CASE(171)
		ReverseNode_Previous_CASE(172)
		ReverseNode_Previous_CASE(173)
		ReverseNode_Previous_CASE(174)
		ReverseNode_Previous_CASE(175)
		ReverseNode_Previous_CASE(176)
		ReverseNode_Previous_CASE(177)
		ReverseNode_Previous_CASE(178)
		ReverseNode_Previous_CASE(179)
		ReverseNode_Previous_CASE(180)
		ReverseNode_Previous_CASE(181)
		ReverseNode_Previous_CASE(182)
		ReverseNode_Previous_CASE(183)
		ReverseNode_Previous_CASE(184)
		ReverseNode_Previous_CASE(185)
		ReverseNode_Previous_CASE(186)
		ReverseNode_Previous_CASE(187)
		ReverseNode_Previous_CASE(188)
		ReverseNode_Previous_CASE(189)
		ReverseNode_Previous_CASE(190)
		ReverseNode_Previous_CASE(191)
		ReverseNode_Previous_CASE(192)
		ReverseNode_Previous_CASE(193)
		ReverseNode_Previous_CASE(194)
		ReverseNode_Previous_CASE(195)
		ReverseNode_Previous_CASE(196)
	}
}


generic<typename Key, typename Value>
Value MultiMapWapper::CShorpReverseNode<Key, Value>::GetValue()
{
	if (this == nullptr) return Value();
	if (isInitialized == 0) return Value();
	System::Object^ managedValue;
	Value objtarget;
	switch (nKeyValueType)
	{
	case 0: default:
		return Value();
	case 1:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode1->GetValue());
		return safe_cast<Value>(managedValue);
	case 2:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode2->GetValue());
		return safe_cast<Value>(managedValue);
	case 3:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode3->GetValue());
		return safe_cast<Value>(managedValue);
	case 4:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode4->GetValue());
		return safe_cast<Value>(managedValue);
	case 5:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode5->GetValue());
		return safe_cast<Value>(managedValue);
	case 6:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode6->GetValue());
		return safe_cast<Value>(managedValue);
	case 7:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode7->GetValue());
		return safe_cast<Value>(managedValue);
	case 8:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode8->GetValue());
		return safe_cast<Value>(managedValue);
	case 9:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode9->GetValue());
		return safe_cast<Value>(managedValue);
	case 10:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode10->GetValue());
		return safe_cast<Value>(managedValue);
	case 11:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode11->GetValue());
		return safe_cast<Value>(managedValue);
	case 12:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode12->GetValue());
		return safe_cast<Value>(managedValue);
	case 13:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode13->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 15:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode15->GetValue());
		return safe_cast<Value>(managedValue);
	case 16:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode16->GetValue());
		return safe_cast<Value>(managedValue);
	case 17:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode17->GetValue());
		return safe_cast<Value>(managedValue);
	case 18:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode18->GetValue());
		return safe_cast<Value>(managedValue);
	case 19:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode19->GetValue());
		return safe_cast<Value>(managedValue);
	case 20:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode20->GetValue());
		return safe_cast<Value>(managedValue);
	case 21:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode21->GetValue());
		return safe_cast<Value>(managedValue);
	case 22:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode22->GetValue());
		return safe_cast<Value>(managedValue);
	case 23:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode23->GetValue());
		return safe_cast<Value>(managedValue);
	case 24:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode24->GetValue());
		return safe_cast<Value>(managedValue);
	case 25:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode25->GetValue());
		return safe_cast<Value>(managedValue);
	case 26:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode26->GetValue());
		return safe_cast<Value>(managedValue);
	case 27:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode27->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 29:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode29->GetValue());
		return safe_cast<Value>(managedValue);
	case 30:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode30->GetValue());
		return safe_cast<Value>(managedValue);
	case 31:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode31->GetValue());
		return safe_cast<Value>(managedValue);
	case 32:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode32->GetValue());
		return safe_cast<Value>(managedValue);
	case 33:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode33->GetValue());
		return safe_cast<Value>(managedValue);
	case 34:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode34->GetValue());
		return safe_cast<Value>(managedValue);
	case 35:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode35->GetValue());
		return safe_cast<Value>(managedValue);
	case 36:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode36->GetValue());
		return safe_cast<Value>(managedValue);
	case 37:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode37->GetValue());
		return safe_cast<Value>(managedValue);
	case 38:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode38->GetValue());
		return safe_cast<Value>(managedValue);
	case 39:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode39->GetValue());
		return safe_cast<Value>(managedValue);
	case 40:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode40->GetValue());
		return safe_cast<Value>(managedValue);
	case 41:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode41->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 43:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode43->GetValue());
		return safe_cast<Value>(managedValue);
	case 44:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode44->GetValue());
		return safe_cast<Value>(managedValue);
	case 45:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode45->GetValue());
		return safe_cast<Value>(managedValue);
	case 46:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode46->GetValue());
		return safe_cast<Value>(managedValue);
	case 47:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode47->GetValue());
		return safe_cast<Value>(managedValue);
	case 48:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode48->GetValue());
		return safe_cast<Value>(managedValue);
	case 49:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode49->GetValue());
		return safe_cast<Value>(managedValue);
	case 50:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode50->GetValue());
		return safe_cast<Value>(managedValue);
	case 51:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode51->GetValue());
		return safe_cast<Value>(managedValue);
	case 52:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode52->GetValue());
		return safe_cast<Value>(managedValue);
	case 53:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode53->GetValue());
		return safe_cast<Value>(managedValue);
	case 54:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode54->GetValue());
		return safe_cast<Value>(managedValue);
	case 55:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode55->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 57:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode57->GetValue());
		return safe_cast<Value>(managedValue);
	case 58:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode58->GetValue());
		return safe_cast<Value>(managedValue);
	case 59:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode59->GetValue());
		return safe_cast<Value>(managedValue);
	case 60:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode60->GetValue());
		return safe_cast<Value>(managedValue);
	case 61:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode61->GetValue());
		return safe_cast<Value>(managedValue);
	case 62:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode62->GetValue());
		return safe_cast<Value>(managedValue);
	case 63:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode63->GetValue());
		return safe_cast<Value>(managedValue);
	case 64:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode64->GetValue());
		return safe_cast<Value>(managedValue);
	case 65:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode65->GetValue());
		return safe_cast<Value>(managedValue);
	case 66:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode66->GetValue());
		return safe_cast<Value>(managedValue);
	case 67:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode67->GetValue());
		return safe_cast<Value>(managedValue);
	case 68:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode68->GetValue());
		return safe_cast<Value>(managedValue);
	case 69:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode69->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 71:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode71->GetValue());
		return safe_cast<Value>(managedValue);
	case 72:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode72->GetValue());
		return safe_cast<Value>(managedValue);
	case 73:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode73->GetValue());
		return safe_cast<Value>(managedValue);
	case 74:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode74->GetValue());
		return safe_cast<Value>(managedValue);
	case 75:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode75->GetValue());
		return safe_cast<Value>(managedValue);
	case 76:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode76->GetValue());
		return safe_cast<Value>(managedValue);
	case 77:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode77->GetValue());
		return safe_cast<Value>(managedValue);
	case 78:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode78->GetValue());
		return safe_cast<Value>(managedValue);
	case 79:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode79->GetValue());
		return safe_cast<Value>(managedValue);
	case 80:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode80->GetValue());
		return safe_cast<Value>(managedValue);
	case 81:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode81->GetValue());
		return safe_cast<Value>(managedValue);
	case 82:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode82->GetValue());
		return safe_cast<Value>(managedValue);
	case 83:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode83->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 85:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode85->GetValue());
		return safe_cast<Value>(managedValue);
	case 86:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode86->GetValue());
		return safe_cast<Value>(managedValue);
	case 87:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode87->GetValue());
		return safe_cast<Value>(managedValue);
	case 88:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode88->GetValue());
		return safe_cast<Value>(managedValue);
	case 89:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode89->GetValue());
		return safe_cast<Value>(managedValue);
	case 90:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode90->GetValue());
		return safe_cast<Value>(managedValue);
	case 91:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode91->GetValue());
		return safe_cast<Value>(managedValue);
	case 92:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode92->GetValue());
		return safe_cast<Value>(managedValue);
	case 93:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode93->GetValue());
		return safe_cast<Value>(managedValue);
	case 94:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode94->GetValue());
		return safe_cast<Value>(managedValue);
	case 95:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode95->GetValue());
		return safe_cast<Value>(managedValue);
	case 96:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode96->GetValue());
		return safe_cast<Value>(managedValue);
	case 97:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode97->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 99:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode99->GetValue());
		return safe_cast<Value>(managedValue);
	case 100:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode100->GetValue());
		return safe_cast<Value>(managedValue);
	case 101:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode101->GetValue());
		return safe_cast<Value>(managedValue);
	case 102:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode102->GetValue());
		return safe_cast<Value>(managedValue);
	case 103:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode103->GetValue());
		return safe_cast<Value>(managedValue);
	case 104:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode104->GetValue());
		return safe_cast<Value>(managedValue);
	case 105:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode105->GetValue());
		return safe_cast<Value>(managedValue);
	case 106:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode106->GetValue());
		return safe_cast<Value>(managedValue);
	case 107:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode107->GetValue());
		return safe_cast<Value>(managedValue);
	case 108:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode108->GetValue());
		return safe_cast<Value>(managedValue);
	case 109:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode109->GetValue());
		return safe_cast<Value>(managedValue);
	case 110:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode110->GetValue());
		return safe_cast<Value>(managedValue);
	case 111:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode111->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 113:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode113->GetValue());
		return safe_cast<Value>(managedValue);
	case 114:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode114->GetValue());
		return safe_cast<Value>(managedValue);
	case 115:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode115->GetValue());
		return safe_cast<Value>(managedValue);
	case 116:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode116->GetValue());
		return safe_cast<Value>(managedValue);
	case 117:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode117->GetValue());
		return safe_cast<Value>(managedValue);
	case 118:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode118->GetValue());
		return safe_cast<Value>(managedValue);
	case 119:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode119->GetValue());
		return safe_cast<Value>(managedValue);
	case 120:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode120->GetValue());
		return safe_cast<Value>(managedValue);
	case 121:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode121->GetValue());
		return safe_cast<Value>(managedValue);
	case 122:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode122->GetValue());
		return safe_cast<Value>(managedValue);
	case 123:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode123->GetValue());
		return safe_cast<Value>(managedValue);
	case 124:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode124->GetValue());
		return safe_cast<Value>(managedValue);
	case 125:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode125->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 127:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode127->GetValue());
		return safe_cast<Value>(managedValue);
	case 128:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode128->GetValue());
		return safe_cast<Value>(managedValue);
	case 129:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode129->GetValue());
		return safe_cast<Value>(managedValue);
	case 130:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode130->GetValue());
		return safe_cast<Value>(managedValue);
	case 131:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode131->GetValue());
		return safe_cast<Value>(managedValue);
	case 132:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode132->GetValue());
		return safe_cast<Value>(managedValue);
	case 133:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode133->GetValue());
		return safe_cast<Value>(managedValue);
	case 134:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode134->GetValue());
		return safe_cast<Value>(managedValue);
	case 135:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode135->GetValue());
		return safe_cast<Value>(managedValue);
	case 136:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode136->GetValue());
		return safe_cast<Value>(managedValue);
	case 137:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode137->GetValue());
		return safe_cast<Value>(managedValue);
	case 138:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode138->GetValue());
		return safe_cast<Value>(managedValue);
	case 139:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode139->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 141:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode141->GetValue());
		return safe_cast<Value>(managedValue);
	case 142:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode142->GetValue());
		return safe_cast<Value>(managedValue);
	case 143:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode143->GetValue());
		return safe_cast<Value>(managedValue);
	case 144:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode144->GetValue());
		return safe_cast<Value>(managedValue);
	case 145:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode145->GetValue());
		return safe_cast<Value>(managedValue);
	case 146:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode146->GetValue());
		return safe_cast<Value>(managedValue);
	case 147:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode147->GetValue());
		return safe_cast<Value>(managedValue);
	case 148:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode148->GetValue());
		return safe_cast<Value>(managedValue);
	case 149:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode149->GetValue());
		return safe_cast<Value>(managedValue);
	case 150:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode150->GetValue());
		return safe_cast<Value>(managedValue);
	case 151:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode151->GetValue());
		return safe_cast<Value>(managedValue);
	case 152:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode152->GetValue());
		return safe_cast<Value>(managedValue);
	case 153:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode153->GetValue().c_str());
		return safe_cast<Value>(managedValue);

	case 155:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode155->GetValue());
		return safe_cast<Value>(managedValue);
	case 156:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode156->GetValue());
		return safe_cast<Value>(managedValue);
	case 157:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode157->GetValue());
		return safe_cast<Value>(managedValue);
	case 158:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode158->GetValue());
		return safe_cast<Value>(managedValue);
	case 159:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode159->GetValue());
		return safe_cast<Value>(managedValue);
	case 160:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode160->GetValue());
		return safe_cast<Value>(managedValue);
	case 161:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode161->GetValue());
		return safe_cast<Value>(managedValue);
	case 162:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode162->GetValue());
		return safe_cast<Value>(managedValue);
	case 163:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode163->GetValue());
		return safe_cast<Value>(managedValue);
	case 164:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode164->GetValue());
		return safe_cast<Value>(managedValue);
	case 165:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode165->GetValue());
		return safe_cast<Value>(managedValue);
	case 166:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode166->GetValue());
		return safe_cast<Value>(managedValue);
	case 167:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode167->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 169:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode169->GetValue());
		return safe_cast<Value>(managedValue);
	case 170:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode170->GetValue());
		return safe_cast<Value>(managedValue);
	case 171:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode171->GetValue());
		return safe_cast<Value>(managedValue);
	case 172:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode172->GetValue());
		return safe_cast<Value>(managedValue);
	case 173:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode173->GetValue());
		return safe_cast<Value>(managedValue);
	case 174:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode174->GetValue());
		return safe_cast<Value>(managedValue);
	case 175:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode175->GetValue());
		return safe_cast<Value>(managedValue);
	case 176:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode176->GetValue());
		return safe_cast<Value>(managedValue);
	case 177:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode177->GetValue());
		return safe_cast<Value>(managedValue);
	case 178:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode178->GetValue());
		return safe_cast<Value>(managedValue);
	case 179:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode179->GetValue());
		return safe_cast<Value>(managedValue);
	case 180:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode180->GetValue());
		return safe_cast<Value>(managedValue);
	case 181:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode181->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 183:
		managedValue = gcnew System::Byte(reverseNodeUnion->CPPreversenode183->GetValue());
		return safe_cast<Value>(managedValue);
	case 184:
		managedValue = gcnew System::SByte(reverseNodeUnion->CPPreversenode184->GetValue());
		return safe_cast<Value>(managedValue);
	case 185:
		managedValue = gcnew System::Int16(reverseNodeUnion->CPPreversenode185->GetValue());
		return safe_cast<Value>(managedValue);
	case 186:
		managedValue = gcnew System::UInt16(reverseNodeUnion->CPPreversenode186->GetValue());
		return safe_cast<Value>(managedValue);
	case 187:
		managedValue = gcnew System::Int32(reverseNodeUnion->CPPreversenode187->GetValue());
		return safe_cast<Value>(managedValue);
	case 188:
		managedValue = gcnew System::UInt32(reverseNodeUnion->CPPreversenode188->GetValue());
		return safe_cast<Value>(managedValue);
	case 189:
		managedValue = gcnew System::Int64(reverseNodeUnion->CPPreversenode189->GetValue());
		return safe_cast<Value>(managedValue);
	case 190:
		managedValue = gcnew System::UInt64(reverseNodeUnion->CPPreversenode190->GetValue());
		return safe_cast<Value>(managedValue);
	case 191:
		managedValue = gcnew System::Single(reverseNodeUnion->CPPreversenode191->GetValue());
		return safe_cast<Value>(managedValue);
	case 192:
		managedValue = gcnew System::Double(reverseNodeUnion->CPPreversenode192->GetValue());
		return safe_cast<Value>(managedValue);
	case 193:
		managedValue = gcnew System::Char(reverseNodeUnion->CPPreversenode193->GetValue());
		return safe_cast<Value>(managedValue);
	case 194:
		managedValue = gcnew System::Boolean(reverseNodeUnion->CPPreversenode194->GetValue());
		return safe_cast<Value>(managedValue);
	case 195:
		managedValue = gcnew String(reverseNodeUnion->CPPreversenode195->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 14:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode14->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 28:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode28->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 42:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode42->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 56:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode56->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 70:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode70->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 84:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode84->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 98:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode98->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 112:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode112->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 126:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode126->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 140:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode140->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 154:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode154->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 168:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode168->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 182:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode182->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode196->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Value();
}

generic<typename Key, typename Value>
Key MultiMapWapper::CShorpReverseNode<Key, Value>::GetKey()
{
	if (Object::ReferenceEquals(this, nullptr)) return Key();
	if (isInitialized == 0) return Key();
	System::Object^ managedKey;
	Key objtarget;
	switch (nKeyValueType)
	{
	case 0: default:
		return Key();
	case 1:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode1->GetKey());
		return safe_cast<Key>(managedKey);
	case 2:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode2->GetKey());
		return safe_cast<Key>(managedKey);
	case 3:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode3->GetKey());
		return safe_cast<Key>(managedKey);
	case 4:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode4->GetKey());
		return safe_cast<Key>(managedKey);
	case 5:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode5->GetKey());
		return safe_cast<Key>(managedKey);
	case 6:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode6->GetKey());
		return safe_cast<Key>(managedKey);
	case 7:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode7->GetKey());
		return safe_cast<Key>(managedKey);
	case 8:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode8->GetKey());
		return safe_cast<Key>(managedKey);
	case 9:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode9->GetKey());
		return safe_cast<Key>(managedKey);
	case 10:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode10->GetKey());
		return safe_cast<Key>(managedKey);
	case 11:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode11->GetKey());
		return safe_cast<Key>(managedKey);
	case 12:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode12->GetKey());
		return safe_cast<Key>(managedKey);
	case 13:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode13->GetKey());
		return safe_cast<Key>(managedKey);
	case 14:
		managedKey = gcnew System::Byte(reverseNodeUnion->CPPreversenode14->GetKey());
		return safe_cast<Key>(managedKey);
	case 15:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode15->GetKey());
		return safe_cast<Key>(managedKey);
	case 16:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode16->GetKey());
		return safe_cast<Key>(managedKey);
	case 17:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode17->GetKey());
		return safe_cast<Key>(managedKey);
	case 18:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode18->GetKey());
		return safe_cast<Key>(managedKey);
	case 19:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode19->GetKey());
		return safe_cast<Key>(managedKey);
	case 20:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode20->GetKey());
		return safe_cast<Key>(managedKey);
	case 21:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode21->GetKey());
		return safe_cast<Key>(managedKey);
	case 22:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode22->GetKey());
		return safe_cast<Key>(managedKey);
	case 23:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode23->GetKey());
		return safe_cast<Key>(managedKey);
	case 24:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode24->GetKey());
		return safe_cast<Key>(managedKey);
	case 25:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode25->GetKey());
		return safe_cast<Key>(managedKey);
	case 26:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode26->GetKey());
		return safe_cast<Key>(managedKey);
	case 27:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode27->GetKey());
		return safe_cast<Key>(managedKey);
	case 28:
		managedKey = gcnew System::SByte(reverseNodeUnion->CPPreversenode28->GetKey());
		return safe_cast<Key>(managedKey);
	case 29:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode29->GetKey());
		return safe_cast<Key>(managedKey);
	case 30:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode30->GetKey());
		return safe_cast<Key>(managedKey);
	case 31:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode31->GetKey());
		return safe_cast<Key>(managedKey);
	case 32:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode32->GetKey());
		return safe_cast<Key>(managedKey);
	case 33:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode33->GetKey());
		return safe_cast<Key>(managedKey);
	case 34:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode34->GetKey());
		return safe_cast<Key>(managedKey);
	case 35:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode35->GetKey());
		return safe_cast<Key>(managedKey);
	case 36:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode36->GetKey());
		return safe_cast<Key>(managedKey);
	case 37:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode37->GetKey());
		return safe_cast<Key>(managedKey);
	case 38:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode38->GetKey());
		return safe_cast<Key>(managedKey);
	case 39:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode39->GetKey());
		return safe_cast<Key>(managedKey);
	case 40:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode40->GetKey());
		return safe_cast<Key>(managedKey);
	case 41:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode41->GetKey());
		return safe_cast<Key>(managedKey);
	case 42:
		managedKey = gcnew System::Int16(reverseNodeUnion->CPPreversenode42->GetKey());
		return safe_cast<Key>(managedKey);
	case 43:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode43->GetKey());
		return safe_cast<Key>(managedKey);
	case 44:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode44->GetKey());
		return safe_cast<Key>(managedKey);
	case 45:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode45->GetKey());
		return safe_cast<Key>(managedKey);
	case 46:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode46->GetKey());
		return safe_cast<Key>(managedKey);
	case 47:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode47->GetKey());
		return safe_cast<Key>(managedKey);
	case 48:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode48->GetKey());
		return safe_cast<Key>(managedKey);
	case 49:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode49->GetKey());
		return safe_cast<Key>(managedKey);
	case 50:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode50->GetKey());
		return safe_cast<Key>(managedKey);
	case 51:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode51->GetKey());
		return safe_cast<Key>(managedKey);
	case 52:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode52->GetKey());
		return safe_cast<Key>(managedKey);
	case 53:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode53->GetKey());
		return safe_cast<Key>(managedKey);
	case 54:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode54->GetKey());
		return safe_cast<Key>(managedKey);
	case 55:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode55->GetKey());
		return safe_cast<Key>(managedKey);
	case 56:
		managedKey = gcnew System::UInt16(reverseNodeUnion->CPPreversenode56->GetKey());
		return safe_cast<Key>(managedKey);
	case 57:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode57->GetKey());
		return safe_cast<Key>(managedKey);
	case 58:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode58->GetKey());
		return safe_cast<Key>(managedKey);
	case 59:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode59->GetKey());
		return safe_cast<Key>(managedKey);
	case 60:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode60->GetKey());
		return safe_cast<Key>(managedKey);
	case 61:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode61->GetKey());
		return safe_cast<Key>(managedKey);
	case 62:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode62->GetKey());
		return safe_cast<Key>(managedKey);
	case 63:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode63->GetKey());
		return safe_cast<Key>(managedKey);
	case 64:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode64->GetKey());
		return safe_cast<Key>(managedKey);
	case 65:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode65->GetKey());
		return safe_cast<Key>(managedKey);
	case 66:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode66->GetKey());
		return safe_cast<Key>(managedKey);
	case 67:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode67->GetKey());
		return safe_cast<Key>(managedKey);
	case 68:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode68->GetKey());
		return safe_cast<Key>(managedKey);
	case 69:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode69->GetKey());
		return safe_cast<Key>(managedKey);
	case 70:
		managedKey = gcnew System::Int32(reverseNodeUnion->CPPreversenode70->GetKey());
		return safe_cast<Key>(managedKey);
	case 71:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode71->GetKey());
		return safe_cast<Key>(managedKey);
	case 72:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode72->GetKey());
		return safe_cast<Key>(managedKey);
	case 73:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode73->GetKey());
		return safe_cast<Key>(managedKey);
	case 74:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode74->GetKey());
		return safe_cast<Key>(managedKey);
	case 75:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode75->GetKey());
		return safe_cast<Key>(managedKey);
	case 76:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode76->GetKey());
		return safe_cast<Key>(managedKey);
	case 77:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode77->GetKey());
		return safe_cast<Key>(managedKey);
	case 78:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode78->GetKey());
		return safe_cast<Key>(managedKey);
	case 79:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode79->GetKey());
		return safe_cast<Key>(managedKey);
	case 80:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode80->GetKey());
		return safe_cast<Key>(managedKey);
	case 81:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode81->GetKey());
		return safe_cast<Key>(managedKey);
	case 82:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode82->GetKey());
		return safe_cast<Key>(managedKey);
	case 83:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode83->GetKey());
		return safe_cast<Key>(managedKey);
	case 84:
		managedKey = gcnew System::UInt32(reverseNodeUnion->CPPreversenode84->GetKey());
		return safe_cast<Key>(managedKey);
	case 85:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode85->GetKey());
		return safe_cast<Key>(managedKey);
	case 86:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode86->GetKey());
		return safe_cast<Key>(managedKey);
	case 87:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode87->GetKey());
		return safe_cast<Key>(managedKey);
	case 88:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode88->GetKey());
		return safe_cast<Key>(managedKey);
	case 89:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode89->GetKey());
		return safe_cast<Key>(managedKey);
	case 90:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode90->GetKey());
		return safe_cast<Key>(managedKey);
	case 91:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode91->GetKey());
		return safe_cast<Key>(managedKey);
	case 92:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode92->GetKey());
		return safe_cast<Key>(managedKey);
	case 93:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode93->GetKey());
		return safe_cast<Key>(managedKey);
	case 94:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode94->GetKey());
		return safe_cast<Key>(managedKey);
	case 95:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode95->GetKey());
		return safe_cast<Key>(managedKey);
	case 96:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode96->GetKey());
		return safe_cast<Key>(managedKey);
	case 97:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode97->GetKey());
		return safe_cast<Key>(managedKey);
	case 98:
		managedKey = gcnew System::Int64(reverseNodeUnion->CPPreversenode98->GetKey());
		return safe_cast<Key>(managedKey);
	case 99:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode99->GetKey());
		return safe_cast<Key>(managedKey);
	case 100:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode100->GetKey());
		return safe_cast<Key>(managedKey);
	case 101:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode101->GetKey());
		return safe_cast<Key>(managedKey);
	case 102:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode102->GetKey());
		return safe_cast<Key>(managedKey);
	case 103:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode103->GetKey());
		return safe_cast<Key>(managedKey);
	case 104:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode104->GetKey());
		return safe_cast<Key>(managedKey);
	case 105:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode105->GetKey());
		return safe_cast<Key>(managedKey);
	case 106:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode106->GetKey());
		return safe_cast<Key>(managedKey);
	case 107:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode107->GetKey());
		return safe_cast<Key>(managedKey);
	case 108:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode108->GetKey());
		return safe_cast<Key>(managedKey);
	case 109:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode109->GetKey());
		return safe_cast<Key>(managedKey);
	case 110:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode110->GetKey());
		return safe_cast<Key>(managedKey);
	case 111:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode111->GetKey());
		return safe_cast<Key>(managedKey);
	case 112:
		managedKey = gcnew System::UInt64(reverseNodeUnion->CPPreversenode112->GetKey());
		return safe_cast<Key>(managedKey);
	case 113:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode113->GetKey());
		return safe_cast<Key>(managedKey);
	case 114:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode114->GetKey());
		return safe_cast<Key>(managedKey);
	case 115:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode115->GetKey());
		return safe_cast<Key>(managedKey);
	case 116:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode116->GetKey());
		return safe_cast<Key>(managedKey);
	case 117:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode117->GetKey());
		return safe_cast<Key>(managedKey);
	case 118:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode118->GetKey());
		return safe_cast<Key>(managedKey);
	case 119:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode119->GetKey());
		return safe_cast<Key>(managedKey);
	case 120:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode120->GetKey());
		return safe_cast<Key>(managedKey);
	case 121:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode121->GetKey());
		return safe_cast<Key>(managedKey);
	case 122:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode122->GetKey());
		return safe_cast<Key>(managedKey);
	case 123:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode123->GetKey());
		return safe_cast<Key>(managedKey);
	case 124:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode124->GetKey());
		return safe_cast<Key>(managedKey);
	case 125:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode125->GetKey());
		return safe_cast<Key>(managedKey);
	case 126:
		managedKey = gcnew System::Single(reverseNodeUnion->CPPreversenode126->GetKey());
		return safe_cast<Key>(managedKey);
	case 127:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode127->GetKey());
		return safe_cast<Key>(managedKey);
	case 128:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode128->GetKey());
		return safe_cast<Key>(managedKey);
	case 129:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode129->GetKey());
		return safe_cast<Key>(managedKey);
	case 130:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode130->GetKey());
		return safe_cast<Key>(managedKey);
	case 131:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode131->GetKey());
		return safe_cast<Key>(managedKey);
	case 132:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode132->GetKey());
		return safe_cast<Key>(managedKey);
	case 133:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode133->GetKey());
		return safe_cast<Key>(managedKey);
	case 134:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode134->GetKey());
		return safe_cast<Key>(managedKey);
	case 135:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode135->GetKey());
		return safe_cast<Key>(managedKey);
	case 136:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode136->GetKey());
		return safe_cast<Key>(managedKey);
	case 137:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode137->GetKey());
		return safe_cast<Key>(managedKey);
	case 138:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode138->GetKey());
		return safe_cast<Key>(managedKey);
	case 139:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode139->GetKey());
		return safe_cast<Key>(managedKey);
	case 140:
		managedKey = gcnew System::Double(reverseNodeUnion->CPPreversenode140->GetKey());
		return safe_cast<Key>(managedKey);
	case 141:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode141->GetKey());
		return safe_cast<Key>(managedKey);
	case 142:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode142->GetKey());
		return safe_cast<Key>(managedKey);
	case 143:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode143->GetKey());
		return safe_cast<Key>(managedKey);
	case 144:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode144->GetKey());
		return safe_cast<Key>(managedKey);
	case 145:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode145->GetKey());
		return safe_cast<Key>(managedKey);
	case 146:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode146->GetKey());
		return safe_cast<Key>(managedKey);
	case 147:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode147->GetKey());
		return safe_cast<Key>(managedKey);
	case 148:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode148->GetKey());
		return safe_cast<Key>(managedKey);
	case 149:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode149->GetKey());
		return safe_cast<Key>(managedKey);
	case 150:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode150->GetKey());
		return safe_cast<Key>(managedKey);
	case 151:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode151->GetKey());
		return safe_cast<Key>(managedKey);
	case 152:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode152->GetKey());
		return safe_cast<Key>(managedKey);
	case 153:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode153->GetKey());
		return safe_cast<Key>(managedKey);
	case 154:
		managedKey = gcnew System::Char(reverseNodeUnion->CPPreversenode154->GetKey());
		return safe_cast<Key>(managedKey);
	case 155:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode155->GetKey());
		return safe_cast<Key>(managedKey);
	case 156:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode156->GetKey());
		return safe_cast<Key>(managedKey);
	case 157:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode157->GetKey());
		return safe_cast<Key>(managedKey);
	case 158:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode158->GetKey());
		return safe_cast<Key>(managedKey);
	case 159:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode159->GetKey());
		return safe_cast<Key>(managedKey);
	case 160:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode160->GetKey());
		return safe_cast<Key>(managedKey);
	case 161:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode161->GetKey());
		return safe_cast<Key>(managedKey);
	case 162:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode162->GetKey());
		return safe_cast<Key>(managedKey);
	case 163:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode163->GetKey());
		return safe_cast<Key>(managedKey);
	case 164:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode164->GetKey());
		return safe_cast<Key>(managedKey);
	case 165:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode165->GetKey());
		return safe_cast<Key>(managedKey);
	case 166:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode166->GetKey());
		return safe_cast<Key>(managedKey);
	case 167:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode167->GetKey());
		return safe_cast<Key>(managedKey);
	case 168:
		managedKey = gcnew System::Boolean(reverseNodeUnion->CPPreversenode168->GetKey());
		return safe_cast<Key>(managedKey);
	case 169:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode169->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 170:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode170->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 171:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode171->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 172:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode172->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 173:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode173->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 174:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode174->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 175:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode175->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 176:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode176->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 177:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode177->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 178:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode178->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 179:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode179->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 180:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode180->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 181:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode181->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 182:
		managedKey = gcnew String(reverseNodeUnion->CPPreversenode182->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 183:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode183->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 184:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode184->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 185:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode185->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 186:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode186->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 187:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode187->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 188:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode188->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 189:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode189->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 190:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode190->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 191:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode191->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 192:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode192->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 193:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode193->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 194:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode194->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 195:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode195->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(reverseNodeUnion->CPPreversenode196->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Key();
}

generic<typename Key, typename Value>
MultiMapWapper::CShorpReverseNode<Key, Value>^ MultiMapWapper::CShorpReverseNode<Key, Value>::DeepCopy()
{
	CShorpReverseNode<Key, Value>^ newCopy = gcnew CShorpReverseNode<Key, Value>();
	newCopy->nKeyValueType = this->nKeyValueType;
	newCopy->isInitialized = this->isInitialized;
	newCopy %= this;
	return newCopy;
}

#define ReverseNode_Compare_Equals_CASE(NUM) \
	case NUM: \
		return (*(thisObj->reverseNodeUnion->CPPreversenode##NUM) == *(other->reverseNodeUnion->CPPreversenode##NUM));

generic<typename Key, typename Value>
bool MultiMapWapper::CShorpReverseNode<Key, Value>::operator==(const CShorpReverseNode<Key, Value>^ thisObj, const CShorpReverseNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpReverseNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpReverseNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpReverseNode<Key, Value>^>(thisObj), const_cast<MultiMapWapper::CShorpReverseNode<Key, Value>^>(other))) return true;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return false;
	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
		ReverseNode_Compare_Equals_CASE(1)
		ReverseNode_Compare_Equals_CASE(2)
		ReverseNode_Compare_Equals_CASE(3)
		ReverseNode_Compare_Equals_CASE(4)
		ReverseNode_Compare_Equals_CASE(5)
		ReverseNode_Compare_Equals_CASE(6)
		ReverseNode_Compare_Equals_CASE(7)
		ReverseNode_Compare_Equals_CASE(8)
		ReverseNode_Compare_Equals_CASE(9)
		ReverseNode_Compare_Equals_CASE(10)
		ReverseNode_Compare_Equals_CASE(11)
		ReverseNode_Compare_Equals_CASE(12)
		ReverseNode_Compare_Equals_CASE(13)
		ReverseNode_Compare_Equals_CASE(14)
		ReverseNode_Compare_Equals_CASE(15)
		ReverseNode_Compare_Equals_CASE(16)
		ReverseNode_Compare_Equals_CASE(17)
		ReverseNode_Compare_Equals_CASE(18)
		ReverseNode_Compare_Equals_CASE(19)
		ReverseNode_Compare_Equals_CASE(20)
		ReverseNode_Compare_Equals_CASE(21)
		ReverseNode_Compare_Equals_CASE(22)
		ReverseNode_Compare_Equals_CASE(23)
		ReverseNode_Compare_Equals_CASE(24)
		ReverseNode_Compare_Equals_CASE(25)
		ReverseNode_Compare_Equals_CASE(26)
		ReverseNode_Compare_Equals_CASE(27)
		ReverseNode_Compare_Equals_CASE(28)
		ReverseNode_Compare_Equals_CASE(29)
		ReverseNode_Compare_Equals_CASE(30)
		ReverseNode_Compare_Equals_CASE(31)
		ReverseNode_Compare_Equals_CASE(32)
		ReverseNode_Compare_Equals_CASE(33)
		ReverseNode_Compare_Equals_CASE(34)
		ReverseNode_Compare_Equals_CASE(35)
		ReverseNode_Compare_Equals_CASE(36)
		ReverseNode_Compare_Equals_CASE(37)
		ReverseNode_Compare_Equals_CASE(38)
		ReverseNode_Compare_Equals_CASE(39)
		ReverseNode_Compare_Equals_CASE(40)
		ReverseNode_Compare_Equals_CASE(41)
		ReverseNode_Compare_Equals_CASE(42)
		ReverseNode_Compare_Equals_CASE(43)
		ReverseNode_Compare_Equals_CASE(44)
		ReverseNode_Compare_Equals_CASE(45)
		ReverseNode_Compare_Equals_CASE(46)
		ReverseNode_Compare_Equals_CASE(47)
		ReverseNode_Compare_Equals_CASE(48)
		ReverseNode_Compare_Equals_CASE(49)
		ReverseNode_Compare_Equals_CASE(50)
		ReverseNode_Compare_Equals_CASE(51)
		ReverseNode_Compare_Equals_CASE(52)
		ReverseNode_Compare_Equals_CASE(53)
		ReverseNode_Compare_Equals_CASE(54)
		ReverseNode_Compare_Equals_CASE(55)
		ReverseNode_Compare_Equals_CASE(56)
		ReverseNode_Compare_Equals_CASE(57)
		ReverseNode_Compare_Equals_CASE(58)
		ReverseNode_Compare_Equals_CASE(59)
		ReverseNode_Compare_Equals_CASE(60)
		ReverseNode_Compare_Equals_CASE(61)
		ReverseNode_Compare_Equals_CASE(62)
		ReverseNode_Compare_Equals_CASE(63)
		ReverseNode_Compare_Equals_CASE(64)
		ReverseNode_Compare_Equals_CASE(65)
		ReverseNode_Compare_Equals_CASE(66)
		ReverseNode_Compare_Equals_CASE(67)
		ReverseNode_Compare_Equals_CASE(68)
		ReverseNode_Compare_Equals_CASE(69)
		ReverseNode_Compare_Equals_CASE(70)
		ReverseNode_Compare_Equals_CASE(71)
		ReverseNode_Compare_Equals_CASE(72)
		ReverseNode_Compare_Equals_CASE(73)
		ReverseNode_Compare_Equals_CASE(74)
		ReverseNode_Compare_Equals_CASE(75)
		ReverseNode_Compare_Equals_CASE(76)
		ReverseNode_Compare_Equals_CASE(77)
		ReverseNode_Compare_Equals_CASE(78)
		ReverseNode_Compare_Equals_CASE(79)
		ReverseNode_Compare_Equals_CASE(80)
		ReverseNode_Compare_Equals_CASE(81)
		ReverseNode_Compare_Equals_CASE(82)
		ReverseNode_Compare_Equals_CASE(83)
		ReverseNode_Compare_Equals_CASE(84)
		ReverseNode_Compare_Equals_CASE(85)
		ReverseNode_Compare_Equals_CASE(86)
		ReverseNode_Compare_Equals_CASE(87)
		ReverseNode_Compare_Equals_CASE(88)
		ReverseNode_Compare_Equals_CASE(89)
		ReverseNode_Compare_Equals_CASE(90)
		ReverseNode_Compare_Equals_CASE(91)
		ReverseNode_Compare_Equals_CASE(92)
		ReverseNode_Compare_Equals_CASE(93)
		ReverseNode_Compare_Equals_CASE(94)
		ReverseNode_Compare_Equals_CASE(95)
		ReverseNode_Compare_Equals_CASE(96)
		ReverseNode_Compare_Equals_CASE(97)
		ReverseNode_Compare_Equals_CASE(98)
		ReverseNode_Compare_Equals_CASE(99)
		ReverseNode_Compare_Equals_CASE(100)
		ReverseNode_Compare_Equals_CASE(101)
		ReverseNode_Compare_Equals_CASE(102)
		ReverseNode_Compare_Equals_CASE(103)
		ReverseNode_Compare_Equals_CASE(104)
		ReverseNode_Compare_Equals_CASE(105)
		ReverseNode_Compare_Equals_CASE(106)
		ReverseNode_Compare_Equals_CASE(107)
		ReverseNode_Compare_Equals_CASE(108)
		ReverseNode_Compare_Equals_CASE(109)
		ReverseNode_Compare_Equals_CASE(110)
		ReverseNode_Compare_Equals_CASE(111)
		ReverseNode_Compare_Equals_CASE(112)
		ReverseNode_Compare_Equals_CASE(113)
		ReverseNode_Compare_Equals_CASE(114)
		ReverseNode_Compare_Equals_CASE(115)
		ReverseNode_Compare_Equals_CASE(116)
		ReverseNode_Compare_Equals_CASE(117)
		ReverseNode_Compare_Equals_CASE(118)
		ReverseNode_Compare_Equals_CASE(119)
		ReverseNode_Compare_Equals_CASE(120)
		ReverseNode_Compare_Equals_CASE(121)
		ReverseNode_Compare_Equals_CASE(122)
		ReverseNode_Compare_Equals_CASE(123)
		ReverseNode_Compare_Equals_CASE(124)
		ReverseNode_Compare_Equals_CASE(125)
		ReverseNode_Compare_Equals_CASE(126)
		ReverseNode_Compare_Equals_CASE(127)
		ReverseNode_Compare_Equals_CASE(128)
		ReverseNode_Compare_Equals_CASE(129)
		ReverseNode_Compare_Equals_CASE(130)
		ReverseNode_Compare_Equals_CASE(131)
		ReverseNode_Compare_Equals_CASE(132)
		ReverseNode_Compare_Equals_CASE(133)
		ReverseNode_Compare_Equals_CASE(134)
		ReverseNode_Compare_Equals_CASE(135)
		ReverseNode_Compare_Equals_CASE(136)
		ReverseNode_Compare_Equals_CASE(137)
		ReverseNode_Compare_Equals_CASE(138)
		ReverseNode_Compare_Equals_CASE(139)
		ReverseNode_Compare_Equals_CASE(140)
		ReverseNode_Compare_Equals_CASE(141)
		ReverseNode_Compare_Equals_CASE(142)
		ReverseNode_Compare_Equals_CASE(143)
		ReverseNode_Compare_Equals_CASE(144)
		ReverseNode_Compare_Equals_CASE(145)
		ReverseNode_Compare_Equals_CASE(146)
		ReverseNode_Compare_Equals_CASE(147)
		ReverseNode_Compare_Equals_CASE(148)
		ReverseNode_Compare_Equals_CASE(149)
		ReverseNode_Compare_Equals_CASE(150)
		ReverseNode_Compare_Equals_CASE(151)
		ReverseNode_Compare_Equals_CASE(152)
		ReverseNode_Compare_Equals_CASE(153)
		ReverseNode_Compare_Equals_CASE(154)
		ReverseNode_Compare_Equals_CASE(155)
		ReverseNode_Compare_Equals_CASE(156)
		ReverseNode_Compare_Equals_CASE(157)
		ReverseNode_Compare_Equals_CASE(158)
		ReverseNode_Compare_Equals_CASE(159)
		ReverseNode_Compare_Equals_CASE(160)
		ReverseNode_Compare_Equals_CASE(161)
		ReverseNode_Compare_Equals_CASE(162)
		ReverseNode_Compare_Equals_CASE(163)
		ReverseNode_Compare_Equals_CASE(164)
		ReverseNode_Compare_Equals_CASE(165)
		ReverseNode_Compare_Equals_CASE(166)
		ReverseNode_Compare_Equals_CASE(167)
		ReverseNode_Compare_Equals_CASE(168)
		ReverseNode_Compare_Equals_CASE(169)
		ReverseNode_Compare_Equals_CASE(170)
		ReverseNode_Compare_Equals_CASE(171)
		ReverseNode_Compare_Equals_CASE(172)
		ReverseNode_Compare_Equals_CASE(173)
		ReverseNode_Compare_Equals_CASE(174)
		ReverseNode_Compare_Equals_CASE(175)
		ReverseNode_Compare_Equals_CASE(176)
		ReverseNode_Compare_Equals_CASE(177)
		ReverseNode_Compare_Equals_CASE(178)
		ReverseNode_Compare_Equals_CASE(179)
		ReverseNode_Compare_Equals_CASE(180)
		ReverseNode_Compare_Equals_CASE(181)
		ReverseNode_Compare_Equals_CASE(182)
		ReverseNode_Compare_Equals_CASE(183)
		ReverseNode_Compare_Equals_CASE(184)
		ReverseNode_Compare_Equals_CASE(185)
		ReverseNode_Compare_Equals_CASE(186)
		ReverseNode_Compare_Equals_CASE(187)
		ReverseNode_Compare_Equals_CASE(188)
		ReverseNode_Compare_Equals_CASE(189)
		ReverseNode_Compare_Equals_CASE(190)
		ReverseNode_Compare_Equals_CASE(191)
		ReverseNode_Compare_Equals_CASE(192)
		ReverseNode_Compare_Equals_CASE(193)
		ReverseNode_Compare_Equals_CASE(194)
		ReverseNode_Compare_Equals_CASE(195)
		ReverseNode_Compare_Equals_CASE(196)
	}
	return false;
}

#define ReverseNode_Compare_NotEquals_CASE(NUM) \
	case NUM: \
		return (*(thisObj->reverseNodeUnion->CPPreversenode##NUM) != *(other->reverseNodeUnion->CPPreversenode##NUM));

generic<typename Key, typename Value>
bool MultiMapWapper::CShorpReverseNode<Key, Value>::operator!=(const CShorpReverseNode<Key, Value>^ thisObj, const CShorpReverseNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpReverseNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpReverseNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpReverseNode<Key, Value>^>(thisObj), const_cast<MultiMapWapper::CShorpReverseNode<Key, Value>^>(other))) return false;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return true;

	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
		ReverseNode_Compare_NotEquals_CASE(1)
		ReverseNode_Compare_NotEquals_CASE(2)
		ReverseNode_Compare_NotEquals_CASE(3)
		ReverseNode_Compare_NotEquals_CASE(4)
		ReverseNode_Compare_NotEquals_CASE(5)
		ReverseNode_Compare_NotEquals_CASE(6)
		ReverseNode_Compare_NotEquals_CASE(7)
		ReverseNode_Compare_NotEquals_CASE(8)
		ReverseNode_Compare_NotEquals_CASE(9)
		ReverseNode_Compare_NotEquals_CASE(10)
		ReverseNode_Compare_NotEquals_CASE(11)
		ReverseNode_Compare_NotEquals_CASE(12)
		ReverseNode_Compare_NotEquals_CASE(13)
		ReverseNode_Compare_NotEquals_CASE(14)
		ReverseNode_Compare_NotEquals_CASE(15)
		ReverseNode_Compare_NotEquals_CASE(16)
		ReverseNode_Compare_NotEquals_CASE(17)
		ReverseNode_Compare_NotEquals_CASE(18)
		ReverseNode_Compare_NotEquals_CASE(19)
		ReverseNode_Compare_NotEquals_CASE(20)
		ReverseNode_Compare_NotEquals_CASE(21)
		ReverseNode_Compare_NotEquals_CASE(22)
		ReverseNode_Compare_NotEquals_CASE(23)
		ReverseNode_Compare_NotEquals_CASE(24)
		ReverseNode_Compare_NotEquals_CASE(25)
		ReverseNode_Compare_NotEquals_CASE(26)
		ReverseNode_Compare_NotEquals_CASE(27)
		ReverseNode_Compare_NotEquals_CASE(28)
		ReverseNode_Compare_NotEquals_CASE(29)
		ReverseNode_Compare_NotEquals_CASE(30)
		ReverseNode_Compare_NotEquals_CASE(31)
		ReverseNode_Compare_NotEquals_CASE(32)
		ReverseNode_Compare_NotEquals_CASE(33)
		ReverseNode_Compare_NotEquals_CASE(34)
		ReverseNode_Compare_NotEquals_CASE(35)
		ReverseNode_Compare_NotEquals_CASE(36)
		ReverseNode_Compare_NotEquals_CASE(37)
		ReverseNode_Compare_NotEquals_CASE(38)
		ReverseNode_Compare_NotEquals_CASE(39)
		ReverseNode_Compare_NotEquals_CASE(40)
		ReverseNode_Compare_NotEquals_CASE(41)
		ReverseNode_Compare_NotEquals_CASE(42)
		ReverseNode_Compare_NotEquals_CASE(43)
		ReverseNode_Compare_NotEquals_CASE(44)
		ReverseNode_Compare_NotEquals_CASE(45)
		ReverseNode_Compare_NotEquals_CASE(46)
		ReverseNode_Compare_NotEquals_CASE(47)
		ReverseNode_Compare_NotEquals_CASE(48)
		ReverseNode_Compare_NotEquals_CASE(49)
		ReverseNode_Compare_NotEquals_CASE(50)
		ReverseNode_Compare_NotEquals_CASE(51)
		ReverseNode_Compare_NotEquals_CASE(52)
		ReverseNode_Compare_NotEquals_CASE(53)
		ReverseNode_Compare_NotEquals_CASE(54)
		ReverseNode_Compare_NotEquals_CASE(55)
		ReverseNode_Compare_NotEquals_CASE(56)
		ReverseNode_Compare_NotEquals_CASE(57)
		ReverseNode_Compare_NotEquals_CASE(58)
		ReverseNode_Compare_NotEquals_CASE(59)
		ReverseNode_Compare_NotEquals_CASE(60)
		ReverseNode_Compare_NotEquals_CASE(61)
		ReverseNode_Compare_NotEquals_CASE(62)
		ReverseNode_Compare_NotEquals_CASE(63)
		ReverseNode_Compare_NotEquals_CASE(64)
		ReverseNode_Compare_NotEquals_CASE(65)
		ReverseNode_Compare_NotEquals_CASE(66)
		ReverseNode_Compare_NotEquals_CASE(67)
		ReverseNode_Compare_NotEquals_CASE(68)
		ReverseNode_Compare_NotEquals_CASE(69)
		ReverseNode_Compare_NotEquals_CASE(70)
		ReverseNode_Compare_NotEquals_CASE(71)
		ReverseNode_Compare_NotEquals_CASE(72)
		ReverseNode_Compare_NotEquals_CASE(73)
		ReverseNode_Compare_NotEquals_CASE(74)
		ReverseNode_Compare_NotEquals_CASE(75)
		ReverseNode_Compare_NotEquals_CASE(76)
		ReverseNode_Compare_NotEquals_CASE(77)
		ReverseNode_Compare_NotEquals_CASE(78)
		ReverseNode_Compare_NotEquals_CASE(79)
		ReverseNode_Compare_NotEquals_CASE(80)
		ReverseNode_Compare_NotEquals_CASE(81)
		ReverseNode_Compare_NotEquals_CASE(82)
		ReverseNode_Compare_NotEquals_CASE(83)
		ReverseNode_Compare_NotEquals_CASE(84)
		ReverseNode_Compare_NotEquals_CASE(85)
		ReverseNode_Compare_NotEquals_CASE(86)
		ReverseNode_Compare_NotEquals_CASE(87)
		ReverseNode_Compare_NotEquals_CASE(88)
		ReverseNode_Compare_NotEquals_CASE(89)
		ReverseNode_Compare_NotEquals_CASE(90)
		ReverseNode_Compare_NotEquals_CASE(91)
		ReverseNode_Compare_NotEquals_CASE(92)
		ReverseNode_Compare_NotEquals_CASE(93)
		ReverseNode_Compare_NotEquals_CASE(94)
		ReverseNode_Compare_NotEquals_CASE(95)
		ReverseNode_Compare_NotEquals_CASE(96)
		ReverseNode_Compare_NotEquals_CASE(97)
		ReverseNode_Compare_NotEquals_CASE(98)
		ReverseNode_Compare_NotEquals_CASE(99)
		ReverseNode_Compare_NotEquals_CASE(100)
		ReverseNode_Compare_NotEquals_CASE(101)
		ReverseNode_Compare_NotEquals_CASE(102)
		ReverseNode_Compare_NotEquals_CASE(103)
		ReverseNode_Compare_NotEquals_CASE(104)
		ReverseNode_Compare_NotEquals_CASE(105)
		ReverseNode_Compare_NotEquals_CASE(106)
		ReverseNode_Compare_NotEquals_CASE(107)
		ReverseNode_Compare_NotEquals_CASE(108)
		ReverseNode_Compare_NotEquals_CASE(109)
		ReverseNode_Compare_NotEquals_CASE(110)
		ReverseNode_Compare_NotEquals_CASE(111)
		ReverseNode_Compare_NotEquals_CASE(112)
		ReverseNode_Compare_NotEquals_CASE(113)
		ReverseNode_Compare_NotEquals_CASE(114)
		ReverseNode_Compare_NotEquals_CASE(115)
		ReverseNode_Compare_NotEquals_CASE(116)
		ReverseNode_Compare_NotEquals_CASE(117)
		ReverseNode_Compare_NotEquals_CASE(118)
		ReverseNode_Compare_NotEquals_CASE(119)
		ReverseNode_Compare_NotEquals_CASE(120)
		ReverseNode_Compare_NotEquals_CASE(121)
		ReverseNode_Compare_NotEquals_CASE(122)
		ReverseNode_Compare_NotEquals_CASE(123)
		ReverseNode_Compare_NotEquals_CASE(124)
		ReverseNode_Compare_NotEquals_CASE(125)
		ReverseNode_Compare_NotEquals_CASE(126)
		ReverseNode_Compare_NotEquals_CASE(127)
		ReverseNode_Compare_NotEquals_CASE(128)
		ReverseNode_Compare_NotEquals_CASE(129)
		ReverseNode_Compare_NotEquals_CASE(130)
		ReverseNode_Compare_NotEquals_CASE(131)
		ReverseNode_Compare_NotEquals_CASE(132)
		ReverseNode_Compare_NotEquals_CASE(133)
		ReverseNode_Compare_NotEquals_CASE(134)
		ReverseNode_Compare_NotEquals_CASE(135)
		ReverseNode_Compare_NotEquals_CASE(136)
		ReverseNode_Compare_NotEquals_CASE(137)
		ReverseNode_Compare_NotEquals_CASE(138)
		ReverseNode_Compare_NotEquals_CASE(139)
		ReverseNode_Compare_NotEquals_CASE(140)
		ReverseNode_Compare_NotEquals_CASE(141)
		ReverseNode_Compare_NotEquals_CASE(142)
		ReverseNode_Compare_NotEquals_CASE(143)
		ReverseNode_Compare_NotEquals_CASE(144)
		ReverseNode_Compare_NotEquals_CASE(145)
		ReverseNode_Compare_NotEquals_CASE(146)
		ReverseNode_Compare_NotEquals_CASE(147)
		ReverseNode_Compare_NotEquals_CASE(148)
		ReverseNode_Compare_NotEquals_CASE(149)
		ReverseNode_Compare_NotEquals_CASE(150)
		ReverseNode_Compare_NotEquals_CASE(151)
		ReverseNode_Compare_NotEquals_CASE(152)
		ReverseNode_Compare_NotEquals_CASE(153)
		ReverseNode_Compare_NotEquals_CASE(154)
		ReverseNode_Compare_NotEquals_CASE(155)
		ReverseNode_Compare_NotEquals_CASE(156)
		ReverseNode_Compare_NotEquals_CASE(157)
		ReverseNode_Compare_NotEquals_CASE(158)
		ReverseNode_Compare_NotEquals_CASE(159)
		ReverseNode_Compare_NotEquals_CASE(160)
		ReverseNode_Compare_NotEquals_CASE(161)
		ReverseNode_Compare_NotEquals_CASE(162)
		ReverseNode_Compare_NotEquals_CASE(163)
		ReverseNode_Compare_NotEquals_CASE(164)
		ReverseNode_Compare_NotEquals_CASE(165)
		ReverseNode_Compare_NotEquals_CASE(166)
		ReverseNode_Compare_NotEquals_CASE(167)
		ReverseNode_Compare_NotEquals_CASE(168)
		ReverseNode_Compare_NotEquals_CASE(169)
		ReverseNode_Compare_NotEquals_CASE(170)
		ReverseNode_Compare_NotEquals_CASE(171)
		ReverseNode_Compare_NotEquals_CASE(172)
		ReverseNode_Compare_NotEquals_CASE(173)
		ReverseNode_Compare_NotEquals_CASE(174)
		ReverseNode_Compare_NotEquals_CASE(175)
		ReverseNode_Compare_NotEquals_CASE(176)
		ReverseNode_Compare_NotEquals_CASE(177)
		ReverseNode_Compare_NotEquals_CASE(178)
		ReverseNode_Compare_NotEquals_CASE(179)
		ReverseNode_Compare_NotEquals_CASE(180)
		ReverseNode_Compare_NotEquals_CASE(181)
		ReverseNode_Compare_NotEquals_CASE(182)
		ReverseNode_Compare_NotEquals_CASE(183)
		ReverseNode_Compare_NotEquals_CASE(184)
		ReverseNode_Compare_NotEquals_CASE(185)
		ReverseNode_Compare_NotEquals_CASE(186)
		ReverseNode_Compare_NotEquals_CASE(187)
		ReverseNode_Compare_NotEquals_CASE(188)
		ReverseNode_Compare_NotEquals_CASE(189)
		ReverseNode_Compare_NotEquals_CASE(190)
		ReverseNode_Compare_NotEquals_CASE(191)
		ReverseNode_Compare_NotEquals_CASE(192)
		ReverseNode_Compare_NotEquals_CASE(193)
		ReverseNode_Compare_NotEquals_CASE(194)
		ReverseNode_Compare_NotEquals_CASE(195)
		ReverseNode_Compare_NotEquals_CASE(196)
	}
	return false;
}

#define ReverseNode_Copy_CASE(NUM) \
	case NUM: \
		(*(thisObj->reverseNodeUnion->CPPreversenode##NUM) = *(other->reverseNodeUnion->CPPreversenode##NUM)); \
		break;

generic<typename Key, typename Value>
MultiMapWapper::CShorpReverseNode<Key, Value>^ MultiMapWapper::CShorpReverseNode<Key, Value>::operator%(CShorpReverseNode<Key, Value>^ thisObj, CShorpReverseNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpReverseNode<Key, Value>^>(thisObj), nullptr)) return nullptr;
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpReverseNode<Key, Value>^>(other), nullptr)) return thisObj;
	if (other->isInitialized == 0) return thisObj;
	thisObj->isInitialized = other->isInitialized;

	if (thisObj->nKeyValueType != other->nKeyValueType) return thisObj;

	if (other->gIntKeyClassDictionary) thisObj->gIntKeyClassDictionary = other->gIntKeyClassDictionary;
	if (other->gValueClassDictionary) thisObj->gValueClassDictionary = other->gValueClassDictionary;

	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		break;
		ReverseNode_Copy_CASE(1)
		ReverseNode_Copy_CASE(2)
		ReverseNode_Copy_CASE(3)
		ReverseNode_Copy_CASE(4)
		ReverseNode_Copy_CASE(5)
		ReverseNode_Copy_CASE(6)
		ReverseNode_Copy_CASE(7)
		ReverseNode_Copy_CASE(8)
		ReverseNode_Copy_CASE(9)
		ReverseNode_Copy_CASE(10)
		ReverseNode_Copy_CASE(11)
		ReverseNode_Copy_CASE(12)
		ReverseNode_Copy_CASE(13)
		ReverseNode_Copy_CASE(14)
		ReverseNode_Copy_CASE(15)
		ReverseNode_Copy_CASE(16)
		ReverseNode_Copy_CASE(17)
		ReverseNode_Copy_CASE(18)
		ReverseNode_Copy_CASE(19)
		ReverseNode_Copy_CASE(20)
		ReverseNode_Copy_CASE(21)
		ReverseNode_Copy_CASE(22)
		ReverseNode_Copy_CASE(23)
		ReverseNode_Copy_CASE(24)
		ReverseNode_Copy_CASE(25)
		ReverseNode_Copy_CASE(26)
		ReverseNode_Copy_CASE(27)
		ReverseNode_Copy_CASE(28)
		ReverseNode_Copy_CASE(29)
		ReverseNode_Copy_CASE(30)
		ReverseNode_Copy_CASE(31)
		ReverseNode_Copy_CASE(32)
		ReverseNode_Copy_CASE(33)
		ReverseNode_Copy_CASE(34)
		ReverseNode_Copy_CASE(35)
		ReverseNode_Copy_CASE(36)
		ReverseNode_Copy_CASE(37)
		ReverseNode_Copy_CASE(38)
		ReverseNode_Copy_CASE(39)
		ReverseNode_Copy_CASE(40)
		ReverseNode_Copy_CASE(41)
		ReverseNode_Copy_CASE(42)
		ReverseNode_Copy_CASE(43)
		ReverseNode_Copy_CASE(44)
		ReverseNode_Copy_CASE(45)
		ReverseNode_Copy_CASE(46)
		ReverseNode_Copy_CASE(47)
		ReverseNode_Copy_CASE(48)
		ReverseNode_Copy_CASE(49)
		ReverseNode_Copy_CASE(50)
		ReverseNode_Copy_CASE(51)
		ReverseNode_Copy_CASE(52)
		ReverseNode_Copy_CASE(53)
		ReverseNode_Copy_CASE(54)
		ReverseNode_Copy_CASE(55)
		ReverseNode_Copy_CASE(56)
		ReverseNode_Copy_CASE(57)
		ReverseNode_Copy_CASE(58)
		ReverseNode_Copy_CASE(59)
		ReverseNode_Copy_CASE(60)
		ReverseNode_Copy_CASE(61)
		ReverseNode_Copy_CASE(62)
		ReverseNode_Copy_CASE(63)
		ReverseNode_Copy_CASE(64)
		ReverseNode_Copy_CASE(65)
		ReverseNode_Copy_CASE(66)
		ReverseNode_Copy_CASE(67)
		ReverseNode_Copy_CASE(68)
		ReverseNode_Copy_CASE(69)
		ReverseNode_Copy_CASE(70)
		ReverseNode_Copy_CASE(71)
		ReverseNode_Copy_CASE(72)
		ReverseNode_Copy_CASE(73)
		ReverseNode_Copy_CASE(74)
		ReverseNode_Copy_CASE(75)
		ReverseNode_Copy_CASE(76)
		ReverseNode_Copy_CASE(77)
		ReverseNode_Copy_CASE(78)
		ReverseNode_Copy_CASE(79)
		ReverseNode_Copy_CASE(80)
		ReverseNode_Copy_CASE(81)
		ReverseNode_Copy_CASE(82)
		ReverseNode_Copy_CASE(83)
		ReverseNode_Copy_CASE(84)
		ReverseNode_Copy_CASE(85)
		ReverseNode_Copy_CASE(86)
		ReverseNode_Copy_CASE(87)
		ReverseNode_Copy_CASE(88)
		ReverseNode_Copy_CASE(89)
		ReverseNode_Copy_CASE(90)
		ReverseNode_Copy_CASE(91)
		ReverseNode_Copy_CASE(92)
		ReverseNode_Copy_CASE(93)
		ReverseNode_Copy_CASE(94)
		ReverseNode_Copy_CASE(95)
		ReverseNode_Copy_CASE(96)
		ReverseNode_Copy_CASE(97)
		ReverseNode_Copy_CASE(98)
		ReverseNode_Copy_CASE(99)
		ReverseNode_Copy_CASE(100)
		ReverseNode_Copy_CASE(101)
		ReverseNode_Copy_CASE(102)
		ReverseNode_Copy_CASE(103)
		ReverseNode_Copy_CASE(104)
		ReverseNode_Copy_CASE(105)
		ReverseNode_Copy_CASE(106)
		ReverseNode_Copy_CASE(107)
		ReverseNode_Copy_CASE(108)
		ReverseNode_Copy_CASE(109)
		ReverseNode_Copy_CASE(110)
		ReverseNode_Copy_CASE(111)
		ReverseNode_Copy_CASE(112)
		ReverseNode_Copy_CASE(113)
		ReverseNode_Copy_CASE(114)
		ReverseNode_Copy_CASE(115)
		ReverseNode_Copy_CASE(116)
		ReverseNode_Copy_CASE(117)
		ReverseNode_Copy_CASE(118)
		ReverseNode_Copy_CASE(119)
		ReverseNode_Copy_CASE(120)
		ReverseNode_Copy_CASE(121)
		ReverseNode_Copy_CASE(122)
		ReverseNode_Copy_CASE(123)
		ReverseNode_Copy_CASE(124)
		ReverseNode_Copy_CASE(125)
		ReverseNode_Copy_CASE(126)
		ReverseNode_Copy_CASE(127)
		ReverseNode_Copy_CASE(128)
		ReverseNode_Copy_CASE(129)
		ReverseNode_Copy_CASE(130)
		ReverseNode_Copy_CASE(131)
		ReverseNode_Copy_CASE(132)
		ReverseNode_Copy_CASE(133)
		ReverseNode_Copy_CASE(134)
		ReverseNode_Copy_CASE(135)
		ReverseNode_Copy_CASE(136)
		ReverseNode_Copy_CASE(137)
		ReverseNode_Copy_CASE(138)
		ReverseNode_Copy_CASE(139)
		ReverseNode_Copy_CASE(140)
		ReverseNode_Copy_CASE(141)
		ReverseNode_Copy_CASE(142)
		ReverseNode_Copy_CASE(143)
		ReverseNode_Copy_CASE(144)
		ReverseNode_Copy_CASE(145)
		ReverseNode_Copy_CASE(146)
		ReverseNode_Copy_CASE(147)
		ReverseNode_Copy_CASE(148)
		ReverseNode_Copy_CASE(149)
		ReverseNode_Copy_CASE(150)
		ReverseNode_Copy_CASE(151)
		ReverseNode_Copy_CASE(152)
		ReverseNode_Copy_CASE(153)
		ReverseNode_Copy_CASE(154)
		ReverseNode_Copy_CASE(155)
		ReverseNode_Copy_CASE(156)
		ReverseNode_Copy_CASE(157)
		ReverseNode_Copy_CASE(158)
		ReverseNode_Copy_CASE(159)
		ReverseNode_Copy_CASE(160)
		ReverseNode_Copy_CASE(161)
		ReverseNode_Copy_CASE(162)
		ReverseNode_Copy_CASE(163)
		ReverseNode_Copy_CASE(164)
		ReverseNode_Copy_CASE(165)
		ReverseNode_Copy_CASE(166)
		ReverseNode_Copy_CASE(167)
		ReverseNode_Copy_CASE(168)
		ReverseNode_Copy_CASE(169)
		ReverseNode_Copy_CASE(170)
		ReverseNode_Copy_CASE(171)
		ReverseNode_Copy_CASE(172)
		ReverseNode_Copy_CASE(173)
		ReverseNode_Copy_CASE(174)
		ReverseNode_Copy_CASE(175)
		ReverseNode_Copy_CASE(176)
		ReverseNode_Copy_CASE(177)
		ReverseNode_Copy_CASE(178)
		ReverseNode_Copy_CASE(179)
		ReverseNode_Copy_CASE(180)
		ReverseNode_Copy_CASE(181)
		ReverseNode_Copy_CASE(182)
		ReverseNode_Copy_CASE(183)
		ReverseNode_Copy_CASE(184)
		ReverseNode_Copy_CASE(185)
		ReverseNode_Copy_CASE(186)
		ReverseNode_Copy_CASE(187)
		ReverseNode_Copy_CASE(188)
		ReverseNode_Copy_CASE(189)
		ReverseNode_Copy_CASE(190)
		ReverseNode_Copy_CASE(191)
		ReverseNode_Copy_CASE(192)
		ReverseNode_Copy_CASE(193)
		ReverseNode_Copy_CASE(194)
		ReverseNode_Copy_CASE(195)
		ReverseNode_Copy_CASE(196)
	}
	return thisObj;
}

generic<typename Key, typename Value>
MultiMapWapper::CShorpReverseNode<Key, Value>^ MultiMapWapper::CShorpReverseNode<Key, Value>::operator++(CShorpReverseNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Next();
	return thisObj;
}

generic<typename Key, typename Value>
MultiMapWapper::CShorpReverseNode<Key, Value>^ MultiMapWapper::CShorpReverseNode<Key, Value>::operator--(CShorpReverseNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Previous();
	return thisObj;
}

generic<typename Key, typename Value>
void MultiMapWapper::CShorpReverseNode<Key, Value>::SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary)
{
	if (ClassDictionary == nullptr) return;
	gIntKeyClassDictionary = ClassDictionary;
}

generic<typename Key, typename Value>
void MultiMapWapper::CShorpReverseNode<Key, Value>::SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary)
{
	if (ClassDictionary == nullptr) return;
	gValueClassDictionary = ClassDictionary;
}

//generic<typename Key, typename Value>
//MultiMapWapper::CShorpReverseNode<Key, Value>^ MultiMapWapper::CShorpReverseNode<Key, Value>::operator++()
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == 0) return this;
//	Next();
//	return this;
//}

//generic<typename Key, typename Value>
//MultiMapWapper::CShorpReverseNode<Key, Value>^ MultiMapWapper::CShorpReverseNode<Key, Value>::operator++(int)
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == 0) return this;
//	Next();
//	return this;
//}

