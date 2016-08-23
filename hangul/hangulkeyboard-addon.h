#ifndef libhangul_hangulkeyboard_addon_h
#define libhangul_hangulkeyboard_addon_h

static const HangulCombinationItem hangul_combination_table_default_2[] = {
  { 0x11631175, 0x1164 }, /* jungseong  ya   + i    = yae     */
  { 0x11671175, 0x1168 }, /* jungseong  yeo  + i   = ye    */
  { 0x11691161, 0x116a }, /* jungseong o      + a       = wa            */
  { 0x11691162, 0x116b }, /* jungseong o      + ae      = wae           */
  { 0x11691175, 0x116c }, /* jungseong o      + i       = oe            */
  { 0x116e1165, 0x116f }, /* jungseong u      + eo      = weo           */
  { 0x116e1166, 0x1170 }, /* jungseong u      + e       = we            */
  { 0x116e1175, 0x1171 }, /* jungseong u      + i       = wi            */
  { 0x11731175, 0x1174 }, /* jungseong eu     + i       = yi            */
  { 0x11a811a8, 0x11a9 }, /* jongseong kiyeok + kiyeok  = ssangekiyeok  */
  { 0x11a811ba, 0x11aa }, /* jongseong kiyeok + sios    = kiyeok-sois   */
  { 0x11ab11bd, 0x11ac }, /* jongseong nieun  + cieuc   = nieun-cieuc   */
  { 0x11ab11c2, 0x11ad }, /* jongseong nieun  + hieuh   = nieun-hieuh   */
  { 0x11af11a8, 0x11b0 }, /* jongseong rieul  + kiyeok  = rieul-kiyeok  */
  { 0x11af11b7, 0x11b1 }, /* jongseong rieul  + mieum   = rieul-mieum   */
  { 0x11af11b8, 0x11b2 }, /* jongseong rieul  + pieup   = rieul-pieup   */
  { 0x11af11ba, 0x11b3 }, /* jongseong rieul  + sios    = rieul-sios    */
  { 0x11af11c0, 0x11b4 }, /* jongseong rieul  + thieuth = rieul-thieuth */
  { 0x11af11c1, 0x11b5 }, /* jongseong rieul  + phieuph = rieul-phieuph */
  { 0x11af11c2, 0x11b6 }, /* jongseong rieul  + hieuh   = rieul-hieuh   */
  { 0x11b811ba, 0x11b9 }, /* jongseong pieup  + sios    = pieup-sios    */
  { 0x11ba11ba, 0x11bb }, /* jongseong sios   + sios    = ssangsios     */
};

static const HangulCombinationItem hangul_combination_table_default_3[] = {
  { 0x11001100, 0x1101 }, /* choseong  kiyeok + kiyeok  = ssangkiyeok   */
  { 0x11031103, 0x1104 }, /* choseong  tikeut + tikeut  = ssangtikeut   */
  { 0x11071107, 0x1108 }, /* choseong  pieup  + pieup   = ssangpieup    */
  { 0x11091109, 0x110a }, /* choseong  sios   + sios    = ssangsios     */
  { 0x110c110c, 0x110d }, /* choseong  cieuc  + cieuc   = ssangcieuc    */
  { 0x11611169, 0x116a }, /* jungseong a      + o       = wa            */
  { 0x11621169, 0x116b }, /* jungseong ae     + o       = wae           */
  { 0x1165116e, 0x116f }, /* jungseong eo     + u       = weo           */
  { 0x1166116e, 0x1170 }, /* jungseong e      + u       = we            */
  { 0x11691161, 0x116a }, /* jungseong o      + a       = wa            */
  { 0x11691162, 0x116b }, /* jungseong o      + ae      = wae           */
  { 0x11691175, 0x116c }, /* jungseong o      + i       = oe            */
  { 0x116e1165, 0x116f }, /* jungseong u      + eo      = weo           */
  { 0x116e1166, 0x1170 }, /* jungseong u      + e       = we            */
  { 0x116e1175, 0x1171 }, /* jungseong u      + i       = wi            */
  { 0x11731175, 0x1174 }, /* jungseong eu     + i       = yi            */
  { 0x11751162, 0x1164 }, /* jungseong i      + ae       = yae            */
  { 0x11751169, 0x116c }, /* jungseong i      + o       = oe            */
  { 0x1175116e, 0x1171 }, /* jungseong i      + u       = wi            */
  { 0x119e1175, 0x11a1 }, /* jungseong araea + i     = araea-i */
  { 0x119e119e, 0x11a2 }, /* jungseong araea + araea           = ssangaraea */
  { 0x11a811a8, 0x11a9 }, /* jongseong kiyeok + kiyeok  = ssangekiyeok  */
  { 0x11a811ba, 0x11aa }, /* jongseong kiyeok + sios    = kiyeok-sois   */
  { 0x11ab11bd, 0x11ac }, /* jongseong nieun  + cieuc   = nieun-cieuc   */
  { 0x11ab11c2, 0x11ad }, /* jongseong nieun  + hieuh   = nieun-hieuh   */
  { 0x11af11a8, 0x11b0 }, /* jongseong rieul  + kiyeok  = rieul-kiyeok  */
  { 0x11af11b7, 0x11b1 }, /* jongseong rieul  + mieum   = rieul-mieum   */
  { 0x11af11b8, 0x11b2 }, /* jongseong rieul  + pieup   = rieul-pieup   */
  { 0x11af11ba, 0x11b3 }, /* jongseong rieul  + sios    = rieul-sios    */
  { 0x11af11c0, 0x11b4 }, /* jongseong rieul  + thieuth = rieul-thieuth */
  { 0x11af11c1, 0x11b5 }, /* jongseong rieul  + phieuph = rieul-phieuph */
  { 0x11af11c2, 0x11b6 }, /* jongseong rieul  + hieuh   = rieul-hieuh   */
  { 0x11b811ba, 0x11b9 }, /* jongseong pieup  + sios    = pieup-sios    */
  { 0x11ba11ba, 0x11bb }, /* jongseong sios   + sios    = ssangsios     */
};

