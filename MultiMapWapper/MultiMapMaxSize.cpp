#include "pch.h"


#define MAXSIZE_CASE(NUM) \
    case NUM: \
return static_cast<System::UInt64>(multimapUnion->CPPmultimap##NUM->max_size());


generic<typename Key, typename Value>
System::UInt64 MultiMapWapper::CSharpMultiMap<Key, Value>::max_size()
{
	switch (nKeyValueType)
	{
	case 0:	default:
		return 0;
		MAXSIZE_CASE(1)
		MAXSIZE_CASE(2)
		MAXSIZE_CASE(3)
		MAXSIZE_CASE(4)
		MAXSIZE_CASE(5)
		MAXSIZE_CASE(6)
		MAXSIZE_CASE(7)
		MAXSIZE_CASE(8)
		MAXSIZE_CASE(9)
		MAXSIZE_CASE(10)
		MAXSIZE_CASE(11)
		MAXSIZE_CASE(12)
		MAXSIZE_CASE(13)
		MAXSIZE_CASE(14)
		MAXSIZE_CASE(15)
		MAXSIZE_CASE(16)
		MAXSIZE_CASE(17)
		MAXSIZE_CASE(18)
		MAXSIZE_CASE(19)
		MAXSIZE_CASE(20)
		MAXSIZE_CASE(21)
		MAXSIZE_CASE(22)
		MAXSIZE_CASE(23)
		MAXSIZE_CASE(24)
		MAXSIZE_CASE(25)
		MAXSIZE_CASE(26)
		MAXSIZE_CASE(27)
		MAXSIZE_CASE(28)
		MAXSIZE_CASE(29)
		MAXSIZE_CASE(30)
		MAXSIZE_CASE(31)
		MAXSIZE_CASE(32)
		MAXSIZE_CASE(33)
		MAXSIZE_CASE(34)
		MAXSIZE_CASE(35)
		MAXSIZE_CASE(36)
		MAXSIZE_CASE(37)
		MAXSIZE_CASE(38)
		MAXSIZE_CASE(39)
		MAXSIZE_CASE(40)
		MAXSIZE_CASE(41)
		MAXSIZE_CASE(42)
		MAXSIZE_CASE(43)
		MAXSIZE_CASE(44)
		MAXSIZE_CASE(45)
		MAXSIZE_CASE(46)
		MAXSIZE_CASE(47)
		MAXSIZE_CASE(48)
		MAXSIZE_CASE(49)
		MAXSIZE_CASE(50)
		MAXSIZE_CASE(51)
		MAXSIZE_CASE(52)
		MAXSIZE_CASE(53)
		MAXSIZE_CASE(54)
		MAXSIZE_CASE(55)
		MAXSIZE_CASE(56)
		MAXSIZE_CASE(57)
		MAXSIZE_CASE(58)
		MAXSIZE_CASE(59)
		MAXSIZE_CASE(60)
		MAXSIZE_CASE(61)
		MAXSIZE_CASE(62)
		MAXSIZE_CASE(63)
		MAXSIZE_CASE(64)
		MAXSIZE_CASE(65)
		MAXSIZE_CASE(66)
		MAXSIZE_CASE(67)
		MAXSIZE_CASE(68)
		MAXSIZE_CASE(69)
		MAXSIZE_CASE(70)
		MAXSIZE_CASE(71)
		MAXSIZE_CASE(72)
		MAXSIZE_CASE(73)
		MAXSIZE_CASE(74)
		MAXSIZE_CASE(75)
		MAXSIZE_CASE(76)
		MAXSIZE_CASE(77)
		MAXSIZE_CASE(78)
		MAXSIZE_CASE(79)
		MAXSIZE_CASE(80)
		MAXSIZE_CASE(81)
		MAXSIZE_CASE(82)
		MAXSIZE_CASE(83)
		MAXSIZE_CASE(84)
		MAXSIZE_CASE(85)
		MAXSIZE_CASE(86)
		MAXSIZE_CASE(87)
		MAXSIZE_CASE(88)
		MAXSIZE_CASE(89)
		MAXSIZE_CASE(90)
		MAXSIZE_CASE(91)
		MAXSIZE_CASE(92)
		MAXSIZE_CASE(93)
		MAXSIZE_CASE(94)
		MAXSIZE_CASE(95)
		MAXSIZE_CASE(96)
		MAXSIZE_CASE(97)
		MAXSIZE_CASE(98)
		MAXSIZE_CASE(99)
		MAXSIZE_CASE(100)
		MAXSIZE_CASE(101)
		MAXSIZE_CASE(102)
		MAXSIZE_CASE(103)
		MAXSIZE_CASE(104)
		MAXSIZE_CASE(105)
		MAXSIZE_CASE(106)
		MAXSIZE_CASE(107)
		MAXSIZE_CASE(108)
		MAXSIZE_CASE(109)
		MAXSIZE_CASE(110)
		MAXSIZE_CASE(111)
		MAXSIZE_CASE(112)
		MAXSIZE_CASE(113)
		MAXSIZE_CASE(114)
		MAXSIZE_CASE(115)
		MAXSIZE_CASE(116)
		MAXSIZE_CASE(117)
		MAXSIZE_CASE(118)
		MAXSIZE_CASE(119)
		MAXSIZE_CASE(120)
		MAXSIZE_CASE(121)
		MAXSIZE_CASE(122)
		MAXSIZE_CASE(123)
		MAXSIZE_CASE(124)
		MAXSIZE_CASE(125)
		MAXSIZE_CASE(126)
		MAXSIZE_CASE(127)
		MAXSIZE_CASE(128)
		MAXSIZE_CASE(129)
		MAXSIZE_CASE(130)
		MAXSIZE_CASE(131)
		MAXSIZE_CASE(132)
		MAXSIZE_CASE(133)
		MAXSIZE_CASE(134)
		MAXSIZE_CASE(135)
		MAXSIZE_CASE(136)
		MAXSIZE_CASE(137)
		MAXSIZE_CASE(138)
		MAXSIZE_CASE(139)
		MAXSIZE_CASE(140)
		MAXSIZE_CASE(141)
		MAXSIZE_CASE(142)
		MAXSIZE_CASE(143)
		MAXSIZE_CASE(144)
		MAXSIZE_CASE(145)
		MAXSIZE_CASE(146)
		MAXSIZE_CASE(147)
		MAXSIZE_CASE(148)
		MAXSIZE_CASE(149)
		MAXSIZE_CASE(150)
		MAXSIZE_CASE(151)
		MAXSIZE_CASE(152)
		MAXSIZE_CASE(153)
		MAXSIZE_CASE(154)
		MAXSIZE_CASE(155)
		MAXSIZE_CASE(156)
		MAXSIZE_CASE(157)
		MAXSIZE_CASE(158)
		MAXSIZE_CASE(159)
		MAXSIZE_CASE(160)
		MAXSIZE_CASE(161)
		MAXSIZE_CASE(162)
		MAXSIZE_CASE(163)
		MAXSIZE_CASE(164)
		MAXSIZE_CASE(165)
		MAXSIZE_CASE(166)
		MAXSIZE_CASE(167)
		MAXSIZE_CASE(168)
		MAXSIZE_CASE(169)
		MAXSIZE_CASE(170)
		MAXSIZE_CASE(171)
		MAXSIZE_CASE(172)
		MAXSIZE_CASE(173)
		MAXSIZE_CASE(174)
		MAXSIZE_CASE(175)
		MAXSIZE_CASE(176)
		MAXSIZE_CASE(177)
		MAXSIZE_CASE(178)
		MAXSIZE_CASE(179)
		MAXSIZE_CASE(180)
		MAXSIZE_CASE(181)
		MAXSIZE_CASE(182)
		MAXSIZE_CASE(183)
		MAXSIZE_CASE(184)
		MAXSIZE_CASE(185)
		MAXSIZE_CASE(186)
		MAXSIZE_CASE(187)
		MAXSIZE_CASE(188)
		MAXSIZE_CASE(189)
		MAXSIZE_CASE(190)
		MAXSIZE_CASE(191)
		MAXSIZE_CASE(192)
		MAXSIZE_CASE(193)
		MAXSIZE_CASE(194)
		MAXSIZE_CASE(195)
		MAXSIZE_CASE(196)
	}
	return 0;
}
