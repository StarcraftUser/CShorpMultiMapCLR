#include "pch.h"

generic<typename Key, typename Value>
inline MultiMapWapper::CShorpMultiConstNode<Key, Value>::CShorpMultiConstNode()
{
	gIntKeyClassDictionary = nullptr;
	gValueClassDictionary = nullptr;
	multiConstNodeUnion = new Utilities::MultiConstNodeUnion();
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
		multiConstNodeUnion->ptrToDelete = nullptr;
		break;
	case 1:
		multiConstNodeUnion->CPPmulticonstnode1 = new MultiConstNode<unsigned char, unsigned char>();
		break;
	case 2:
		multiConstNodeUnion->CPPmulticonstnode2 = new MultiConstNode<unsigned char, char>();
		break;
	case 3:
		multiConstNodeUnion->CPPmulticonstnode3 = new MultiConstNode<unsigned char, short>();
		break;
	case 4:
		multiConstNodeUnion->CPPmulticonstnode4 = new MultiConstNode<unsigned char, unsigned short>();
		break;
	case 5:
		multiConstNodeUnion->CPPmulticonstnode5 = new MultiConstNode<unsigned char, int>();
		break;
	case 6:
		multiConstNodeUnion->CPPmulticonstnode6 = new MultiConstNode<unsigned char, unsigned int>();
		break;
	case 7:
		multiConstNodeUnion->CPPmulticonstnode7 = new MultiConstNode<unsigned char, long long>();
		break;
	case 8:
		multiConstNodeUnion->CPPmulticonstnode8 = new MultiConstNode<unsigned char, unsigned long long>();
		break;
	case 9:
		multiConstNodeUnion->CPPmulticonstnode9 = new MultiConstNode<unsigned char, float>();
		break;
	case 10:
		multiConstNodeUnion->CPPmulticonstnode10 = new MultiConstNode<unsigned char, double>();
		break;
	case 11:
		multiConstNodeUnion->CPPmulticonstnode11 = new MultiConstNode<unsigned char, wchar_t>();
		break;
	case 12:
		multiConstNodeUnion->CPPmulticonstnode12 = new MultiConstNode<unsigned char, bool>();
		break;
	case 13:
		multiConstNodeUnion->CPPmulticonstnode13 = new MultiConstNode<unsigned char, std::wstring>();
		break;
	case 14:
		multiConstNodeUnion->CPPmulticonstnode14 = new MultiConstNode<unsigned char, __int64>();
		break;
	case 15:
		multiConstNodeUnion->CPPmulticonstnode15 = new MultiConstNode<char, unsigned char>();
		break;
	case 16:
		multiConstNodeUnion->CPPmulticonstnode16 = new MultiConstNode<char, char>();
		break;
	case 17:
		multiConstNodeUnion->CPPmulticonstnode17 = new MultiConstNode<char, short>();
		break;
	case 18:
		multiConstNodeUnion->CPPmulticonstnode18 = new MultiConstNode<char, unsigned short>();
		break;
	case 19:
		multiConstNodeUnion->CPPmulticonstnode19 = new MultiConstNode<char, int>();
		break;
	case 20:
		multiConstNodeUnion->CPPmulticonstnode20 = new MultiConstNode<char, unsigned int>();
		break;
	case 21:
		multiConstNodeUnion->CPPmulticonstnode21 = new MultiConstNode<char, long long>();
		break;
	case 22:
		multiConstNodeUnion->CPPmulticonstnode22 = new MultiConstNode<char, unsigned long long>();
		break;
	case 23:
		multiConstNodeUnion->CPPmulticonstnode23 = new MultiConstNode<char, float>();
		break;
	case 24:
		multiConstNodeUnion->CPPmulticonstnode24 = new MultiConstNode<char, double>();
		break;
	case 25:
		multiConstNodeUnion->CPPmulticonstnode25 = new MultiConstNode<char, wchar_t>();
		break;
	case 26:
		multiConstNodeUnion->CPPmulticonstnode26 = new MultiConstNode<char, bool>();
		break;
	case 27:
		multiConstNodeUnion->CPPmulticonstnode27 = new MultiConstNode<char, std::wstring>();
		break;
	case 28:
		multiConstNodeUnion->CPPmulticonstnode28 = new MultiConstNode<char, __int64>();
		break;
	case 29:
		multiConstNodeUnion->CPPmulticonstnode29 = new MultiConstNode<short, unsigned char>();
		break;
	case 30:
		multiConstNodeUnion->CPPmulticonstnode30 = new MultiConstNode<short, char>();
		break;
	case 31:
		multiConstNodeUnion->CPPmulticonstnode31 = new MultiConstNode<short, short>();
		break;
	case 32:
		multiConstNodeUnion->CPPmulticonstnode32 = new MultiConstNode<short, unsigned short>();
		break;
	case 33:
		multiConstNodeUnion->CPPmulticonstnode33 = new MultiConstNode<short, int>();
		break;
	case 34:
		multiConstNodeUnion->CPPmulticonstnode34 = new MultiConstNode<short, unsigned int>();
		break;
	case 35:
		multiConstNodeUnion->CPPmulticonstnode35 = new MultiConstNode<short, long long>();
		break;
	case 36:
		multiConstNodeUnion->CPPmulticonstnode36 = new MultiConstNode<short, unsigned long long>();
		break;
	case 37:
		multiConstNodeUnion->CPPmulticonstnode37 = new MultiConstNode<short, float>();
		break;
	case 38:
		multiConstNodeUnion->CPPmulticonstnode38 = new MultiConstNode<short, double>();
		break;
	case 39:
		multiConstNodeUnion->CPPmulticonstnode39 = new MultiConstNode<short, wchar_t>();
		break;
	case 40:
		multiConstNodeUnion->CPPmulticonstnode40 = new MultiConstNode<short, bool>();
		break;
	case 41:
		multiConstNodeUnion->CPPmulticonstnode41 = new MultiConstNode<short, std::wstring>();
		break;
	case 42:
		multiConstNodeUnion->CPPmulticonstnode42 = new MultiConstNode<short, __int64>();
		break;
	case 43:
		multiConstNodeUnion->CPPmulticonstnode43 = new MultiConstNode<unsigned short, unsigned char>();
		break;
	case 44:
		multiConstNodeUnion->CPPmulticonstnode44 = new MultiConstNode<unsigned short, char>();
		break;
	case 45:
		multiConstNodeUnion->CPPmulticonstnode45 = new MultiConstNode<unsigned short, short>();
		break;
	case 46:
		multiConstNodeUnion->CPPmulticonstnode46 = new MultiConstNode<unsigned short, unsigned short>();
		break;
	case 47:
		multiConstNodeUnion->CPPmulticonstnode47 = new MultiConstNode<unsigned short, int>();
		break;
	case 48:
		multiConstNodeUnion->CPPmulticonstnode48 = new MultiConstNode<unsigned short, unsigned int>();
		break;
	case 49:
		multiConstNodeUnion->CPPmulticonstnode49 = new MultiConstNode<unsigned short, long long>();
		break;
	case 50:
		multiConstNodeUnion->CPPmulticonstnode50 = new MultiConstNode<unsigned short, unsigned long long>();
		break;
	case 51:
		multiConstNodeUnion->CPPmulticonstnode51 = new MultiConstNode<unsigned short, float>();
		break;
	case 52:
		multiConstNodeUnion->CPPmulticonstnode52 = new MultiConstNode<unsigned short, double>();
		break;
	case 53:
		multiConstNodeUnion->CPPmulticonstnode53 = new MultiConstNode<unsigned short, wchar_t>();
		break;
	case 54:
		multiConstNodeUnion->CPPmulticonstnode54 = new MultiConstNode<unsigned short, bool>();
		break;
	case 55:
		multiConstNodeUnion->CPPmulticonstnode55 = new MultiConstNode<unsigned short, std::wstring>();
		break;
	case 56:
		multiConstNodeUnion->CPPmulticonstnode56 = new MultiConstNode<unsigned short, __int64>();
		break;
	case 57:
		multiConstNodeUnion->CPPmulticonstnode57 = new MultiConstNode<int, unsigned char>();
		break;
	case 58:
		multiConstNodeUnion->CPPmulticonstnode58 = new MultiConstNode<int, char>();
		break;
	case 59:
		multiConstNodeUnion->CPPmulticonstnode59 = new MultiConstNode<int, short>();
		break;
	case 60:
		multiConstNodeUnion->CPPmulticonstnode60 = new MultiConstNode<int, unsigned short>();
		break;
	case 61:
		multiConstNodeUnion->CPPmulticonstnode61 = new MultiConstNode<int, int>();
		break;
	case 62:
		multiConstNodeUnion->CPPmulticonstnode62 = new MultiConstNode<int, unsigned int>();
		break;
	case 63:
		multiConstNodeUnion->CPPmulticonstnode63 = new MultiConstNode<int, long long>();
		break;
	case 64:
		multiConstNodeUnion->CPPmulticonstnode64 = new MultiConstNode<int, unsigned long long>();
		break;
	case 65:
		multiConstNodeUnion->CPPmulticonstnode65 = new MultiConstNode<int, float>();
		break;
	case 66:
		multiConstNodeUnion->CPPmulticonstnode66 = new MultiConstNode<int, double>();
		break;
	case 67:
		multiConstNodeUnion->CPPmulticonstnode67 = new MultiConstNode<int, wchar_t>();
		break;
	case 68:
		multiConstNodeUnion->CPPmulticonstnode68 = new MultiConstNode<int, bool>();
		break;
	case 69:
		multiConstNodeUnion->CPPmulticonstnode69 = new MultiConstNode<int, std::wstring>();
		break;
	case 70:
		multiConstNodeUnion->CPPmulticonstnode70 = new MultiConstNode<int, __int64>();
		break;
	case 71:
		multiConstNodeUnion->CPPmulticonstnode71 = new MultiConstNode<unsigned int, unsigned char>();
		break;
	case 72:
		multiConstNodeUnion->CPPmulticonstnode72 = new MultiConstNode<unsigned int, char>();
		break;
	case 73:
		multiConstNodeUnion->CPPmulticonstnode73 = new MultiConstNode<unsigned int, short>();
		break;
	case 74:
		multiConstNodeUnion->CPPmulticonstnode74 = new MultiConstNode<unsigned int, unsigned short>();
		break;
	case 75:
		multiConstNodeUnion->CPPmulticonstnode75 = new MultiConstNode<unsigned int, int>();
		break;
	case 76:
		multiConstNodeUnion->CPPmulticonstnode76 = new MultiConstNode<unsigned int, unsigned int>();
		break;
	case 77:
		multiConstNodeUnion->CPPmulticonstnode77 = new MultiConstNode<unsigned int, long long>();
		break;
	case 78:
		multiConstNodeUnion->CPPmulticonstnode78 = new MultiConstNode<unsigned int, unsigned long long>();
		break;
	case 79:
		multiConstNodeUnion->CPPmulticonstnode79 = new MultiConstNode<unsigned int, float>();
		break;
	case 80:
		multiConstNodeUnion->CPPmulticonstnode80 = new MultiConstNode<unsigned int, double>();
		break;
	case 81:
		multiConstNodeUnion->CPPmulticonstnode81 = new MultiConstNode<unsigned int, wchar_t>();
		break;
	case 82:
		multiConstNodeUnion->CPPmulticonstnode82 = new MultiConstNode<unsigned int, bool>();
		break;
	case 83:
		multiConstNodeUnion->CPPmulticonstnode83 = new MultiConstNode<unsigned int, std::wstring>();
		break;
	case 84:
		multiConstNodeUnion->CPPmulticonstnode84 = new MultiConstNode<unsigned int, __int64>();
		break;
	case 85:
		multiConstNodeUnion->CPPmulticonstnode85 = new MultiConstNode<long long, unsigned char>();
		break;
	case 86:
		multiConstNodeUnion->CPPmulticonstnode86 = new MultiConstNode<long long, char>();
		break;
	case 87:
		multiConstNodeUnion->CPPmulticonstnode87 = new MultiConstNode<long long, short>();
		break;
	case 88:
		multiConstNodeUnion->CPPmulticonstnode88 = new MultiConstNode<long long, unsigned short>();
		break;
	case 89:
		multiConstNodeUnion->CPPmulticonstnode89 = new MultiConstNode<long long, int>();
		break;
	case 90:
		multiConstNodeUnion->CPPmulticonstnode90 = new MultiConstNode<long long, unsigned int>();
		break;
	case 91:
		multiConstNodeUnion->CPPmulticonstnode91 = new MultiConstNode<long long, long long>();
		break;
	case 92:
		multiConstNodeUnion->CPPmulticonstnode92 = new MultiConstNode<long long, unsigned long long>();
		break;
	case 93:
		multiConstNodeUnion->CPPmulticonstnode93 = new MultiConstNode<long long, float>();
		break;
	case 94:
		multiConstNodeUnion->CPPmulticonstnode94 = new MultiConstNode<long long, double>();
		break;
	case 95:
		multiConstNodeUnion->CPPmulticonstnode95 = new MultiConstNode<long long, wchar_t>();
		break;
	case 96:
		multiConstNodeUnion->CPPmulticonstnode96 = new MultiConstNode<long long, bool>();
		break;
	case 97:
		multiConstNodeUnion->CPPmulticonstnode97 = new MultiConstNode<long long, std::wstring>();
		break;
	case 98:
		multiConstNodeUnion->CPPmulticonstnode98 = new MultiConstNode<long long, __int64>();
		break;
	case 99:
		multiConstNodeUnion->CPPmulticonstnode99 = new MultiConstNode<unsigned long long, unsigned char>();
		break;
	case 100:
		multiConstNodeUnion->CPPmulticonstnode100 = new MultiConstNode<unsigned long long, char>();
		break;
	case 101:
		multiConstNodeUnion->CPPmulticonstnode101 = new MultiConstNode<unsigned long long, short>();
		break;
	case 102:
		multiConstNodeUnion->CPPmulticonstnode102 = new MultiConstNode<unsigned long long, unsigned short>();
		break;
	case 103:
		multiConstNodeUnion->CPPmulticonstnode103 = new MultiConstNode<unsigned long long, int>();
		break;
	case 104:
		multiConstNodeUnion->CPPmulticonstnode104 = new MultiConstNode<unsigned long long, unsigned int>();
		break;
	case 105:
		multiConstNodeUnion->CPPmulticonstnode105 = new MultiConstNode<unsigned long long, long long>();
		break;
	case 106:
		multiConstNodeUnion->CPPmulticonstnode106 = new MultiConstNode<unsigned long long, unsigned long long>();
		break;
	case 107:
		multiConstNodeUnion->CPPmulticonstnode107 = new MultiConstNode<unsigned long long, float>();
		break;
	case 108:
		multiConstNodeUnion->CPPmulticonstnode108 = new MultiConstNode<unsigned long long, double>();
		break;
	case 109:
		multiConstNodeUnion->CPPmulticonstnode109 = new MultiConstNode<unsigned long long, wchar_t>();
		break;
	case 110:
		multiConstNodeUnion->CPPmulticonstnode110 = new MultiConstNode<unsigned long long, bool>();
		break;
	case 111:
		multiConstNodeUnion->CPPmulticonstnode111 = new MultiConstNode<unsigned long long, std::wstring>();
		break;
	case 112:
		multiConstNodeUnion->CPPmulticonstnode112 = new MultiConstNode<unsigned long long, __int64>();
		break;
	case 113:
		multiConstNodeUnion->CPPmulticonstnode113 = new MultiConstNode<float, unsigned char>();
		break;
	case 114:
		multiConstNodeUnion->CPPmulticonstnode114 = new MultiConstNode<float, char>();
		break;
	case 115:
		multiConstNodeUnion->CPPmulticonstnode115 = new MultiConstNode<float, short>();
		break;
	case 116:
		multiConstNodeUnion->CPPmulticonstnode116 = new MultiConstNode<float, unsigned short>();
		break;
	case 117:
		multiConstNodeUnion->CPPmulticonstnode117 = new MultiConstNode<float, int>();
		break;
	case 118:
		multiConstNodeUnion->CPPmulticonstnode118 = new MultiConstNode<float, unsigned int>();
		break;
	case 119:
		multiConstNodeUnion->CPPmulticonstnode119 = new MultiConstNode<float, long long>();
		break;
	case 120:
		multiConstNodeUnion->CPPmulticonstnode120 = new MultiConstNode<float, unsigned long long>();
		break;
	case 121:
		multiConstNodeUnion->CPPmulticonstnode121 = new MultiConstNode<float, float>();
		break;
	case 122:
		multiConstNodeUnion->CPPmulticonstnode122 = new MultiConstNode<float, double>();
		break;
	case 123:
		multiConstNodeUnion->CPPmulticonstnode123 = new MultiConstNode<float, wchar_t>();
		break;
	case 124:
		multiConstNodeUnion->CPPmulticonstnode124 = new MultiConstNode<float, bool>();
		break;
	case 125:
		multiConstNodeUnion->CPPmulticonstnode125 = new MultiConstNode<float, std::wstring>();
		break;
	case 126:
		multiConstNodeUnion->CPPmulticonstnode126 = new MultiConstNode<float, __int64>();
		break;
	case 127:
		multiConstNodeUnion->CPPmulticonstnode127 = new MultiConstNode<double, unsigned char>();
		break;
	case 128:
		multiConstNodeUnion->CPPmulticonstnode128 = new MultiConstNode<double, char>();
		break;
	case 129:
		multiConstNodeUnion->CPPmulticonstnode129 = new MultiConstNode<double, short>();
		break;
	case 130:
		multiConstNodeUnion->CPPmulticonstnode130 = new MultiConstNode<double, unsigned short>();
		break;
	case 131:
		multiConstNodeUnion->CPPmulticonstnode131 = new MultiConstNode<double, int>();
		break;
	case 132:
		multiConstNodeUnion->CPPmulticonstnode132 = new MultiConstNode<double, unsigned int>();
		break;
	case 133:
		multiConstNodeUnion->CPPmulticonstnode133 = new MultiConstNode<double, long long>();
		break;
	case 134:
		multiConstNodeUnion->CPPmulticonstnode134 = new MultiConstNode<double, unsigned long long>();
		break;
	case 135:
		multiConstNodeUnion->CPPmulticonstnode135 = new MultiConstNode<double, float>();
		break;
	case 136:
		multiConstNodeUnion->CPPmulticonstnode136 = new MultiConstNode<double, double>();
		break;
	case 137:
		multiConstNodeUnion->CPPmulticonstnode137 = new MultiConstNode<double, wchar_t>();
		break;
	case 138:
		multiConstNodeUnion->CPPmulticonstnode138 = new MultiConstNode<double, bool>();
		break;
	case 139:
		multiConstNodeUnion->CPPmulticonstnode139 = new MultiConstNode<double, std::wstring>();
		break;
	case 140:
		multiConstNodeUnion->CPPmulticonstnode140 = new MultiConstNode<double, __int64>();
		break;
	case 141:
		multiConstNodeUnion->CPPmulticonstnode141 = new MultiConstNode<wchar_t, unsigned char>();
		break;
	case 142:
		multiConstNodeUnion->CPPmulticonstnode142 = new MultiConstNode<wchar_t, char>();
		break;
	case 143:
		multiConstNodeUnion->CPPmulticonstnode143 = new MultiConstNode<wchar_t, short>();
		break;
	case 144:
		multiConstNodeUnion->CPPmulticonstnode144 = new MultiConstNode<wchar_t, unsigned short>();
		break;
	case 145:
		multiConstNodeUnion->CPPmulticonstnode145 = new MultiConstNode<wchar_t, int>();
		break;
	case 146:
		multiConstNodeUnion->CPPmulticonstnode146 = new MultiConstNode<wchar_t, unsigned int>();
		break;
	case 147:
		multiConstNodeUnion->CPPmulticonstnode147 = new MultiConstNode<wchar_t, long long>();
		break;
	case 148:
		multiConstNodeUnion->CPPmulticonstnode148 = new MultiConstNode<wchar_t, unsigned long long>();
		break;
	case 149:
		multiConstNodeUnion->CPPmulticonstnode149 = new MultiConstNode<wchar_t, float>();
		break;
	case 150:
		multiConstNodeUnion->CPPmulticonstnode150 = new MultiConstNode<wchar_t, double>();
		break;
	case 151:
		multiConstNodeUnion->CPPmulticonstnode151 = new MultiConstNode<wchar_t, wchar_t>();
		break;
	case 152:
		multiConstNodeUnion->CPPmulticonstnode152 = new MultiConstNode<wchar_t, bool>();
		break;
	case 153:
		multiConstNodeUnion->CPPmulticonstnode153 = new MultiConstNode<wchar_t, std::wstring>();
		break;
	case 154:
		multiConstNodeUnion->CPPmulticonstnode154 = new MultiConstNode<wchar_t, __int64>();
		break;
	case 155:
		multiConstNodeUnion->CPPmulticonstnode155 = new MultiConstNode<bool, unsigned char>();
		break;
	case 156:
		multiConstNodeUnion->CPPmulticonstnode156 = new MultiConstNode<bool, char>();
		break;
	case 157:
		multiConstNodeUnion->CPPmulticonstnode157 = new MultiConstNode<bool, short>();
		break;
	case 158:
		multiConstNodeUnion->CPPmulticonstnode158 = new MultiConstNode<bool, unsigned short>();
		break;
	case 159:
		multiConstNodeUnion->CPPmulticonstnode159 = new MultiConstNode<bool, int>();
		break;
	case 160:
		multiConstNodeUnion->CPPmulticonstnode160 = new MultiConstNode<bool, unsigned int>();
		break;
	case 161:
		multiConstNodeUnion->CPPmulticonstnode161 = new MultiConstNode<bool, long long>();
		break;
	case 162:
		multiConstNodeUnion->CPPmulticonstnode162 = new MultiConstNode<bool, unsigned long long>();
		break;
	case 163:
		multiConstNodeUnion->CPPmulticonstnode163 = new MultiConstNode<bool, float>();
		break;
	case 164:
		multiConstNodeUnion->CPPmulticonstnode164 = new MultiConstNode<bool, double>();
		break;
	case 165:
		multiConstNodeUnion->CPPmulticonstnode165 = new MultiConstNode<bool, wchar_t>();
		break;
	case 166:
		multiConstNodeUnion->CPPmulticonstnode166 = new MultiConstNode<bool, bool>();
		break;
	case 167:
		multiConstNodeUnion->CPPmulticonstnode167 = new MultiConstNode<bool, std::wstring>();
		break;
	case 168:
		multiConstNodeUnion->CPPmulticonstnode168 = new MultiConstNode<bool, __int64>();
		break;
	case 169:
		multiConstNodeUnion->CPPmulticonstnode169 = new MultiConstNode<std::wstring, unsigned char>();
		break;
	case 170:
		multiConstNodeUnion->CPPmulticonstnode170 = new MultiConstNode<std::wstring, char>();
		break;
	case 171:
		multiConstNodeUnion->CPPmulticonstnode171 = new MultiConstNode<std::wstring, short>();
		break;
	case 172:
		multiConstNodeUnion->CPPmulticonstnode172 = new MultiConstNode<std::wstring, unsigned short>();
		break;
	case 173:
		multiConstNodeUnion->CPPmulticonstnode173 = new MultiConstNode<std::wstring, int>();
		break;
	case 174:
		multiConstNodeUnion->CPPmulticonstnode174 = new MultiConstNode<std::wstring, unsigned int>();
		break;
	case 175:
		multiConstNodeUnion->CPPmulticonstnode175 = new MultiConstNode<std::wstring, long long>();
		break;
	case 176:
		multiConstNodeUnion->CPPmulticonstnode176 = new MultiConstNode<std::wstring, unsigned long long>();
		break;
	case 177:
		multiConstNodeUnion->CPPmulticonstnode177 = new MultiConstNode<std::wstring, float>();
		break;
	case 178:
		multiConstNodeUnion->CPPmulticonstnode178 = new MultiConstNode<std::wstring, double>();
		break;
	case 179:
		multiConstNodeUnion->CPPmulticonstnode179 = new MultiConstNode<std::wstring, wchar_t>();
		break;
	case 180:
		multiConstNodeUnion->CPPmulticonstnode180 = new MultiConstNode<std::wstring, bool>();
		break;
	case 181:
		multiConstNodeUnion->CPPmulticonstnode181 = new MultiConstNode<std::wstring, std::wstring>();
		break;
	case 182:
		multiConstNodeUnion->CPPmulticonstnode182 = new MultiConstNode<std::wstring, __int64>();
		break;
	case 183:
		multiConstNodeUnion->CPPmulticonstnode183 = new MultiConstNode<__int64, unsigned char>();
		break;
	case 184:
		multiConstNodeUnion->CPPmulticonstnode184 = new MultiConstNode<__int64, char>();
		break;
	case 185:
		multiConstNodeUnion->CPPmulticonstnode185 = new MultiConstNode<__int64, short>();
		break;
	case 186:
		multiConstNodeUnion->CPPmulticonstnode186 = new MultiConstNode<__int64, unsigned short>();
		break;
	case 187:
		multiConstNodeUnion->CPPmulticonstnode187 = new MultiConstNode<__int64, int>();
		break;
	case 188:
		multiConstNodeUnion->CPPmulticonstnode188 = new MultiConstNode<__int64, unsigned int>();
		break;
	case 189:
		multiConstNodeUnion->CPPmulticonstnode189 = new MultiConstNode<__int64, long long>();
		break;
	case 190:
		multiConstNodeUnion->CPPmulticonstnode190 = new MultiConstNode<__int64, unsigned long long>();
		break;
	case 191:
		multiConstNodeUnion->CPPmulticonstnode191 = new MultiConstNode<__int64, float>();
		break;
	case 192:
		multiConstNodeUnion->CPPmulticonstnode192 = new MultiConstNode<__int64, double>();
		break;
	case 193:
		multiConstNodeUnion->CPPmulticonstnode193 = new MultiConstNode<__int64, wchar_t>();
		break;
	case 194:
		multiConstNodeUnion->CPPmulticonstnode194 = new MultiConstNode<__int64, bool>();
		break;
	case 195:
		multiConstNodeUnion->CPPmulticonstnode195 = new MultiConstNode<__int64, std::wstring>();
		break;
	case 196:
		multiConstNodeUnion->CPPmulticonstnode196 = new MultiConstNode<__int64, __int64>();
		break;
	}

}