static const HangulCombinationItem hangul_combination_table_full[] = {
  { 0x11001100, 0x1101 }, /* choseong kiyeok + kiyeok          = ssangkiyeok */
  { 0x11001103, 0x115a }, /* choseong kiyeok + tikeut          = kiyeok-tikeut */
  { 0x11021100, 0x1113 }, /* choseong nieun + kiyeok           = nieun-kiyeok */
  { 0x11021102, 0x1114 }, /* choseong nieun + nieun            = ssangnieun */
  { 0x11021103, 0x1115 }, /* choseong nieun + tikeut           = nieun-tikeut */
  { 0x11021107, 0x1116 }, /* choseong nieun + pieup            = nieun-pieup */
  { 0x11021109, 0x115b }, /* choseong nieun + sios             = nieun-sios */
  { 0x1102110c, 0x115c }, /* choseong nieun + cieuc            = nieun-cieuc */
  { 0x11021112, 0x115d }, /* choseong nieun + hieuh            = nieun-hieuh */
  { 0x11031100, 0x1117 }, /* choseong tikeut + kiyeok          = tikeut-kiyeok */
  { 0x11031103, 0x1104 }, /* choseong tikeut + tikeut          = ssangtikeut */
  { 0x11031105, 0x115e }, /* choseong tikeut + rieul           = tikeut-rieul */
  { 0x11031106, 0xa960 }, /* choseong tikeut + mieum           = tikeut-mieum */
  { 0x11031107, 0xa961 }, /* choseong tikeut + pieup           = tikeut-pieup */
  { 0x11031109, 0xa962 }, /* choseong tikeut + sios            = tikeut-sios */
  { 0x1103110c, 0xa963 }, /* choseong tikeut + cieuc           = tikeut-cieuc */
  { 0x11051100, 0xa964 }, /* choseong rieul + kiyeok           = rieul-kiyeok */
  { 0x11051101, 0xa965 }, /* choseong rieul + ssangkiyeok      = rieul-ssangkiyeok */
  { 0x11051102, 0x1118 }, /* choseong rieul + nieun            = rieul-nieun */
  { 0x11051103, 0xa966 }, /* choseong rieul + tikeut           = rieul-tikeut */
  { 0x11051104, 0xa967 }, /* choseong rieul + ssangtikeut      = rieul-ssangtikeut */
  { 0x11051105, 0x1119 }, /* choseong rieul + rieul            = ssangrieul */
  { 0x11051106, 0xa968 }, /* choseong rieul + mieum            = rieul-mieum */
  { 0x11051107, 0xa969 }, /* choseong rieul + pieup            = rieul-pieup */
  { 0x11051108, 0xa96a }, /* choseong rieul + ssangpieup       = rieul-ssangpieup */
  { 0x11051109, 0xa96c }, /* choseong rieul + sios             = rieul-sios */
  { 0x1105110b, 0x111b }, /* choseong rieul + ieung            = kapyeounrieul */
  { 0x1105110c, 0xa96d }, /* choseong rieul + cieuc            = rieul-cieuc */
  { 0x1105110f, 0xa96e }, /* choseong rieul + khieukh          = rieul-khieukh */
  { 0x11051112, 0x111a }, /* choseong rieul + hieuh            = rieul-hieuh */
  { 0x1105112b, 0xa96b }, /* choseong rieul + kapyeounpieup    = rieul-kapyeounpieup */
  { 0x11061100, 0xa96f }, /* choseong mieum + kiyeok           = mieum-kiyeok */
  { 0x11061103, 0xa970 }, /* choseong mieum + tikeut           = mieum-tikeut */
  { 0x11061107, 0x111c }, /* choseong mieum + pieup            = mieum-pieup */
  { 0x11061109, 0xa971 }, /* choseong mieum + sios             = mieum-sios */
  { 0x1106110b, 0x111d }, /* choseong mieum + ieung            = kapyeounmieum */
  { 0x11071100, 0x111e }, /* choseong pieup + kiyeok           = pieup-kiyeok */
  { 0x11071102, 0x111f }, /* choseong pieup + nieun            = pieup-nieun */
  { 0x11071103, 0x1120 }, /* choseong pieup + tikeut           = pieup-tikeut */
  { 0x11071107, 0x1108 }, /* choseong pieup + pieup            = ssangpieup */
  { 0x11071109, 0x1121 }, /* choseong pieup + sios             = pieup-sios */
  { 0x1107110a, 0x1125 }, /* choseong pieup + ssangsios        = pieup-ssangsios */
  { 0x1107110b, 0x112b }, /* choseong pieup + ieung            = kapyeounpieup */
  { 0x1107110c, 0x1127 }, /* choseong pieup + cieuc            = pieup-cieuc */
  { 0x1107110e, 0x1128 }, /* choseong pieup + chieuch          = pieup-chieuch */
  { 0x1107110f, 0xa973 }, /* choseong pieup + khieukh          = pieup-khieukh */
  { 0x11071110, 0x1129 }, /* choseong pieup + thieuth          = pieup-thieuth */
  { 0x11071111, 0x112a }, /* choseong pieup + phieuph          = pieup-phieuph */
  { 0x11071112, 0xa974 }, /* choseong pieup + hieuh            = pieup-hieuh */
  { 0x1107112b, 0x112c }, /* choseong pieup + kapyeounpieup    = kapyeounssangpieup */
  { 0x1107112d, 0x1122 }, /* choseong pieup + sios-kiyeok      = pieup-sios-kiyeok */
  { 0x1107112f, 0x1123 }, /* choseong pieup + sios-tikeut      = pieup-sios-tikeut */
  { 0x11071132, 0x1124 }, /* choseong pieup + sios-pieup       = pieup-sios-pieup */
  { 0x11071136, 0x1126 }, /* choseong pieup + sios-cieuc       = pieup-sios-cieuc */
  { 0x11071139, 0xa972 }, /* choseong pieup + sios-thieuth     = pieup-sios-thieuth */
  { 0x1108110b, 0x112c }, /* choseong ssangpieup + ieung       = kapyeounssangpieup */
  { 0x11091100, 0x112d }, /* choseong sios + kiyeok            = sios-kiyeok */
  { 0x11091102, 0x112e }, /* choseong sios + nieun             = sios-nieun */
  { 0x11091103, 0x112f }, /* choseong sios + tikeut            = sios-tikeut */
  { 0x11091105, 0x1130 }, /* choseong sios + rieul             = sios-rieul */
  { 0x11091106, 0x1131 }, /* choseong sios + mieum             = sios-mieum */
  { 0x11091107, 0x1132 }, /* choseong sios + pieup             = sios-pieup */
  { 0x11091109, 0x110a }, /* choseong sios + sios              = ssangsios */
  { 0x1109110a, 0x1134 }, /* choseong sios + ssangsios         = sios-ssangsios */
  { 0x1109110b, 0x1135 }, /* choseong sios + ieung             = sios-ieung */
  { 0x1109110c, 0x1136 }, /* choseong sios + cieuc             = sios-cieuc */
  { 0x1109110e, 0x1137 }, /* choseong sios + chieuch           = sios-chieuch */
  { 0x1109110f, 0x1138 }, /* choseong sios + khieukh           = sios-khieukh */
  { 0x11091110, 0x1139 }, /* choseong sios + thieuth           = sios-thieuth */
  { 0x11091111, 0x113a }, /* choseong sios + phieuph           = sios-phieuph */
  { 0x11091112, 0x113b }, /* choseong sios + hieuh             = sios-hieuh */
  { 0x1109111e, 0x1133 }, /* choseong sios + pieup-kiyeok      = sios-pieup-kiyeok */
  { 0x11091132, 0xa975 }, /* choseong sios + sios-pieup        = ssangsios-pieup */
  { 0x110a1107, 0xa975 }, /* choseong ssangsios + pieup        = ssangsios-pieup */
  { 0x110a1109, 0x1134 }, /* choseong ssangsios + sios         = sios-ssangsios */
  { 0x110b1100, 0x1141 }, /* choseong ieung + kiyeok           = ieung-kiyeok */
  { 0x110b1103, 0x1142 }, /* choseong ieung + tikeut           = ieung-tikeut */
  { 0x110b1105, 0xa976 }, /* choseong ieung + rieul            = ieung-rieul */
  { 0x110b1106, 0x1143 }, /* choseong ieung + mieum            = ieung-mieum */
  { 0x110b1107, 0x1144 }, /* choseong ieung + pieup            = ieung-pieup */
  { 0x110b1109, 0x1145 }, /* choseong ieung + sios             = ieung-sios */
  { 0x110b110b, 0x1147 }, /* choseong ieung + ieung            = ssangieung */
  { 0x110b110c, 0x1148 }, /* choseong ieung + cieuc            = ieung-cieuc */
  { 0x110b110e, 0x1149 }, /* choseong ieung + chieuch          = ieung-chieuch */
  { 0x110b1110, 0x114a }, /* choseong ieung + thieuth          = ieung-thieuth */
  { 0x110b1111, 0x114b }, /* choseong ieung + phieuph          = ieung-phieuph */
  { 0x110b1112, 0xa977 }, /* choseong ieung + hieuh            = ieung-hieuh */
  { 0x110b1140, 0x1146 }, /* choseong ieung + pansios          = ieung-pansios */
  { 0x110c110b, 0x114d }, /* choseong cieuc + ieung            = cieuc-ieung */
  { 0x110c110c, 0x110d }, /* choseong cieuc + cieuc            = ssangcieuc */
  { 0x110d1112, 0xa978 }, /* choseong ssangcieuc + hieuh       = ssangcieuc-hieuh */
  { 0x110e110f, 0x1152 }, /* choseong chieuch + khieukh        = chieuch-khieukh */
  { 0x110e1112, 0x1153 }, /* choseong chieuch + hieuh          = chieuch-hieuh */
  { 0x11101110, 0xa979 }, /* choseong thieuth + thieuth        = ssangthieuth */
  { 0x11111107, 0x1156 }, /* choseong phieuph + pieup          = phieuph-pieup */
  { 0x1111110b, 0x1157 }, /* choseong phieuph + ieung          = kapyeounphieuph */
  { 0x11111112, 0xa97a }, /* choseong phieuph + hieuh          = phieuph-hieuh */
  { 0x11121109, 0xa97b }, /* choseong hieuh + sios             = hieuh-sios */
  { 0x11121112, 0x1158 }, /* choseong hieuh + hieuh            = ssanghieuh */
  { 0x11211100, 0x1122 }, /* choseong pieup-sios + kiyeok      = pieup-sios-kiyeok */
  { 0x11211103, 0x1123 }, /* choseong pieup-sios + tikeut      = pieup-sios-tikeut */
  { 0x11211107, 0x1124 }, /* choseong pieup-sios + pieup       = pieup-sios-pieup */
  { 0x11211109, 0x1125 }, /* choseong pieup-sios + sios        = pieup-ssangsios */
  { 0x1121110c, 0x1126 }, /* choseong pieup-sios + cieuc       = pieup-sios-cieuc */
  { 0x11211110, 0xa972 }, /* choseong pieup-sios + thieuth     = pieup-sios-thieuth */
  { 0x11321100, 0x1133 }, /* choseong sios-pieup + kiyeok      = sios-pieup-kiyeok */
  { 0x113c113c, 0x113d }, /* choseong chitueumsios + chitueumsios = chitueumssangsios */
  { 0x113e113e, 0x113f }, /* choseong ceongchieumsios + ceongchieumsios = ceongchieumssangsios */
  { 0x114e114e, 0x114f }, /* choseong chitueumcieuc + chitueumcieuc = chitueumssangcieuc */
  { 0x11501150, 0x1151 }, /* choseong ceongchieumcieuc + ceongchieumcieuc = ceongchieumssangcieuc */
  { 0x11591159, 0xa97c }, /* choseong yeorinhieuh + yeorinhieuh = ssangyeorinhieuh */
  { 0x11611161, 0x119e }, /* jungseong a + a                   = arae-a */
  { 0x11611169, 0x1176 }, /* jungseong a + o                   = a-o */
  { 0x1161116e, 0x1177 }, /* jungseong a + u                   = a-u */
  { 0x11611173, 0x11a3 }, /* jungseong a + eu                  = a-eu */
  { 0x11611175, 0x1162 }, /* jungseong a + i                   = ae */
  { 0x11631169, 0x1178 }, /* jungseong ya + o                  = ya-o */
  { 0x1163116d, 0x1179 }, /* jungseong ya + yo                 = ya-yo */
  { 0x1163116e, 0x11a4 }, /* jungseong ya + u                  = ya-u */
  { 0x11631175, 0x1164 }, /* jungseong ya + i                  = yae */
  { 0x11651169, 0x117a }, /* jungseong eo + o                  = eo-o */
  { 0x1165116e, 0x117b }, /* jungseong eo + u                  = eo-u */
  { 0x11651173, 0x117c }, /* jungseong eo + eu                 = eo-eu */
  { 0x11651175, 0x1166 }, /* jungseong eo + i                  = e */
  { 0x11671163, 0x11a5 }, /* jungseong yeo + ya                = yeo-ya */
  { 0x11671169, 0x117d }, /* jungseong yeo + o                 = yeo-o */
  { 0x1167116e, 0x117e }, /* jungseong yeo + u                 = yeo-u */
  { 0x11671175, 0x1168 }, /* jungseong yeo + i                 = ye */
  { 0x11691161, 0x116a }, /* jungseong o + a                   = wa */
  { 0x11691162, 0x116b }, /* jungseong o + ae                  = wae */
  { 0x11691163, 0x11a6 }, /* jungseong o + ya                  = o-ya */
  { 0x11691164, 0x11a7 }, /* jungseong o + yae                 = o-yae */
  { 0x11691165, 0x117f }, /* jungseong o + eo                  = o-eo */
  { 0x11691166, 0x1180 }, /* jungseong o + e                   = o-e */
  { 0x11691167, 0xd7b0 }, /* jungseong o + yeo                 = o-yeo */
  { 0x11691168, 0x1181 }, /* jungseong o + ye                  = o-ye */
  { 0x11691169, 0x1182 }, /* jungseong o + o                   = o-o */
  { 0x1169116e, 0x1183 }, /* jungseong o + u                   = o-u */
  { 0x11691175, 0x116c }, /* jungseong o + i                   = oe */
  { 0x116a1175, 0x116b }, /* jungseong wa + i                  = wae */
  { 0x116d1161, 0xd7b2 }, /* jungseong yo + a                  = yo-a */
  { 0x116d1162, 0xd7b3 }, /* jungseong yo + ae                 = yo-ae */
  { 0x116d1163, 0x1184 }, /* jungseong yo + ya                 = yo-ya */
  { 0x116d1164, 0x1185 }, /* jungseong yo + yae                = yo-yae */
  { 0x116d1165, 0xd7b4 }, /* jungseong yo + eo                 = yo-eo */
  { 0x116d1167, 0x1186 }, /* jungseong yo + yeo                = yo-yeo */
  { 0x116d1169, 0x1187 }, /* jungseong yo + o                  = yo-o */
  { 0x116d1175, 0x1188 }, /* jungseong yo + i                  = yo-i */
  { 0x116e1161, 0x1189 }, /* jungseong u + a                   = u-a */
  { 0x116e1162, 0x118a }, /* jungseong u + ae                  = u-ae */
  { 0x116e1165, 0x116f }, /* jungseong u + eo                  = weo */
  { 0x116e1166, 0x1170 }, /* jungseong u + e                   = we */
  { 0x116e1167, 0xd7b5 }, /* jungseong u + yeo                 = u-yeo */
  { 0x116e1168, 0x118c }, /* jungseong u + ye                  = u-ye */
  { 0x116e116e, 0x118d }, /* jungseong u + u                   = u-u */
  { 0x116e1175, 0x1171 }, /* jungseong u + i                   = wi */
  { 0x116e117c, 0x118b }, /* jungseong u + eo-eu               = u-eo-eu */
  { 0x116ed7c4, 0xd7b6 }, /* jungseong u + i-i                 = u-i-i */
  { 0x116f1173, 0x118b }, /* jungseong weo + eu                = u-eo-eu */
  { 0x116f1175, 0x1170 }, /* jungseong weo + i                 = we */
  { 0x11711175, 0xd7b6 }, /* jungseong wi + i                  = u-i-i */
  { 0x11721161, 0x118e }, /* jungseong yu + a                  = yu-a */
  { 0x11721162, 0xd7b7 }, /* jungseong yu + ae                 = yu-ae */
  { 0x11721165, 0x118f }, /* jungseong yu + eo                 = yu-eo */
  { 0x11721166, 0x1190 }, /* jungseong yu + e                  = yu-e */
  { 0x11721167, 0x1191 }, /* jungseong yu + yeo                = yu-yeo */
  { 0x11721168, 0x1192 }, /* jungseong yu + ye                 = yu-ye */
  { 0x11721169, 0xd7b8 }, /* jungseong yu + o                  = yu-o */
  { 0x1172116e, 0x1193 }, /* jungseong yu + u                  = yu-u */
  { 0x11721175, 0x1194 }, /* jungseong yu + i                  = yu-i */
  { 0x11731161, 0xd7b9 }, /* jungseong eu + a                  = eu-a */
  { 0x11731165, 0xd7ba }, /* jungseong eu + eo                 = eu-eo */
  { 0x11731166, 0xd7bb }, /* jungseong eu + e                  = eu-e */
  { 0x11731169, 0xd7bc }, /* jungseong eu + o                  = eu-o */
  { 0x1173116e, 0x1195 }, /* jungseong eu + u                  = eu-u */
  { 0x11731173, 0x1196 }, /* jungseong eu + eu                 = eu-eu */
  { 0x11731175, 0x1174 }, /* jungseong eu + i                  = yi */
  { 0x1174116e, 0x1197 }, /* jungseong yi + u                  = yi-u */
  { 0x11751161, 0x1198 }, /* jungseong i + a                   = i-a */
  { 0x11751163, 0x1199 }, /* jungseong i + ya                  = i-ya */
  { 0x11751164, 0xd7be }, /* jungseong i + yae                 = i-yae */
  { 0x11751167, 0xd7bf }, /* jungseong i + yeo                 = i-yeo */
  { 0x11751168, 0xd7c0 }, /* jungseong i + ye                  = i-ye */
  { 0x11751169, 0x119a }, /* jungseong i + o                   = i-o */
  { 0x1175116d, 0xd7c2 }, /* jungseong i + yo                  = i-yo */
  { 0x1175116e, 0x119b }, /* jungseong i + u                   = i-u */
  { 0x11751172, 0xd7c3 }, /* jungseong i + yu                  = i-yu */
  { 0x11751173, 0x119c }, /* jungseong i + eu                  = i-eu */
  { 0x11751175, 0xd7c4 }, /* jungseong i + i                   = i-i */
  { 0x11751178, 0xd7bd }, /* jungseong i + ya-o                = i-ya-o */
  { 0x1175119e, 0x119d }, /* jungseong i + araea               = i-araea */
  { 0x11821175, 0xd7b1 }, /* jungseong o-o + i                 = o-o-i */
  { 0x11991169, 0xd7bd }, /* jungseong i-ya + o                = i-ya-o */
  { 0x119a1175, 0xd7c1 }, /* jungseong i-o + i                 = i-o-i */
  { 0x119e1161, 0xd7c5 }, /* jungseong araea + a               = araea-a */
  { 0x119e1165, 0x119f }, /* jungseong araea + eo              = araea-eo */
  { 0x119e1166, 0xd7c6 }, /* jungseong araea + e               = araea-e */
  { 0x119e116e, 0x11a0 }, /* jungseong araea + u               = araea-u */
  { 0x119e1175, 0x11a1 }, /* jungseong araea + i               = araea-i */
  { 0x119e119e, 0x11a2 }, /* jungseong araea + araea           = ssangaraea */
  { 0x11a811a8, 0x11a9 }, /* jongseong kiyeok + kiyeok         = ssangkiyeok */
  { 0x11a811ab, 0x11fa }, /* jongseong kiyeok + nieun          = kiyeok-nieun */
  { 0x11a811af, 0x11c3 }, /* jongseong kiyeok + rieul          = kiyeok-rieul */
  { 0x11a811b8, 0x11fb }, /* jongseong kiyeok + pieup          = kiyeok-pieup */
  { 0x11a811ba, 0x11aa }, /* jongseong kiyeok + sios           = kiyeok-sios */
  { 0x11a811be, 0x11fc }, /* jongseong kiyeok + chieuch        = kiyeok-chieuch */
  { 0x11a811bf, 0x11fd }, /* jongseong kiyeok + khieukh        = kiyeok-khieukh */
  { 0x11a811c2, 0x11fe }, /* jongseong kiyeok + hieuh          = kiyeok-hieuh */
  { 0x11a811e7, 0x11c4 }, /* jongseong kiyeok + sios-kiyeok    = kiyeok-sios-kiyeok */
  { 0x11aa11a8, 0x11c4 }, /* jongseong kiyeok-sios + kiyeok    = kiyeok-sios-kiyeok */
  { 0x11ab11a8, 0x11c5 }, /* jongseong nieun + kiyeok          = nieun-kiyeok */
  { 0x11ab11ab, 0x11ff }, /* jongseong nieun + nieun           = ssangnieun */
  { 0x11ab11ae, 0x11c6 }, /* jongseong nieun + tikeut          = nieun-tikeut */
  { 0x11ab11af, 0xd7cb }, /* jongseong nieun + rieul           = nieun-rieul */
  { 0x11ab11ba, 0x11c7 }, /* jongseong nieun + sios            = nieun-sios */
  { 0x11ab11bd, 0x11ac }, /* jongseong nieun + cieuc           = nieun-cieuc */
  { 0x11ab11be, 0xd7cc }, /* jongseong nieun + chieuch         = nieun-chieuch */
  { 0x11ab11c0, 0x11c9 }, /* jongseong nieun + thieuth         = nieun-thieuth */
  { 0x11ab11c2, 0x11ad }, /* jongseong nieun + hieuh           = nieun-hieuh */
  { 0x11ab11eb, 0x11c8 }, /* jongseong nieun + pansios         = nieun-pansios */
  { 0x11ae11a8, 0x11ca }, /* jongseong tikeut + kiyeok         = tikeut-kiyeok */
  { 0x11ae11ae, 0xd7cd }, /* jongseong tikeut + tikeut         = ssangtikeut */
  { 0x11ae11af, 0x11cb }, /* jongseong tikeut + rieul          = tikeut-rieul */
  { 0x11ae11b8, 0xd7cf }, /* jongseong tikeut + pieup          = tikeut-pieup */
  { 0x11ae11ba, 0xd7d0 }, /* jongseong tikeut + sios           = tikeut-sios */
  { 0x11ae11bd, 0xd7d2 }, /* jongseong tikeut + cieuc          = tikeut-cieuc */
  { 0x11ae11be, 0xd7d3 }, /* jongseong tikeut + chieuch        = tikeut-chieuch */
  { 0x11ae11c0, 0xd7d4 }, /* jongseong tikeut + thieuth        = tikeut-thieuth */
  { 0x11ae11e7, 0xd7d1 }, /* jongseong tikeut + sios-kiyeok    = tikeut-sios-kiyeok */
  { 0x11aed7cf, 0xd7ce }, /* jongseong tikeut + tikeut-pieup   = ssangtikeut-pieup */
  { 0x11af11a8, 0x11b0 }, /* jongseong rieul + kiyeok          = rieul-kiyeok */
  { 0x11af11a9, 0xd7d5 }, /* jongseong rieul + ssangkiyeok     = rieul-ssangkiyeok */
  { 0x11af11aa, 0x11cc }, /* jongseong rieul + kiyeok-sios     = rieul-kiyeok-sios */
  { 0x11af11ab, 0x11cd }, /* jongseong rieul + nieun           = rieul-nieun */
  { 0x11af11ae, 0x11ce }, /* jongseong rieul + tikeut          = rieul-tikeut */
  { 0x11af11af, 0x11d0 }, /* jongseong rieul + rieul           = ssangrieul */
  { 0x11af11b7, 0x11b1 }, /* jongseong rieul + mieum           = rieul-mieum */
  { 0x11af11b8, 0x11b2 }, /* jongseong rieul + pieup           = rieul-pieup */
  { 0x11af11b9, 0x11d3 }, /* jongseong rieul + pieup-sios      = rieul-pieup-sios */
  { 0x11af11ba, 0x11b3 }, /* jongseong rieul + sios            = rieul-sios */
  { 0x11af11bb, 0x11d6 }, /* jongseong rieul + ssangsios       = rieul-ssangsios */
  { 0x11af11bc, 0xd7dd }, /* jongseong rieul + ieung           = kapyeounrieul */
  { 0x11af11bf, 0x11d8 }, /* jongseong rieul + khieukh         = rieul-khieukh */
  { 0x11af11c0, 0x11b4 }, /* jongseong rieul + thieuth         = rieul-thieuth */
  { 0x11af11c1, 0x11b5 }, /* jongseong rieul + phieuph         = rieul-phieuph */
  { 0x11af11c2, 0x11b6 }, /* jongseong rieul + hieuh           = rieul-hieuh */
  { 0x11af11d8, 0xd7d7 }, /* jongseong rieul + rieul-khieukh   = ssangrieul-khieukh */
  { 0x11af11da, 0x11d1 }, /* jongseong rieul + mieum-kiyeok    = rieul-mieum-kiyeok */
  { 0x11af11dd, 0x11d2 }, /* jongseong rieul + mieum-sios      = rieul-mieum-sios */
  { 0x11af11e1, 0xd7d8 }, /* jongseong rieul + mieum-hieuh     = rieul-mieum-hieuh */
  { 0x11af11e4, 0xd7da }, /* jongseong rieul + pieup-phieuph   = rieul-pieup-phieuph */
  { 0x11af11e5, 0x11d4 }, /* jongseong rieul + pieup-hieuh     = rieul-pieup-hieuh */
  { 0x11af11e6, 0x11d5 }, /* jongseong rieul + kapyeounpieup   = rieul-kapyeounpieup */
  { 0x11af11eb, 0x11d7 }, /* jongseong rieul + pansios         = rieul-pansios */
  { 0x11af11f0, 0xd7db }, /* jongseong rieul + yesieung        = rieul-yesieung */
  { 0x11af11f9, 0x11d9 }, /* jongseong rieul + yeorinhieuh     = rieul-yeorinhieuh */
  { 0x11af11fe, 0xd7d6 }, /* jongseong rieul + kiyeok-hieuh    = rieul-kiyeok-hieuh */
  { 0x11afd7e3, 0xd7d9 }, /* jongseong rieul + pieup-tikeut    = rieul-pieup-tikeut */
  { 0x11b011a8, 0xd7d5 }, /* jongseong rieul-kiyeok + kiyeok   = rieul-ssangkiyeok */
  { 0x11b011ba, 0x11cc }, /* jongseong rieul-kiyeok + sios     = rieul-kiyeok-sios */
  { 0x11b011c2, 0xd7d6 }, /* jongseong rieul-kiyeok + hieuh    = rieul-kiyeok-hieuh */
  { 0x11b111a8, 0x11d1 }, /* jongseong rieul-mieum + kiyeok    = rieul-mieum-kiyeok */
  { 0x11b111ba, 0x11d2 }, /* jongseong rieul-mieum + sios      = rieul-mieum-sios */
  { 0x11b111c2, 0xd7d8 }, /* jongseong rieul-mieum + hieuh     = rieul-mieum-hieuh */
  { 0x11b211ae, 0xd7d9 }, /* jongseong rieul-pieup + tikeut    = rieul-pieup-tikeut */
  { 0x11b211ba, 0x11d3 }, /* jongseong rieul-pieup + sios      = rieul-pieup-sios */
  { 0x11b211bc, 0x11d5 }, /* jongseong rieul-pieup + ieung     = rieul-kapyeounpieup */
  { 0x11b211c1, 0xd7da }, /* jongseong rieul-pieup + phieuph   = rieul-pieup-phieuph */
  { 0x11b211c2, 0x11d4 }, /* jongseong rieul-pieup + hieuh     = rieul-pieup-hieuh */
  { 0x11b311ba, 0x11d6 }, /* jongseong rieul-sios + sios       = rieul-ssangsios */
  { 0x11b711a8, 0x11da }, /* jongseong mieum + kiyeok          = mieum-kiyeok */
  { 0x11b711ab, 0xd7de }, /* jongseong mieum + nieun           = mieum-nieun */
  { 0x11b711af, 0x11db }, /* jongseong mieum + rieul           = mieum-rieul */
  { 0x11b711b7, 0xd7e0 }, /* jongseong mieum + mieum           = ssangmieum */
  { 0x11b711b8, 0x11dc }, /* jongseong mieum + pieup           = mieum-pieup */
  { 0x11b711b9, 0xd7e1 }, /* jongseong mieum + pieup-sios      = mieum-pieup-sios */
  { 0x11b711ba, 0x11dd }, /* jongseong mieum + sios            = mieum-sios */
  { 0x11b711bb, 0x11de }, /* jongseong mieum + ssangsios       = mieum-ssangsios */
  { 0x11b711bc, 0x11e2 }, /* jongseong mieum + ieung           = kapyeounmieum */
  { 0x11b711bd, 0xd7e2 }, /* jongseong mieum + cieuc           = mieum-cieuc */
  { 0x11b711be, 0x11e0 }, /* jongseong mieum + chieuch         = mieum-chieuch */
  { 0x11b711c2, 0x11e1 }, /* jongseong mieum + hieuh           = mieum-hieuh */
  { 0x11b711eb, 0x11df }, /* jongseong mieum + pansios         = mieum-pansios */
  { 0x11b711ff, 0xd7df }, /* jongseong mieum + ssangnieun      = mieum-ssangnieun */
  { 0x11b811ae, 0xd7e3 }, /* jongseong pieup + tikeut          = pieup-tikeut */
  { 0x11b811af, 0x11e3 }, /* jongseong pieup + rieul           = pieup-rieul */
  { 0x11b811b5, 0xd7e4 }, /* jongseong pieup + rieul-phieuph   = pieup-rieul-phieuph */
  { 0x11b811b7, 0xd7e5 }, /* jongseong pieup + mieum           = pieup-mieum */
  { 0x11b811b8, 0xd7e6 }, /* jongseong pieup + pieup           = ssangpieup */
  { 0x11b811ba, 0x11b9 }, /* jongseong pieup + sios            = pieup-sios */
  { 0x11b811bc, 0x11e6 }, /* jongseong pieup + ieung           = kapyeounpieup */
  { 0x11b811bd, 0xd7e8 }, /* jongseong pieup + cieuc           = pieup-cieuc */
  { 0x11b811be, 0xd7e9 }, /* jongseong pieup + chieuch         = pieup-chieuch */
  { 0x11b811c1, 0x11e4 }, /* jongseong pieup + phieuph         = pieup-phieuph */
  { 0x11b811c2, 0x11e5 }, /* jongseong pieup + hieuh           = pieup-hieuh */
  { 0x11b811e8, 0xd7e7 }, /* jongseong pieup + sios-tikeut     = pieup-sios-tikeut */
  { 0x11b911ae, 0xd7e7 }, /* jongseong pieup-sios + tikeut     = pieup-sios-tikeut */
  { 0x11ba11a8, 0x11e7 }, /* jongseong sios + kiyeok           = sios-kiyeok */
  { 0x11ba11ae, 0x11e8 }, /* jongseong sios + tikeut           = sios-tikeut */
  { 0x11ba11af, 0x11e9 }, /* jongseong sios + rieul            = sios-rieul */
  { 0x11ba11b7, 0xd7ea }, /* jongseong sios + mieum            = sios-mieum */
  { 0x11ba11b8, 0x11ea }, /* jongseong sios + pieup            = sios-pieup */
  { 0x11ba11ba, 0x11bb }, /* jongseong sios + sios             = ssangsios */
  { 0x11ba11bd, 0xd7ef }, /* jongseong sios + cieuc            = sios-cieuc */
  { 0x11ba11be, 0xd7f0 }, /* jongseong sios + chieuch          = sios-chieuch */
  { 0x11ba11c0, 0xd7f1 }, /* jongseong sios + thieuth          = sios-thieuth */
  { 0x11ba11c2, 0xd7f2 }, /* jongseong sios + hieuh            = sios-hieuh */
  { 0x11ba11e6, 0xd7eb }, /* jongseong sios + kapyeounpieup    = sios-kapyeounpieup */
  { 0x11ba11e7, 0xd7ec }, /* jongseong sios + sios-kiyeok      = ssangsios-kiyeok */
  { 0x11ba11e8, 0xd7ed }, /* jongseong sios + sios-tikeut      = ssangsios-tikeut */
  { 0x11ba11eb, 0xd7ee }, /* jongseong sios + pansios          = sios-pansios */
  { 0x11bb11a8, 0xd7ec }, /* jongseong ssangsios + kiyeok      = ssangsios-kiyeok */
  { 0x11bb11ae, 0xd7ed }, /* jongseong ssangsios + tikeut      = ssangsios-tikeut */
  { 0x11bd11b8, 0xd7f7 }, /* jongseong cieuc + pieup           = cieuc-pieup */
  { 0x11bd11bd, 0xd7f9 }, /* jongseong cieuc + cieuc           = ssangcieuc */
  { 0x11bdd7e6, 0xd7f8 }, /* jongseong cieuc + ssangpieup      = cieuc-ssangpieup */
  { 0x11c111b8, 0x11f3 }, /* jongseong phieuph + pieup         = phieuph-pieup */
  { 0x11c111ba, 0xd7fa }, /* jongseong phieuph + sios          = phieuph-sios */
  { 0x11c111bc, 0x11f4 }, /* jongseong phieuph + ieung         = kapyeounphieuph */
  { 0x11c111c0, 0xd7fb }, /* jongseong phieuph + thieuth       = phieuph-thieuth */
  { 0x11c211ab, 0x11f5 }, /* jongseong hieuh + nieun           = hieuh-nieun */
  { 0x11c211af, 0x11f6 }, /* jongseong hieuh + rieul           = hieuh-rieul */
  { 0x11c211b7, 0x11f7 }, /* jongseong hieuh + mieum           = hieuh-mieum */
  { 0x11c211b8, 0x11f8 }, /* jongseong hieuh + pieup           = hieuh-pieup */
  { 0x11ce11c2, 0x11cf }, /* jongseong rieul-tikeut + hieuh    = rieul-tikeut-hieuh */
  { 0x11d011bf, 0xd7d7 }, /* jongseong ssangrieul + khieukh    = ssangrieul-khieukh */
  { 0x11d911c2, 0xd7dc }, /* jongseong rieul-yeorinhieuh + hieuh = rieul-yeorinhieuh-hieuh */
  { 0x11dc11ba, 0xd7e1 }, /* jongseong mieum-pieup + sios      = mieum-pieup-sios */
  { 0x11dd11ba, 0x11de }, /* jongseong mieum-sios + sios       = mieum-ssangsios */
  { 0x11e311c1, 0xd7e4 }, /* jongseong pieup-rieul + phieuph   = pieup-rieul-phieuph */
  { 0x11ea11bc, 0xd7eb }, /* jongseong sios-pieup + ieung      = sios-kapyeounpieup */
  { 0x11eb11b8, 0xd7f3 }, /* jongseong pansios + pieup         = pansios-pieup */
  { 0x11eb11e6, 0xd7f4 }, /* jongseong pansios + kapyeounpieup = pansios-kapyeounpieup */
  { 0x11ec11a8, 0x11ed }, /* jongseong ieung-kiyeok + kiyeok   = ieung-ssangkiyeok */
  { 0x11f011a8, 0x11ec }, /* jongseong yesieung + kiyeok       = yesieung-kiyeok */
  { 0x11f011a9, 0x11ed }, /* jongseong yesieung + ssangkiyeok  = yesieung-ssangkiyeok */
  { 0x11f011b7, 0xd7f5 }, /* jongseong yesieung + mieum        = yesieung-mieum */
  { 0x11f011ba, 0x11f1 }, /* jongseong yesieung + sios         = yesieung-sios */
  { 0x11f011bf, 0x11ef }, /* jongseong yesieung + khieukh      = yesieung-khieukh */
  { 0x11f011c2, 0xd7f6 }, /* jongseong yesieung + hieuh        = yesieung-hieuh */
  { 0x11f011eb, 0x11f2 }, /* jongseong yesieung + pansios      = yesieung-pansios */
  { 0x11f011f0, 0x11ee }, /* jongseong yesieung + yesieung     = ssangyesieung */
  /* */
  { 0xa9641100, 0xa965 }, /* choseong rieul-kiyeok + kiyeok    = rieul-ssangkiyeok */
  { 0xa9661103, 0xa967 }, /* choseong rieul-tikeut + tikeut    = rieul-ssangtikeut */
  { 0xa9691107, 0xa96a }, /* choseong rieul-pieup + pieup      = rieul-ssangpieup */
  { 0xa969110b, 0xa96b }, /* choseong rieul-pieup + ieung      = rieul-kapyeounpieup */
  { 0xd7c51161, 0x11a2 }, /* jungseong araea-a + a             = ssangaraea */
  { 0xd7cd11b8, 0xd7ce }, /* jongseong ssangtikeut + pieup     = ssangtikeut-pieup */
  { 0xd7d011a8, 0xd7d1 }, /* jongseong tikeut-sios + kiyeok    = tikeut-sios-kiyeok */
  { 0xd7de11ab, 0xd7df }, /* jongseong mieum-nieun + nieun     = mieum-ssangnieun */
  { 0xd7f311bc, 0xd7f4 }, /* jongseong pansios-pieup + ieung   = pansios-kapyeounpieup */
  { 0xd7f711b8, 0xd7f8 }, /* jongseong cieuc-pieup + pieup     = cieuc-ssangpieup */
};


