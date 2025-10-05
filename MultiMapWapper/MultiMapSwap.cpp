#include "pch.h"

#define SWAP_CASE(NUM) \
	case NUM: \
		multimapUnion->CPPmultimap##NUM->Swap(*(OtherCSharpMultiMap->multimapUnion->CPPmultimap##NUM)); \
		break;

generic<typename Key, typename Value>
void MultiMapWapper::CSharpMultiMap<Key, Value>::Swap(MultiMapWapper::CSharpMultiMap<Key, Value>^ OtherCSharpMultiMap)
{
	if (Object::ReferenceEquals(OtherCSharpMultiMap, nullptr)) return;

	if (nKeyValueType != OtherCSharpMultiMap->nKeyValueType) return;

	switch (nKeyValueType)
	{
	case 0:	default: return;
		SWAP_CASE(1)
		SWAP_CASE(2)
		SWAP_CASE(3)
		SWAP_CASE(4)
		SWAP_CASE(5)
		SWAP_CASE(6)
		SWAP_CASE(7)
		SWAP_CASE(8)
		SWAP_CASE(9)
		SWAP_CASE(10)
		SWAP_CASE(11)
		SWAP_CASE(12)
		SWAP_CASE(13)
		SWAP_CASE(14)
		SWAP_CASE(15)
		SWAP_CASE(16)
		SWAP_CASE(17)
		SWAP_CASE(18)
		SWAP_CASE(19)
		SWAP_CASE(20)
		SWAP_CASE(21)
		SWAP_CASE(22)
		SWAP_CASE(23)
		SWAP_CASE(24)
		SWAP_CASE(25)
		SWAP_CASE(26)
		SWAP_CASE(27)
		SWAP_CASE(28)
		SWAP_CASE(29)
		SWAP_CASE(30)
		SWAP_CASE(31)
		SWAP_CASE(32)
		SWAP_CASE(33)
		SWAP_CASE(34)
		SWAP_CASE(35)
		SWAP_CASE(36)
		SWAP_CASE(37)
		SWAP_CASE(38)
		SWAP_CASE(39)
		SWAP_CASE(40)
		SWAP_CASE(41)
		SWAP_CASE(42)
		SWAP_CASE(43)
		SWAP_CASE(44)
		SWAP_CASE(45)
		SWAP_CASE(46)
		SWAP_CASE(47)
		SWAP_CASE(48)
		SWAP_CASE(49)
		SWAP_CASE(50)
		SWAP_CASE(51)
		SWAP_CASE(52)
		SWAP_CASE(53)
		SWAP_CASE(54)
		SWAP_CASE(55)
		SWAP_CASE(56)
		SWAP_CASE(57)
		SWAP_CASE(58)
		SWAP_CASE(59)
		SWAP_CASE(60)
		SWAP_CASE(61)
		SWAP_CASE(62)
		SWAP_CASE(63)
		SWAP_CASE(64)
		SWAP_CASE(65)
		SWAP_CASE(66)
		SWAP_CASE(67)
		SWAP_CASE(68)
		SWAP_CASE(69)
		SWAP_CASE(70)
		SWAP_CASE(71)
		SWAP_CASE(72)
		SWAP_CASE(73)
		SWAP_CASE(74)
		SWAP_CASE(75)
		SWAP_CASE(76)
		SWAP_CASE(77)
		SWAP_CASE(78)
		SWAP_CASE(79)
		SWAP_CASE(80)
		SWAP_CASE(81)
		SWAP_CASE(82)
		SWAP_CASE(83)
		SWAP_CASE(84)
		SWAP_CASE(85)
		SWAP_CASE(86)
		SWAP_CASE(87)
		SWAP_CASE(88)
		SWAP_CASE(89)
		SWAP_CASE(90)
		SWAP_CASE(91)
		SWAP_CASE(92)
		SWAP_CASE(93)
		SWAP_CASE(94)
		SWAP_CASE(95)
		SWAP_CASE(96)
		SWAP_CASE(97)
		SWAP_CASE(98)
		SWAP_CASE(99)
		SWAP_CASE(100)
		SWAP_CASE(101)
		SWAP_CASE(102)
		SWAP_CASE(103)
		SWAP_CASE(104)
		SWAP_CASE(105)
		SWAP_CASE(106)
		SWAP_CASE(107)
		SWAP_CASE(108)
		SWAP_CASE(109)
		SWAP_CASE(110)
		SWAP_CASE(111)
		SWAP_CASE(112)
		SWAP_CASE(113)
		SWAP_CASE(114)
		SWAP_CASE(115)
		SWAP_CASE(116)
		SWAP_CASE(117)
		SWAP_CASE(118)
		SWAP_CASE(119)
		SWAP_CASE(120)
		SWAP_CASE(121)
		SWAP_CASE(122)
		SWAP_CASE(123)
		SWAP_CASE(124)
		SWAP_CASE(125)
		SWAP_CASE(126)
		SWAP_CASE(127)
		SWAP_CASE(128)
		SWAP_CASE(129)
		SWAP_CASE(130)
		SWAP_CASE(131)
		SWAP_CASE(132)
		SWAP_CASE(133)
		SWAP_CASE(134)
		SWAP_CASE(135)
		SWAP_CASE(136)
		SWAP_CASE(137)
		SWAP_CASE(138)
		SWAP_CASE(139)
		SWAP_CASE(140)
		SWAP_CASE(141)
		SWAP_CASE(142)
		SWAP_CASE(143)
		SWAP_CASE(144)
		SWAP_CASE(145)
		SWAP_CASE(146)
		SWAP_CASE(147)
		SWAP_CASE(148)
		SWAP_CASE(149)
		SWAP_CASE(150)
		SWAP_CASE(151)
		SWAP_CASE(152)
		SWAP_CASE(153)
		SWAP_CASE(154)
		SWAP_CASE(155)
		SWAP_CASE(156)
		SWAP_CASE(157)
		SWAP_CASE(158)
		SWAP_CASE(159)
		SWAP_CASE(160)
		SWAP_CASE(161)
		SWAP_CASE(162)
		SWAP_CASE(163)
		SWAP_CASE(164)
		SWAP_CASE(165)
		SWAP_CASE(166)
		SWAP_CASE(167)
		SWAP_CASE(168)
		SWAP_CASE(169)
		SWAP_CASE(170)
		SWAP_CASE(171)
		SWAP_CASE(172)
		SWAP_CASE(173)
		SWAP_CASE(174)
		SWAP_CASE(175)
		SWAP_CASE(176)
		SWAP_CASE(177)
		SWAP_CASE(178)
		SWAP_CASE(179)
		SWAP_CASE(180)
		SWAP_CASE(181)
		SWAP_CASE(182)
		SWAP_CASE(183)
		SWAP_CASE(184)
		SWAP_CASE(185)
		SWAP_CASE(186)
		SWAP_CASE(187)
		SWAP_CASE(188)
		SWAP_CASE(189)
		SWAP_CASE(190)
		SWAP_CASE(191)
		SWAP_CASE(192)
		SWAP_CASE(193)
		SWAP_CASE(194)
		SWAP_CASE(195)
		SWAP_CASE(196)
	}

	{
		auto temp = nDictionaryCount;
		nDictionaryCount = OtherCSharpMultiMap->nDictionaryCount;
		OtherCSharpMultiMap->nDictionaryCount = temp;
	}

	if (gKeyClassDictionary && OtherCSharpMultiMap->gKeyClassDictionary)
	{
		auto temp = gKeyClassDictionary;
		gKeyClassDictionary = OtherCSharpMultiMap->gKeyClassDictionary;
		OtherCSharpMultiMap->gKeyClassDictionary = temp;
	}
	if (gIntKeyClassDictionary && OtherCSharpMultiMap->gIntKeyClassDictionary)
	{
		auto temp = gIntKeyClassDictionary;
		gIntKeyClassDictionary = OtherCSharpMultiMap->gIntKeyClassDictionary;
		OtherCSharpMultiMap->gIntKeyClassDictionary = temp;

		multiNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
		KeyEndNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
		RIterNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);

		OtherCSharpMultiMap->multiNode->SetIntKeyClassDictionary(OtherCSharpMultiMap->gIntKeyClassDictionary);
		OtherCSharpMultiMap->KeyEndNode->SetIntKeyClassDictionary(OtherCSharpMultiMap->gIntKeyClassDictionary);
		OtherCSharpMultiMap->RIterNode->SetIntKeyClassDictionary(OtherCSharpMultiMap->gIntKeyClassDictionary);
	}

	if (gValueClassDictionary && OtherCSharpMultiMap->gValueClassDictionary)
	{
		auto temp = gValueClassDictionary;
		gValueClassDictionary = OtherCSharpMultiMap->gValueClassDictionary;
		OtherCSharpMultiMap->gValueClassDictionary = temp;

		multiNode->SetValueClassDictionary(gValueClassDictionary);
		KeyEndNode->SetValueClassDictionary(gValueClassDictionary);
		RIterNode->SetValueClassDictionary(gValueClassDictionary);

		OtherCSharpMultiMap->multiNode->SetValueClassDictionary(OtherCSharpMultiMap->gValueClassDictionary);
		OtherCSharpMultiMap->KeyEndNode->SetValueClassDictionary(OtherCSharpMultiMap->gValueClassDictionary);
		OtherCSharpMultiMap->RIterNode->SetValueClassDictionary(OtherCSharpMultiMap->gValueClassDictionary);
	}
}