generic<typename Key, typename Value>
MultiMapWapper::CShorpMultiConstNode<Key, Value>::~CShorpMultiConstNode()
{
	if (multiConstNodeUnion->ptrToDelete)
		delete multiConstNodeUnion->ptrToDelete;
	delete multiConstNodeUnion;
}

#define MultiConstNode_Next_CASE(NUM) \
	case NUM: \
		(*(multiConstNodeUnion->CPPmulticonstnode##NUM))++; \
		return;

generic<typename Key, typename Value>
void MultiMapWapper::CShorpMultiConstNode<Key, Value>::Next()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		MultiConstNode_Next_CASE(1)
		MultiConstNode_Next_CASE(2)
		MultiConstNode_Next_CASE(3)
		MultiConstNode_Next_CASE(4)
		MultiConstNode_Next_CASE(5)
		MultiConstNode_Next_CASE(6)
		MultiConstNode_Next_CASE(7)
		MultiConstNode_Next_CASE(8)
		MultiConstNode_Next_CASE(9)
		MultiConstNode_Next_CASE(10)
		MultiConstNode_Next_CASE(11)
		MultiConstNode_Next_CASE(12)
		MultiConstNode_Next_CASE(13)
		MultiConstNode_Next_CASE(14)
		MultiConstNode_Next_CASE(15)
		MultiConstNode_Next_CASE(16)
		MultiConstNode_Next_CASE(17)
		MultiConstNode_Next_CASE(18)
		MultiConstNode_Next_CASE(19)
		MultiConstNode_Next_CASE(20)
		MultiConstNode_Next_CASE(21)
		MultiConstNode_Next_CASE(22)
		MultiConstNode_Next_CASE(23)
		MultiConstNode_Next_CASE(24)
		MultiConstNode_Next_CASE(25)
		MultiConstNode_Next_CASE(26)
		MultiConstNode_Next_CASE(27)
		MultiConstNode_Next_CASE(28)
		MultiConstNode_Next_CASE(29)
		MultiConstNode_Next_CASE(30)
		MultiConstNode_Next_CASE(31)
		MultiConstNode_Next_CASE(32)
		MultiConstNode_Next_CASE(33)
		MultiConstNode_Next_CASE(34)
		MultiConstNode_Next_CASE(35)
		MultiConstNode_Next_CASE(36)
		MultiConstNode_Next_CASE(37)
		MultiConstNode_Next_CASE(38)
		MultiConstNode_Next_CASE(39)
		MultiConstNode_Next_CASE(40)
		MultiConstNode_Next_CASE(41)
		MultiConstNode_Next_CASE(42)
		MultiConstNode_Next_CASE(43)
		MultiConstNode_Next_CASE(44)
		MultiConstNode_Next_CASE(45)
		MultiConstNode_Next_CASE(46)
		MultiConstNode_Next_CASE(47)
		MultiConstNode_Next_CASE(48)
		MultiConstNode_Next_CASE(49)
		MultiConstNode_Next_CASE(50)
		MultiConstNode_Next_CASE(51)
		MultiConstNode_Next_CASE(52)
		MultiConstNode_Next_CASE(53)
		MultiConstNode_Next_CASE(54)
		MultiConstNode_Next_CASE(55)
		MultiConstNode_Next_CASE(56)
		MultiConstNode_Next_CASE(57)
		MultiConstNode_Next_CASE(58)
		MultiConstNode_Next_CASE(59)
		MultiConstNode_Next_CASE(60)
		MultiConstNode_Next_CASE(61)
		MultiConstNode_Next_CASE(62)
		MultiConstNode_Next_CASE(63)
		MultiConstNode_Next_CASE(64)
		MultiConstNode_Next_CASE(65)
		MultiConstNode_Next_CASE(66)
		MultiConstNode_Next_CASE(67)
		MultiConstNode_Next_CASE(68)
		MultiConstNode_Next_CASE(69)
		MultiConstNode_Next_CASE(70)
		MultiConstNode_Next_CASE(71)
		MultiConstNode_Next_CASE(72)
		MultiConstNode_Next_CASE(73)
		MultiConstNode_Next_CASE(74)
		MultiConstNode_Next_CASE(75)
		MultiConstNode_Next_CASE(76)
		MultiConstNode_Next_CASE(77)
		MultiConstNode_Next_CASE(78)
		MultiConstNode_Next_CASE(79)
		MultiConstNode_Next_CASE(80)
		MultiConstNode_Next_CASE(81)
		MultiConstNode_Next_CASE(82)
		MultiConstNode_Next_CASE(83)
		MultiConstNode_Next_CASE(84)
		MultiConstNode_Next_CASE(85)
		MultiConstNode_Next_CASE(86)
		MultiConstNode_Next_CASE(87)
		MultiConstNode_Next_CASE(88)
		MultiConstNode_Next_CASE(89)
		MultiConstNode_Next_CASE(90)
		MultiConstNode_Next_CASE(91)
		MultiConstNode_Next_CASE(92)
		MultiConstNode_Next_CASE(93)
		MultiConstNode_Next_CASE(94)
		MultiConstNode_Next_CASE(95)
		MultiConstNode_Next_CASE(96)
		MultiConstNode_Next_CASE(97)
		MultiConstNode_Next_CASE(98)
		MultiConstNode_Next_CASE(99)
		MultiConstNode_Next_CASE(100)
		MultiConstNode_Next_CASE(101)
		MultiConstNode_Next_CASE(102)
		MultiConstNode_Next_CASE(103)
		MultiConstNode_Next_CASE(104)
		MultiConstNode_Next_CASE(105)
		MultiConstNode_Next_CASE(106)
		MultiConstNode_Next_CASE(107)
		MultiConstNode_Next_CASE(108)
		MultiConstNode_Next_CASE(109)
		MultiConstNode_Next_CASE(110)
		MultiConstNode_Next_CASE(111)
		MultiConstNode_Next_CASE(112)
		MultiConstNode_Next_CASE(113)
		MultiConstNode_Next_CASE(114)
		MultiConstNode_Next_CASE(115)
		MultiConstNode_Next_CASE(116)
		MultiConstNode_Next_CASE(117)
		MultiConstNode_Next_CASE(118)
		MultiConstNode_Next_CASE(119)
		MultiConstNode_Next_CASE(120)
		MultiConstNode_Next_CASE(121)
		MultiConstNode_Next_CASE(122)
		MultiConstNode_Next_CASE(123)
		MultiConstNode_Next_CASE(124)
		MultiConstNode_Next_CASE(125)
		MultiConstNode_Next_CASE(126)
		MultiConstNode_Next_CASE(127)
		MultiConstNode_Next_CASE(128)
		MultiConstNode_Next_CASE(129)
		MultiConstNode_Next_CASE(130)
		MultiConstNode_Next_CASE(131)
		MultiConstNode_Next_CASE(132)
		MultiConstNode_Next_CASE(133)
		MultiConstNode_Next_CASE(134)
		MultiConstNode_Next_CASE(135)
		MultiConstNode_Next_CASE(136)
		MultiConstNode_Next_CASE(137)
		MultiConstNode_Next_CASE(138)
		MultiConstNode_Next_CASE(139)
		MultiConstNode_Next_CASE(140)
		MultiConstNode_Next_CASE(141)
		MultiConstNode_Next_CASE(142)
		MultiConstNode_Next_CASE(143)
		MultiConstNode_Next_CASE(144)
		MultiConstNode_Next_CASE(145)
		MultiConstNode_Next_CASE(146)
		MultiConstNode_Next_CASE(147)
		MultiConstNode_Next_CASE(148)
		MultiConstNode_Next_CASE(149)
		MultiConstNode_Next_CASE(150)
		MultiConstNode_Next_CASE(151)
		MultiConstNode_Next_CASE(152)
		MultiConstNode_Next_CASE(153)
		MultiConstNode_Next_CASE(154)
		MultiConstNode_Next_CASE(155)
		MultiConstNode_Next_CASE(156)
		MultiConstNode_Next_CASE(157)
		MultiConstNode_Next_CASE(158)
		MultiConstNode_Next_CASE(159)
		MultiConstNode_Next_CASE(160)
		MultiConstNode_Next_CASE(161)
		MultiConstNode_Next_CASE(162)
		MultiConstNode_Next_CASE(163)
		MultiConstNode_Next_CASE(164)
		MultiConstNode_Next_CASE(165)
		MultiConstNode_Next_CASE(166)
		MultiConstNode_Next_CASE(167)
		MultiConstNode_Next_CASE(168)
		MultiConstNode_Next_CASE(169)
		MultiConstNode_Next_CASE(170)
		MultiConstNode_Next_CASE(171)
		MultiConstNode_Next_CASE(172)
		MultiConstNode_Next_CASE(173)
		MultiConstNode_Next_CASE(174)
		MultiConstNode_Next_CASE(175)
		MultiConstNode_Next_CASE(176)
		MultiConstNode_Next_CASE(177)
		MultiConstNode_Next_CASE(178)
		MultiConstNode_Next_CASE(179)
		MultiConstNode_Next_CASE(180)
		MultiConstNode_Next_CASE(181)
		MultiConstNode_Next_CASE(182)
		MultiConstNode_Next_CASE(183)
		MultiConstNode_Next_CASE(184)
		MultiConstNode_Next_CASE(185)
		MultiConstNode_Next_CASE(186)
		MultiConstNode_Next_CASE(187)
		MultiConstNode_Next_CASE(188)
		MultiConstNode_Next_CASE(189)
		MultiConstNode_Next_CASE(190)
		MultiConstNode_Next_CASE(191)
		MultiConstNode_Next_CASE(192)
		MultiConstNode_Next_CASE(193)
		MultiConstNode_Next_CASE(194)
		MultiConstNode_Next_CASE(195)
		MultiConstNode_Next_CASE(196)
	}
}