static const HangulCombinationItem hangul_combination_table_romaja[] = {
  { 0x11001100, 0x1101 }, /* choseong  kiyeok + kiyeok  = ssangkiyeok   */
  { 0x11031103, 0x1104 }, /* choseong  tikeut + tikeut  = ssangtikeut   */
  { 0x11071107, 0x1108 }, /* choseong  pieup  + pieup   = ssangpieup    */
  { 0x11091109, 0x110a }, /* choseong  sios   + sios    = ssangsios     */
  { 0x110c110c, 0x110d }, /* choseong  cieuc  + cieuc   = ssangcieuc    */
  { 0x110e1112, 0x110e }, /* choseong  chieuch+ hieuh   = chieuch       */
  { 0x11611166, 0x1162 }, /* jungseong a      + e       = ae            */
  { 0x11611175, 0x1162 }, /* jungseong a      + i       = ae            */
  { 0x11631166, 0x1164 }, /* jungseong ya     + e       = yae           */
  { 0x11631175, 0x1164 }, /* jungseong ya     + i       = yae           */
  { 0x11661169, 0x1165 }, /* jungseong e      + o       = eo            */
  { 0x1166116e, 0x1173 }, /* jungseong e      + u       = eu            */
  { 0x11681169, 0x1167 }, /* jungseong ye     + o       = yeo           */
  { 0x11691161, 0x116a }, /* jungseong o      + a       = wa            */
  { 0x11691162, 0x116b }, /* jungseong o      + ae      = wae           */
  { 0x11691175, 0x116c }, /* jungseong o      + i       = oe            */
  { 0x116a1166, 0x116b }, /* jungseong wa     + e       = wae           */
  { 0x116a1175, 0x116b }, /* jungseong wa     + i       = wae           */
  { 0x116e1161, 0x116a }, /* jungseong u      + a       = wa            */
  { 0x116e1165, 0x116f }, /* jungseong u      + eo      = weo           */
  { 0x116e1166, 0x1170 }, /* jungseong u      + e       = we            */
  { 0x116e1169, 0x116f }, /* jungseong u      + o       = weo           */
  { 0x116e1175, 0x1171 }, /* jungseong u      + i       = wi            */
  { 0x11701169, 0x116f }, /* jungseong we     + o       = weo           */
  { 0x11731175, 0x1174 }, /* jungseong eu     + i       = yi            */
  { 0x11751161, 0x1163 }, /* jungseong i      + a       = ya            */
  { 0x11751162, 0x1164 }, /* jungseong i      + ae      = yae           */
  { 0x11751165, 0x1167 }, /* jungseong i      + eo      = yeo           */
  { 0x11751166, 0x1168 }, /* jungseong i      + e       = ye            */
  { 0x11751169, 0x116d }, /* jungseong i      + o       = yo            */
  { 0x1175116e, 0x1172 }, /* jungseong i      + u       = yu            */
  { 0x11a811a8, 0x11a9 }, /* jongseong kiyeok + kiyeok  = ssangekiyeok  */
  { 0x11a811ba, 0x11aa }, /* jongseong kiyeok + sios    = kiyeok-sois   */
  { 0x11ab11a8, 0x11bc }, /* jongseong nieun  + kiyeok  = ieung         */
  { 0x11ab11bd, 0x11ac }, /* jongseong nieun  + cieuc   = nieun-cieuc   */
  { 0x11ab11c2, 0x11ad }, /* jongseong nieun  + hieuh   = nieun-hieuh   */
  { 0x11af11a8, 0x11b0 }, /* jongseong rieul  + kiyeok  = rieul-kiyeok  */
  { 0x11af11b7, 0x11b1 }, /* jongseong rieul  + mieum   = rieul-mieum   */
  { 0x11af11b8, 0x11b2 }, /* jongseong rieul  + pieup   = rieul-pieup   */
  { 0x11af11ba, 0x11b3 }, /* jongseong rieul  + sios    = rieul-sios    */
  { 0x11af11c0, 0x11b4 }, /* jongseong rieul  + thieuth = rieul-thieuth */
  { 0x11af11c1, 0x11b5 }, /* jongseong rieul  + phieuph = rieul-phieuph */
  { 0x11af11c2, 0x11b6 }, /* jongseong rieul  + hieuh   = rieul-hieuh   */
  { 0x11b811ba, 0x11b9 }, /* jongseong pieup  + sios    = pieup-sios    */
  { 0x11ba11ba, 0x11bb }, /* jongseong sios   + sios    = ssangsios     */
};

static const HangulCombinationItem hangul_combination_table_ahn[] = {
  { 0x11001103, 0x1104 }, /* choseong  kiyeok       + tikeut = ssangtikeut   */
  { 0x1100110b, 0x1101 }, /* choseong  kiyeok       + ieung  = ssangkiyeok   */
  { 0x11001112, 0x110f }, /* choseong  kiyeok       + hieuh  = khieukh       */
  { 0x11021109, 0x110a }, /* choseong  nieun        + sios   = ssangsios     */
  { 0x11031100, 0x1104 }, /* choseong  tikeut       + kiyeok = ssangtikeut   */
  { 0x1103110c, 0x110d }, /* choseong  tikeut       + cieuc  = ssangcieuc    */
  { 0x11031112, 0x1110 }, /* choseong  tikeut       + hieuh  = thieuth       */
  { 0x1107110c, 0x1108 }, /* choseong  pieup        + cieuc  = ssangpieup    */
  { 0x11071112, 0x1111 }, /* choseong  pieup        + hieuh  = phieuph       */
  { 0x11091102, 0x110a }, /* choseong  sios         + nieun  = ssangsios     */
  { 0x110b1100, 0x1101 }, /* choseong  ieung        + kiyeok = ssangkiyeok   */
  { 0x110c1103, 0x110d }, /* choseong  cieuc        + tikeut = ssangcieuc    */
  { 0x110c1107, 0x1108 }, /* choseong  cieuc        + pieup  = ssangpieup    */
  { 0x110c1112, 0x110e }, /* choseong  cieuc        + hieuh  = chieuch       */
  { 0x11121100, 0x110f }, /* choseong  hieuh        + kiyeok = khieukh       */
  { 0x11121103, 0x1110 }, /* choseong  hieuh        + tikeut = thieuth       */
  { 0x11121107, 0x1111 }, /* choseong  hieuh        + pieup  = phieuph       */
  { 0x1112110c, 0x110e }, /* choseong  hieuh        + cieuc  = chieuch       */
  { 0x11611169, 0x116a }, /* jungseong a            + o      = wa            */
  { 0x11611175, 0x1162 }, /* jungseong a            + i      = ae            */
  { 0x11621169, 0x116b }, /* jungseong ae           + o      = wae           */
  { 0x11631175, 0x1164 }, /* jungseong ya           + i      = yae           */
  { 0x1165116e, 0x116f }, /* jungseong eo           + u      = weo           */
  { 0x11651175, 0x1166 }, /* jungseong eo           + i      = e             */
  { 0x1166116e, 0x1170 }, /* jungseong e            + u      = we            */
  { 0x11671175, 0x1168 }, /* jungseong yeo          + i      = ye            */
  { 0x11691161, 0x116a }, /* jungseong o            + a      = wa            */
  { 0x11691175, 0x116c }, /* jungseong o            + i      = oe            */
  { 0x116a1175, 0x116b }, /* jungseong wa           + i      = wae           */
  { 0x116c1161, 0x116b }, /* jungseong oe           + a      = wae           */
  { 0x116e1165, 0x116f }, /* jungseong u            + eo     = weo           */
  { 0x116e1175, 0x1171 }, /* jungseong u            + i      = wi            */
  { 0x116f1175, 0x1170 }, /* jungseong weo          + i      = we            */
  { 0x11711165, 0x1170 }, /* jungseong wi           + eo     = we            */
  { 0x11731175, 0x1174 }, /* jungseong eu           + i      = yi            */
  { 0x11751161, 0x1162 }, /* jungseong i            + a      = ae            */
  { 0x11751163, 0x1164 }, /* jungseong i            + ya     = yae           */
  { 0x11751165, 0x1166 }, /* jungseong i            + eo     = e             */
  { 0x11751167, 0x1168 }, /* jungseong i            + yeo    = ye            */
  { 0x11751169, 0x116c }, /* jungseong i            + o      = oe            */
  { 0x1175116e, 0x1171 }, /* jungseong i            + u      = wi            */
  { 0x11751173, 0x1174 }, /* jungseong i            + eu     = yi            */
  { 0x11a811af, 0x11b0 }, /* jongseong kiyeok       + rieul  = rieul-kiyeok  */
  { 0x11a811ba, 0x11aa }, /* jongseong kiyeok       + sios   = kiyeok-sios   */
  { 0x11a811bc, 0x11a9 }, /* jongseong kiyeok       + ieung  = ssangkiyeok   */
  { 0x11a811c2, 0x11bf }, /* jongseong kiyeok       + hieuh  = khieukh       */
  { 0x11ab11ba, 0x11bb }, /* jongseong nieun        + sios   = ssangsios     */
  { 0x11ab11bd, 0x11ac }, /* jongseong nieun        + cieuc  = nieun-cieuc   */
  { 0x11ab11c2, 0x11ad }, /* jongseong nieun        + hieuh  = nieun-hieuh   */
  { 0x11ae11af, 0x11ce }, /* jongseong tikeut       + rieul  = rieul-tikeut  */
  { 0x11ae11c2, 0x11c0 }, /* jongseong tikeut       + hieuh  = thieuth       */
  { 0x11af11a8, 0x11b0 }, /* jongseong rieul        + kiyeok = rieul-kiyeok  */
  { 0x11af11ae, 0x11ce }, /* jongseong rieul        + tikeut = rieul-tikeut  */
  { 0x11af11b7, 0x11b1 }, /* jongseong rieul        + mieum  = rieul-mieum   */
  { 0x11af11b8, 0x11b2 }, /* jongseong rieul        + pieup  = rieul-pieup   */
  { 0x11af11ba, 0x11b3 }, /* jongseong rieul        + sios   = rieul-sios    */
  { 0x11af11c2, 0x11b6 }, /* jongseong rieul        + hieuh  = rieul-hieuh   */
  { 0x11b211c2, 0x11b5 }, /* jongseong rieul-pieup  + hieuh  = rieul-phieuph */
  { 0x11b611ae, 0x11b4 }, /* jongseong rieul-hieuh  + tikeut = rieul-thieuth */
  { 0x11b611b8, 0x11b5 }, /* jongseong rieul-hieuh  + pieup  = rieul-phieuph */
  { 0x11b711af, 0x11b1 }, /* jongseong mieum        + rieul  = rieul-mieum   */
  { 0x11b811af, 0x11b2 }, /* jongseong pieup        + rieul  = rieul-pieup   */
  { 0x11b811ba, 0x11b9 }, /* jongseong pieup        + sios   = pieup-sios    */
  { 0x11b811c2, 0x11c1 }, /* jongseong pieup        + hieuh  = phieuph       */
  { 0x11ba11a8, 0x11aa }, /* jongseong sios         + kiyeok = kiyeok-sios   */
  { 0x11ba11ab, 0x11bb }, /* jongseong sios         + nieun  = ssangsios     */
  { 0x11ba11af, 0x11b3 }, /* jongseong sios         + rieul  = rieul-sios    */
  { 0x11ba11b8, 0x11b9 }, /* jongseong sios         + pieup  = pieup-sios    */
  { 0x11bc11a8, 0x11a9 }, /* jongseong ieung        + kiyeok = ssangkiyeok   */
  { 0x11bd11ab, 0x11ac }, /* jongseong cieuc        + nieun  = nieun-cieuc   */
  { 0x11bd11c2, 0x11be }, /* jongseong cieuc        + hieuh  = chieuch       */
  { 0x11c011af, 0x11b4 }, /* jongseong thieuth      + rieul  = rieul-thieuth */
  { 0x11c111af, 0x11b5 }, /* jongseong phieuph      + rieul  = rieul-phieuph */
  { 0x11c211a8, 0x11bf }, /* jongseong hieuh        + kiyeok = khieukh       */
  { 0x11c211ab, 0x11ad }, /* jongseong hieuh        + nieun  = nieun-hieuh   */
  { 0x11c211ae, 0x11c0 }, /* jongseong hieuh        + tikeut = thieuth       */
  { 0x11c211af, 0x11b6 }, /* jongseong hieuh        + rieul  = rieul-hieuh   */
  { 0x11c211b8, 0x11c1 }, /* jongseong hieuh        + pieup  = phieuph       */
  { 0x11c211bd, 0x11be }, /* jongseong hieuh        + cieuc  = chieuch       */
  { 0x11ce11c2, 0x11b4 }, /* jongseong rieul-tikeut + hieuh  = rieul-thieuth */
};


// 3 에 조합을 더 넣은 것이다
static const HangulCombinationItem hangul_combination_table_3_3_2015[] = {
    /* choseong */
    { 0x1100110b, 0x1101 }, /* choseong  kiyeok + ieung (ㄱ + ㅇ)  = ssangkiyeok   */
    { 0x1100110c, 0x110d }, /* choseong  kiyeok  + cieuc (ㄱ + ㅈ)  = ssangcieuc    */
    { 0x11031106, 0x1104 }, /* choseong  tikeut + mieum (ㄷ + ㅁ) = ssangtikeut   */
    { 0x11061103, 0x1104 }, /* choseong  mieum + tikeut (ㅁ + ㄷ) = ssangtikeut   */
    { 0x1107110c, 0x1108 }, /* choseong  pieup  + cieuc (ㅂ + ㅈ)  = ssangpieup    */
    { 0x11091112, 0x110a }, /* choseong  sios   + hieuh (ㅅ + ㅎ)   = ssangsios     */
    { 0x110b1100, 0x1101 }, /* choseong  ieung + kiyeok (ㅇ + ㄱ) = ssangkiyeok   */
    { 0x110c1100, 0x110d }, /* choseong  cieuc  + kiyeok (ㅈ + ㄱ)  = ssangcieuc    */
    { 0x110c1107, 0x1108 }, /* choseong  cieuc  + pieup (ㅈ + ㅂ)  = ssangpieup    */
    { 0x11121109, 0x110a }, /* choseong  hieuh   + sios (ㅎ + ㅅ)   = ssangsios     */
    /* jungseong */
    /* jongseong */
    { 0x11a811af, 0x11b0 }, /* jongseong kiyeok  + rieul (ㄱ + ㄹ) = rieul-kiyeok (ㄺ) */
    {0x11a811B7,0x11a9}, /* jongseong kiyeok + mieum (ㄱ + ㅁ)  = ssangekiyeok (ㄲ) */
    {0x11B711a8,0x11a9}, /* jongseong mieum + kiyeok (ㅁ + ㄱ)  = ssangekiyeok (ㄲ) */
    { 0x11b711af, 0x11b1 }, /* jongseong mieum  + rieul (ㅁ + ㄹ)  = rieul-mieum (ㄻ)  */
    { 0x11b811af, 0x11b2 }, /* jongseong pieup  + rieul (ㅂ + ㄹ)  = rieul-pieup (ㄼ)  */
    { 0x11ba11a8, 0x11aa }, /* jongseong sios + kiyeok (ㅅ + ㄱ)   = kiyeok-sois (ㄳ)  */
    { 0x11ba11af, 0x11b3 }, /* jongseong sios  + rieul (ㅅ + ㄹ)   = rieul-sios (ㄽ)   */
    { 0x11ba11b8, 0x11b9 }, /* jongseong sios  + pieup (ㅅ + ㅂ)   = pieup-sios (ㅄ)   */
    { 0x11bd11ab, 0x11ac }, /* jongseong cieuc  + nieun (ㅈ + ㄴ)  = nieun-cieuc (ㄵ)  */
    { 0x11c011af, 0x11b4 }, /* jongseong thieuth  + rieul (ㅌ + ㄹ) = rieul-thieuth (ㄾ) */
    { 0x11c111af, 0x11b5 }, /* jongseong phieuph  + rieul (ㅍ + ㄹ) = rieul-phieuph (ㄿ) */
    { 0x11c211ab, 0x11ad }, /* jongseong hieuh  + nieun (ㅎ + ㄴ)  = nieun-hieuh (ㄶ)  */
    { 0x11c211af, 0x11b6 }, /* jongseong hieuh  + rieul (ㅎ + ㄹ)  = rieul-hieuh (ㅀ)  */
};