#define MultiConstNode_Previous_CASE(NUM) \
	case NUM: \
		(*(multiConstNodeUnion->CPPmulticonstnode##NUM))--; \
		return;

generic<typename Key, typename Value>
void MultiMapWapper::CShorpMultiConstNode<Key, Value>::Previous()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		MultiConstNode_Previous_CASE(1)
		MultiConstNode_Previous_CASE(2)
		MultiConstNode_Previous_CASE(3)
		MultiConstNode_Previous_CASE(4)
		MultiConstNode_Previous_CASE(5)
		MultiConstNode_Previous_CASE(6)
		MultiConstNode_Previous_CASE(7)
		MultiConstNode_Previous_CASE(8)
		MultiConstNode_Previous_CASE(9)
		MultiConstNode_Previous_CASE(10)
		MultiConstNode_Previous_CASE(11)
		MultiConstNode_Previous_CASE(12)
		MultiConstNode_Previous_CASE(13)
		MultiConstNode_Previous_CASE(14)
		MultiConstNode_Previous_CASE(15)
		MultiConstNode_Previous_CASE(16)
		MultiConstNode_Previous_CASE(17)
		MultiConstNode_Previous_CASE(18)
		MultiConstNode_Previous_CASE(19)
		MultiConstNode_Previous_CASE(20)
		MultiConstNode_Previous_CASE(21)
		MultiConstNode_Previous_CASE(22)
		MultiConstNode_Previous_CASE(23)
		MultiConstNode_Previous_CASE(24)
		MultiConstNode_Previous_CASE(25)
		MultiConstNode_Previous_CASE(26)
		MultiConstNode_Previous_CASE(27)
		MultiConstNode_Previous_CASE(28)
		MultiConstNode_Previous_CASE(29)
		MultiConstNode_Previous_CASE(30)
		MultiConstNode_Previous_CASE(31)
		MultiConstNode_Previous_CASE(32)
		MultiConstNode_Previous_CASE(33)
		MultiConstNode_Previous_CASE(34)
		MultiConstNode_Previous_CASE(35)
		MultiConstNode_Previous_CASE(36)
		MultiConstNode_Previous_CASE(37)
		MultiConstNode_Previous_CASE(38)
		MultiConstNode_Previous_CASE(39)
		MultiConstNode_Previous_CASE(40)
		MultiConstNode_Previous_CASE(41)
		MultiConstNode_Previous_CASE(42)
		MultiConstNode_Previous_CASE(43)
		MultiConstNode_Previous_CASE(44)
		MultiConstNode_Previous_CASE(45)
		MultiConstNode_Previous_CASE(46)
		MultiConstNode_Previous_CASE(47)
		MultiConstNode_Previous_CASE(48)
		MultiConstNode_Previous_CASE(49)
		MultiConstNode_Previous_CASE(50)
		MultiConstNode_Previous_CASE(51)
		MultiConstNode_Previous_CASE(52)
		MultiConstNode_Previous_CASE(53)
		MultiConstNode_Previous_CASE(54)
		MultiConstNode_Previous_CASE(55)
		MultiConstNode_Previous_CASE(56)
		MultiConstNode_Previous_CASE(57)
		MultiConstNode_Previous_CASE(58)
		MultiConstNode_Previous_CASE(59)
		MultiConstNode_Previous_CASE(60)
		MultiConstNode_Previous_CASE(61)
		MultiConstNode_Previous_CASE(62)
		MultiConstNode_Previous_CASE(63)
		MultiConstNode_Previous_CASE(64)
		MultiConstNode_Previous_CASE(65)
		MultiConstNode_Previous_CASE(66)
		MultiConstNode_Previous_CASE(67)
		MultiConstNode_Previous_CASE(68)
		MultiConstNode_Previous_CASE(69)
		MultiConstNode_Previous_CASE(70)
		MultiConstNode_Previous_CASE(71)
		MultiConstNode_Previous_CASE(72)
		MultiConstNode_Previous_CASE(73)
		MultiConstNode_Previous_CASE(74)
		MultiConstNode_Previous_CASE(75)
		MultiConstNode_Previous_CASE(76)
		MultiConstNode_Previous_CASE(77)
		MultiConstNode_Previous_CASE(78)
		MultiConstNode_Previous_CASE(79)
		MultiConstNode_Previous_CASE(80)
		MultiConstNode_Previous_CASE(81)
		MultiConstNode_Previous_CASE(82)
		MultiConstNode_Previous_CASE(83)
		MultiConstNode_Previous_CASE(84)
		MultiConstNode_Previous_CASE(85)
		MultiConstNode_Previous_CASE(86)
		MultiConstNode_Previous_CASE(87)
		MultiConstNode_Previous_CASE(88)
		MultiConstNode_Previous_CASE(89)
		MultiConstNode_Previous_CASE(90)
		MultiConstNode_Previous_CASE(91)
		MultiConstNode_Previous_CASE(92)
		MultiConstNode_Previous_CASE(93)
		MultiConstNode_Previous_CASE(94)
		MultiConstNode_Previous_CASE(95)
		MultiConstNode_Previous_CASE(96)
		MultiConstNode_Previous_CASE(97)
		MultiConstNode_Previous_CASE(98)
		MultiConstNode_Previous_CASE(99)
		MultiConstNode_Previous_CASE(100)
		MultiConstNode_Previous_CASE(101)
		MultiConstNode_Previous_CASE(102)
		MultiConstNode_Previous_CASE(103)
		MultiConstNode_Previous_CASE(104)
		MultiConstNode_Previous_CASE(105)
		MultiConstNode_Previous_CASE(106)
		MultiConstNode_Previous_CASE(107)
		MultiConstNode_Previous_CASE(108)
		MultiConstNode_Previous_CASE(109)
		MultiConstNode_Previous_CASE(110)
		MultiConstNode_Previous_CASE(111)
		MultiConstNode_Previous_CASE(112)
		MultiConstNode_Previous_CASE(113)
		MultiConstNode_Previous_CASE(114)
		MultiConstNode_Previous_CASE(115)
		MultiConstNode_Previous_CASE(116)
		MultiConstNode_Previous_CASE(117)
		MultiConstNode_Previous_CASE(118)
		MultiConstNode_Previous_CASE(119)
		MultiConstNode_Previous_CASE(120)
		MultiConstNode_Previous_CASE(121)
		MultiConstNode_Previous_CASE(122)
		MultiConstNode_Previous_CASE(123)
		MultiConstNode_Previous_CASE(124)
		MultiConstNode_Previous_CASE(125)
		MultiConstNode_Previous_CASE(126)
		MultiConstNode_Previous_CASE(127)
		MultiConstNode_Previous_CASE(128)
		MultiConstNode_Previous_CASE(129)
		MultiConstNode_Previous_CASE(130)
		MultiConstNode_Previous_CASE(131)
		MultiConstNode_Previous_CASE(132)
		MultiConstNode_Previous_CASE(133)
		MultiConstNode_Previous_CASE(134)
		MultiConstNode_Previous_CASE(135)
		MultiConstNode_Previous_CASE(136)
		MultiConstNode_Previous_CASE(137)
		MultiConstNode_Previous_CASE(138)
		MultiConstNode_Previous_CASE(139)
		MultiConstNode_Previous_CASE(140)
		MultiConstNode_Previous_CASE(141)
		MultiConstNode_Previous_CASE(142)
		MultiConstNode_Previous_CASE(143)
		MultiConstNode_Previous_CASE(144)
		MultiConstNode_Previous_CASE(145)
		MultiConstNode_Previous_CASE(146)
		MultiConstNode_Previous_CASE(147)
		MultiConstNode_Previous_CASE(148)
		MultiConstNode_Previous_CASE(149)
		MultiConstNode_Previous_CASE(150)
		MultiConstNode_Previous_CASE(151)
		MultiConstNode_Previous_CASE(152)
		MultiConstNode_Previous_CASE(153)
		MultiConstNode_Previous_CASE(154)
		MultiConstNode_Previous_CASE(155)
		MultiConstNode_Previous_CASE(156)
		MultiConstNode_Previous_CASE(157)
		MultiConstNode_Previous_CASE(158)
		MultiConstNode_Previous_CASE(159)
		MultiConstNode_Previous_CASE(160)
		MultiConstNode_Previous_CASE(161)
		MultiConstNode_Previous_CASE(162)
		MultiConstNode_Previous_CASE(163)
		MultiConstNode_Previous_CASE(164)
		MultiConstNode_Previous_CASE(165)
		MultiConstNode_Previous_CASE(166)
		MultiConstNode_Previous_CASE(167)
		MultiConstNode_Previous_CASE(168)
		MultiConstNode_Previous_CASE(169)
		MultiConstNode_Previous_CASE(170)
		MultiConstNode_Previous_CASE(171)
		MultiConstNode_Previous_CASE(172)
		MultiConstNode_Previous_CASE(173)
		MultiConstNode_Previous_CASE(174)
		MultiConstNode_Previous_CASE(175)
		MultiConstNode_Previous_CASE(176)
		MultiConstNode_Previous_CASE(177)
		MultiConstNode_Previous_CASE(178)
		MultiConstNode_Previous_CASE(179)
		MultiConstNode_Previous_CASE(180)
		MultiConstNode_Previous_CASE(181)
		MultiConstNode_Previous_CASE(182)
		MultiConstNode_Previous_CASE(183)
		MultiConstNode_Previous_CASE(184)
		MultiConstNode_Previous_CASE(185)
		MultiConstNode_Previous_CASE(186)
		MultiConstNode_Previous_CASE(187)
		MultiConstNode_Previous_CASE(188)
		MultiConstNode_Previous_CASE(189)
		MultiConstNode_Previous_CASE(190)
		MultiConstNode_Previous_CASE(191)
		MultiConstNode_Previous_CASE(192)
		MultiConstNode_Previous_CASE(193)
		MultiConstNode_Previous_CASE(194)
		MultiConstNode_Previous_CASE(195)
		MultiConstNode_Previous_CASE(196)
	}
}


generic<typename Key, typename Value>
Value MultiMapWapper::CShorpMultiConstNode<Key, Value>::GetValue()
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
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode1->GetValue());
		return safe_cast<Value>(managedValue);
	case 2:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode2->GetValue());
		return safe_cast<Value>(managedValue);
	case 3:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode3->GetValue());
		return safe_cast<Value>(managedValue);
	case 4:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode4->GetValue());
		return safe_cast<Value>(managedValue);
	case 5:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode5->GetValue());
		return safe_cast<Value>(managedValue);
	case 6:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode6->GetValue());
		return safe_cast<Value>(managedValue);
	case 7:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode7->GetValue());
		return safe_cast<Value>(managedValue);
	case 8:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode8->GetValue());
		return safe_cast<Value>(managedValue);
	case 9:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode9->GetValue());
		return safe_cast<Value>(managedValue);
	case 10:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode10->GetValue());
		return safe_cast<Value>(managedValue);
	case 11:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode11->GetValue());
		return safe_cast<Value>(managedValue);
	case 12:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode12->GetValue());
		return safe_cast<Value>(managedValue);
	case 13:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode13->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 15:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode15->GetValue());
		return safe_cast<Value>(managedValue);
	case 16:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode16->GetValue());
		return safe_cast<Value>(managedValue);
	case 17:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode17->GetValue());
		return safe_cast<Value>(managedValue);
	case 18:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode18->GetValue());
		return safe_cast<Value>(managedValue);
	case 19:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode19->GetValue());
		return safe_cast<Value>(managedValue);
	case 20:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode20->GetValue());
		return safe_cast<Value>(managedValue);
	case 21:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode21->GetValue());
		return safe_cast<Value>(managedValue);
	case 22:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode22->GetValue());
		return safe_cast<Value>(managedValue);
	case 23:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode23->GetValue());
		return safe_cast<Value>(managedValue);
	case 24:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode24->GetValue());
		return safe_cast<Value>(managedValue);
	case 25:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode25->GetValue());
		return safe_cast<Value>(managedValue);
	case 26:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode26->GetValue());
		return safe_cast<Value>(managedValue);
	case 27:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode27->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 29:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode29->GetValue());
		return safe_cast<Value>(managedValue);
	case 30:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode30->GetValue());
		return safe_cast<Value>(managedValue);
	case 31:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode31->GetValue());
		return safe_cast<Value>(managedValue);
	case 32:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode32->GetValue());
		return safe_cast<Value>(managedValue);
	case 33:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode33->GetValue());
		return safe_cast<Value>(managedValue);
	case 34:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode34->GetValue());
		return safe_cast<Value>(managedValue);
	case 35:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode35->GetValue());
		return safe_cast<Value>(managedValue);
	case 36:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode36->GetValue());
		return safe_cast<Value>(managedValue);
	case 37:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode37->GetValue());
		return safe_cast<Value>(managedValue);
	case 38:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode38->GetValue());
		return safe_cast<Value>(managedValue);
	case 39:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode39->GetValue());
		return safe_cast<Value>(managedValue);
	case 40:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode40->GetValue());
		return safe_cast<Value>(managedValue);
	case 41:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode41->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 43:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode43->GetValue());
		return safe_cast<Value>(managedValue);
	case 44:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode44->GetValue());
		return safe_cast<Value>(managedValue);
	case 45:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode45->GetValue());
		return safe_cast<Value>(managedValue);
	case 46:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode46->GetValue());
		return safe_cast<Value>(managedValue);
	case 47:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode47->GetValue());
		return safe_cast<Value>(managedValue);
	case 48:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode48->GetValue());
		return safe_cast<Value>(managedValue);
	case 49:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode49->GetValue());
		return safe_cast<Value>(managedValue);
	case 50:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode50->GetValue());
		return safe_cast<Value>(managedValue);
	case 51:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode51->GetValue());
		return safe_cast<Value>(managedValue);
	case 52:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode52->GetValue());
		return safe_cast<Value>(managedValue);
	case 53:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode53->GetValue());
		return safe_cast<Value>(managedValue);
	case 54:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode54->GetValue());
		return safe_cast<Value>(managedValue);
	case 55:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode55->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 57:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode57->GetValue());
		return safe_cast<Value>(managedValue);
	case 58:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode58->GetValue());
		return safe_cast<Value>(managedValue);
	case 59:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode59->GetValue());
		return safe_cast<Value>(managedValue);
	case 60:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode60->GetValue());
		return safe_cast<Value>(managedValue);
	case 61:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode61->GetValue());
		return safe_cast<Value>(managedValue);
	case 62:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode62->GetValue());
		return safe_cast<Value>(managedValue);
	case 63:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode63->GetValue());
		return safe_cast<Value>(managedValue);
	case 64:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode64->GetValue());
		return safe_cast<Value>(managedValue);
	case 65:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode65->GetValue());
		return safe_cast<Value>(managedValue);
	case 66:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode66->GetValue());
		return safe_cast<Value>(managedValue);
	case 67:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode67->GetValue());
		return safe_cast<Value>(managedValue);
	case 68:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode68->GetValue());
		return safe_cast<Value>(managedValue);
	case 69:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode69->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 71:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode71->GetValue());
		return safe_cast<Value>(managedValue);
	case 72:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode72->GetValue());
		return safe_cast<Value>(managedValue);
	case 73:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode73->GetValue());
		return safe_cast<Value>(managedValue);
	case 74:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode74->GetValue());
		return safe_cast<Value>(managedValue);
	case 75:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode75->GetValue());
		return safe_cast<Value>(managedValue);
	case 76:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode76->GetValue());
		return safe_cast<Value>(managedValue);
	case 77:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode77->GetValue());
		return safe_cast<Value>(managedValue);
	case 78:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode78->GetValue());
		return safe_cast<Value>(managedValue);
	case 79:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode79->GetValue());
		return safe_cast<Value>(managedValue);
	case 80:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode80->GetValue());
		return safe_cast<Value>(managedValue);
	case 81:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode81->GetValue());
		return safe_cast<Value>(managedValue);
	case 82:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode82->GetValue());
		return safe_cast<Value>(managedValue);
	case 83:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode83->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 85:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode85->GetValue());
		return safe_cast<Value>(managedValue);
	case 86:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode86->GetValue());
		return safe_cast<Value>(managedValue);
	case 87:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode87->GetValue());
		return safe_cast<Value>(managedValue);
	case 88:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode88->GetValue());
		return safe_cast<Value>(managedValue);
	case 89:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode89->GetValue());
		return safe_cast<Value>(managedValue);
	case 90:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode90->GetValue());
		return safe_cast<Value>(managedValue);
	case 91:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode91->GetValue());
		return safe_cast<Value>(managedValue);
	case 92:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode92->GetValue());
		return safe_cast<Value>(managedValue);
	case 93:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode93->GetValue());
		return safe_cast<Value>(managedValue);
	case 94:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode94->GetValue());
		return safe_cast<Value>(managedValue);
	case 95:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode95->GetValue());
		return safe_cast<Value>(managedValue);
	case 96:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode96->GetValue());
		return safe_cast<Value>(managedValue);
	case 97:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode97->GetValue().c_str());
		return safe_cast<Value>(managedValue);

	case 99:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode99->GetValue());
		return safe_cast<Value>(managedValue);
	case 100:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode100->GetValue());
		return safe_cast<Value>(managedValue);
	case 101:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode101->GetValue());
		return safe_cast<Value>(managedValue);
	case 102:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode102->GetValue());
		return safe_cast<Value>(managedValue);
	case 103:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode103->GetValue());
		return safe_cast<Value>(managedValue);
	case 104:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode104->GetValue());
		return safe_cast<Value>(managedValue);
	case 105:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode105->GetValue());
		return safe_cast<Value>(managedValue);
	case 106:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode106->GetValue());
		return safe_cast<Value>(managedValue);
	case 107:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode107->GetValue());
		return safe_cast<Value>(managedValue);
	case 108:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode108->GetValue());
		return safe_cast<Value>(managedValue);
	case 109:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode109->GetValue());
		return safe_cast<Value>(managedValue);
	case 110:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode110->GetValue());
		return safe_cast<Value>(managedValue);
	case 111:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode111->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 113:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode113->GetValue());
		return safe_cast<Value>(managedValue);
	case 114:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode114->GetValue());
		return safe_cast<Value>(managedValue);
	case 115:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode115->GetValue());
		return safe_cast<Value>(managedValue);
	case 116:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode116->GetValue());
		return safe_cast<Value>(managedValue);
	case 117:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode117->GetValue());
		return safe_cast<Value>(managedValue);
	case 118:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode118->GetValue());
		return safe_cast<Value>(managedValue);
	case 119:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode119->GetValue());
		return safe_cast<Value>(managedValue);
	case 120:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode120->GetValue());
		return safe_cast<Value>(managedValue);
	case 121:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode121->GetValue());
		return safe_cast<Value>(managedValue);
	case 122:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode122->GetValue());
		return safe_cast<Value>(managedValue);
	case 123:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode123->GetValue());
		return safe_cast<Value>(managedValue);
	case 124:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode124->GetValue());
		return safe_cast<Value>(managedValue);
	case 125:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode125->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 127:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode127->GetValue());
		return safe_cast<Value>(managedValue);
	case 128:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode128->GetValue());
		return safe_cast<Value>(managedValue);
	case 129:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode129->GetValue());
		return safe_cast<Value>(managedValue);
	case 130:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode130->GetValue());
		return safe_cast<Value>(managedValue);
	case 131:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode131->GetValue());
		return safe_cast<Value>(managedValue);
	case 132:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode132->GetValue());
		return safe_cast<Value>(managedValue);
	case 133:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode133->GetValue());
		return safe_cast<Value>(managedValue);
	case 134:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode134->GetValue());
		return safe_cast<Value>(managedValue);
	case 135:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode135->GetValue());
		return safe_cast<Value>(managedValue);
	case 136:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode136->GetValue());
		return safe_cast<Value>(managedValue);
	case 137:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode137->GetValue());
		return safe_cast<Value>(managedValue);
	case 138:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode138->GetValue());
		return safe_cast<Value>(managedValue);
	case 139:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode139->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 141:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode141->GetValue());
		return safe_cast<Value>(managedValue);
	case 142:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode142->GetValue());
		return safe_cast<Value>(managedValue);
	case 143:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode143->GetValue());
		return safe_cast<Value>(managedValue);
	case 144:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode144->GetValue());
		return safe_cast<Value>(managedValue);
	case 145:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode145->GetValue());
		return safe_cast<Value>(managedValue);
	case 146:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode146->GetValue());
		return safe_cast<Value>(managedValue);
	case 147:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode147->GetValue());
		return safe_cast<Value>(managedValue);
	case 148:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode148->GetValue());
		return safe_cast<Value>(managedValue);
	case 149:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode149->GetValue());
		return safe_cast<Value>(managedValue);
	case 150:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode150->GetValue());
		return safe_cast<Value>(managedValue);
	case 151:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode151->GetValue());
		return safe_cast<Value>(managedValue);
	case 152:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode152->GetValue());
		return safe_cast<Value>(managedValue);
	case 153:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode153->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 155:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode155->GetValue());
		return safe_cast<Value>(managedValue);
	case 156:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode156->GetValue());
		return safe_cast<Value>(managedValue);
	case 157:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode157->GetValue());
		return safe_cast<Value>(managedValue);
	case 158:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode158->GetValue());
		return safe_cast<Value>(managedValue);
	case 159:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode159->GetValue());
		return safe_cast<Value>(managedValue);
	case 160:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode160->GetValue());
		return safe_cast<Value>(managedValue);
	case 161:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode161->GetValue());
		return safe_cast<Value>(managedValue);
	case 162:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode162->GetValue());
		return safe_cast<Value>(managedValue);
	case 163:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode163->GetValue());
		return safe_cast<Value>(managedValue);
	case 164:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode164->GetValue());
		return safe_cast<Value>(managedValue);
	case 165:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode165->GetValue());
		return safe_cast<Value>(managedValue);
	case 166:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode166->GetValue());
		return safe_cast<Value>(managedValue);
	case 167:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode167->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 169:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode169->GetValue());
		return safe_cast<Value>(managedValue);
	case 170:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode170->GetValue());
		return safe_cast<Value>(managedValue);
	case 171:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode171->GetValue());
		return safe_cast<Value>(managedValue);
	case 172:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode172->GetValue());
		return safe_cast<Value>(managedValue);
	case 173:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode173->GetValue());
		return safe_cast<Value>(managedValue);
	case 174:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode174->GetValue());
		return safe_cast<Value>(managedValue);
	case 175:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode175->GetValue());
		return safe_cast<Value>(managedValue);
	case 176:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode176->GetValue());
		return safe_cast<Value>(managedValue);
	case 177:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode177->GetValue());
		return safe_cast<Value>(managedValue);
	case 178:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode178->GetValue());
		return safe_cast<Value>(managedValue);
	case 179:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode179->GetValue());
		return safe_cast<Value>(managedValue);
	case 180:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode180->GetValue());
		return safe_cast<Value>(managedValue);
	case 181:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode181->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 183:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode183->GetValue());
		return safe_cast<Value>(managedValue);
	case 184:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode184->GetValue());
		return safe_cast<Value>(managedValue);
	case 185:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode185->GetValue());
		return safe_cast<Value>(managedValue);
	case 186:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode186->GetValue());
		return safe_cast<Value>(managedValue);
	case 187:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode187->GetValue());
		return safe_cast<Value>(managedValue);
	case 188:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode188->GetValue());
		return safe_cast<Value>(managedValue);
	case 189:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode189->GetValue());
		return safe_cast<Value>(managedValue);
	case 190:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode190->GetValue());
		return safe_cast<Value>(managedValue);
	case 191:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode191->GetValue());
		return safe_cast<Value>(managedValue);
	case 192:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode192->GetValue());
		return safe_cast<Value>(managedValue);
	case 193:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode193->GetValue());
		return safe_cast<Value>(managedValue);
	case 194:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode194->GetValue());
		return safe_cast<Value>(managedValue);
	case 195:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode195->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 14:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode14->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 28:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode28->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 42:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode42->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 56:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode56->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 70:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode70->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 84:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode84->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 98:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode98->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 112:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode112->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 126:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode126->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 140:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode140->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 154:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode154->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 168:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode168->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 182:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode182->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode196->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Value();
}