// full 에 조합을 더 넣은 것이다
static const HangulCombinationItem hangul_combination_table_full_3_2015_yet[] = {
    /* choseong */
    /* jungseong */
    /* jongseong */
    { 0x11bc11a8, 0x11ec }, /* jongseong ieung    + kiyeok       = yesieung-kiyeok */
    { 0x11bc11a9, 0x11ed }, /* jongseong ieung    + ssangkiyeok  = yesieung-ssangkiyeok */
    { 0x11bc11b7, 0xd7f5 }, /* jongseong ieung    + mieum        = yesieung-mieum */
    { 0x11bc11ba, 0x11f1 }, /* jongseong ieung    + sios         = yesieung-sios */
    { 0x11bc11bc, 0x11ee }, /* jongseong ieung    + ieung        = ssangyesieung */
    { 0x11bc11bf, 0x11ef }, /* jongseong ieung    + khieukh      = yesieung-khieukh */
    { 0x11bc11c2, 0xd7f6 }, /* jongseong ieung    + hieuh        = yesieung-hieuh */
    { 0x11bc11eb, 0x11f2 }, /* jongseong ieung    + pansios      = yesieung-pansios */
    { 0x11bc11f0, 0x11ee }, /* jongseong ieung    + yesieung     = ssangyesieung */
    { 0x11f011bc, 0x11ee }, /* jongseong yesieung + ieung        = ssangyesieung */
};

// 3 에 조합을 더 넣은 것이다
// ㅣ+ㅐ= ㅣ+ ㄵ 이 되도록 한다
static const HangulCombinationItem hangul_combination_table_3_3_14_proposal[] = {
    { 0x11751162, 0x11ac }, /* jungseong i + ae = jongseong nieun-cieuc (ㄵ) */
};

static const HangulCombinationItem hangul_combination_table_3_91_noshift[] = {
    { 0x11001100, 0x1101 }, /* choseong  kiyeok + kiyeok  = ssangkiyeok   */
    { 0x1100110b, 0x1101 }, /* choseong  kiyeok + ieung   = ssangkiyeok   */
    { 0x1100110c, 0x110d }, /* choseong  kiyeok + cieuc   = ssangcieuc    */
    { 0x11031103, 0x1104 }, /* choseong  tikeut + tikeut  = ssangtikeut   */
    { 0x11031106, 0x1104 }, /* choseong  tikeut + mieum   = ssangtikeut   */
    { 0x11061103, 0x1104 }, /* choseong  mieum  + tikeut  = ssangtikeut   */
    { 0x11071107, 0x1108 }, /* choseong  pieup  + pieup   = ssangpieup    */
    { 0x1107110c, 0x1108 }, /* choseong  pieup  + cieuc   = ssangpieup    */
    { 0x11091109, 0x110a }, /* choseong  sios   + sios    = ssangsios     */
    { 0x11091112, 0x110a }, /* choseong  sios   + hieuh   = ssangsios     */
    { 0x110b1100, 0x1101 }, /* choseong  ieung  + kiyeok  = ssangkiyeok   */
    { 0x110c1100, 0x110d }, /* choseong  cieuc  + kiyeok  = ssangcieuc    */
    { 0x110c1107, 0x1108 }, /* choseong  cieuc  + pieup   = ssangpieup    */
    { 0x110c110c, 0x110d }, /* choseong  cieuc  + cieuc   = ssangcieuc    */
    { 0x11121109, 0x110a }, /* choseong  hieuh  + sios    = ssangsios     */
    /* jungseong */
    { 0x1161116c, 0x116a }, /* jungseong a ㅏ     + oe ㅚ     = wa ㅘ           */
    { 0x1162116c, 0x116b }, /* jungseong ae ㅐ    + oe ㅚ     = wae ᅟㅙ          */
    { 0x11651171, 0x116f }, /* jungseong eo ㅓ    + wi ㅟ     = weo ㅝ          */
    { 0x1166116c, 0x1170 }, /* jungseong e ㅔ     + oe ㅚ     = we ㅞ           */
    { 0x11661171, 0x1170 }, /* jungseong e ㅔ     + wi ㅟ     = we ㅞ           */
    { 0x116c1161, 0x116a }, /* jungseong oe ㅚ    + a ㅏ      = wa ㅘ           */
    { 0x116c1162, 0x116b }, /* jungseong oe ㅚ    + ae ㅐ     = wae ㅙ          */
    { 0x116c1165, 0x116f }, /* jungseong oe ㅚ    + eo ㅓ     = weo ㅝ          */
    { 0x116c1166, 0x1170 }, /* jungseong oe ㅚ    + e ㅔ      = we ㅞ           */
    { 0x116c1167, 0x1168 }, /* jungseong oe ㅚ    + yeo ㅕ     =  ye  ㅖ        */
    { 0x116c1169, 0x1174 }, /* jungseong oe ㅚ    + o ㅗ      = yi ㅢ           */
    { 0x116c116e, 0x1171 }, /* jungseong oe ㅚ    + u ㅜ      = wi ㅟ           */
    { 0x116c1173, 0x1164 }, /* jungseong oe ㅚ    + eu ㅡ     = yae ㅒ          */
    { 0x116c1175, 0x116c }, /* jungseong oe ㅚ    + i ㅣ      = oe ㅚ           */
    { 0x11711165, 0x116f }, /* jungseong wi ㅟ    + eo ㅓ     = weo ㅝ          */
    { 0x11711166, 0x1170 }, /* jungseong wi ㅟ    + e ㅔ      = we ㅞ           */
    { 0x11711175, 0x1171 }, /* jungseong wi ㅟ    + i ㅣ      = wi ㅟ           */
    { 0x1173116c, 0x1164 }, /* jungseong eu ㅡ    + oe ㅚ     = yae ㅒ          */
    //{ 0x11731175, 0x1174 }, /* jungseong eu ㅡ    + i ㅣ      = yi ㅢ           */
    { 0x11751171, 0x1171 }, /* jungseong i ㅣ     + wi ㅟ     = wi ㅟ           */
    { 0x1175116c, 0x116c }, /* jungseong i ㅣ     + oe ㅚ     = oe ㅚ           */
    //{ 0x11751173, 0x1174 }, /* jungseong i ㅣ     + eu ㅡ     = yi ㅢ           */
    /* jongseong *//* autogen */
    { 0x11a811aa, 0x11b9 }, // autogen
    { 0x11a811ac, 0x11b9 }, // autogen
    { 0x11a811b1, 0x11b9 }, // autogen
    { 0x11a811b2, 0x11b9 }, // autogen
    { 0x11a811b3, 0x11b9 }, // autogen
    { 0x11a811b4, 0x11b9 }, // autogen
    { 0x11a811b5, 0x11b9 }, // autogen
    { 0x11a811b6, 0x11b9 }, // autogen
    { 0x11a811b9, 0x11b9 }, // autogen
    { 0x11a811bf, 0x11b9 }, // autogen
    { 0x11a811ff, 0x11b9 }, // autogen
    { 0x11aa11a8, 0x11b9 }, // autogen
    { 0x11aa11ab, 0x11ad }, // autogen
    { 0x11aa11af, 0x11c0 }, // autogen
    { 0x11aa11b7, 0x11be }, // autogen
    { 0x11aa11b8, 0x11bd }, // autogen
    { 0x11aa11ba, 0x11c1 }, // autogen
    { 0x11aa11bb, 0x11b0 }, // autogen
    { 0x11aa11bc, 0x11ae }, // autogen
    { 0x11aa11c2, 0x11a9 }, // autogen
    { 0x11ab11aa, 0x11ad }, // autogen
    { 0x11ab11ac, 0x11ad }, // autogen
    { 0x11ab11b1, 0x11ad }, // autogen
    { 0x11ab11b2, 0x11ad }, // autogen
    { 0x11ab11b3, 0x11ad }, // autogen
    { 0x11ab11b4, 0x11ad }, // autogen
    { 0x11ab11b5, 0x11ad }, // autogen
    { 0x11ab11b6, 0x11ad }, // autogen
    { 0x11ab11b9, 0x11ad }, // autogen
    { 0x11ab11bf, 0x11ad }, // autogen
    { 0x11ab11ff, 0x11ad }, // autogen
    { 0x11ac11a8, 0x11b9 }, // autogen
    { 0x11ac11ab, 0x11ad }, // autogen
    { 0x11ac11af, 0x11c0 }, // autogen
    { 0x11ac11b7, 0x11be }, // autogen
    { 0x11ac11b8, 0x11bd }, // autogen
    { 0x11ac11ba, 0x11c1 }, // autogen
    { 0x11ac11bb, 0x11b0 }, // autogen
    { 0x11ac11bc, 0x11ae }, // autogen
    { 0x11ac11c2, 0x11a9 }, // autogen
    { 0x11af11aa, 0x11c0 }, // autogen
    { 0x11af11ac, 0x11c0 }, // autogen
    { 0x11af11b1, 0x11c0 }, // autogen
    { 0x11af11b2, 0x11c0 }, // autogen
    { 0x11af11b3, 0x11c0 }, // autogen
    { 0x11af11b4, 0x11c0 }, // autogen
    { 0x11af11b5, 0x11c0 }, // autogen
    { 0x11af11b6, 0x11c0 }, // autogen
    { 0x11af11b9, 0x11c0 }, // autogen
    { 0x11af11bf, 0x11c0 }, // autogen
    { 0x11af11ff, 0x11c0 }, // autogen
    { 0x11b111a8, 0x11b9 }, // autogen
    { 0x11b111ab, 0x11ad }, // autogen
    { 0x11b111af, 0x11c0 }, // autogen
    { 0x11b111b7, 0x11be }, // autogen
    { 0x11b111b8, 0x11bd }, // autogen
    { 0x11b111ba, 0x11c1 }, // autogen
    { 0x11b111bb, 0x11b0 }, // autogen
    { 0x11b111bc, 0x11ae }, // autogen
    { 0x11b111c2, 0x11a9 }, // autogen
    { 0x11b211a8, 0x11b9 }, // autogen
    { 0x11b211ab, 0x11ad }, // autogen
    { 0x11b211af, 0x11c0 }, // autogen
    { 0x11b211b7, 0x11be }, // autogen
    { 0x11b211b8, 0x11bd }, // autogen
    { 0x11b211ba, 0x11c1 }, // autogen
    { 0x11b211bb, 0x11b0 }, // autogen
    { 0x11b211bc, 0x11ae }, // autogen
    { 0x11b211c2, 0x11a9 }, // autogen
    { 0x11b311a8, 0x11b9 }, // autogen
    { 0x11b311ab, 0x11ad }, // autogen
    { 0x11b311af, 0x11c0 }, // autogen
    { 0x11b311b7, 0x11be }, // autogen
    { 0x11b311b8, 0x11bd }, // autogen
    { 0x11b311ba, 0x11c1 }, // autogen
    { 0x11b311bb, 0x11b0 }, // autogen
    { 0x11b311bc, 0x11ae }, // autogen
    { 0x11b311c2, 0x11a9 }, // autogen
    { 0x11b411a8, 0x11b9 }, // autogen
    { 0x11b411ab, 0x11ad }, // autogen
    { 0x11b411af, 0x11c0 }, // autogen
    { 0x11b411b7, 0x11be }, // autogen
    { 0x11b411b8, 0x11bd }, // autogen
    { 0x11b411ba, 0x11c1 }, // autogen
    { 0x11b411bb, 0x11b0 }, // autogen
    { 0x11b411bc, 0x11ae }, // autogen
    { 0x11b411c2, 0x11a9 }, // autogen
    { 0x11b511a8, 0x11b9 }, // autogen
    { 0x11b511ab, 0x11ad }, // autogen
    { 0x11b511af, 0x11c0 }, // autogen
    { 0x11b511b7, 0x11be }, // autogen
    { 0x11b511b8, 0x11bd }, // autogen
    { 0x11b511ba, 0x11c1 }, // autogen
    { 0x11b511bb, 0x11b0 }, // autogen
    { 0x11b511bc, 0x11ae }, // autogen
    { 0x11b511c2, 0x11a9 }, // autogen
    { 0x11b611a8, 0x11b9 }, // autogen
    { 0x11b611ab, 0x11ad }, // autogen
    { 0x11b611af, 0x11c0 }, // autogen
    { 0x11b611b7, 0x11be }, // autogen
    { 0x11b611b8, 0x11bd }, // autogen
    { 0x11b611ba, 0x11c1 }, // autogen
    { 0x11b611bb, 0x11b0 }, // autogen
    { 0x11b611bc, 0x11ae }, // autogen
    { 0x11b611c2, 0x11a9 }, // autogen
    { 0x11b711aa, 0x11be }, // autogen
    { 0x11b711ac, 0x11be }, // autogen
    { 0x11b711b1, 0x11be }, // autogen
    { 0x11b711b2, 0x11be }, // autogen
    { 0x11b711b3, 0x11be }, // autogen
    { 0x11b711b4, 0x11be }, // autogen
    { 0x11b711b5, 0x11be }, // autogen
    { 0x11b711b6, 0x11be }, // autogen
    { 0x11b711b9, 0x11be }, // autogen
    { 0x11b711bf, 0x11be }, // autogen
    { 0x11b711ff, 0x11be }, // autogen
    { 0x11b811aa, 0x11bd }, // autogen
    { 0x11b811ac, 0x11bd }, // autogen
    { 0x11b811b1, 0x11bd }, // autogen
    { 0x11b811b2, 0x11bd }, // autogen
    { 0x11b811b3, 0x11bd }, // autogen
    { 0x11b811b4, 0x11bd }, // autogen
    { 0x11b811b5, 0x11bd }, // autogen
    { 0x11b811b6, 0x11bd }, // autogen
    { 0x11b811b9, 0x11bd }, // autogen
    { 0x11b811bf, 0x11bd }, // autogen
    { 0x11b811ff, 0x11bd }, // autogen
    { 0x11b911a8, 0x11b9 }, // autogen
    { 0x11b911ab, 0x11ad }, // autogen
    { 0x11b911af, 0x11c0 }, // autogen
    { 0x11b911b7, 0x11be }, // autogen
    { 0x11b911b8, 0x11bd }, // autogen
    { 0x11b911ba, 0x11c1 }, // autogen
    { 0x11b911bb, 0x11b0 }, // autogen
    { 0x11b911bc, 0x11ae }, // autogen
    { 0x11b911c2, 0x11a9 }, // autogen
    { 0x11ba11aa, 0x11c1 }, // autogen
    { 0x11ba11ac, 0x11c1 }, // autogen
    { 0x11ba11b1, 0x11c1 }, // autogen
    { 0x11ba11b2, 0x11c1 }, // autogen
    { 0x11ba11b3, 0x11c1 }, // autogen
    { 0x11ba11b4, 0x11c1 }, // autogen
    { 0x11ba11b5, 0x11c1 }, // autogen
    { 0x11ba11b6, 0x11c1 }, // autogen
    { 0x11ba11b9, 0x11c1 }, // autogen
    { 0x11ba11bf, 0x11c1 }, // autogen
    { 0x11ba11ff, 0x11c1 }, // autogen
    { 0x11bb11aa, 0x11b0 }, // autogen
    { 0x11bb11ac, 0x11b0 }, // autogen
    { 0x11bb11b1, 0x11b0 }, // autogen
    { 0x11bb11b2, 0x11b0 }, // autogen
    { 0x11bb11b3, 0x11b0 }, // autogen
    { 0x11bb11b4, 0x11b0 }, // autogen
    { 0x11bb11b5, 0x11b0 }, // autogen
    { 0x11bb11b6, 0x11b0 }, // autogen
    { 0x11bb11b9, 0x11b0 }, // autogen
    { 0x11bb11bf, 0x11b0 }, // autogen
    { 0x11bb11ff, 0x11b0 }, // autogen
    { 0x11bc11aa, 0x11ae }, // autogen
    { 0x11bc11ac, 0x11ae }, // autogen
    { 0x11bc11b1, 0x11ae }, // autogen
    { 0x11bc11b2, 0x11ae }, // autogen
    { 0x11bc11b3, 0x11ae }, // autogen
    { 0x11bc11b4, 0x11ae }, // autogen
    { 0x11bc11b5, 0x11ae }, // autogen
    { 0x11bc11b6, 0x11ae }, // autogen
    { 0x11bc11b9, 0x11ae }, // autogen
    { 0x11bc11bf, 0x11ae }, // autogen
    { 0x11bc11ff, 0x11ae }, // autogen
    { 0x11bf11a8, 0x11b9 }, // autogen
    { 0x11bf11ab, 0x11ad }, // autogen
    { 0x11bf11af, 0x11c0 }, // autogen
    { 0x11bf11b7, 0x11be }, // autogen
    { 0x11bf11b8, 0x11bd }, // autogen
    { 0x11bf11ba, 0x11c1 }, // autogen
    { 0x11bf11bb, 0x11b0 }, // autogen
    { 0x11bf11bc, 0x11ae }, // autogen
    { 0x11bf11c2, 0x11a9 }, // autogen
    { 0x11c211aa, 0x11a9 }, // autogen
    { 0x11c211ac, 0x11a9 }, // autogen
    { 0x11c211b1, 0x11a9 }, // autogen
    { 0x11c211b2, 0x11a9 }, // autogen
    { 0x11c211b3, 0x11a9 }, // autogen
    { 0x11c211b4, 0x11a9 }, // autogen
    { 0x11c211b5, 0x11a9 }, // autogen
    { 0x11c211b6, 0x11a9 }, // autogen
    { 0x11c211b9, 0x11a9 }, // autogen
    { 0x11c211bf, 0x11a9 }, // autogen
    { 0x11c211ff, 0x11a9 }, // autogen
    /* quick shift jongseong part */
    { 0x11ff1161, 0x11b1 }, /* jongseong rieul-mieum */
    { 0x11ff1162, 0x11b6 }, /* jongseong rieul-hieuh */
    { 0x11ff1163, 0x11b3 }, /* jongseong rieul-siot additional */
    { 0x11ff1165, 0x11b9 }, /* jongseong pieup-sios */
    { 0x11ff1166, 0x11bf }, /* jongseong khieukh */
    { 0x11ff1167, 0x11ac }, /* jongseong nieun-cieuc */
    { 0x11ff1169, 0x11aa }, /* jongseong kiyeok-sios */
    { 0x11ff116d, 0x11b5 }, /* jongseong rieul-phieuph */
    { 0x11ff1172, 0x11b4 }, /* jongseong rieul-thieuth */
    { 0x11ff1175, 0x11b2 }, /* jongseong rieul-pieup */
    /* autogen */
    { 0x11ff11a8, 0x11b9 }, // autogen
    { 0x11ff11ab, 0x11ad }, // autogen
    { 0x11ff11af, 0x11c0 }, // autogen
    { 0x11ff11b7, 0x11be }, // autogen
    { 0x11ff11b8, 0x11bd }, // autogen
    { 0x11ff11ba, 0x11c1 }, // autogen
    { 0x11ff11bb, 0x11b0 }, // autogen
    { 0x11ff11bc, 0x11ae }, // autogen
    { 0x11ff11c2, 0x11a9 }, // autogen
};