generic<typename Key, typename Value>
Key MultiMapWapper::CShorpMultiConstNode<Key, Value>::GetKey()
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
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode1->GetKey());
		return safe_cast<Key>(managedKey);
	case 2:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode2->GetKey());
		return safe_cast<Key>(managedKey);
	case 3:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode3->GetKey());
		return safe_cast<Key>(managedKey);
	case 4:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode4->GetKey());
		return safe_cast<Key>(managedKey);
	case 5:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode5->GetKey());
		return safe_cast<Key>(managedKey);
	case 6:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode6->GetKey());
		return safe_cast<Key>(managedKey);
	case 7:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode7->GetKey());
		return safe_cast<Key>(managedKey);
	case 8:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode8->GetKey());
		return safe_cast<Key>(managedKey);
	case 9:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode9->GetKey());
		return safe_cast<Key>(managedKey);
	case 10:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode10->GetKey());
		return safe_cast<Key>(managedKey);
	case 11:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode11->GetKey());
		return safe_cast<Key>(managedKey);
	case 12:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode12->GetKey());
		return safe_cast<Key>(managedKey);
	case 13:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode13->GetKey());
		return safe_cast<Key>(managedKey);
	case 14:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode14->GetKey());
		return safe_cast<Key>(managedKey);
	case 15:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode15->GetKey());
		return safe_cast<Key>(managedKey);
	case 16:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode16->GetKey());
		return safe_cast<Key>(managedKey);
	case 17:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode17->GetKey());
		return safe_cast<Key>(managedKey);
	case 18:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode18->GetKey());
		return safe_cast<Key>(managedKey);
	case 19:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode19->GetKey());
		return safe_cast<Key>(managedKey);
	case 20:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode20->GetKey());
		return safe_cast<Key>(managedKey);
	case 21:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode21->GetKey());
		return safe_cast<Key>(managedKey);
	case 22:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode22->GetKey());
		return safe_cast<Key>(managedKey);
	case 23:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode23->GetKey());
		return safe_cast<Key>(managedKey);
	case 24:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode24->GetKey());
		return safe_cast<Key>(managedKey);
	case 25:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode25->GetKey());
		return safe_cast<Key>(managedKey);
	case 26:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode26->GetKey());
		return safe_cast<Key>(managedKey);
	case 27:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode27->GetKey());
		return safe_cast<Key>(managedKey);
	case 28:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode28->GetKey());
		return safe_cast<Key>(managedKey);
	case 29:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode29->GetKey());
		return safe_cast<Key>(managedKey);
	case 30:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode30->GetKey());
		return safe_cast<Key>(managedKey);
	case 31:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode31->GetKey());
		return safe_cast<Key>(managedKey);
	case 32:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode32->GetKey());
		return safe_cast<Key>(managedKey);
	case 33:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode33->GetKey());
		return safe_cast<Key>(managedKey);
	case 34:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode34->GetKey());
		return safe_cast<Key>(managedKey);
	case 35:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode35->GetKey());
		return safe_cast<Key>(managedKey);
	case 36:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode36->GetKey());
		return safe_cast<Key>(managedKey);
	case 37:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode37->GetKey());
		return safe_cast<Key>(managedKey);
	case 38:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode38->GetKey());
		return safe_cast<Key>(managedKey);
	case 39:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode39->GetKey());
		return safe_cast<Key>(managedKey);
	case 40:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode40->GetKey());
		return safe_cast<Key>(managedKey);
	case 41:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode41->GetKey());
		return safe_cast<Key>(managedKey);
	case 42:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode42->GetKey());
		return safe_cast<Key>(managedKey);
	case 43:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode43->GetKey());
		return safe_cast<Key>(managedKey);
	case 44:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode44->GetKey());
		return safe_cast<Key>(managedKey);
	case 45:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode45->GetKey());
		return safe_cast<Key>(managedKey);
	case 46:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode46->GetKey());
		return safe_cast<Key>(managedKey);
	case 47:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode47->GetKey());
		return safe_cast<Key>(managedKey);
	case 48:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode48->GetKey());
		return safe_cast<Key>(managedKey);
	case 49:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode49->GetKey());
		return safe_cast<Key>(managedKey);
	case 50:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode50->GetKey());
		return safe_cast<Key>(managedKey);
	case 51:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode51->GetKey());
		return safe_cast<Key>(managedKey);
	case 52:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode52->GetKey());
		return safe_cast<Key>(managedKey);
	case 53:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode53->GetKey());
		return safe_cast<Key>(managedKey);
	case 54:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode54->GetKey());
		return safe_cast<Key>(managedKey);
	case 55:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode55->GetKey());
		return safe_cast<Key>(managedKey);
	case 56:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode56->GetKey());
		return safe_cast<Key>(managedKey);
	case 57:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode57->GetKey());
		return safe_cast<Key>(managedKey);
	case 58:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode58->GetKey());
		return safe_cast<Key>(managedKey);
	case 59:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode59->GetKey());
		return safe_cast<Key>(managedKey);
	case 60:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode60->GetKey());
		return safe_cast<Key>(managedKey);
	case 61:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode61->GetKey());
		return safe_cast<Key>(managedKey);
	case 62:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode62->GetKey());
		return safe_cast<Key>(managedKey);
	case 63:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode63->GetKey());
		return safe_cast<Key>(managedKey);
	case 64:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode64->GetKey());
		return safe_cast<Key>(managedKey);
	case 65:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode65->GetKey());
		return safe_cast<Key>(managedKey);
	case 66:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode66->GetKey());
		return safe_cast<Key>(managedKey);
	case 67:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode67->GetKey());
		return safe_cast<Key>(managedKey);
	case 68:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode68->GetKey());
		return safe_cast<Key>(managedKey);
	case 69:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode69->GetKey());
		return safe_cast<Key>(managedKey);
	case 70:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode70->GetKey());
		return safe_cast<Key>(managedKey);
	case 71:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode71->GetKey());
		return safe_cast<Key>(managedKey);
	case 72:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode72->GetKey());
		return safe_cast<Key>(managedKey);
	case 73:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode73->GetKey());
		return safe_cast<Key>(managedKey);
	case 74:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode74->GetKey());
		return safe_cast<Key>(managedKey);
	case 75:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode75->GetKey());
		return safe_cast<Key>(managedKey);
	case 76:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode76->GetKey());
		return safe_cast<Key>(managedKey);
	case 77:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode77->GetKey());
		return safe_cast<Key>(managedKey);
	case 78:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode78->GetKey());
		return safe_cast<Key>(managedKey);
	case 79:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode79->GetKey());
		return safe_cast<Key>(managedKey);
	case 80:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode80->GetKey());
		return safe_cast<Key>(managedKey);
	case 81:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode81->GetKey());
		return safe_cast<Key>(managedKey);
	case 82:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode82->GetKey());
		return safe_cast<Key>(managedKey);
	case 83:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode83->GetKey());
		return safe_cast<Key>(managedKey);
	case 84:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode84->GetKey());
		return safe_cast<Key>(managedKey);
	case 85:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode85->GetKey());
		return safe_cast<Key>(managedKey);
	case 86:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode86->GetKey());
		return safe_cast<Key>(managedKey);
	case 87:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode87->GetKey());
		return safe_cast<Key>(managedKey);
	case 88:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode88->GetKey());
		return safe_cast<Key>(managedKey);
	case 89:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode89->GetKey());
		return safe_cast<Key>(managedKey);
	case 90:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode90->GetKey());
		return safe_cast<Key>(managedKey);
	case 91:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode91->GetKey());
		return safe_cast<Key>(managedKey);
	case 92:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode92->GetKey());
		return safe_cast<Key>(managedKey);
	case 93:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode93->GetKey());
		return safe_cast<Key>(managedKey);
	case 94:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode94->GetKey());
		return safe_cast<Key>(managedKey);
	case 95:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode95->GetKey());
		return safe_cast<Key>(managedKey);
	case 96:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode96->GetKey());
		return safe_cast<Key>(managedKey);
	case 97:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode97->GetKey());
		return safe_cast<Key>(managedKey);
	case 98:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode98->GetKey());
		return safe_cast<Key>(managedKey);
	case 99:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode99->GetKey());
		return safe_cast<Key>(managedKey);
	case 100:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode100->GetKey());
		return safe_cast<Key>(managedKey);
	case 101:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode101->GetKey());
		return safe_cast<Key>(managedKey);
	case 102:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode102->GetKey());
		return safe_cast<Key>(managedKey);
	case 103:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode103->GetKey());
		return safe_cast<Key>(managedKey);
	case 104:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode104->GetKey());
		return safe_cast<Key>(managedKey);
	case 105:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode105->GetKey());
		return safe_cast<Key>(managedKey);
	case 106:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode106->GetKey());
		return safe_cast<Key>(managedKey);
	case 107:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode107->GetKey());
		return safe_cast<Key>(managedKey);
	case 108:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode108->GetKey());
		return safe_cast<Key>(managedKey);
	case 109:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode109->GetKey());
		return safe_cast<Key>(managedKey);
	case 110:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode110->GetKey());
		return safe_cast<Key>(managedKey);
	case 111:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode111->GetKey());
		return safe_cast<Key>(managedKey);
	case 112:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode112->GetKey());
		return safe_cast<Key>(managedKey);
	case 113:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode113->GetKey());
		return safe_cast<Key>(managedKey);
	case 114:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode114->GetKey());
		return safe_cast<Key>(managedKey);
	case 115:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode115->GetKey());
		return safe_cast<Key>(managedKey);
	case 116:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode116->GetKey());
		return safe_cast<Key>(managedKey);
	case 117:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode117->GetKey());
		return safe_cast<Key>(managedKey);
	case 118:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode118->GetKey());
		return safe_cast<Key>(managedKey);
	case 119:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode119->GetKey());
		return safe_cast<Key>(managedKey);
	case 120:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode120->GetKey());
		return safe_cast<Key>(managedKey);
	case 121:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode121->GetKey());
		return safe_cast<Key>(managedKey);
	case 122:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode122->GetKey());
		return safe_cast<Key>(managedKey);
	case 123:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode123->GetKey());
		return safe_cast<Key>(managedKey);
	case 124:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode124->GetKey());
		return safe_cast<Key>(managedKey);
	case 125:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode125->GetKey());
		return safe_cast<Key>(managedKey);
	case 126:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode126->GetKey());
		return safe_cast<Key>(managedKey);
	case 127:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode127->GetKey());
		return safe_cast<Key>(managedKey);
	case 128:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode128->GetKey());
		return safe_cast<Key>(managedKey);
	case 129:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode129->GetKey());
		return safe_cast<Key>(managedKey);
	case 130:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode130->GetKey());
		return safe_cast<Key>(managedKey);
	case 131:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode131->GetKey());
		return safe_cast<Key>(managedKey);
	case 132:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode132->GetKey());
		return safe_cast<Key>(managedKey);
	case 133:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode133->GetKey());
		return safe_cast<Key>(managedKey);
	case 134:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode134->GetKey());
		return safe_cast<Key>(managedKey);
	case 135:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode135->GetKey());
		return safe_cast<Key>(managedKey);
	case 136:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode136->GetKey());
		return safe_cast<Key>(managedKey);
	case 137:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode137->GetKey());
		return safe_cast<Key>(managedKey);
	case 138:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode138->GetKey());
		return safe_cast<Key>(managedKey);
	case 139:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode139->GetKey());
		return safe_cast<Key>(managedKey);
	case 140:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode140->GetKey());
		return safe_cast<Key>(managedKey);
	case 141:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode141->GetKey());
		return safe_cast<Key>(managedKey);
	case 142:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode142->GetKey());
		return safe_cast<Key>(managedKey);
	case 143:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode143->GetKey());
		return safe_cast<Key>(managedKey);
	case 144:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode144->GetKey());
		return safe_cast<Key>(managedKey);
	case 145:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode145->GetKey());
		return safe_cast<Key>(managedKey);
	case 146:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode146->GetKey());
		return safe_cast<Key>(managedKey);
	case 147:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode147->GetKey());
		return safe_cast<Key>(managedKey);
	case 148:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode148->GetKey());
		return safe_cast<Key>(managedKey);
	case 149:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode149->GetKey());
		return safe_cast<Key>(managedKey);
	case 150:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode150->GetKey());
		return safe_cast<Key>(managedKey);
	case 151:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode151->GetKey());
		return safe_cast<Key>(managedKey);
	case 152:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode152->GetKey());
		return safe_cast<Key>(managedKey);
	case 153:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode153->GetKey());
		return safe_cast<Key>(managedKey);
	case 154:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode154->GetKey());
		return safe_cast<Key>(managedKey);
	case 155:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode155->GetKey());
		return safe_cast<Key>(managedKey);
	case 156:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode156->GetKey());
		return safe_cast<Key>(managedKey);
	case 157:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode157->GetKey());
		return safe_cast<Key>(managedKey);
	case 158:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode158->GetKey());
		return safe_cast<Key>(managedKey);
	case 159:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode159->GetKey());
		return safe_cast<Key>(managedKey);
	case 160:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode160->GetKey());
		return safe_cast<Key>(managedKey);
	case 161:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode161->GetKey());
		return safe_cast<Key>(managedKey);
	case 162:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode162->GetKey());
		return safe_cast<Key>(managedKey);
	case 163:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode163->GetKey());
		return safe_cast<Key>(managedKey);
	case 164:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode164->GetKey());
		return safe_cast<Key>(managedKey);
	case 165:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode165->GetKey());
		return safe_cast<Key>(managedKey);
	case 166:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode166->GetKey());
		return safe_cast<Key>(managedKey);
	case 167:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode167->GetKey());
		return safe_cast<Key>(managedKey);
	case 168:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode168->GetKey());
		return safe_cast<Key>(managedKey);
	case 169:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode169->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 170:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode170->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 171:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode171->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 172:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode172->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 173:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode173->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 174:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode174->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 175:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode175->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 176:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode176->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 177:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode177->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 178:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode178->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 179:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode179->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 180:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode180->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 181:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode181->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 182:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode182->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 183:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode183->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 184:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode184->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 185:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode185->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 186:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode186->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 187:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode187->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 188:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode188->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 189:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode189->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 190:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode190->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 191:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode191->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 192:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode192->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 193:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode193->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 194:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode194->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 195:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode195->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode196->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Key();
}