// 3 에 조합을 더 넣은 것이다
static const HangulCombinationItem hangul_combination_table_3_3sun_2014[] = {
    {0x11621162,0x1164}, /* jungseong ae + ae = yae */ // 2014
    {0x11A911A8,0x11BF}, /* jongseong ssangkiyeok + kiyeok = khieukh */ // 2014
    {0x11AB11AB,0x11C0}, /* jongseong nieun + nieun = thieuth */ // 2014
    {0x11AB11BA,0x11AC}, /* jongseong nieun + sios = nieun-cieuc */ // 2014
    {0x11AF11AB,0x11B4},  /* jongseong rieul + nieun = rieul-thieuth */ //2014
    {0x11AF11AF,0x11BE}, /* jongseong rieul + rieul = chieuch */ //2014
    {0x11B111B7,0x11B5}, /* jongseong rieul-mieum + mieum = rieul-phieuph */ // 2014
    {0x11B711B7,0x11C1}, /* jongseong mieum + mieum = phieuph */ // 2014
    {0x11ba11ba, 0x11BD}, /* jongseong sios + sios = cieuc */ // 2014
    {0x11BC11BC,0x11AE}, /* jongseong ieung + ieung = tikeut */ // 2014
};

// full 에 옛한글 조합을 더 넣은 것이다
static const HangulCombinationItem hangul_combination_table_full_3gimguk_38A_yet[] = {
    {0x110C113C,0x114E}, /* jieuj + ap-sieus = ap-jieuj */
    {0x110C113E,0x1150}, /* jieuj + dwit-sieus = dwit-jieuj */
    {0x110D113C,0x114F}, /* ssang-jieuj + ap-sieus = ssang-ap-jieuj */
    {0x110D113E,0x1151}, /* ssang-jieuj + dwit-sieus = ssang-dwit-jieuj */
    {0x110E113C,0x1154}, /* chieuch + ap-sieus = ap-chieuch */
    {0x110E113E,0x1155}, /* chieuch + dwit-sieus = dwit-chieuch */
    {0x117F1175,0x1180}, /* o-eo + i = o-e */
    {0x11841175,0x1185}, /* yo-ya + i = yo-yae */
    {0x11891175,0x118A}, /* u-a + i = u-ae */
    {0x118E1175,0xD7B7}, /* yu-a + i = yu-ae */
    {0x118F1175,0x1190}, /* yu-eo + i = yu-e */
    {0x11991175,0xD7BE}, /* i-ya + i =    i-yae */
    {0x119F1175,0xD7C6}, /* araea-eo + i = aeara-e */
    {0x11A61175,0x11A7}, /* o-ya + i = o-yae */
    {0xD7B21175,0xD7B3}, /* yo-a + i = yo-ae */
    {0xD7B51175,0x118C}, /* u-yeo + i = u-ye */
    {0xD7BA1175,0xD7BB}, /* eu-eo + i = eu-e */
    {0xD7BF1175,0xD7C0}, /* i-yeo + i = i-ye */
};


static const HangulCombinationItem hangul_combination_table_3moa_semoe_2014[] = {
  { 0x11001107, 0x111e }, /* choseong  kiyeok + pieup   = pieup-kiyeok  */
  { 0x11001109, 0x112d }, /* choseong  kiyeok + sios    = sios-kiyeok   */
  { 0x1100110b, 0x1101 }, /* choseong  kiyeok + ieung   = ssangkiyeok   */
  { 0x11001112, 0x110f }, /* choseong  kiyeok + hieuh   = khieukh       */
  { 0x11001132, 0x1122 }, /* choseong  kieuk + sios-pieup = pieup-sios-kiyeok */
  { 0x11021103, 0x1115 }, /* choseong  nieun + tikeut   = nieun-tikeut  */
  { 0x11021106, 0x111d }, /* choseong  nieun + mieum    = kapyeounmieum */
  { 0x11021107, 0x112b }, /* choseong  nieun + pieup    = kapyeounpieup */
  { 0x11021108, 0x112c }, /* choseong  nieun + ssangpieup = kapyeounssangpieup */
  { 0x11021109, 0x112e }, /* choseong  nieun + sios     = sios-nieun    */
  { 0x1102110b, 0x114c }, /* choseong  nieun + ieung    = yesieung      */
  { 0x11021147, 0x1114 }, /* choseong  nieun  + ssangieung   = ssangnieun       */
  { 0x11021159, 0x1157 }, /* choseong  nieun  + yeorinhieuh  = kapyeounphieuph  */
  { 0x11031107, 0x1120 }, /* choseong  tikeut  + pieup  = pieup-tikeut  */
  { 0x11031109, 0x112f }, /* choseong  tikeut + sios    = sios-tikeut   */
  { 0x1103110b, 0x1104 }, /* choseong  tikeut + ieung   = ssangtikeut   */
  { 0x11031112, 0x1110 }, /* choseong  tikeut + hieuh   = thikeuth      */
  { 0x11031132, 0x1123 }, /* choseong  tikeut + sios-pieup = pieup-sios-tikeut */
  { 0x11051112, 0x111a }, /* choseong  rieul  + hieuh   = rieul-hieuh   */
  { 0x11061107, 0x111c }, /* choseong  mieum  + pieup   = mieum-pieup   */
  { 0x1106110b, 0x1104 }, /* choseong  mieum  + ieung   = ssangtikeut   */
  { 0x11071109, 0x1132 }, /* choseong  pieup  + sios    = sios-pieup    */
  { 0x1107110b, 0x1108 }, /* choseong  pieup  + ieung   = ssangpieup    */
  { 0x11071112, 0x1111 }, /* choseong  pieup  + hieuh   = phieuph       */
  { 0x1107112d, 0x1122 }, /* choseong  pieup  + sios-kieuk = pieup-sios-kiyeok */
  { 0x1107112f, 0x1123 }, /* choseong  pieup + sios-tikeut = pieup-sios-tikeut */
  { 0x11071140, 0x1121 }, /* choseong  pieup  + pansios = pieup-sios    */
  { 0x1107114c, 0x112c }, /* choseong  pieup + yesieung = kapyeounssangpieup */
  { 0x11071159, 0x1129 }, /* choseong  pieup + yeorinhieuh = pieup-thikeuth */
  { 0x1109110b, 0x110a }, /* choseong  sios   + ieung   = ssangsios     */
  { 0x1109110c, 0x1136 }, /* choseong  sios   + cieuc   = sios-cieuc    */
  { 0x11091112, 0x110e }, /* choseong  sios   + hieuh   = chieuch       */
  { 0x1109111e, 0x1122 }, /* choseong  sios + pieup-kiyeok = pieup-sios-kiyeok */
  { 0x11091120, 0x1123 }, /* choseong  sios + pieup-tikeut = pieup-sios-tikeut */
  { 0x110b110c, 0x110d }, /* choseong  ieung  + cieuc   = ssangcieuc    */
  { 0x110b112b, 0x112c }, /* choseong  ieung + kapyeounpieup = kapyeounssangpieup */
  { 0x110c1112, 0x110e }, /* choseong  cieuc  + hieuh   = chieuch       */
  { 0x110c1147, 0x1127 }, /* choseong  cieuc + ssangieung = pieup-cieuc */
  { 0x11121147, 0x1158 }, /* choseong  hieuh  + ssangieung = ssanghieuh */
  { 0x11611163, 0x11a2 }, /* jungseong a      + ya      = ssangaraea    */
  { 0x11611165, 0x116d }, /* jungseong a      + eo      = yo            */
  { 0x11611166, 0x1163 }, /* jungseong a      + e       = ya            */
  { 0x11611169, 0x116a }, /* jungseong a      + o       = wa            */
  { 0x1161116c, 0x116b }, /* jungseong a      + oe      = wae           */
  { 0x1161116e, 0x1172 }, /* jungseong a      + u       = yu            */
  { 0x11611173, 0x119e }, /* jungseong a      + eu      = araea         */
  { 0x11611174, 0x11a1 }, /* jungseong a      + yi      = araeae        */
  { 0x11611175, 0x1162 }, /* jungseong a      + i       = ae            */
  { 0x11621169, 0x116b }, /* jungseong ae     + o       = wae           */
  { 0x11621173, 0x11a1 }, /* jungseong ae     + eu      = araeae        */
  { 0x1163116d, 0x1184 }, /* jungseong ya     + yo      = yo-ya         */
  { 0x11631175, 0x1164 }, /* jungseong ya     + i       = yae           */
  { 0x11651167, 0x1164 }, /* jungseong eo     + yeo     = yae           */
  { 0x1165116e, 0x116f }, /* jungseong eo     + u       = weo           */
  { 0x11651171, 0x1170 }, /* jungseong eo     + wi      = we            */
  { 0x11651175, 0x1166 }, /* jungseong eo     + i       = e             */
  { 0x11661167, 0x1191 }, /* jungseong e      + yeo     = yu-yeo        */
  { 0x1166116e, 0x1170 }, /* jungseong e      + u       = we            */
  { 0x11661175, 0x1168 }, /* jungseong e      + i       = ye            */
  { 0x1166119e, 0x1194 }, /* jungseong e      + araea   = yu-i          */
  { 0x116611a2, 0x1192 }, /* jungseong e      + ssangaraea = yu-ye      */
  { 0x1169116e, 0x116d }, /* jungseong o      + u       = yo            */
  { 0x11691175, 0x116c }, /* jungseong o      + i       = oe            */
  { 0x116a1175, 0x116b }, /* jungseong wa     + i       = wae           */
  { 0x116d1175, 0x1188 }, /* jungseong yo     + i       = yo-i          */
  { 0x116d11a2, 0x1185 }, /* jungseong yo     + ssangaraea = yo-yae     */
  { 0x116e1175, 0x1171 }, /* jungseong u      + i       = wi            */
  { 0x116f1175, 0x1170 }, /* jungseong weo    + i       = we            */
  { 0x11731175, 0x1174 }, /* jungseong eu     + i       = yi            */
  { 0x1175119e, 0x11a1 }, /* jungseong i      + araea   = araeae        */
  { 0x11a811ab, 0x11f9 }, /* jongseong kiyeok  + nieun   = yeorinhieuh  */
  { 0x11a811ae, 0x11d7 }, /* jongseong kiyeok + tikeut  = rieul-pansios */
  { 0x11a811af, 0x11b0 }, /* jongseong kiyeok + rieul   = rieul-kiyeok  */
  { 0x11a811b7, 0x11b0 }, /* jongseong kiyeok + mieum   = rieul-kiyeok  */
  { 0x11a811b8, 0x11f4 }, /* jongseong kiyeok  + pieup   = kapyeounphieuph */
  { 0x11a811b9, 0x11e7 }, /* jongseong kiyeok + pieup-sios = sios-kiyeok */
  { 0x11a811ba, 0x11aa }, /* jongseong kiyeok + sios    = kiyeok-sois   */
  { 0x11a811bb, 0x11bf }, /* jongseong kiyeok + ssangsios = khieukh     */
  { 0x11a811bc, 0x11a9 }, /* jongseong kiyeok + ieung   = ssangekiyeok  */
  { 0x11a811bd, 0x11cc }, /* jongseong kiyeok + cieuc   = rieul-kiyeok-sios */
  { 0x11a811c2, 0x11bf }, /* jongseong kiyeok + hieuh   = khieukh       */
  { 0x11aa11af, 0x11cc }, /* jongseong kiyeok-sios + rieul = rieul-kiyeok-sios */
  { 0x11ab11ae, 0x11c6 }, /* jongseong nieun  + tikeut  = nieun-tikeut  */
  { 0x11ab11af, 0x11ac }, /* jongseong nieun  + rieul   = nieun-cieuc   */
  { 0x11ab11b7, 0x11c0 }, /* jongseong nieun  + mieum   = thikeuth      */
  { 0x11ab11b8, 0x11e6 }, /* jongseong nieun  + pieup   = kapyeounpieup */
  { 0x11ab11b9, 0x11c8 }, /* jongseong nieun  + pieup-sios = nieun-pansios */
  { 0x11ab11ba, 0x11c7 }, /* jongseong nieun  + sios    = nieun-sios    */
  { 0x11ab11bb, 0x11ad }, /* jongseong nieun  + ssangsios = nieun-hieuh */
  { 0x11ab11bc, 0x11c1 }, /* jongseong nieun  + ieung   = phieuph       */
  { 0x11ab11c2, 0x11ad }, /* jongseong nieun  + hieuh   = nieun-hieuh   */
  { 0x11ae11af, 0x11b4 }, /* jongseong tikeut + rieul   = rieul-thieuth */
  { 0x11ae11b7, 0x11f2 }, /* jongseong tikeut + mieum   = yesieung-pansios */
  { 0x11ae11b8, 0x11b5 }, /* jongseong tikeut + pieup   = rieul-phieuph */
  { 0x11ae11b9, 0x11eb }, /* jongseong tikeut + pieup-sios = pansios    */
  { 0x11ae11ba, 0x11e8 }, /* jongseong tikeut + sios    = sios-tikeut   */
  { 0x11ae11bb, 0x11c0 }, /* jongseong tikeut + ssangsios = thikeuth    */
  { 0x11ae11bc, 0x11ce }, /* jongseong tikeut + ieung   = rieul-tikeut  */
  { 0x11ae11c2, 0x11c0 }, /* jongseong tikeut + hieuh   = thikeuth      */
  { 0x11af11b7, 0x11b1 }, /* jongseong rieul  + mieum   = rieul-mieum   */
  { 0x11af11b8, 0x11b5 }, /* jongseong rieul  + pieup   = rieul-phieuph */
  { 0x11af11b9, 0x11d3 }, /* jongseong rieul  + pieup-sios = rieul-pieup-sios */
  { 0x11af11ba, 0x11b9 }, /* jongseong rieul  + sios    = pieup-sios         */
  { 0x11af11bb, 0x11bd }, /* jongseong rieul  + ssangsios = cieuc       */
  { 0x11af11bc, 0x11b2 }, /* jongseong rieul  + ieung   = rieul-pieup   */
  { 0x11af11c2, 0x11b6 }, /* jongseong rieul  + hieuh   = rieul-hieuh   */
  { 0x11b011ba, 0x11cc }, /* jongseong rieul-kiyeok + sios = rieul-kiyeok-sios */
  { 0x11b711b8, 0x11dc }, /* jongseong mieum  + pieup   = mieum-pieup   */
  { 0x11b711b9, 0x11df }, /* jongseong mieum  + pieup-sios = mieum-pansios  */
  { 0x11b711ba, 0x11dd }, /* jongseong mieum  + sios    = mieum-sios    */
  { 0x11b711bb, 0x11ae }, /* jongseong mieum  + ssangsios = tikeut      */
  { 0x11b711bc, 0x11e2 }, /* jongseong mieum  + ieung   = kapyeounmieum */
  { 0x11b711c2, 0x11b4 }, /* jongseong mieum  + hieuh   = rieul-thieuth   */
  { 0x11b811b9, 0x11ea }, /* jongseong pieup  + pieup-sios = sios-pieup */
  { 0x11b811ba, 0x11b9 }, /* jongseong pieup  + sios    = pieup-sios    */
  { 0x11b811bb, 0x11c1 }, /* jongseong pieup  + ssangsios    = phieuph  */
  { 0x11b811bc, 0x11d9 }, /* jongseong pieup  + ieung   = rieul-yeorinhieuh */
  { 0x11b811c2, 0x11c1 }, /* jongseong pieup  + hieuh   = phieuph       */
  { 0x11b911bb, 0x11b3 }, /* jongseong pieup-sios + ssangsios = rieul-sios */
  { 0x11b911bc, 0x11f1 }, /* jongseong pieup-sios + ieung = yesieung-sios */
  { 0x11b911c2, 0x11f0 }, /* jongseong pieup-sios + hieuh = yesieung    */
  { 0x11ba11bb, 0x11be }, /* jongseong sios   + ssangsios  = chieuch    */
  { 0x11ba11bc, 0x11bb }, /* jongseong sios   + ieung   = ssangsios     */
  { 0x11ba11c2, 0x11b3 }, /* jongseong sios   + hieuh   = rieul-sios    */
  { 0x11bb11bc, 0x11b8 }, /* jongseong ssangsios  + ieung = pieup       */
  { 0x11bb11c2, 0x11b6 }, /* jongseong ssangsios  + hieuh = rieul-hieuh */
  { 0x11bc11c2, 0x11b5 }, /* jongseong ieung  + hieuh   = rieul-phieuph */
};

static const HangulCombinationItem hangul_combination_table_3moa_semoe_2015[] = {
    {0x1100110b,0x1101}, /* choseong  kiyeok + ieung   = ssangkiyeok   */
    {0x11001112,0x110f}, /* choseong  kiyeok + hieuh   = khieukh       */
    {0x1103110b,0x1104}, /* choseong  tikeut + ieung   = ssangtikeut   */
    {0x11031112,0x1110}, /* choseong  tikeut + hieuh   = thikeuth      */
    {0x1107110b,0x1108}, /* choseong  pieup  + ieung   = ssangpieup    */
    {0x11071112,0x1111}, /* choseong  pieup  + hieuh   = phieuph       */
    {0x1109110b,0x110a}, /* choseong  sios   + ieung   = ssangsios     */
    {0x11091112,0x110e}, /* choseong  sios   + hieuh   = chieuch       */
    {0x110b110c,0x110d}, /* choseong  ieung  + cieuc   = ssangcieuc    */
    {0x110c1112,0x110e}, /* choseong  cieuc  + hieuh   = chieuch       */
    {0x11611165,0x116d}, /* jungseong a      + eo      = yo            */
    {0x11611169,0x116a}, /* jungseong a      + o       = wa            */
    {0x1161116c,0x116b}, /* jungseong a      + oe      = wae           */
    {0x11611175,0x1162}, /* jungseong a      + i       = ae            */
    {0x11621169,0x116b}, /* jungseong ae     + o       = wae           */
    {0x11651167,0x1164}, /* jungseong eo     + yeo     = yae           */
    {0x11651169,0x1163}, /* jungseong eo     + o       = ya            */
    {0x1165116e,0x116f}, /* jungseong eo     + u       = weo           */
    {0x11651171,0x1170}, /* jungseong eo     + wi      = we            */
    {0x11661169,0x1168}, /* jungseong e      + o       = ye            */
    {0x1166116e,0x1170}, /* jungseong e      + u       = we            */
    {0x11671169,0x1164}, /* jungseong yeo    + o      = yae            */
    {0x11691169,0x116d}, /* jungseong o      + o       = yo            */
    {0x1169116e,0x1172}, /* jungseong o      + u       = yu            */
    {0x11691175,0x116c}, /* jungseong o      + i       = oe            */
    {0x116a1175,0x116b}, /* jungseong wa     + i       = wae           */
    {0x116e1175,0x1171}, /* jungseong u      + i       = wi            */
    {0x116f1175,0x1170}, /* jungseong weo    + i       = we            */
    {0x11731175,0x1174}, /* jungseong eu     + i       = yi            */
    {0x119e119e,0x11a2}, /* jungseong araea  + araea   = ssangaraea    */
    {0x11a811af,0x11b0}, /* jongseong kiyeok + lieul   = lieul-kiyeok  */
    {0x11a811b7,0x11b0}, /* jongseong kiyeok + mieum   = lieul-kiyeok  */
    {0x11a811ba,0x11aa}, /* jongseong kiyeok + sios    = kiyeok-sios   */
    {0x11a811bb,0x11bf}, /* jongseong kiyeok + ssangsios = khieukh     */
    {0x11a811bc,0x11a9}, /* jongseong kiyeok + ieung   = ssangekiyeok  */
    {0x11a811c2,0x11bf}, /* jongseong kiyeok + hieuh   = khieukh       */
    {0x11ab11ab,0x11ad}, /* jongseong nieun  + nieun   = nieun-hieuh   */
    {0x11ab11af,0x11ac}, /* jongseong nieun  + lieul   = nieun-cieuc   */
    {0x11ab11b7,0x11c0}, /* jongseong nieun  + mieum   = thikeuth      */
    {0x11ab11bb,0x11c2}, /* jongseong nieun  + ssangsios = hieuh       */
    {0x11ab11bc,0x11ad}, /* jongseong nieun  + ieung   = nieun-hieuh   */
    {0x11ab11c2,0x11ad}, /* jongseong nieun  + hieuh   = nieun-hieuh   */
    {0x11ae11c2,0x11c0}, /* jongseong tikeut + hieuh   = thikeuth      */
    {0x11af11b7,0x11b1}, /* jongseong lieul  + mieum   = lieul-mieum   */
    {0x11af11b8,0x11b2}, /* jongseong lieul  + pieup   = lieul-pieup   */
    {0x11af11ba,0x11b3}, /* jongseong lieul  + sios    = lieul-sios    */
    {0x11af11bb,0x11bd}, /* jongseong lieul  + ssangsios = cieuc       */
    {0x11b711bb,0x11ae}, /* jongseong mieum  + ssangsios = tikeut      */
    {0x11b711bc,0x11b4}, /* jongseong mieum  + ieung   = lieul-thikeuth */
    {0x11b811ba,0x11b9}, /* jongseong pieup  + sios    = pieup-sios    */
    {0x11b811bb,0x11c1}, /* jongseong pieup  + ssangsios    = phieuph  */
    {0x11b811bc,0x11b5}, /* jongseong pieup  + ieung   = lieul-phieuph */
    {0x11b811c2,0x11c1}, /* jongseong pieup  + hieuh   = phieuph       */
    {0x11ba11bb,0x11be}, /* jongseong sios   + ssangsios  = chieuch    */
    {0x11ba11bc,0x11bb}, /* jongseong sios   + ieung   = ssangsios     */
    {0x11bb11bc,0x11b6}, /* jongseong ssangsios  + ieung = lieul-hieuh */
};

static const HangulCombinationItem hangul_combination_table_3moa_semoe_2016[] = {
    {0x1100110b,0x1101}, /* choseong  kiyeok + ieung   = ssangkiyeok   */
    {0x11001112,0x110f}, /* choseong  kiyeok + hieuh   = khieukh       */
    {0x1103110b,0x1104}, /* choseong  tikeut + ieung   = ssangtikeut   */
    {0x11031112,0x1110}, /* choseong  tikeut + hieuh   = thikeuth      */
    {0x1107110b,0x1108}, /* choseong  pieup  + ieung   = ssangpieup    */
    {0x11071112,0x1111}, /* choseong  pieup  + hieuh   = phieuph       */
    {0x1109110b,0x110a}, /* choseong  sios   + ieung   = ssangsios     */
    {0x11091112,0x110e}, /* choseong  sios   + hieuh   = chieuch       */
    {0x110b1100,0x1101}, /* choseong  ieung  + kiyeok  = ssangkiyeok   */
    {0x110b1103,0x1104}, /* choseong  ieung  + tikeut  = ssangtikeut   */
    {0x110b1107,0x1108}, /* choseong  ieung  + pieup   = ssangpieup    */
    {0x110b1109,0x110a}, /* choseong  ieung  + sios    = ssangsios     */
    {0x110b110c,0x110d}, /* choseong  ieung  + cieuc   = ssangcieuc    */
    {0x110c110b,0x110d}, /* choseong  cieuc  + ieung   = ssangcieuc    */
    {0x110c1112,0x110e}, /* choseong  cieuc  + hieuh   = chieuch       */
    {0x11121100,0x110f}, /* choseong  hieuh  + kiyeok  = khieukh       */
    {0x11121103,0x1110}, /* choseong  hieuh  + tikeut  = thikeuth      */
    {0x11121107,0x1111}, /* choseong  hieuh  + pieup   = phieuph       */
    {0x11121109,0x110e}, /* choseong  hieuh  + sios    = chieuch       */
    {0x1112110c,0x110e}, /* choseong  hieuh  + cieuc   = chieuch       */
    {0x11611165,0x116d}, /* jungseong a      + eo      = yo            */
    {0x11611169,0x116a}, /* jungseong a      + o       = wa            */
    {0x1161116c,0x116b}, /* jungseong a      + oe      = wae           */
    {0x11611173,0x119e}, /* jungseong a      + eu      = araea         */
    {0x11611175,0x1162}, /* jungseong a      + i       = ae            */
    {0x11621169,0x116b}, /* jungseong ae     + o       = wae           */
    {0x11651161,0x116d}, /* jungseong eo     + a       = yo            */
    {0x11651167,0x1164}, /* jungseong eo     + yeo     = yae           */
    {0x11651169,0x1163}, /* jungseong eo     + o       = ya            */
    {0x1165116e,0x116f}, /* jungseong eo     + u       = weo           */
    {0x11651171,0x1170}, /* jungseong eo     + wi      = we            */
    {0x11651173,0x11a2}, /* jungseong eo     + eu      = araeya         */
    {0x11661169,0x1168}, /* jungseong e      + o       = ye            */
    {0x1166116e,0x1170}, /* jungseong e      + u       = we            */
    {0x11671169,0x1164}, /* jungseong yeo    + o      = yae            */
    {0x11691161,0x116a}, /* jungseong o      + a       = wa            */
    {0x11691162,0x116b}, /* jungseong o      + ae      = wae           */
    {0x11691165,0x1163}, /* jungseong o      + eo      = ya            */
    {0x11691166,0x1168}, /* jungseong o      + e       = ye            */
    {0x11691167,0x1164}, /* jungseong o      + yeo     = yae           */
    {0x11691169,0x116d}, /* jungseong o      + o       = yo            */
    {0x1169116e,0x1172}, /* jungseong o      + u       = yu            */
    {0x11691175,0x116c}, /* jungseong o      + i       = oe            */
    {0x116a1175,0x116b}, /* jungseong wa     + i       = wae           */
    {0x116c1161,0x116b}, /* jungseong oe     + a       = wae           */
    {0x116e1165,0x116f}, /* jungseong u      + eo      = weo           */
    {0x116e1166,0x1170}, /* jungseong u      + e       = we            */
    {0x116e1169,0x1172}, /* jungseong u      + o       = yu            */
    {0x116e1175,0x1171}, /* jungseong u      + i       = wi            */
    {0x116f1175,0x1170}, /* jungseong weo    + i       = we            */
    {0x11711165,0x1170}, /* jungseong wi     + eo      = we            */
    {0x11731161,0x119e}, /* jungseong eu     + a       = araea         */
    {0x11731165,0x11a2}, /* jungseong eu     + eo      = araeya         */
    {0x11731175,0x1174}, /* jungseong eu     + i       = yi            */
    {0x11751161,0x1162}, /* jungseong i      + a       = ae            */
    {0x11751169,0x116c}, /* jungseong i      + o       = oe            */
    {0x1175116a,0x116b}, /* jungseong i      + wa      = wae           */
    {0x1175116e,0x1171}, /* jungseong i      + u       = wi            */
    {0x1175116f,0x1170}, /* jungseong i      + weo     = we            */
    {0x11751173,0x1174}, /* jungseong i      + eu      = yi            */
    {0x119e119e,0x11a2}, /* jungseong araea  + araea   = ssangaraea    */
    {0x11a811af,0x11b0}, /* jongseong kiyeok + lieul   = lieul-kiyeok  */
    {0x11a811b7,0x11b0}, /* jongseong kiyeok + mieum   = lieul-kiyeok  */
    {0x11a811ba,0x11aa}, /* jongseong kiyeok + sios    = kiyeok-sios   */
    {0x11a811bb,0x11bf}, /* jongseong kiyeok + ssangsios = khieukh     */
    {0x11a811bc,0x11a9}, /* jongseong kiyeok + ieung   = ssangekiyeok  */
    {0x11a811c2,0x11bf}, /* jongseong kiyeok + hieuh   = khieukh       */
    {0x11ab11ab,0x11ad}, /* jongseong nieun  + nieun   = nieun-hieuh   */
    {0x11ab11af,0x11ac}, /* jongseong nieun  + lieul   = nieun-cieuc   */
    {0x11ab11b7,0x11c0}, /* jongseong nieun  + mieum   = thikeuth      */
    {0x11ab11bb,0x11c2}, /* jongseong nieun  + ssangsios = hieuh       */
    {0x11ab11bc,0x11ad}, /* jongseong nieun  + ieung   = nieun-hieuh   */
    {0x11ab11c2,0x11ad}, /* jongseong nieun  + hieuh   = nieun-hieuh   */
    {0x11ae11c2,0x11c0}, /* jongseong tikeut + hieuh   = thikeuth      */
    {0x11af11a8,0x11b0}, /* jongseong lieul  + kiyeok  = lieul-kiyeok  */
    {0x11af11ab,0x11ac}, /* jongseong lieul  + nieun   = nieun-cieuc   */
    {0x11af11b7,0x11b1}, /* jongseong lieul  + mieum   = lieul-mieum   */
    {0x11af11b8,0x11b2}, /* jongseong lieul  + pieup   = lieul-pieup   */
    {0x11af11ba,0x11b3}, /* jongseong lieul  + sios    = lieul-sios    */
    {0x11af11bb,0x11bd}, /* jongseong lieul  + ssangsios = cieuc       */
    {0x11af11bc,0x11a8}, /* jongseong lieul  + ieung   = kiyeok        */
    {0x11af11be,0x11b1}, /* jongseong lieul  + chieuch = lieul-mieum   */
    {0x11af11c1,0x11a9}, /* jongseong lieul  + phieuph = ssangkieuk    */
    {0x11b211bb,0x11a9}, /* jongseong lieul-pieup + ssangsios = ssangkiyeok  */
    {0x11b311bb,0x11b1}, /* jongseong lieul-sios + ssangsios = lieul-mieum  */
    {0x11b711a8,0x11b0}, /* jongseong mieum  + kiyeok  = lieul-kiyeok  */
    {0x11b711ab,0x11c0}, /* jongseong mieum  + nieun   = thikeuth      */
    {0x11b711af,0x11b1}, /* jongseong mieum  + lieul   = lieul-mieum   */
    {0x11b711bb,0x11ae}, /* jongseong mieum  + ssangsios = tikeut      */
    {0x11b711bc,0x11b4}, /* jongseong mieum  + ieung   = lieul-thikeuth */
    {0x11b811af,0x11b2}, /* jongseong pieup  + lieul   = lieul-pieup   */
    {0x11b811ba,0x11b9}, /* jongseong pieup  + sios    = pieup-sios    */
    {0x11b811bb,0x11c1}, /* jongseong pieup  + ssangsios    = phieuph  */
    {0x11b811bc,0x11b5}, /* jongseong pieup  + ieung   = lieul-phieuph */
    {0x11b811bd,0x11a9}, /* jongseong pieup  + cieuc   = ssangkieuk    */
    {0x11b811be,0x11aa}, /* jongseong pieup  + chieuch = kieuk-sios    */
    {0x11b811c2,0x11c1}, /* jongseong pieup  + hieuh   = phieuph       */
    {0x11b911bb,0x11aa}, /* jongseong pieup-sios + ssangsios = kieuk-sios */
    {0x11ba11a8,0x11aa}, /* jongseong sios   + kiyeok  = kiyeok-sios   */
    {0x11ba11af,0x11b3}, /* jongseong sios   + lieul   = lieul-sios    */
    {0x11ba11b8,0x11b9}, /* jongseong sios   + pieup   = pieup-sios    */
    {0x11ba11bb,0x11be}, /* jongseong sios   + ssangsios  = chieuch    */
    {0x11ba11bc,0x11bb}, /* jongseong sios   + ieung   = ssangsios     */
    {0x11ba11bd,0x11b1}, /* jongseong sios   + cieuc   = lieul-mieum   */
    {0x11ba11c1,0x11aa}, /* jongseong sios   + phieuph = kiyeok-sios   */
    {0x11bb11a8,0x11bf}, /* jongseong ssangsios  + kiyeok = khieukh    */
    {0x11bb11ab,0x11c2}, /* jongseong ssangsios  + nieun = hieuh       */
    {0x11bb11af,0x11bd}, /* jongseong ssangsios  + lieul = cieuc       */
    {0x11bb11b2,0x11a9}, /* jongseong ssangsios  + lieul-pieup = ssangkieuk */
    {0x11bb11b3,0x11b1}, /* jongseong ssangsios  + lieul-sios  = lieul-mieum */
    {0x11bb11b7,0x11ae}, /* jongseong ssangsios  + mieum = tikeut      */
    {0x11bb11b8,0x11c1}, /* jongseong ssangsios  + pieup = phieuph     */
    {0x11bb11b9,0x11aa}, /* jongseong ssangsios  + pieup-sios = kieuk-sios */
    {0x11bb11ba,0x11be}, /* jongseong ssangsios  + sios  = chieuch     */
    {0x11bb11bc,0x11b6}, /* jongseong ssangsios  + ieung = lieul-hieuh */
    {0x11bc11a8,0x11a9}, /* jongseong ieung  + kiyeok  = ssangekiyeok  */
    {0x11bc11ab,0x11ad}, /* jongseong ieung  + nieun   = nieun-hieuh   */
    {0x11bc11af,0x11a8}, /* jongseong ieung  + lieul   = kiyeok        */
    {0x11bc11b7,0x11b4}, /* jongseong ieung  + mieum   = lieul-thikeuth */
    {0x11bc11b8,0x11b5}, /* jongseong ieung  + pieup   = lieul-phieuph */
    {0x11bc11ba,0x11bb}, /* jongseong ieung  + sios    = ssangsios     */
    {0x11bc11bb,0x11b6}, /* jongseong ieung  + ssangsios = lieul-hieuh */
    {0x11bd11b8,0x11a9}, /* jongseong cieuc  + pieup   = ssangkieuk    */
    {0x11bd11ba,0x11b1}, /* jongseong cieuc  + sios    = lieul-mieum   */
    {0x11be11af,0x11b1}, /* jongseong chieuch + lieul   = lieul-mieum  */
    {0x11be11b8,0x11aa}, /* jongseong chieuch + pieup   = kieuk-sios   */
    {0x11c111af,0x11a9}, /* jongseong phieuph + lieul  = ssangkieuk    */
    {0x11c111ba,0x11aa}, /* jongseong phieuph + sios   = kieuk-sios    */
    {0x11c211a8,0x11bf}, /* jongseong hieuh  + kiyeok  = khieukh       */
    {0x11c211ab,0x11ad}, /* jongseong hieuh  + nieun   = nieun-hieuh   */
    {0x11c211ae,0x11c0}, /* jongseong hieuh  + tikeut  = thikeuth      */
    {0x11c211b8,0x11c1}, /* jongseong hieuh  + pieup   = phieuph       */
};

// 3 에 조합을 더 넣은 것이다
static const HangulCombinationItem hangul_combination_table_3_3shin_2015[] = {
    /* choseong */
    { 0x1100110b, 0x1101 }, /* choseong  kiyeok + ieung (ㄱ + ㅇ)  = ssangkiyeok   */
    { 0x1100110c, 0x110d }, /* choseong  kiyeok  + cieuc (ㄱ + ㅈ)  = ssangcieuc    */
    { 0x11031106, 0x1104 }, /* choseong  tikeut + mieum (ㄷ + ㅁ) = ssangtikeut   */
    { 0x11061103, 0x1104 }, /* choseong  mieum + tikeut (ㅁ + ㄷ) = ssangtikeut   */
    { 0x1107110c, 0x1108 }, /* choseong  pieup  + cieuc (ㅂ + ㅈ)  = ssangpieup    */
    { 0x11091112, 0x110a }, /* choseong  sios   + hieuh (ㅅ + ㅎ)   = ssangsios     */
    { 0x110b1100, 0x1101 }, /* choseong  ieung + kiyeok (ㅇ + ㄱ) = ssangkiyeok   */
    { 0x110c1100, 0x110d }, /* choseong  cieuc  + kiyeok (ㅈ + ㄱ)  = ssangcieuc    */
    { 0x110c1107, 0x1108 }, /* choseong  cieuc  + pieup (ㅈ + ㅂ)  = ssangpieup    */
    { 0x11121109, 0x110a }, /* choseong  hieuh   + sios (ㅎ + ㅅ)   = ssangsios     */
    /* jungseong */
    /* jongseong */
    { 0x11a811af, 0x11b0 }, /* jongseong kiyeok  + rieul (ㄱ + ㄹ) = rieul-kiyeok (ㄺ) */
    { 0x11a811b8, 0x11a9}, /* jongseong kiyeok + pieup (ㄱ + ㅂ)  = ssangekiyeok (ㄲ) */
    { 0x11b711af, 0x11b1 }, /* jongseong mieum  + rieul (ㅁ + ㄹ)  = rieul-mieum (ㄻ)  */
    { 0x11b811a8, 0x11a9}, /* jongseong pieup + kiyeok (ㅂ + ㄱ)  = ssangekiyeok (ㄲ) */
    { 0x11b811af, 0x11b2 }, /* jongseong pieup  + rieul (ㅂ + ㄹ)  = rieul-pieup (ㄼ)  */
    { 0x11ba11a8, 0x11aa }, /* jongseong sios + kiyeok (ㅅ + ㄱ)   = kiyeok-sois (ㄳ)  */
    { 0x11ba11af, 0x11b3 }, /* jongseong sios  + rieul (ㅅ + ㄹ)   = rieul-sios (ㄽ)   */
    { 0x11ba11b8, 0x11b9 }, /* jongseong sios  + pieup (ㅅ + ㅂ)   = pieup-sios (ㅄ)   */
    { 0x11bd11ab, 0x11ac }, /* jongseong cieuc  + nieun (ㅈ + ㄴ)  = nieun-cieuc (ㄵ)  */
    { 0x11c011af, 0x11b4 }, /* jongseong thieuth  + rieul (ㅌ + ㄹ) = rieul-thieuth (ㄾ) */
    { 0x11c111af, 0x11b5 }, /* jongseong phieuph  + rieul (ㅍ + ㄹ) = rieul-phieuph (ㄿ) */
    { 0x11c211ab, 0x11ad }, /* jongseong hieuh  + nieun (ㅎ + ㄴ)  = nieun-hieuh (ㄶ)  */
    { 0x11c211af, 0x11b6 }, /* jongseong hieuh  + rieul (ㅎ + ㄹ)  = rieul-hieuh (ㅀ)  */
};