generic<typename Key, typename Value>
MultiMapWapper::CShorpMultiConstNode<Key, Value>^ MultiMapWapper::CShorpMultiConstNode<Key, Value>::DeepCopy()
{
	CShorpMultiConstNode<Key, Value>^ newCopy = gcnew CShorpMultiConstNode<Key, Value>();
	newCopy->nKeyValueType = this->nKeyValueType;
	newCopy->isInitialized = this->isInitialized;
	newCopy %= this;
	return newCopy;
}

#define MultiConstNode_Compare_Equals_CASE(NUM) \
	case NUM: \
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode##NUM) == *(other->multiConstNodeUnion->CPPmulticonstnode##NUM));

generic<typename Key, typename Value>
bool MultiMapWapper::CShorpMultiConstNode<Key, Value>::operator==(const CShorpMultiConstNode<Key, Value>^ thisObj, const CShorpMultiConstNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpMultiConstNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpMultiConstNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpMultiConstNode<Key, Value>^>(thisObj), const_cast<MultiMapWapper::CShorpMultiConstNode<Key, Value>^>(other))) return true;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return false;
	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
		MultiConstNode_Compare_Equals_CASE(1)
		MultiConstNode_Compare_Equals_CASE(2)
		MultiConstNode_Compare_Equals_CASE(3)
		MultiConstNode_Compare_Equals_CASE(4)
		MultiConstNode_Compare_Equals_CASE(5)
		MultiConstNode_Compare_Equals_CASE(6)
		MultiConstNode_Compare_Equals_CASE(7)
		MultiConstNode_Compare_Equals_CASE(8)
		MultiConstNode_Compare_Equals_CASE(9)
		MultiConstNode_Compare_Equals_CASE(10)
		MultiConstNode_Compare_Equals_CASE(11)
		MultiConstNode_Compare_Equals_CASE(12)
		MultiConstNode_Compare_Equals_CASE(13)
		MultiConstNode_Compare_Equals_CASE(14)
		MultiConstNode_Compare_Equals_CASE(15)
		MultiConstNode_Compare_Equals_CASE(16)
		MultiConstNode_Compare_Equals_CASE(17)
		MultiConstNode_Compare_Equals_CASE(18)
		MultiConstNode_Compare_Equals_CASE(19)
		MultiConstNode_Compare_Equals_CASE(20)
		MultiConstNode_Compare_Equals_CASE(21)
		MultiConstNode_Compare_Equals_CASE(22)
		MultiConstNode_Compare_Equals_CASE(23)
		MultiConstNode_Compare_Equals_CASE(24)
		MultiConstNode_Compare_Equals_CASE(25)
		MultiConstNode_Compare_Equals_CASE(26)
		MultiConstNode_Compare_Equals_CASE(27)
		MultiConstNode_Compare_Equals_CASE(28)
		MultiConstNode_Compare_Equals_CASE(29)
		MultiConstNode_Compare_Equals_CASE(30)
		MultiConstNode_Compare_Equals_CASE(31)
		MultiConstNode_Compare_Equals_CASE(32)
		MultiConstNode_Compare_Equals_CASE(33)
		MultiConstNode_Compare_Equals_CASE(34)
		MultiConstNode_Compare_Equals_CASE(35)
		MultiConstNode_Compare_Equals_CASE(36)
		MultiConstNode_Compare_Equals_CASE(37)
		MultiConstNode_Compare_Equals_CASE(38)
		MultiConstNode_Compare_Equals_CASE(39)
		MultiConstNode_Compare_Equals_CASE(40)
		MultiConstNode_Compare_Equals_CASE(41)
		MultiConstNode_Compare_Equals_CASE(42)
		MultiConstNode_Compare_Equals_CASE(43)
		MultiConstNode_Compare_Equals_CASE(44)
		MultiConstNode_Compare_Equals_CASE(45)
		MultiConstNode_Compare_Equals_CASE(46)
		MultiConstNode_Compare_Equals_CASE(47)
		MultiConstNode_Compare_Equals_CASE(48)
		MultiConstNode_Compare_Equals_CASE(49)
		MultiConstNode_Compare_Equals_CASE(50)
		MultiConstNode_Compare_Equals_CASE(51)
		MultiConstNode_Compare_Equals_CASE(52)
		MultiConstNode_Compare_Equals_CASE(53)
		MultiConstNode_Compare_Equals_CASE(54)
		MultiConstNode_Compare_Equals_CASE(55)
		MultiConstNode_Compare_Equals_CASE(56)
		MultiConstNode_Compare_Equals_CASE(57)
		MultiConstNode_Compare_Equals_CASE(58)
		MultiConstNode_Compare_Equals_CASE(59)
		MultiConstNode_Compare_Equals_CASE(60)
		MultiConstNode_Compare_Equals_CASE(61)
		MultiConstNode_Compare_Equals_CASE(62)
		MultiConstNode_Compare_Equals_CASE(63)
		MultiConstNode_Compare_Equals_CASE(64)
		MultiConstNode_Compare_Equals_CASE(65)
		MultiConstNode_Compare_Equals_CASE(66)
		MultiConstNode_Compare_Equals_CASE(67)
		MultiConstNode_Compare_Equals_CASE(68)
		MultiConstNode_Compare_Equals_CASE(69)
		MultiConstNode_Compare_Equals_CASE(70)
		MultiConstNode_Compare_Equals_CASE(71)
		MultiConstNode_Compare_Equals_CASE(72)
		MultiConstNode_Compare_Equals_CASE(73)
		MultiConstNode_Compare_Equals_CASE(74)
		MultiConstNode_Compare_Equals_CASE(75)
		MultiConstNode_Compare_Equals_CASE(76)
		MultiConstNode_Compare_Equals_CASE(77)
		MultiConstNode_Compare_Equals_CASE(78)
		MultiConstNode_Compare_Equals_CASE(79)
		MultiConstNode_Compare_Equals_CASE(80)
		MultiConstNode_Compare_Equals_CASE(81)
		MultiConstNode_Compare_Equals_CASE(82)
		MultiConstNode_Compare_Equals_CASE(83)
		MultiConstNode_Compare_Equals_CASE(84)
		MultiConstNode_Compare_Equals_CASE(85)
		MultiConstNode_Compare_Equals_CASE(86)
		MultiConstNode_Compare_Equals_CASE(87)
		MultiConstNode_Compare_Equals_CASE(88)
		MultiConstNode_Compare_Equals_CASE(89)
		MultiConstNode_Compare_Equals_CASE(90)
		MultiConstNode_Compare_Equals_CASE(91)
		MultiConstNode_Compare_Equals_CASE(92)
		MultiConstNode_Compare_Equals_CASE(93)
		MultiConstNode_Compare_Equals_CASE(94)
		MultiConstNode_Compare_Equals_CASE(95)
		MultiConstNode_Compare_Equals_CASE(96)
		MultiConstNode_Compare_Equals_CASE(97)
		MultiConstNode_Compare_Equals_CASE(98)
		MultiConstNode_Compare_Equals_CASE(99)
		MultiConstNode_Compare_Equals_CASE(100)
		MultiConstNode_Compare_Equals_CASE(101)
		MultiConstNode_Compare_Equals_CASE(102)
		MultiConstNode_Compare_Equals_CASE(103)
		MultiConstNode_Compare_Equals_CASE(104)
		MultiConstNode_Compare_Equals_CASE(105)
		MultiConstNode_Compare_Equals_CASE(106)
		MultiConstNode_Compare_Equals_CASE(107)
		MultiConstNode_Compare_Equals_CASE(108)
		MultiConstNode_Compare_Equals_CASE(109)
		MultiConstNode_Compare_Equals_CASE(110)
		MultiConstNode_Compare_Equals_CASE(111)
		MultiConstNode_Compare_Equals_CASE(112)
		MultiConstNode_Compare_Equals_CASE(113)
		MultiConstNode_Compare_Equals_CASE(114)
		MultiConstNode_Compare_Equals_CASE(115)
		MultiConstNode_Compare_Equals_CASE(116)
		MultiConstNode_Compare_Equals_CASE(117)
		MultiConstNode_Compare_Equals_CASE(118)
		MultiConstNode_Compare_Equals_CASE(119)
		MultiConstNode_Compare_Equals_CASE(120)
		MultiConstNode_Compare_Equals_CASE(121)
		MultiConstNode_Compare_Equals_CASE(122)
		MultiConstNode_Compare_Equals_CASE(123)
		MultiConstNode_Compare_Equals_CASE(124)
		MultiConstNode_Compare_Equals_CASE(125)
		MultiConstNode_Compare_Equals_CASE(126)
		MultiConstNode_Compare_Equals_CASE(127)
		MultiConstNode_Compare_Equals_CASE(128)
		MultiConstNode_Compare_Equals_CASE(129)
		MultiConstNode_Compare_Equals_CASE(130)
		MultiConstNode_Compare_Equals_CASE(131)
		MultiConstNode_Compare_Equals_CASE(132)
		MultiConstNode_Compare_Equals_CASE(133)
		MultiConstNode_Compare_Equals_CASE(134)
		MultiConstNode_Compare_Equals_CASE(135)
		MultiConstNode_Compare_Equals_CASE(136)
		MultiConstNode_Compare_Equals_CASE(137)
		MultiConstNode_Compare_Equals_CASE(138)
		MultiConstNode_Compare_Equals_CASE(139)
		MultiConstNode_Compare_Equals_CASE(140)
		MultiConstNode_Compare_Equals_CASE(141)
		MultiConstNode_Compare_Equals_CASE(142)
		MultiConstNode_Compare_Equals_CASE(143)
		MultiConstNode_Compare_Equals_CASE(144)
		MultiConstNode_Compare_Equals_CASE(145)
		MultiConstNode_Compare_Equals_CASE(146)
		MultiConstNode_Compare_Equals_CASE(147)
		MultiConstNode_Compare_Equals_CASE(148)
		MultiConstNode_Compare_Equals_CASE(149)
		MultiConstNode_Compare_Equals_CASE(150)
		MultiConstNode_Compare_Equals_CASE(151)
		MultiConstNode_Compare_Equals_CASE(152)
		MultiConstNode_Compare_Equals_CASE(153)
		MultiConstNode_Compare_Equals_CASE(154)
		MultiConstNode_Compare_Equals_CASE(155)
		MultiConstNode_Compare_Equals_CASE(156)
		MultiConstNode_Compare_Equals_CASE(157)
		MultiConstNode_Compare_Equals_CASE(158)
		MultiConstNode_Compare_Equals_CASE(159)
		MultiConstNode_Compare_Equals_CASE(160)
		MultiConstNode_Compare_Equals_CASE(161)
		MultiConstNode_Compare_Equals_CASE(162)
		MultiConstNode_Compare_Equals_CASE(163)
		MultiConstNode_Compare_Equals_CASE(164)
		MultiConstNode_Compare_Equals_CASE(165)
		MultiConstNode_Compare_Equals_CASE(166)
		MultiConstNode_Compare_Equals_CASE(167)
		MultiConstNode_Compare_Equals_CASE(168)
		MultiConstNode_Compare_Equals_CASE(169)
		MultiConstNode_Compare_Equals_CASE(170)
		MultiConstNode_Compare_Equals_CASE(171)
		MultiConstNode_Compare_Equals_CASE(172)
		MultiConstNode_Compare_Equals_CASE(173)
		MultiConstNode_Compare_Equals_CASE(174)
		MultiConstNode_Compare_Equals_CASE(175)
		MultiConstNode_Compare_Equals_CASE(176)
		MultiConstNode_Compare_Equals_CASE(177)
		MultiConstNode_Compare_Equals_CASE(178)
		MultiConstNode_Compare_Equals_CASE(179)
		MultiConstNode_Compare_Equals_CASE(180)
		MultiConstNode_Compare_Equals_CASE(181)
		MultiConstNode_Compare_Equals_CASE(182)
		MultiConstNode_Compare_Equals_CASE(183)
		MultiConstNode_Compare_Equals_CASE(184)
		MultiConstNode_Compare_Equals_CASE(185)
		MultiConstNode_Compare_Equals_CASE(186)
		MultiConstNode_Compare_Equals_CASE(187)
		MultiConstNode_Compare_Equals_CASE(188)
		MultiConstNode_Compare_Equals_CASE(189)
		MultiConstNode_Compare_Equals_CASE(190)
		MultiConstNode_Compare_Equals_CASE(191)
		MultiConstNode_Compare_Equals_CASE(192)
		MultiConstNode_Compare_Equals_CASE(193)
		MultiConstNode_Compare_Equals_CASE(194)
		MultiConstNode_Compare_Equals_CASE(195)
		MultiConstNode_Compare_Equals_CASE(196)
	}
	return false;
}