// full 에 조합을 더 넣은 것이다
static const HangulCombinationItem hangul_combination_table_full_3shin_p[] = {
    { 0x11001109, 0x1140}, /* choseong gieug + siues = ssanggieug */
    { 0x1100110B, 0x114C}, /* choseong gieug + ieung = yesieung */
    { 0x11001112, 0x1159}, /* choseong gieug + hiueh = yeolinhieuh */
    { 0x110A11C1, 0xD7EE}, /* jongseong ssangsieus + pieup = sieus-yeolinsieus */
    { 0x110C1100, 0x1150}, /* choseong jieuj + gieug = dwis-jieuj */
    { 0x110C1103, 0x114E}, /* choseong jieuj + dieug = ab-jieuj */
    { 0x110C1109, 0x113C}, /* choseong jieuj + siues = ab-sieus */
    { 0x110D1100, 0x1151}, /* choseong ssangjieuj + gieug = ssang-dwis-jieuj */
    { 0x110D1103, 0x114F}, /* choseong ssangjieuj + dieud = ssang-ab-jieuj */
    { 0x110E1100, 0x1155}, /* choseong chieuch + gieug = dwis-chieuch */
    { 0x110E1103, 0x1154}, /* choseong chieuch + dieug = ab-chieuch */
    { 0x110E1109, 0x113E}, /* choseong chieuch + siues = dwis-sieus */
    { 0x113C1109, 0x113D}, /* choseong ab-sieus + sieus = ssang-ab-sieus */
    { 0x113E1109, 0x113F}, /* choseong dwis-sieus + sieus = ssang-dwis-sieus */
    { 0x11411109, 0x1146}, /* choseong ieung-gieug + sieus = ieung-yeolinsieus */
    { 0x11591112, 0xA97C}, /* choseong yeolinhieuh + hiueh = ssangyeolinhieuh */
    { 0x11B311C1, 0x11D7}, /* jongseong lieul-sieus + pieup = lieul-yeolinsieus */
    { 0x11B611C1, 0x11D9}, /* jongseong lieul-hieuh + pieup = lieul-yeolinhieuh */
    { 0x11BA11C1, 0x11EB}, /* jongseong sieus + pieup = yeolinsieus */
    { 0x11BB11C1, 0xD7EE}, /* jongseong ssangsiues + pieup = sieus-yeolinsieus */
    { 0x11BC11A8, 0x11EC}, /* jongseong ieung + gieug = yesieung-gieug */
    { 0x11BC11A9, 0x11EC}, /* jongseong ieung + ssanggieug = yesieung-ssanggieug */
    { 0x11BC11B7, 0xD7F5}, /* jongseong ieung + mieum = yesieung-mieum */
    { 0x11BC11BA, 0x11F1}, /* jongseong ieung + sieus = yesieung-sieus */
    { 0x11BC11BC, 0x11EE}, /* jongseong ieung + ieung = ssangyesieung */
    { 0x11BC11BF, 0x11EF}, /* jongseong ieung + ieung = ssangyesieung */
    { 0x11BC11C1, 0x11F0}, /* jongseong ieung + pieup = yesieung */
    { 0x11BC11C2, 0xD7F6}, /* jongseong ieung + ieung = ssangyesieung */
    { 0x11C211C1, 0x11F9}, /* jongseong hieuh + pieup = yeolinhieuh */
    { 0x11C711C1, 0x11C8}, /* jongseong nieun-sieus + pieup = nieun-yeolinsieus */
    { 0x11DD11C1, 0x11DF}, /* jongseong mieum-sieus + pieup = mieum-yeolinsieus */
    { 0x11F011C1, 0x11EE}, /* jongseong yesieung + pieup = ssangyesieung */
    { 0x11F111C1, 0x11F2}, /* jongseong yesieung-sieus + pieup = yesieung-yeolinsieus */
    { 0xD7DD11C1, 0xD7DB}, /* jongseong yeolinlieul + pieup = lieul-yesieung */
};


static const HangulGalmadeuliItem hangul_replace_table_2_noshift[] = {
    {0x1100, 0x1101},  /* choseong (ㄱ -> ㄲ) */
    {0x1103, 0x1104},  /* choseong (ㄷ -> ㄸ) */
    {0x1107, 0x1108},  /* choseong (ㅂ -> ㅃ) */
    {0x1109, 0x110A},  /* choseong (ㅅ -> ㅆ) */
    {0x110c, 0x110d},  /* choseong (ㅈ -> ㅉ) */
};


static const HangulGalmadeuliItem hangul_galmadeuli_table_3shin_1995[] = {
    /* choseong -> jungseong */
    {0x1106, 0x116e},  /* choseong mieum <ㅁ> */     /* jungseong u <ㅜ> */
    {0x110b, 0x119e},  /* choseong ieung <ㅇ> */      /* jungseong araea<ㆍ> */
    {0x110e, 0x116e},  /* choseong chieuch <ㅊ> */      /* jungseong u <ㅜ> */
    {0x110f, 0x1169},  /* choseong khieukh <ㅋ> */     /* jungseong o <ㅗ> */
    {0x1111, 0x1169},  /* choseong phieuph <ㅍ> */     /* jungseong o <ㅗ> */
    /* jungseong -> jongseong */
    {0x1161, 0x11ac},     /*ㅏ*/     /* <ㄵ> */
    {0x1162, 0x11b4},     /*ㅐ*/     /* <ㄾ> */
    {0x1163, 0x11b0},     /*ㅑ*/     /* <ㄺ> */
    {0x1164, 0x11b9},     /*ㅒ*/     /* <ㅄ> */
    {0x1166, 0x11b5},     /*ㅔ*/     /* <ㄿ>*/
    {0x1167, 0x11b2},     /*ㅕ*/     /* <ㄼ> */
    {0x1168, 0x11ad},     /*ㅖ*/     /* <ㄶ> */
    {0x1169, 0x11aa},     /*ㅗ*/     /* <ㄳ> */
    {0x116d, 0x11a9},     /*ㅛ*/     /* <ㄲ> */
    {0x1172, 0x11b1},     /*ㅠ*/     /* <ㄻ> */
    {0x1174, 0x11b3},     /*ㅢ*/    /* <ㄽ>  */
    {0x1175, 0x11b6},     /*ㅣ*/     /* <ㅀ> */
    /* jongseong -> jungseong */
    {0x11a8, 0x116d},  /* jongseong kiyeok (ㄱ)        -> jungseong yo (ㅛ) */
    {0x11ab, 0x1168},  /* jongseong nieun (ㄴ)         -> jungseong ye (ㅖ)       */
    {0x11ae, 0x1162},  /* jongseong tikeut (ㄷ)        -> jungseong ae  (ㅐ)      */
    {0x11af, 0x1163},  /* jongseong rieul (ㄹ)         ->  jungseong ya (ㅑ)       */
    {0x11b7, 0x1172},  /* jongseong mieum  (ㅁ)        ->  jungseong yu  (ㅠ)   */
    {0x11b8, 0x1167},  /* jongseong pieup  (ㅂ)        -> jungseong yeo (ㅕ)     */
    {0x11ba, 0x1174},  /* jongseong sios (ㅅ)          -> jungseong yi <ㅢ>        */
    {0x11bb, 0x116e}, /* jongseong ssangsios (ㅆ)     -> jungseong u  (ㅜ)   */
    {0x11bc, 0x1164},  /* jongseong ieung (ㅇ)         -> jungseong yae (ㅒ)      */
    {0x11bd, 0x1161},  /* jongseong cieuc (ㅈ)         -> jungseong a (ㅏ)      */
    {0x11be, 0x1166},  /* jongseong chieuch (ㅊ)       -> jungseong e  (ㅔ)    */
    {0x11bf, 0x1169},  /* jongseong khieukh (ㅋ)        -> jungseong o  (ㅗ)    */
    {0x11c0, 0x1165},  /* jongseong thieuth (ㅌ)       -> jungseong eo  (ㅓ)    */
    {0x11c1, 0x1173},  /* jongseong phieuph (ㅍ)       -> jungseong eu  (ㅡ)    */
    {0x11c2, 0x1175},  /* jongseong hieuh (ㅎ)         -> jungseong i  (ㅣ)     */
};

static const HangulGalmadeuliItem hangul_galmadeuli_table_3shin_2003[] = {
    /* choseong -> jungseong */
    {0x1106, 0x1174},  /* choseong mieum <ㅁ> */     /* jungseong yi <ㅢ> */
    {0x110b, 0x119e},  /* choseong ieung <ㅇ> */      /* jungseong araea<ㆍ> */
    {0x110e, 0x116e},  /* choseong chieuch <ㅊ> */      /* jungseong u <ㅜ> */
    {0x110f, 0x1169},  /* choseong khieukh <ㅋ> */     /* jungseong o <ㅗ> */
    {0x1111, 0x1169},  /* choseong phieuph <ㅍ> */     /* jungseong o <ㅗ> */
    /* jungseong -> jongseong */
    {0x1162, 0x11b4},     /*ㅐ*/     /* <ㄾ> */
    {0x1163, 0x11b0},     /*ㅑ*/     /* <ㄺ> */
    {0x1164, 0x11b3},     /*ㅒ*/     /* <ㄽ> */
    {0x1165, 0x11b5},     /*ㅓ*/     /* <ㄿ> */
    {0x1166, 0x11aa},     /*ㅔ*/     /* <ㄳ>*/
    {0x1167, 0x11b2},     /*ㅕ*/     /* <ㄼ> */
    {0x1168, 0x11ad},     /*ㅖ*/     /* <ㄶ> */
    {0x1169, 0x11b6},     /*ㅗ*/     /* <ㅀ> */
    {0x116d, 0x11a9},     /*ㅛ*/     /* <ㄲ> */
    {0x1172, 0x11ac},     /*ㅠ*/     /* <ㄵ> */
    {0x1175, 0x11b9},     /*ㅣ*/     /* <ㅄ> */
    /* jongseong -> jungseong */
    {0x11a8, 0x116d},  /* jongseong kiyeok (ㄱ)        -> jungseong yo (ㅛ) */
    {0x11ab, 0x1168},  /* jongseong nieun (ㄴ)         -> jungseong ye (ㅖ)       */
    {0x11ae, 0x1175},  /* jongseong tikeut (ㄷ)        -> jungseong i  (ㅣ)      */
    {0x11af, 0x1163},  /* jongseong rieul (ㄹ)         ->  jungseong ya (ㅑ)       */
    {0x11b7, 0x203B},  /* jongseong mieum  (ㅁ)        ->  ※: 0x203B   */
    {0x11b8, 0x1167},  /* jongseong pieup  (ㅂ)        -> jungseong yeo (ㅕ)     */
    {0x11ba, 0x1164},  /* jongseong sios (ㅅ)          -> jungseong yae (ㅒ)        */
    {0x11bb, 0x1161}, /* jongseong ssangsios (ㅆ)     -> jungseong a (ㅏ)   */
    {0x11bc, 0x1172},  /* jongseong ieung (ㅇ)         -> jungseong yu  (ㅠ)      */
    {0x11bd, 0x1173},  /* jongseong cieuc (ㅈ)         -> jungseong eu  (ㅡ)      */
    {0x11be, 0x1166},  /* jongseong chieuch (ㅊ)       -> jungseong e  (ㅔ)    */
    {0x11bf, 0x116e},  /* jongseong khieukh (ㅋ)        -> jungseong u  (ㅜ)    */
    {0x11c0, 0x1162},  /* jongseong thieuth (ㅌ)       -> jungseong ae  (ㅐ)    */
    {0x11c1, 0x1165},  /* jongseong phieuph (ㅍ)       -> jungseong eo  (ㅓ)    */
    {0x11c2, 0x1169},  /* jongseong hieuh (ㅎ)         -> jungseong o   (ㅗ)     */
    /* jungseong -> jongseong */
    {0x203B, 0x11b1},     /*※: 0x203B*/    /* <ㄻ>  */
};

static const HangulGalmadeuliItem hangul_galmadeuli_table_3shin_2012[] = {
    /* choseong -> jungseong */
    {0x1106, 0x1174},  /* choseong mieum <ㅁ> */     /* jungseong yi <ㅢ> */
    //{0x110b, 0x119e},  /* choseong ieung <ㅇ> */      /* jungseong araea<ㆍ> */
    {0x110e, 0x116e},  /* choseong chieuch <ㅊ> */      /* jungseong u <ㅜ> */
    {0x110f, 0x1169},  /* choseong khieukh <ㅋ> */     /* jungseong o <ㅗ> */
    {0x1111, 0x1169},  /* choseong phieuph <ㅍ> */     /* jungseong o <ㅗ> */
    /* jungseong -> jongseong */
    {0x1161, 0x11aa},     /*ㅏ*/     /* <ㄳ> */
    {0x1163, 0x11b0},     /*ㅑ*/     /* <ㄺ> */
    {0x1164, 0x11b3},     /*ㅒ*/     /* <ㄽ> */
    {0x1165, 0x11b4},     /*ㅓ*/     /* <ㄾ> */
    {0x1166, 0x11b6},     /*ㅔ*/     /* <ㅀ>*/
    {0x1167, 0x11b2},     /*ㅕ*/     /* <ㄼ> */
    {0x1168, 0x11ad},     /*ㅖ*/     /* <ㄶ> */
    {0x1169, 0x11b5},     /*ㅗ*/     /* <ㄿ> */
    {0x116d, 0x11a9},     /*ㅛ*/     /* <ㄲ> */
    //{0x116e, 0x11aa},     /*ㅜ*/     /* <ㄳ> */
    {0x1172, 0x11ac},     /*ㅠ*/     /* <ㄵ> */
    {0x1175, 0x11b9},     /*ㅣ*/     /* <ㅄ> */
    {0x119e, 0x11b1},     /*   ᆞaraea*/    /* <ㄻ>  */
    /* jongseong -> jungseong */
    {0x11a8, 0x116d},  /* jongseong kiyeok (ㄱ)        -> jungseong yo (ㅛ) */
    {0x11ab, 0x1168},  /* jongseong nieun (ㄴ)         -> jungseong ye (ㅖ)       */
    {0x11ae, 0x1162},  /* jongseong tikeut (ㄷ)        -> jungseong ae  (ㅐ)      */
    {0x11af, 0x1163},  /* jongseong rieul (ㄹ)         ->  jungseong ya (ㅑ)       */
    {0x11b7, 0x119e},  /* jongseong mieum  (ㅁ)        ->      jungseong araea (ᆞ)   */
    {0x11b8, 0x1167},  /* jongseong pieup  (ㅂ)        -> jungseong yeo (ㅕ)     */
    {0x11ba, 0x1164},  /* jongseong sios (ㅅ)          -> jungseong yae (ㅒ)        */
    {0x11bb, 0x1175}, /* jongseong ssangsios (ㅆ)     -> jungseong i  (ㅣ)   */
    {0x11bc, 0x1172},  /* jongseong ieung (ㅇ)         -> jungseong yu  (ㅠ)      */
    {0x11bd, 0x1173},  /* jongseong cieuc (ㅈ)         -> jungseong eu  (ㅡ)      */
    {0x11be, 0x1161},  /* jongseong chieuch (ㅊ)       -> jungseong a (ㅏ)    */
    {0x11bf, 0x116e},  /* jongseong khieukh (ㅋ)        -> jungseong u  (ㅜ)    */
    {0x11c0, 0x1165},  /* jongseong thieuth (ㅌ)       -> jungseong eo  (ㅓ)    */
    {0x11c1, 0x1169},  /* jongseong phieuph (ㅍ)       -> jungseong o  (ㅗ)    */
    {0x11c2, 0x1166},  /* jongseong hieuh (ㅎ)         -> jungseong e (ㅔ)     */
};

static const HangulGalmadeuliItem hangul_galmadeuli_table_3shin_2015[] = {
    /* choseong -> jungseong */
    //{0x1106, 0x1174},  /* choseong mieum <ㅁ> */     /* jungseong yi <ㅢ> */
    //{0x110b, 0x119e},  /* choseong ieung <ㅇ> */      /* jungseong araea<ㆍ> */
    {0x110e, 0x116e},  /* choseong chieuch <ㅊ> */      /* jungseong u <ㅜ> */
    {0x110f, 0x1169},  /* choseong khieukh <ㅋ> */     /* jungseong o <ㅗ> */
    {0x1111, 0x1169},  /* choseong phieuph <ㅍ> */     /* jungseong o <ㅗ> */
    /* jungseong -> jongseong */
    {0x1161, 0x11c0},     /*ㅏ*/     /* <ㅌ> */
    {0x1162, 0x11bd},     /*ㅐ*/     /* <ㅈ> */
    {0x1163, 0x11bb},     /*ㅑ*/     /* <ㅆ> */
    {0x1164, 0x11c2},     /*ㅒ*/     /* <ㅎ> */
    {0x1165, 0x11c1},     /*ㅓ*/     /* <ㅍ> */
    {0x1166, 0x11ba},     /*ㅔ*/     /* <ㅅ>*/
    {0x1167, 0x11bc},     /*ㅕ*/     /* <ㅇ> */
    {0x1168, 0x11b7},     /*ㅖ*/     /* <ㅁ> */
    {0x1169, 0x11be},     /*ㅗ*/     /* <ㅊ> */
    {0x116d, 0x11a8},     /*ㅛ*/     /* <ㄱ> */
    {0x116e, 0x11bf},     /*ㅜ*/     /* <ㅋ> */
    {0x1172, 0x11b8},     /*ㅠ*/     /* <ㅂ> */
    {0x1173, 0x11ae},     /*ㅡ*/     /* <ㄷ> */
    {0x1174, 0x11ab},     /*ㅢ*/     /* <ㄴ> */
    {0x1175, 0x11af},     /*ㅣ*/     /* <ㄹ> */
};

static const HangulGalmadeuliItem hangul_galmadeuli_table_3shin_m[] = {
    /* choseong -> jungseong */
    //{0x1106, 0x1174},  /* choseong mieum <ㅁ> */     /* jungseong yi <ㅢ> */
    //{0x110b, 0x119e},  /* choseong ieung <ㅇ> */      /* jungseong araea<ㆍ> */
    {0x110e, 0x116e},  /* choseong chieuch <ㅊ> */      /* jungseong u <ㅜ> */
    {0x110f, 0x1169},  /* choseong khieukh <ㅋ> */     /* jungseong o <ㅗ> */
    {0x1111, 0x1169},  /* choseong phieuph <ㅍ> */     /* jungseong o <ㅗ> */
    /* jungseong -> jongseong */
    {0x1161, 0x11c0},     /*ㅏ*/     /* <ㅌ> */
    {0x1162, 0x11bd},     /*ㅐ*/     /* <ㅈ> */
    {0x1163, 0x11af},     /*ㅑ*/     /* <ㄹ> */
    {0x1164, 0x11ba},     /*ㅒ*/     /* <ㅅ> */
    {0x1165, 0x11bf},     /*ㅓ*/     /* <ㅋ> */
    {0x1166, 0x11c2},     /*ㅔ*/     /* <ㅎ>*/
    {0x1167, 0x11b8},     /*ㅕ*/     /* <ㅂ> */
    {0x1168, 0x11b7},     /*ㅖ*/     /* <ㅁ> */
    {0x1169, 0x11c1},     /*ㅗ*/     /* <ㅍ> */
    {0x116d, 0x11a8},     /*ㅛ*/     /* <ㄱ> */
    {0x116e, 0x11be},     /*ㅜ*/     /* <ㅊ> */
    {0x1172, 0x11bc},     /*ㅠ*/     /* <ㅇ> */
    {0x1173, 0x11ae},     /*ㅡ*/     /* <ㄷ> */
    {0x1174, 0x11ab},     /*ㅢ*/     /* <ㄴ> */
    {0x1175, 0x11bb},     /*ㅣ*/     /* <ㅆ> */
};

static const HangulGalmadeuliItem hangul_galmadeuli_table_3shin_p[] = {
    /*  */
    {0x00D7,  0x302F},  /* 0x59 Y:  multiplication (×) -> 0x302F (〯) */
    /* choseong -> jungseong */
    {0x1106, 0x1173},  /* choseong mieum <ㅁ> */     /* jungseong eu <ㅡ> */
    //{0x110b, 0x119e},  /* choseong ieung <ㅇ> */      /* jungseong araea<ㆍ> */
    {0x110e, 0x116e},  /* choseong chieuch <ㅊ> */      /* jungseong u <ㅜ> */
    {0x110f, 0x1169},  /* choseong khieukh <ㅋ> */     /* jungseong o <ㅗ> */
    {0x1111, 0x119e},  /* choseong phieuph <ㅍ> */     /* jungseong araea<ㆍ> */
    /* jungseong -> jongseong */
    {0x1161, 0x11c1}, /* jungseong a (ㅏ)     -> jongseong phieuph (ㅍ)   */
    {0x1162, 0x11be},  /* jungseong ae  (ㅐ)       -> jongseong chieuch (ㅊ)    */
    {0x1163, 0x11af},  /* jungseong ya (ㅑ)         ->  jongseong rieul (ㄹ)       */
    {0x1164, 0x11ba},  /* jungseong yae (ㅒ)          -> jongseong sios (ㅅ)        */
    {0x1165, 0x11c0},  /* jungseong eo  (ㅓ)       -> jongseong thieuth (ㅌ)    */
    {0x1166, 0x11a8},  /* jungseong e (ㅔ)       -> jongseong kiyeok (ㄱ)    */
    {0x1167, 0x11b8},  /* jungseong yeo (ㅕ)        -> jongseong pieup  (ㅂ)     */
    {0x1168, 0x11ab},  /* jungseong ye (ㅖ)         -> jongseong nieun (ㄴ)       */
    {0x1169, 0x11bd},  /* jungseong o  (ㅗ)         -> jongseong cieuc (ㅈ)      */
    {0x116d, 0x11bb},  /* jungseong yo (ㅛ)        -> jongseong ssangsios (ㅆ) */
    {0x116e, 0x11bf},  /* jungseong u  (ㅜ)        -> jongseong khieukh (ㅋ)    */
    {0x1172, 0x11bc},  /* jungseong yu  (ㅠ)         -> jongseong ieung (ㅇ)      */
    {0x1173, 0x11ae},  /* jungseong eu  (ㅡ)        -> jongseong tikeut (ㄷ)      */
    {0x1175, 0x11c2},  /* jungseong i  (ㅣ)         -> jongseong hieuh (ㅎ)     */
    {0x119e, 0x11b7},  /* jungseong araea (ᆞ)        -> jongseong mieum  (ㅁ)   */
    /* jongseong -> jungseong */
    {0x11a8, 0x1166},  /* jongseong kiyeok (ㄱ)        -> jungseong e (ㅔ) */
    {0x11ab, 0x1168},  /* jongseong nieun (ㄴ)         -> jungseong ye (ㅖ)       */
    {0x11ae, 0x1173},  /* jongseong tikeut (ㄷ)        -> jungseong eu  (ㅡ)      */
    {0x11af, 0x1163},  /* jongseong rieul (ㄹ)         ->  jungseong ya (ㅑ)       */
    {0x11b7, 0x119e},  /* jongseong mieum  (ㅁ)        ->      jungseong araea (ᆞ)   */
    {0x11b8, 0x1167},  /* jongseong pieup  (ㅂ)        -> jungseong yeo (ㅕ)     */
    {0x11ba, 0x1164},  /* jongseong sios (ㅅ)          -> jungseong yae (ㅒ)        */
    {0x11bb, 0x116d}, /* jongseong ssangsios (ㅆ)     -> jungseong yo (ㅛ)   */
    {0x11bc, 0x1172},  /* jongseong ieung (ㅇ)         -> jungseong yu  (ㅠ)      */
    {0x11bd, 0x1169},  /* jongseong cieuc (ㅈ)         -> jungseong o  (ㅗ)      */
    {0x11be, 0x1162},  /* jongseong chieuch (ㅊ)       -> jungseong ae  (ㅐ)    */
    {0x11bf, 0x116e},  /* jongseong khieukh (ㅋ)        -> jungseong u (ㅜ)    */
    {0x11c0, 0x1165},  /* jongseong thieuth (ㅌ)       -> jungseong eo (ㅓ)    */
    {0x11c1, 0x1161},  /* jongseong phieuph (ㅍ)       -> jungseong a (ㅏ)    */
    {0x11c2, 0x1175},  /* jongseong hieuh (ㅎ)         -> jungseong i  (ㅣ)     */
    /*  */
    {0x25CB,  0x302E},  /* 0x55 U:  white circle (○) -> 0x302E (〮) */
};

static const HangulGalmadeuliItem hangul_galmadeuli_table_3shin_p2[] = {
    /*  */
    {0x00D7,  0x302F},  /* 0x59 Y:  multiplication (×) -> 0x302F (〯) */
    /* choseong -> jungseong */
    {0x1106, 0x1173},  /* choseong mieum <ㅁ> */     /* jungseong eu <ㅡ> */
    //{0x110b, 0x119e},  /* choseong ieung <ㅇ> */      /* jungseong araea<ㆍ> */
    {0x110e, 0x116e},  /* choseong chieuch <ㅊ> */      /* jungseong u <ㅜ> */
    {0x110f, 0x1169},  /* choseong khieukh <ㅋ> */     /* jungseong o <ㅗ> */
    {0x1111, 0x119e},  /* choseong phieuph <ㅍ> */     /* jungseong araea<ㆍ> */
    /* jungseong -> jongseong */
    {0x1161, 0x11c1},  /* jungseong a (ㅏ)           -> jongseong phieuph (ㅍ)   */
    {0x1162, 0x11b8},  /* jungseong ae  (ㅐ)        -> jongseong pieup  (ㅂ)    */
    {0x1163, 0x11af},  /* jungseong ya (ㅑ)         ->  jongseong rieul (ㄹ)       */
    {0x1164, 0x11ba},  /* jungseong yae (ㅒ)        -> jongseong sios (ㅅ)        */
    {0x1165, 0x11c0},  /* jungseong eo  (ㅓ)        -> jongseong thieuth (ㅌ)    */
    {0x1166, 0x11a8},  /* jungseong e (ㅔ)          -> jongseong kiyeok (ㄱ)    */
    {0x1167, 0x11bf},  /* jungseong yeo (ㅕ)        -> jongseong khieukh (ㅋ)     */
    {0x1168, 0x11ab},  /* jungseong ye (ㅖ)         -> jongseong nieun (ㄴ)       */
    {0x1169, 0x11bd},  /* jungseong o  (ㅗ)         -> jongseong cieuc (ㅈ)      */
    {0x116d, 0x11bb},  /* jungseong yo (ㅛ)         -> jongseong ssangsios (ㅆ) */
    {0x116e, 0x11be},  /* jungseong u  (ㅜ)         -> jongseong chieuch (ㅊ)    */
    {0x1172, 0x11bc},  /* jungseong yu  (ㅠ)        -> jongseong ieung (ㅇ)      */
    {0x1173, 0x11ae},  /* jungseong eu  (ㅡ)        -> jongseong tikeut (ㄷ)      */
    {0x1175, 0x11c2},  /* jungseong i  (ㅣ)         -> jongseong hieuh (ㅎ)     */
    {0x119e, 0x11b7},  /* jungseong araea (ᆞ)      -> jongseong mieum  (ㅁ)   */
    /* jongseong -> jungseong */
    {0x11a8, 0x1166},  /* jongseong kiyeok (ㄱ)        -> jungseong e (ㅔ) */
    {0x11ab, 0x1168},  /* jongseong nieun (ㄴ)         -> jungseong ye (ㅖ)       */
    {0x11ae, 0x1173},  /* jongseong tikeut (ㄷ)        -> jungseong eu  (ㅡ)      */
    {0x11af, 0x1163},  /* jongseong rieul (ㄹ)         -> jungseong ya (ㅑ)       */
    {0x11b7, 0x119e},  /* jongseong mieum  (ㅁ)        -> jungseong araea (ᆞ)   */
    {0x11b8, 0x1162},  /* jongseong pieup  (ㅂ)        -> jungseong ae  (ㅐ)     */
    {0x11ba, 0x1164},  /* jongseong sios (ㅅ)          -> jungseong yae (ㅒ)        */
    {0x11bb, 0x116d},  /* jongseong ssangsios (ㅆ)     -> jungseong yo (ㅛ)   */
    {0x11bc, 0x1172},  /* jongseong ieung (ㅇ)         -> jungseong yu  (ㅠ)      */
    {0x11bd, 0x1169},  /* jongseong cieuc (ㅈ)         -> jungseong o  (ㅗ)      */
    {0x11be, 0x116e},  /* jongseong chieuch (ㅊ)       -> jungseong u (ㅜ)    */
    {0x11bf, 0x1167},  /* jongseong khieukh (ㅋ)       -> jungseong yeo (ㅕ)    */
    {0x11c0, 0x1165},  /* jongseong thieuth (ㅌ)       -> jungseong eo (ㅓ)    */
    {0x11c1, 0x1161},  /* jongseong phieuph (ㅍ)       -> jungseong a (ㅏ)    */
    {0x11c2, 0x1175},  /* jongseong hieuh (ㅎ)         -> jungseong i  (ㅣ)     */
    /*  */
    {0x25CB,  0x302E},  /* 0x55 U:  white circle (○) -> 0x302E (〮) */
};


static const HangulGalmadeuliItem hangul_galmadeuli_table_3_2014[] = {
    {0x1161, 0x11c0}, /* jungseong a (ㅏ):       jongseong thikeuth (ㅌ)        */
    {0x1162, 0x1164}, /* jungseong ae (ㅐ):       jungseong yae (ㅒ)        */
    {0x1165, 0x11be}, /* jungseong eo (ㅓ):      jongseong chieuch (ㅊ)      */
    {0x1166, 0x11bf}, /* jungseong e (ㅔ):      jongseong khiyeok (ㅋ)         */
    {0x1167, 0x11bd}, /* jungseong yeo (ㅕ):     jongseong cieuc (ㅈ)        */
    {0x1169, 0x11c1}, /* jungseong o (ㅗ):       jongseong phieuph (ㅍ)        */
    {0x1175, 0x11ae}, /* jungseong i (ㅣ):       jongseong tikeut (ㄷ)       */
    {0x11ae, 0x11b2}, /* jongseong tikeut (ㄷ):   jongseong rieul-pieup (ㄼ)  */
    {0x11bd, 0x11ac}, /* jongseong cieuc (ㅈ):   jongseong nieun-cieuc (ㄵ)  */
    {0x11be, 0x11b3}, /* jongseong chieuch (ㅊ): jongseong rieul-sios (ㄽ)  */
    {0x11bf, 0x11aa}, /* jongseong khiyeok (ㅋ):   jongseong kiyeok-sios (ㄳ)  */
    {0x11c0, 0x11b4}, /* jongseong thikeuth (ㅌ):   jongseong rieul-thieuth (ㄾ)  */
    {0x11c1, 0x11b5},  /* jongseong phieuph (ㅍ):   jongseong rieul-phieuph (ㄿ)  */
};

static const HangulGalmadeuliItem hangul_galmadeuli_table_3_2015[] = {
    {0x1161, 0x11c1}, /* jungseong a (ㅏ):       jongseong phieuph (ㅍ)        */
    {0x1162, 0x1164}, /* jungseong ae (ㅐ):       jungseong yae (ㅒ)        */
    {0x1165, 0x11be}, /* jungseong eo (ㅓ):      jongseong chieuch (ㅊ)      */
    {0x1166, 0x11c0}, /* jungseong e (ㅔ):       jongseong thikeuth (ㅌ)        */
    {0x1167, 0x11bd}, /* jungseong yeo (ㅕ):     jongseong cieuc (ㅈ)        */
    {0x1169, 0x11bf}, /* jungseong o (ㅗ):       jongseong khiyeok (ㅋ)        */
    {0x1175, 0x11c2}, /* jungseong i (ㅣ):       jongseong hieuh (ㅎ)       */
    {0x11bd, 0x11ac}, /* jongseong cieuc (ㅈ):   jongseong nieun-cieuc (ㄵ)  */
    {0x11be, 0x11b6}, /* jongseong chieuch (ㅊ): jongseong rieul-hieuh (ㅀ)  */
    {0x11bf, 0x11aa}, /* jongseong khiyeok (ㅋ):   jongseong kiyeok-sios (ㄳ)  */
    {0x11c0, 0x11b5}, /* jongseong thikeuth (ㅌ):   jongseong rieul-phieuph (ㄿ)  */
    {0x11c1, 0x11b1},  /* jongseong phieuph (ㅍ):   jongseong rieul-mieum (ㄻ)  */
    {0x11c2, 0x11b2}, /* jongseong hieuh (ㅎ):   jongseong rieul-pieup (ㄼ)  */
};

static const HangulGalmadeuliItem hangul_galmadeuli_table_3_2015_metal[] = {
    {0x1161, 0x11c1}, /* jungseong a (ㅏ):       jongseong phieuph (ㅍ)        */
    {0x1162, 0x11be}, /* jungseong ae (ㅐ):       jungseong chieuch (ㅊ)        */
    {0x1165, 0x1164}, /* jungseong eo (ㅓ):      jongseong yae (ㅒ)      */
    {0x1166, 0x11c0}, /* jungseong e (ㅔ):       jongseong thikeuth (ㅌ)        */
    {0x1167, 0x11bd}, /* jungseong yeo (ㅕ):     jongseong cieuc (ㅈ)        */
    {0x1169, 0x11bf}, /* jungseong o (ㅗ):       jongseong khiyeok (ㅋ)        */
    {0x1175, 0x11c2}, /* jungseong i (ㅣ):       jongseong hieuh (ㅎ)       */
    {0x11bd, 0x11ac}, /* jongseong cieuc (ㅈ):   jongseong nieun-cieuc (ㄵ)  */
    {0x11be, 0x11b6}, /* jongseong chieuch (ㅊ): jongseong rieul-hieuh (ㅀ)  */
    {0x11bf, 0x11aa}, /* jongseong khiyeok (ㅋ):   jongseong kiyeok-sios (ㄳ)  */
    {0x11c0, 0x11b5}, /* jongseong thikeuth (ㅌ):   jongseong rieul-phieuph (ㄿ)  */
    {0x11c1, 0x11b1},  /* jongseong phieuph (ㅍ):   jongseong rieul-mieum (ㄻ)  */
    {0x11c2, 0x11b2}, /* jongseong hieuh (ㅎ):   jongseong rieul-pieup (ㄼ)  */
};

static const HangulGalmadeuliItem hangul_galmadeuli_table_3_2015_patal[] = {
    {0x1161, 0x11c1}, /* jungseong a (ㅏ):       jongseong phieuph (ㅍ)        */
    {0x1162, 0x1164}, /* jungseong ae (ㅐ):       jungseong yae (ㅒ)        */
    {0x1165, 0x11be}, /* jungseong eo (ㅓ):      jongseong chieuch (ㅊ)      */
    {0x1166, 0x11c0}, /* jungseong e (ㅔ):       jongseong thikeuth (ㅌ)        */
    {0x1167, 0x11bd}, /* jungseong yeo (ㅕ):     jongseong cieuc (ㅈ)        */
    {0x1169, 0x11bf}, /* jungseong o (ㅗ):       jongseong khiyeok (ㅋ)        */
    {0x1175, 0x11c2}, /* jungseong i (ㅣ):       jongseong hieuh (ㅎ)       */
    {0x11bd, 0x11ac}, /* jongseong cieuc (ㅈ):   jongseong nieun-cieuc (ㄵ)  */
    {0x11be, 0x11b3}, /* jongseong chieuch (ㅊ): jongseong rieul-sios (ㄽ)  */
    {0x11bf, 0x11aa}, /* jongseong khiyeok (ㅋ):   jongseong kiyeok-sios (ㄳ)  */
    {0x11c0, 0x11b4}, /* jongseong thikeuth (ㅌ):   jongseong rieul-thieuth (ㄾ)  */
    {0x11c1, 0x11b5},  /* jongseong phieuph (ㅍ):   jongseong rieul-phieuph (ㄿ)  */
    {0x11c2, 0x11b2}, /* jongseong hieuh (ㅎ):   jongseong rieul-pieup (ㄼ)  */
};

// 3_p2  는 3_p3 의 것을 쓴다
static const HangulGalmadeuliItem hangul_galmadeuli_table_3_p3[] = {
    {0x1161, 0x11c1}, /* jungseong a (ㅏ):       jongseong phieuph (ㅍ)        */
    {0x1162, 0x1164}, /* jungseong ae (ㅐ):       jungseong yae (ㅒ)        */
    {0x1165, 0x11be}, /* jungseong eo (ㅓ):      jongseong chieuch (ㅊ)      */
    {0x1166, 0x11ae}, /* jungseong e (ㅔ):       jongseong tikeut (ㄷ)        */
    {0x1167, 0x11c0}, /* jungseong yeo (ㅕ):     jongseong thikeuth (ㅌ)       */
    {0x1169, 0x11bd}, /* jungseong o (ㅗ):       jongseong cieuc (ㅈ)        */
    {0x1175, 0x11c2}, /* jungseong i (ㅣ):       jongseong hieuh (ㅎ)       */
    {0x11ae, 0x11aa}, /* jongseong tikeut (ㄷ):   jongseong kiyeok-sios (ㄳ)  */
    {0x11bd, 0x11ac}, /* jongseong cieuc (ㅈ):   jongseong nieun-cieuc (ㄵ)  */
    {0x11be, 0x11b3}, /* jongseong chieuch (ㅊ): jongseong rieul-sios (ㄽ)  */
    {0x11c0, 0x11b4}, /* jongseong thikeuth (ㅌ):   jongseong rieul-thieuth (ㄾ)  */
    {0x11c1, 0x11b5}, /* jongseong phieuph (ㅍ):   jongseong rieul-phieuph (ㄿ)  */
    {0x11c2, 0x11b2}, /* jongseong hieuh (ㅎ):   jongseong rieul-pieup (ㄼ)  */
};

// 원안에서 [ㅛ, ㅠ, ㅑ, ㅖ] 에는 터치입력식에서 추가하지만 편의를 위해 적용
static const HangulGalmadeuliItem hangul_galmadeuli_table_3_14_proposal[] = {
    {0x1161, 0x11b4},     /*ㅏ*/     /* jongseong rieul-thieuth (ㄾ)  */
    {0x1162, 0x11ac},     /*ㅐ*/     /* Jongseong nieun-cieuc (ㄵ) */
    {0x1163, 0x11ae},     /*ㅑ*/     /* Jongseong tikeut (ㄷ) */ //++
    {0x1166, 0x11b5},     /*ㅔ*/     /* Jongseong rieul-phieuph (ㄿ)*/
    {0x1167, 0x11bd},     /*ㅕ*/     /* Jongseong cieuc (ㅈ) */
    {0x1168, 0x11be},     /*ㅖ*/     /* Jongseong chieuch (ㅊ)  */ //++
    {0x1169, 0x11bf},     /*ㅗ*/     /* Jongseong khiyeok (ㅋ) */
    {0x116d, 0x11c1},     /*ㅛ*/     /* Jongseong phieuph (ㅍ)  */ //++
    {0x1172, 0x11c0},     /*ㅠ*/     /* Jongseong thikeuth (ㅌ)  */ //++
    {0x1175, 0x1164},     /*ㅣ*/     /* jungseong yae (ㅒ) */
};

#endif /* libhangul_hangulkeyboard_addon_h */