#define MultiConstNode_Compare_NotEquals_CASE(NUM) \
	case NUM: \
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode##NUM) != *(other->multiConstNodeUnion->CPPmulticonstnode##NUM));

generic<typename Key, typename Value>
bool MultiMapWapper::CShorpMultiConstNode<Key, Value>::operator!=(const CShorpMultiConstNode<Key, Value>^ thisObj, const CShorpMultiConstNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpMultiConstNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpMultiConstNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpMultiConstNode<Key, Value>^>(thisObj), const_cast<MultiMapWapper::CShorpMultiConstNode<Key, Value>^>(other))) return false;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return true;

	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
		MultiConstNode_Compare_NotEquals_CASE(1)
		MultiConstNode_Compare_NotEquals_CASE(2)
		MultiConstNode_Compare_NotEquals_CASE(3)
		MultiConstNode_Compare_NotEquals_CASE(4)
		MultiConstNode_Compare_NotEquals_CASE(5)
		MultiConstNode_Compare_NotEquals_CASE(6)
		MultiConstNode_Compare_NotEquals_CASE(7)
		MultiConstNode_Compare_NotEquals_CASE(8)
		MultiConstNode_Compare_NotEquals_CASE(9)
		MultiConstNode_Compare_NotEquals_CASE(10)
		MultiConstNode_Compare_NotEquals_CASE(11)
		MultiConstNode_Compare_NotEquals_CASE(12)
		MultiConstNode_Compare_NotEquals_CASE(13)
		MultiConstNode_Compare_NotEquals_CASE(14)
		MultiConstNode_Compare_NotEquals_CASE(15)
		MultiConstNode_Compare_NotEquals_CASE(16)
		MultiConstNode_Compare_NotEquals_CASE(17)
		MultiConstNode_Compare_NotEquals_CASE(18)
		MultiConstNode_Compare_NotEquals_CASE(19)
		MultiConstNode_Compare_NotEquals_CASE(20)
		MultiConstNode_Compare_NotEquals_CASE(21)
		MultiConstNode_Compare_NotEquals_CASE(22)
		MultiConstNode_Compare_NotEquals_CASE(23)
		MultiConstNode_Compare_NotEquals_CASE(24)
		MultiConstNode_Compare_NotEquals_CASE(25)
		MultiConstNode_Compare_NotEquals_CASE(26)
		MultiConstNode_Compare_NotEquals_CASE(27)
		MultiConstNode_Compare_NotEquals_CASE(28)
		MultiConstNode_Compare_NotEquals_CASE(29)
		MultiConstNode_Compare_NotEquals_CASE(30)
		MultiConstNode_Compare_NotEquals_CASE(31)
		MultiConstNode_Compare_NotEquals_CASE(32)
		MultiConstNode_Compare_NotEquals_CASE(33)
		MultiConstNode_Compare_NotEquals_CASE(34)
		MultiConstNode_Compare_NotEquals_CASE(35)
		MultiConstNode_Compare_NotEquals_CASE(36)
		MultiConstNode_Compare_NotEquals_CASE(37)
		MultiConstNode_Compare_NotEquals_CASE(38)
		MultiConstNode_Compare_NotEquals_CASE(39)
		MultiConstNode_Compare_NotEquals_CASE(40)
		MultiConstNode_Compare_NotEquals_CASE(41)
		MultiConstNode_Compare_NotEquals_CASE(42)
		MultiConstNode_Compare_NotEquals_CASE(43)
		MultiConstNode_Compare_NotEquals_CASE(44)
		MultiConstNode_Compare_NotEquals_CASE(45)
		MultiConstNode_Compare_NotEquals_CASE(46)
		MultiConstNode_Compare_NotEquals_CASE(47)
		MultiConstNode_Compare_NotEquals_CASE(48)
		MultiConstNode_Compare_NotEquals_CASE(49)
		MultiConstNode_Compare_NotEquals_CASE(50)
		MultiConstNode_Compare_NotEquals_CASE(51)
		MultiConstNode_Compare_NotEquals_CASE(52)
		MultiConstNode_Compare_NotEquals_CASE(53)
		MultiConstNode_Compare_NotEquals_CASE(54)
		MultiConstNode_Compare_NotEquals_CASE(55)
		MultiConstNode_Compare_NotEquals_CASE(56)
		MultiConstNode_Compare_NotEquals_CASE(57)
		MultiConstNode_Compare_NotEquals_CASE(58)
		MultiConstNode_Compare_NotEquals_CASE(59)
		MultiConstNode_Compare_NotEquals_CASE(60)
		MultiConstNode_Compare_NotEquals_CASE(61)
		MultiConstNode_Compare_NotEquals_CASE(62)
		MultiConstNode_Compare_NotEquals_CASE(63)
		MultiConstNode_Compare_NotEquals_CASE(64)
		MultiConstNode_Compare_NotEquals_CASE(65)
		MultiConstNode_Compare_NotEquals_CASE(66)
		MultiConstNode_Compare_NotEquals_CASE(67)
		MultiConstNode_Compare_NotEquals_CASE(68)
		MultiConstNode_Compare_NotEquals_CASE(69)
		MultiConstNode_Compare_NotEquals_CASE(70)
		MultiConstNode_Compare_NotEquals_CASE(71)
		MultiConstNode_Compare_NotEquals_CASE(72)
		MultiConstNode_Compare_NotEquals_CASE(73)
		MultiConstNode_Compare_NotEquals_CASE(74)
		MultiConstNode_Compare_NotEquals_CASE(75)
		MultiConstNode_Compare_NotEquals_CASE(76)
		MultiConstNode_Compare_NotEquals_CASE(77)
		MultiConstNode_Compare_NotEquals_CASE(78)
		MultiConstNode_Compare_NotEquals_CASE(79)
		MultiConstNode_Compare_NotEquals_CASE(80)
		MultiConstNode_Compare_NotEquals_CASE(81)
		MultiConstNode_Compare_NotEquals_CASE(82)
		MultiConstNode_Compare_NotEquals_CASE(83)
		MultiConstNode_Compare_NotEquals_CASE(84)
		MultiConstNode_Compare_NotEquals_CASE(85)
		MultiConstNode_Compare_NotEquals_CASE(86)
		MultiConstNode_Compare_NotEquals_CASE(87)
		MultiConstNode_Compare_NotEquals_CASE(88)
		MultiConstNode_Compare_NotEquals_CASE(89)
		MultiConstNode_Compare_NotEquals_CASE(90)
		MultiConstNode_Compare_NotEquals_CASE(91)
		MultiConstNode_Compare_NotEquals_CASE(92)
		MultiConstNode_Compare_NotEquals_CASE(93)
		MultiConstNode_Compare_NotEquals_CASE(94)
		MultiConstNode_Compare_NotEquals_CASE(95)
		MultiConstNode_Compare_NotEquals_CASE(96)
		MultiConstNode_Compare_NotEquals_CASE(97)
		MultiConstNode_Compare_NotEquals_CASE(98)
		MultiConstNode_Compare_NotEquals_CASE(99)
		MultiConstNode_Compare_NotEquals_CASE(100)
		MultiConstNode_Compare_NotEquals_CASE(101)
		MultiConstNode_Compare_NotEquals_CASE(102)
		MultiConstNode_Compare_NotEquals_CASE(103)
		MultiConstNode_Compare_NotEquals_CASE(104)
		MultiConstNode_Compare_NotEquals_CASE(105)
		MultiConstNode_Compare_NotEquals_CASE(106)
		MultiConstNode_Compare_NotEquals_CASE(107)
		MultiConstNode_Compare_NotEquals_CASE(108)
		MultiConstNode_Compare_NotEquals_CASE(109)
		MultiConstNode_Compare_NotEquals_CASE(110)
		MultiConstNode_Compare_NotEquals_CASE(111)
		MultiConstNode_Compare_NotEquals_CASE(112)
		MultiConstNode_Compare_NotEquals_CASE(113)
		MultiConstNode_Compare_NotEquals_CASE(114)
		MultiConstNode_Compare_NotEquals_CASE(115)
		MultiConstNode_Compare_NotEquals_CASE(116)
		MultiConstNode_Compare_NotEquals_CASE(117)
		MultiConstNode_Compare_NotEquals_CASE(118)
		MultiConstNode_Compare_NotEquals_CASE(119)
		MultiConstNode_Compare_NotEquals_CASE(120)
		MultiConstNode_Compare_NotEquals_CASE(121)
		MultiConstNode_Compare_NotEquals_CASE(122)
		MultiConstNode_Compare_NotEquals_CASE(123)
		MultiConstNode_Compare_NotEquals_CASE(124)
		MultiConstNode_Compare_NotEquals_CASE(125)
		MultiConstNode_Compare_NotEquals_CASE(126)
		MultiConstNode_Compare_NotEquals_CASE(127)
		MultiConstNode_Compare_NotEquals_CASE(128)
		MultiConstNode_Compare_NotEquals_CASE(129)
		MultiConstNode_Compare_NotEquals_CASE(130)
		MultiConstNode_Compare_NotEquals_CASE(131)
		MultiConstNode_Compare_NotEquals_CASE(132)
		MultiConstNode_Compare_NotEquals_CASE(133)
		MultiConstNode_Compare_NotEquals_CASE(134)
		MultiConstNode_Compare_NotEquals_CASE(135)
		MultiConstNode_Compare_NotEquals_CASE(136)
		MultiConstNode_Compare_NotEquals_CASE(137)
		MultiConstNode_Compare_NotEquals_CASE(138)
		MultiConstNode_Compare_NotEquals_CASE(139)
		MultiConstNode_Compare_NotEquals_CASE(140)
		MultiConstNode_Compare_NotEquals_CASE(141)
		MultiConstNode_Compare_NotEquals_CASE(142)
		MultiConstNode_Compare_NotEquals_CASE(143)
		MultiConstNode_Compare_NotEquals_CASE(144)
		MultiConstNode_Compare_NotEquals_CASE(145)
		MultiConstNode_Compare_NotEquals_CASE(146)
		MultiConstNode_Compare_NotEquals_CASE(147)
		MultiConstNode_Compare_NotEquals_CASE(148)
		MultiConstNode_Compare_NotEquals_CASE(149)
		MultiConstNode_Compare_NotEquals_CASE(150)
		MultiConstNode_Compare_NotEquals_CASE(151)
		MultiConstNode_Compare_NotEquals_CASE(152)
		MultiConstNode_Compare_NotEquals_CASE(153)
		MultiConstNode_Compare_NotEquals_CASE(154)
		MultiConstNode_Compare_NotEquals_CASE(155)
		MultiConstNode_Compare_NotEquals_CASE(156)
		MultiConstNode_Compare_NotEquals_CASE(157)
		MultiConstNode_Compare_NotEquals_CASE(158)
		MultiConstNode_Compare_NotEquals_CASE(159)
		MultiConstNode_Compare_NotEquals_CASE(160)
		MultiConstNode_Compare_NotEquals_CASE(161)
		MultiConstNode_Compare_NotEquals_CASE(162)
		MultiConstNode_Compare_NotEquals_CASE(163)
		MultiConstNode_Compare_NotEquals_CASE(164)
		MultiConstNode_Compare_NotEquals_CASE(165)
		MultiConstNode_Compare_NotEquals_CASE(166)
		MultiConstNode_Compare_NotEquals_CASE(167)
		MultiConstNode_Compare_NotEquals_CASE(168)
		MultiConstNode_Compare_NotEquals_CASE(169)
		MultiConstNode_Compare_NotEquals_CASE(170)
		MultiConstNode_Compare_NotEquals_CASE(171)
		MultiConstNode_Compare_NotEquals_CASE(172)
		MultiConstNode_Compare_NotEquals_CASE(173)
		MultiConstNode_Compare_NotEquals_CASE(174)
		MultiConstNode_Compare_NotEquals_CASE(175)
		MultiConstNode_Compare_NotEquals_CASE(176)
		MultiConstNode_Compare_NotEquals_CASE(177)
		MultiConstNode_Compare_NotEquals_CASE(178)
		MultiConstNode_Compare_NotEquals_CASE(179)
		MultiConstNode_Compare_NotEquals_CASE(180)
		MultiConstNode_Compare_NotEquals_CASE(181)
		MultiConstNode_Compare_NotEquals_CASE(182)
		MultiConstNode_Compare_NotEquals_CASE(183)
		MultiConstNode_Compare_NotEquals_CASE(184)
		MultiConstNode_Compare_NotEquals_CASE(185)
		MultiConstNode_Compare_NotEquals_CASE(186)
		MultiConstNode_Compare_NotEquals_CASE(187)
		MultiConstNode_Compare_NotEquals_CASE(188)
		MultiConstNode_Compare_NotEquals_CASE(189)
		MultiConstNode_Compare_NotEquals_CASE(190)
		MultiConstNode_Compare_NotEquals_CASE(191)
		MultiConstNode_Compare_NotEquals_CASE(192)
		MultiConstNode_Compare_NotEquals_CASE(193)
		MultiConstNode_Compare_NotEquals_CASE(194)
		MultiConstNode_Compare_NotEquals_CASE(195)
		MultiConstNode_Compare_NotEquals_CASE(196)
	}
	return false;
}

#define MultiConstNode_Compare_Copy_CASE(NUM) \
	case NUM: \
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode##NUM) = *(other->multiConstNodeUnion->CPPmulticonstnode##NUM)); \
		break;

generic<typename Key, typename Value>
MultiMapWapper::CShorpMultiConstNode<Key, Value>^ MultiMapWapper::CShorpMultiConstNode<Key, Value>::operator%(CShorpMultiConstNode<Key, Value>^ thisObj, CShorpMultiConstNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpMultiConstNode<Key, Value>^>(thisObj), nullptr)) return nullptr;
	if (Object::ReferenceEquals(const_cast<MultiMapWapper::CShorpMultiConstNode<Key, Value>^>(other), nullptr)) return thisObj;
	if (other->isInitialized == 0) return thisObj;
	thisObj->isInitialized = other->isInitialized;

	if (thisObj->nKeyValueType != other->nKeyValueType) return thisObj;

	if (other->gIntKeyClassDictionary) thisObj->gIntKeyClassDictionary = other->gIntKeyClassDictionary;
	if (other->gValueClassDictionary) thisObj->gValueClassDictionary = other->gValueClassDictionary;

	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		break;
		MultiConstNode_Compare_Copy_CASE(1)
		MultiConstNode_Compare_Copy_CASE(2)
		MultiConstNode_Compare_Copy_CASE(3)
		MultiConstNode_Compare_Copy_CASE(4)
		MultiConstNode_Compare_Copy_CASE(5)
		MultiConstNode_Compare_Copy_CASE(6)
		MultiConstNode_Compare_Copy_CASE(7)
		MultiConstNode_Compare_Copy_CASE(8)
		MultiConstNode_Compare_Copy_CASE(9)
		MultiConstNode_Compare_Copy_CASE(10)
		MultiConstNode_Compare_Copy_CASE(11)
		MultiConstNode_Compare_Copy_CASE(12)
		MultiConstNode_Compare_Copy_CASE(13)
		MultiConstNode_Compare_Copy_CASE(14)
		MultiConstNode_Compare_Copy_CASE(15)
		MultiConstNode_Compare_Copy_CASE(16)
		MultiConstNode_Compare_Copy_CASE(17)
		MultiConstNode_Compare_Copy_CASE(18)
		MultiConstNode_Compare_Copy_CASE(19)
		MultiConstNode_Compare_Copy_CASE(20)
		MultiConstNode_Compare_Copy_CASE(21)
		MultiConstNode_Compare_Copy_CASE(22)
		MultiConstNode_Compare_Copy_CASE(23)
		MultiConstNode_Compare_Copy_CASE(24)
		MultiConstNode_Compare_Copy_CASE(25)
		MultiConstNode_Compare_Copy_CASE(26)
		MultiConstNode_Compare_Copy_CASE(27)
		MultiConstNode_Compare_Copy_CASE(28)
		MultiConstNode_Compare_Copy_CASE(29)
		MultiConstNode_Compare_Copy_CASE(30)
		MultiConstNode_Compare_Copy_CASE(31)
		MultiConstNode_Compare_Copy_CASE(32)
		MultiConstNode_Compare_Copy_CASE(33)
		MultiConstNode_Compare_Copy_CASE(34)
		MultiConstNode_Compare_Copy_CASE(35)
		MultiConstNode_Compare_Copy_CASE(36)
		MultiConstNode_Compare_Copy_CASE(37)
		MultiConstNode_Compare_Copy_CASE(38)
		MultiConstNode_Compare_Copy_CASE(39)
		MultiConstNode_Compare_Copy_CASE(40)
		MultiConstNode_Compare_Copy_CASE(41)
		MultiConstNode_Compare_Copy_CASE(42)
		MultiConstNode_Compare_Copy_CASE(43)
		MultiConstNode_Compare_Copy_CASE(44)
		MultiConstNode_Compare_Copy_CASE(45)
		MultiConstNode_Compare_Copy_CASE(46)
		MultiConstNode_Compare_Copy_CASE(47)
		MultiConstNode_Compare_Copy_CASE(48)
		MultiConstNode_Compare_Copy_CASE(49)
		MultiConstNode_Compare_Copy_CASE(50)
		MultiConstNode_Compare_Copy_CASE(51)
		MultiConstNode_Compare_Copy_CASE(52)
		MultiConstNode_Compare_Copy_CASE(53)
		MultiConstNode_Compare_Copy_CASE(54)
		MultiConstNode_Compare_Copy_CASE(55)
		MultiConstNode_Compare_Copy_CASE(56)
		MultiConstNode_Compare_Copy_CASE(57)
		MultiConstNode_Compare_Copy_CASE(58)
		MultiConstNode_Compare_Copy_CASE(59)
		MultiConstNode_Compare_Copy_CASE(60)
		MultiConstNode_Compare_Copy_CASE(61)
		MultiConstNode_Compare_Copy_CASE(62)
		MultiConstNode_Compare_Copy_CASE(63)
		MultiConstNode_Compare_Copy_CASE(64)
		MultiConstNode_Compare_Copy_CASE(65)
		MultiConstNode_Compare_Copy_CASE(66)
		MultiConstNode_Compare_Copy_CASE(67)
		MultiConstNode_Compare_Copy_CASE(68)
		MultiConstNode_Compare_Copy_CASE(69)
		MultiConstNode_Compare_Copy_CASE(70)
		MultiConstNode_Compare_Copy_CASE(71)
		MultiConstNode_Compare_Copy_CASE(72)
		MultiConstNode_Compare_Copy_CASE(73)
		MultiConstNode_Compare_Copy_CASE(74)
		MultiConstNode_Compare_Copy_CASE(75)
		MultiConstNode_Compare_Copy_CASE(76)
		MultiConstNode_Compare_Copy_CASE(77)
		MultiConstNode_Compare_Copy_CASE(78)
		MultiConstNode_Compare_Copy_CASE(79)
		MultiConstNode_Compare_Copy_CASE(80)
		MultiConstNode_Compare_Copy_CASE(81)
		MultiConstNode_Compare_Copy_CASE(82)
		MultiConstNode_Compare_Copy_CASE(83)
		MultiConstNode_Compare_Copy_CASE(84)
		MultiConstNode_Compare_Copy_CASE(85)
		MultiConstNode_Compare_Copy_CASE(86)
		MultiConstNode_Compare_Copy_CASE(87)
		MultiConstNode_Compare_Copy_CASE(88)
		MultiConstNode_Compare_Copy_CASE(89)
		MultiConstNode_Compare_Copy_CASE(90)
		MultiConstNode_Compare_Copy_CASE(91)
		MultiConstNode_Compare_Copy_CASE(92)
		MultiConstNode_Compare_Copy_CASE(93)
		MultiConstNode_Compare_Copy_CASE(94)
		MultiConstNode_Compare_Copy_CASE(95)
		MultiConstNode_Compare_Copy_CASE(96)
		MultiConstNode_Compare_Copy_CASE(97)
		MultiConstNode_Compare_Copy_CASE(98)
		MultiConstNode_Compare_Copy_CASE(99)
		MultiConstNode_Compare_Copy_CASE(100)
		MultiConstNode_Compare_Copy_CASE(101)
		MultiConstNode_Compare_Copy_CASE(102)
		MultiConstNode_Compare_Copy_CASE(103)
		MultiConstNode_Compare_Copy_CASE(104)
		MultiConstNode_Compare_Copy_CASE(105)
		MultiConstNode_Compare_Copy_CASE(106)
		MultiConstNode_Compare_Copy_CASE(107)
		MultiConstNode_Compare_Copy_CASE(108)
		MultiConstNode_Compare_Copy_CASE(109)
		MultiConstNode_Compare_Copy_CASE(110)
		MultiConstNode_Compare_Copy_CASE(111)
		MultiConstNode_Compare_Copy_CASE(112)
		MultiConstNode_Compare_Copy_CASE(113)
		MultiConstNode_Compare_Copy_CASE(114)
		MultiConstNode_Compare_Copy_CASE(115)
		MultiConstNode_Compare_Copy_CASE(116)
		MultiConstNode_Compare_Copy_CASE(117)
		MultiConstNode_Compare_Copy_CASE(118)
		MultiConstNode_Compare_Copy_CASE(119)
		MultiConstNode_Compare_Copy_CASE(120)
		MultiConstNode_Compare_Copy_CASE(121)
		MultiConstNode_Compare_Copy_CASE(122)
		MultiConstNode_Compare_Copy_CASE(123)
		MultiConstNode_Compare_Copy_CASE(124)
		MultiConstNode_Compare_Copy_CASE(125)
		MultiConstNode_Compare_Copy_CASE(126)
		MultiConstNode_Compare_Copy_CASE(127)
		MultiConstNode_Compare_Copy_CASE(128)
		MultiConstNode_Compare_Copy_CASE(129)
		MultiConstNode_Compare_Copy_CASE(130)
		MultiConstNode_Compare_Copy_CASE(131)
		MultiConstNode_Compare_Copy_CASE(132)
		MultiConstNode_Compare_Copy_CASE(133)
		MultiConstNode_Compare_Copy_CASE(134)
		MultiConstNode_Compare_Copy_CASE(135)
		MultiConstNode_Compare_Copy_CASE(136)
		MultiConstNode_Compare_Copy_CASE(137)
		MultiConstNode_Compare_Copy_CASE(138)
		MultiConstNode_Compare_Copy_CASE(139)
		MultiConstNode_Compare_Copy_CASE(140)
		MultiConstNode_Compare_Copy_CASE(141)
		MultiConstNode_Compare_Copy_CASE(142)
		MultiConstNode_Compare_Copy_CASE(143)
		MultiConstNode_Compare_Copy_CASE(144)
		MultiConstNode_Compare_Copy_CASE(145)
		MultiConstNode_Compare_Copy_CASE(146)
		MultiConstNode_Compare_Copy_CASE(147)
		MultiConstNode_Compare_Copy_CASE(148)
		MultiConstNode_Compare_Copy_CASE(149)
		MultiConstNode_Compare_Copy_CASE(150)
		MultiConstNode_Compare_Copy_CASE(151)
		MultiConstNode_Compare_Copy_CASE(152)
		MultiConstNode_Compare_Copy_CASE(153)
		MultiConstNode_Compare_Copy_CASE(154)
		MultiConstNode_Compare_Copy_CASE(155)
		MultiConstNode_Compare_Copy_CASE(156)
		MultiConstNode_Compare_Copy_CASE(157)
		MultiConstNode_Compare_Copy_CASE(158)
		MultiConstNode_Compare_Copy_CASE(159)
		MultiConstNode_Compare_Copy_CASE(160)
		MultiConstNode_Compare_Copy_CASE(161)
		MultiConstNode_Compare_Copy_CASE(162)
		MultiConstNode_Compare_Copy_CASE(163)
		MultiConstNode_Compare_Copy_CASE(164)
		MultiConstNode_Compare_Copy_CASE(165)
		MultiConstNode_Compare_Copy_CASE(166)
		MultiConstNode_Compare_Copy_CASE(167)
		MultiConstNode_Compare_Copy_CASE(168)
		MultiConstNode_Compare_Copy_CASE(169)
		MultiConstNode_Compare_Copy_CASE(170)
		MultiConstNode_Compare_Copy_CASE(171)
		MultiConstNode_Compare_Copy_CASE(172)
		MultiConstNode_Compare_Copy_CASE(173)
		MultiConstNode_Compare_Copy_CASE(174)
		MultiConstNode_Compare_Copy_CASE(175)
		MultiConstNode_Compare_Copy_CASE(176)
		MultiConstNode_Compare_Copy_CASE(177)
		MultiConstNode_Compare_Copy_CASE(178)
		MultiConstNode_Compare_Copy_CASE(179)
		MultiConstNode_Compare_Copy_CASE(180)
		MultiConstNode_Compare_Copy_CASE(181)
		MultiConstNode_Compare_Copy_CASE(182)
		MultiConstNode_Compare_Copy_CASE(183)
		MultiConstNode_Compare_Copy_CASE(184)
		MultiConstNode_Compare_Copy_CASE(185)
		MultiConstNode_Compare_Copy_CASE(186)
		MultiConstNode_Compare_Copy_CASE(187)
		MultiConstNode_Compare_Copy_CASE(188)
		MultiConstNode_Compare_Copy_CASE(189)
		MultiConstNode_Compare_Copy_CASE(190)
		MultiConstNode_Compare_Copy_CASE(191)
		MultiConstNode_Compare_Copy_CASE(192)
		MultiConstNode_Compare_Copy_CASE(193)
		MultiConstNode_Compare_Copy_CASE(194)
		MultiConstNode_Compare_Copy_CASE(195)
		MultiConstNode_Compare_Copy_CASE(196)
	}
	return thisObj;
}

generic<typename Key, typename Value>
MultiMapWapper::CShorpMultiConstNode<Key, Value>^ MultiMapWapper::CShorpMultiConstNode<Key, Value>::operator++(CShorpMultiConstNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Next();
	return thisObj;
}

generic<typename Key, typename Value>
MultiMapWapper::CShorpMultiConstNode<Key, Value>^ MultiMapWapper::CShorpMultiConstNode<Key, Value>::operator--(CShorpMultiConstNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Previous();
	return thisObj;
}

generic<typename Key, typename Value>
void MultiMapWapper::CShorpMultiConstNode<Key, Value>::SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary)
{
	if (ClassDictionary == nullptr) return;
	gIntKeyClassDictionary = ClassDictionary;
}

generic<typename Key, typename Value>
void MultiMapWapper::CShorpMultiConstNode<Key, Value>::SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary)
{
	if (ClassDictionary == nullptr) return;
	gValueClassDictionary = ClassDictionary;
}

//generic<typename Key, typename Value>
//MultiMapWapper::CShorpMultiConstNode<Key, Value>^ MultiMapWapper::CShorpMultiConstNode<Key, Value>::operator++()
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == 0) return this;
//	Next();
//	return this;
//}
//
//generic<typename Key, typename Value>
//MultiMapWapper::CShorpMultiConstNode<Key, Value>^ MultiMapWapper::CShorpMultiConstNode<Key, Value>::operator++(int)
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == false) return this;
//	Next();
//	return this;
//}