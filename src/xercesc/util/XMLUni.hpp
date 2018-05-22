/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id: XMLUni.hpp 833045 2009-11-05 13:21:27Z borisk $
 */


// ---------------------------------------------------------------------------
//  This file contains the grunt work constants for Unicode characters and
//  common Unicode constant strings. These cannot be created normally because
//  we have to compile on systems that cannot do the L"" style prefix. So
//  they must be created as constant values for Unicode code points and the
//  strings built up as arrays of those constants.
// ---------------------------------------------------------------------------

#if !defined(XERCESC_INCLUDE_GUARD_XMLUNI_HPP)
#define XERCESC_INCLUDE_GUARD_XMLUNI_HPP

#include <xercesc/util/XercesDefs.hpp>
#include <xercesc/util/XMLUniDefs.hpp>

XERCES_CPP_NAMESPACE_BEGIN

class XMLUTIL_EXPORT XMLUni {
public:
  static constexpr XMLCh fgAnyString[] = {
    chLatin_A, chLatin_N, chLatin_Y, chNull
  };

  static constexpr XMLCh fgAttListString[] = {
    chLatin_A, chLatin_T, chLatin_T, chLatin_L, chLatin_I, chLatin_S, chLatin_T, chNull
  };

  static constexpr XMLCh fgCommentString[] = {
    chOpenAngle, chBang, chDash, chDash, chNull
  };

  static constexpr XMLCh fgCDATAString[] = {
    chLatin_C, chLatin_D, chLatin_A, chLatin_T, chLatin_A, chNull
  };

  static constexpr XMLCh fgDefaultString[] = {
    chPound, chLatin_D, chLatin_E, chLatin_F, chLatin_A, chLatin_U, chLatin_L, chLatin_T, chNull
  };

  static constexpr XMLCh fgDocTypeString[] = {
    chOpenAngle, chBang, chLatin_D, chLatin_O, chLatin_C, chLatin_T, chLatin_Y, chLatin_P, chLatin_E, chNull
  };

  static constexpr XMLCh fgEBCDICEncodingString[] = {
    // Just plain 'EBCDIC'
    chLatin_E, chLatin_B, chLatin_C, chLatin_D, chLatin_I, chLatin_C, chNull
  };

  static constexpr XMLCh fgElemString[] = {
    chLatin_E, chLatin_L, chLatin_E, chLatin_M, chLatin_E, chLatin_N, chLatin_T, chNull
  };

  static constexpr XMLCh fgEmptyString[] = {
    chLatin_E, chLatin_M, chLatin_P, chLatin_T, chLatin_Y, chNull
  };

  static constexpr XMLCh fgEncodingString[] = {
    chLatin_e, chLatin_n, chLatin_c, chLatin_o, chLatin_d, chLatin_i, chLatin_n, chLatin_g, chNull
  };

  static constexpr XMLCh fgEntitString[] = {
    chLatin_E, chLatin_N, chLatin_T, chLatin_I, chLatin_T, chNull
  };

  static constexpr XMLCh fgEntityString[] = {
    chLatin_E, chLatin_N, chLatin_T, chLatin_I, chLatin_T, chLatin_Y, chNull
  };

  static constexpr XMLCh fgEntitiesString[] = {
    chLatin_E, chLatin_N, chLatin_T, chLatin_I, chLatin_T, chLatin_I, chLatin_E, chLatin_S, chNull
  };

  static constexpr XMLCh fgEnumerationString[] = {
    chLatin_E, chLatin_N, chLatin_U, chLatin_M, chLatin_E, chLatin_R, chLatin_A, chLatin_T, chLatin_I, chLatin_O, chLatin_N, chNull
  };

  static constexpr XMLCh fgExceptDomain[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c,
    chLatin_h, chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g,
    chForwardSlash, chLatin_x, chLatin_m, chLatin_l, chForwardSlash,
    chLatin_m, chLatin_e, chLatin_s, chLatin_s, chLatin_a, chLatin_g,
    chLatin_e, chLatin_s, chForwardSlash, chLatin_X, chLatin_M, chLatin_L,
    chDigit_4, chLatin_C, chLatin_E, chLatin_r, chLatin_r, chLatin_o,
    chLatin_r, chLatin_s, chNull
  };

  static constexpr XMLCh fgFixedString[] = {
    chPound, chLatin_F, chLatin_I, chLatin_X, chLatin_E, chLatin_D, chNull
  };

  static constexpr XMLCh fgIBM037EncodingString[] = {
    chLatin_E, chLatin_B, chLatin_C, chLatin_D, chLatin_I, chLatin_C, chDash, chLatin_C, chLatin_P, chDash, chLatin_U, chLatin_S, chNull
  };

  static constexpr XMLCh fgIBM037EncodingString2[] = {
    chLatin_I, chLatin_B, chLatin_M, chDigit_0, chDigit_3, chDigit_7, chNull
  };

  //hhe
  static constexpr XMLCh fgIBM1047EncodingString[] = {
    chLatin_I, chLatin_B, chLatin_M, chDigit_1, chDigit_0, chDigit_4, chDigit_7, chNull
  };

  static constexpr XMLCh fgIBM1047EncodingString2[] = {
    chLatin_I, chLatin_B, chLatin_M, chDash, chDigit_1, chDigit_0, chDigit_4, chDigit_7, chNull
  };

  static constexpr XMLCh fgIBM1140EncodingString[] = {
    chLatin_I, chLatin_B, chLatin_M, chDigit_1, chDigit_1, chDigit_4, chDigit_0, chNull
  };

  static constexpr XMLCh fgIBM1140EncodingString2[] = {
    chLatin_I, chLatin_B, chLatin_M, chDigit_0, chDigit_1, chDigit_1, chDigit_4, chDigit_0, chNull
  };

  static constexpr XMLCh fgIBM1140EncodingString3[] = {
    chLatin_C, chLatin_C, chLatin_S, chLatin_I, chLatin_D, chDigit_0, chDigit_1, chDigit_1, chDigit_4, chDigit_0, chNull
  };

  static constexpr XMLCh fgIBM1140EncodingString4[] = {
    chLatin_C, chLatin_P, chDigit_0, chDigit_1, chDigit_1, chDigit_4, chDigit_0, chNull
  };

  static constexpr XMLCh fgIESString[] = {
    chLatin_I, chLatin_E, chLatin_S, chNull
  };

  static constexpr XMLCh fgIDString[] = {
    chLatin_I, chLatin_D, chNull
  };

  static constexpr XMLCh fgIDRefString[] = {
    chLatin_I, chLatin_D, chLatin_R, chLatin_E, chLatin_F, chNull
  };

  static constexpr XMLCh fgIDRefsString[] = {
    chLatin_I, chLatin_D, chLatin_R, chLatin_E, chLatin_F, chLatin_S, chNull
  };

  static constexpr XMLCh fgImpliedString[] = {
    chPound, chLatin_I, chLatin_M, chLatin_P, chLatin_L, chLatin_I, chLatin_E, chLatin_D, chNull
  };

  static constexpr XMLCh fgIgnoreString[] = {
    chLatin_I, chLatin_G, chLatin_N, chLatin_O, chLatin_R, chLatin_E, chNull
  };

  static constexpr XMLCh fgIncludeString[] = {
    chLatin_I, chLatin_N, chLatin_C, chLatin_L, chLatin_U, chLatin_D, chLatin_E, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString[] = {
    chLatin_I, chLatin_S, chLatin_O, chDigit_8, chDigit_8, chDigit_5, chDigit_9, chDash, chDigit_1, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString2[] = {
    chLatin_I, chLatin_S, chLatin_O, chDash, chDigit_8, chDigit_8, chDigit_5, chDigit_9, chDash, chDigit_1, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString3[] = {
    chLatin_I, chLatin_S, chLatin_O, chUnderscore, chDigit_8, chDigit_8, chDigit_5, chDigit_9, chDash, chDigit_1, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString4[] = {
    chLatin_I, chLatin_B, chLatin_M, chDash, chDigit_8, chDigit_1, chDigit_9, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString5[] = {
    chLatin_I, chLatin_B, chLatin_M, chDigit_8, chDigit_1, chDigit_9, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString6[] = {
    chLatin_L, chLatin_A, chLatin_T, chLatin_I, chLatin_N, chDigit_1, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString7[] = {
    chLatin_L, chLatin_A, chLatin_T, chLatin_I, chLatin_N, chDash, chDigit_1, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString8[] = {
    chLatin_L, chLatin_A, chLatin_T, chLatin_I, chLatin_N, chUnderscore, chDigit_1, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString9[] = {
    chLatin_C, chLatin_P, chDigit_8, chDigit_1, chDigit_9, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString10[] = {
    chLatin_C, chLatin_S, chLatin_I, chLatin_S, chLatin_O, chLatin_L, chLatin_A, chLatin_T, chLatin_I, chLatin_N, chDigit_1, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString11[] = {
    chLatin_I, chLatin_S, chLatin_O, chDash, chLatin_I, chLatin_R, chDash, chDigit_1, chDigit_0, chDigit_0, chNull
  };

  static constexpr XMLCh fgISO88591EncodingString12[] = {
    chLatin_L, chDigit_1, chNull
  };

  static constexpr XMLCh fgLocalHostString[] = {
    chLatin_l, chLatin_o, chLatin_c, chLatin_a, chLatin_l, chLatin_h, chLatin_o, chLatin_s, chLatin_t, chNull
  };

  static constexpr XMLCh fgNoString[] = {
    chLatin_n, chLatin_o, chNull
  };

  static constexpr XMLCh fgNotationString[] = {
    chLatin_N, chLatin_O, chLatin_T, chLatin_A, chLatin_T, chLatin_I, chLatin_O, chLatin_N, chNull
  };

  static constexpr XMLCh fgNDATAString[] = {
    chLatin_N, chLatin_D, chLatin_A, chLatin_T, chLatin_A, chNull
  };

  static constexpr XMLCh fgNmTokenString[] = {
    chLatin_N, chLatin_M, chLatin_T, chLatin_O, chLatin_K, chLatin_E, chLatin_N, chNull
  };

  static constexpr XMLCh fgNmTokensString[] = {
    chLatin_N, chLatin_M, chLatin_T, chLatin_O, chLatin_K, chLatin_E, chLatin_N, chLatin_S, chNull
  };

  static constexpr XMLCh fgPCDATAString[] = {
    chPound, chLatin_P, chLatin_C, chLatin_D, chLatin_A, chLatin_T, chLatin_A, chNull
  };

  static constexpr XMLCh fgPIString[] = {
    chOpenAngle, chQuestion, chNull
  };

  static constexpr XMLCh fgPubIDString[] = {
    chLatin_P, chLatin_U, chLatin_B, chLatin_L, chLatin_I, chLatin_C, chNull
  };

  static constexpr XMLCh fgRefString[] = {
    chLatin_R, chLatin_E, chLatin_F, chNull
  };

  static constexpr XMLCh fgRequiredString[] = {
    chPound, chLatin_R, chLatin_E, chLatin_Q, chLatin_U, chLatin_I, chLatin_R, chLatin_E, chLatin_D, chNull
  };

  static constexpr XMLCh fgStandaloneString[] = {
    chLatin_s, chLatin_t, chLatin_a, chLatin_n, chLatin_d, chLatin_a, chLatin_l, chLatin_o, chLatin_n, chLatin_e, chNull
  };

  static constexpr XMLCh fgVersion1_0[] = {
    chDigit_1, chPeriod, chDigit_0, chNull
  };

  static constexpr XMLCh fgVersion1_1[] = {
    chDigit_1, chPeriod, chDigit_1, chNull
  };

  static constexpr XMLCh fgSysIDString[] = {
    chLatin_S, chLatin_Y, chLatin_S, chLatin_T, chLatin_E, chLatin_M, chNull
  };

  static constexpr XMLCh fgUnknownURIName[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c,
    chLatin_h, chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g,
    chForwardSlash, chLatin_x, chLatin_m, chLatin_l, chForwardSlash,
    chLatin_U, chLatin_n, chLatin_k, chLatin_n, chLatin_o, chLatin_w, chLatin_n,
    chLatin_N, chLatin_S, chNull
  };

  static constexpr XMLCh fgUCS4EncodingString[] = {
    chLatin_U, chLatin_C, chLatin_S, chDigit_4, chNull
  };

  static constexpr XMLCh fgUCS4EncodingString2[] = {
    chLatin_U, chLatin_C, chLatin_S, chDash, chDigit_4, chNull
  };

  static constexpr XMLCh fgUCS4EncodingString3[] = {
    chLatin_U, chLatin_C, chLatin_S, chUnderscore, chDigit_4, chNull
  };

  static constexpr XMLCh fgUCS4EncodingString4[] = {
    chLatin_U, chLatin_T, chLatin_F, chDash, chDigit_3, chDigit_2, chNull
  };

  static constexpr XMLCh fgUCS4EncodingString5[] = {
    chLatin_I, chLatin_S, chLatin_O, chDash, chDigit_1, chDigit_0, chDigit_6, chDigit_4, chDigit_6,
    chDash, chLatin_U, chLatin_C, chLatin_S, chDash, chDigit_4, chNull
  };

  static constexpr XMLCh fgUCS4BEncodingString[] = {
    chLatin_U, chLatin_C, chLatin_S, chDash, chDigit_4, chSpace, chOpenParen, chLatin_B, chLatin_E, chCloseParen, chNull
  };

  static constexpr XMLCh fgUCS4BEncodingString2[] = {
    chLatin_U, chLatin_C, chLatin_S, chDash, chDigit_4, chLatin_B, chLatin_E, chNull
  };

  static constexpr XMLCh fgUCS4LEncodingString[] = {
    chLatin_U, chLatin_C, chLatin_S, chDash, chDigit_4, chSpace, chOpenParen, chLatin_L, chLatin_E, chCloseParen, chNull
  };

  static constexpr XMLCh fgUCS4LEncodingString2[] = {
    chLatin_U, chLatin_C, chLatin_S, chDash, chDigit_4, chLatin_L, chLatin_E, chNull
  };

  static constexpr XMLCh fgUSASCIIEncodingString[] = {
    chLatin_U, chLatin_S, chDash, chLatin_A, chLatin_S, chLatin_C, chLatin_I, chLatin_I, chNull
  };

  static constexpr XMLCh fgUSASCIIEncodingString2[] = {
    chLatin_U, chLatin_S, chLatin_A, chLatin_S, chLatin_C, chLatin_I, chLatin_I, chNull
  };

  static constexpr XMLCh fgUSASCIIEncodingString3[] = {
    chLatin_A, chLatin_S, chLatin_C, chLatin_I, chLatin_I, chNull
  };

  static constexpr XMLCh fgUSASCIIEncodingString4[] = {
    chLatin_U, chLatin_S, chUnderscore, chLatin_A, chLatin_S, chLatin_C, chLatin_I, chLatin_I, chNull
  };

  static constexpr XMLCh fgUTF8EncodingString[] = {
    chLatin_U, chLatin_T, chLatin_F, chDash, chDigit_8, chNull
  };

  static constexpr XMLCh fgUTF8EncodingString2[] = {
    chLatin_U, chLatin_T, chLatin_F, chDigit_8, chNull
  };

  static constexpr XMLCh fgUTF16EncodingString[] = {
    chLatin_U, chLatin_T, chLatin_F, chDash, chDigit_1, chDigit_6, chNull
  };

  static constexpr XMLCh fgUTF16EncodingString2[] = {
    chLatin_U, chLatin_C, chLatin_S, chDigit_2, chNull
  };

  static constexpr XMLCh fgUTF16EncodingString3[] = {
    chLatin_I, chLatin_B, chLatin_M, chDigit_1, chDigit_2, chDigit_0, chDigit_0, chNull
  };

  static constexpr XMLCh fgUTF16EncodingString4[] = {
    chLatin_I, chLatin_B, chLatin_M, chDash, chDigit_1, chDigit_2, chDigit_0, chDigit_0, chNull
  };

  static constexpr XMLCh fgUTF16EncodingString5[] = {
    chLatin_U, chLatin_T, chLatin_F, chDigit_1, chDigit_6, chNull
  };

  static constexpr XMLCh fgUTF16EncodingString6[] = {
    chLatin_U, chLatin_C, chLatin_S, chDash, chDigit_2, chNull
  };

  static constexpr XMLCh fgUTF16EncodingString7[] = {
    chLatin_I, chLatin_S, chLatin_O, chDash, chDigit_1, chDigit_0, chDigit_6, chDigit_4
    , chDigit_6, chDash, chLatin_U, chLatin_C, chLatin_S, chDash, chDigit_2, chNull
  };

  static constexpr XMLCh fgUTF16BEncodingString[] = {
    chLatin_U, chLatin_T, chLatin_F, chDash, chDigit_1, chDigit_6, chSpace, chOpenParen, chLatin_B, chLatin_E, chCloseParen, chNull
  };

  static constexpr XMLCh fgUTF16BEncodingString2[] = {
    chLatin_U, chLatin_T, chLatin_F, chDash, chDigit_1, chDigit_6, chLatin_B, chLatin_E, chNull
  };

  static constexpr XMLCh fgUTF16LEncodingString[] = {
    chLatin_U, chLatin_T, chLatin_F, chDash, chDigit_1, chDigit_6, chSpace, chOpenParen, chLatin_L, chLatin_E, chCloseParen, chNull
  };

  static constexpr XMLCh fgUTF16LEncodingString2[] = {
    chLatin_U, chLatin_T, chLatin_F, chDash, chDigit_1, chDigit_6, chLatin_L, chLatin_E, chNull
  };

  static constexpr XMLCh fgVersionString[] = {
    chLatin_v, chLatin_e, chLatin_r, chLatin_s, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgValidityDomain[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_m, chLatin_e,
    chLatin_s, chLatin_s, chLatin_a, chLatin_g, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_X, chLatin_M, chLatin_L, chLatin_V, chLatin_a,
    chLatin_l, chLatin_i, chLatin_d, chLatin_i, chLatin_t, chLatin_y, chNull
  };

  static constexpr XMLCh fgWin1252EncodingString[] = {
    chLatin_W, chLatin_I, chLatin_N, chLatin_D, chLatin_O, chLatin_W,
    chLatin_S, chDash, chDigit_1, chDigit_2, chDigit_5, chDigit_2, chNull
  };

  static constexpr XMLCh fgXMLChEncodingString[] = {
    chLatin_X, chLatin_E, chLatin_R, chLatin_C, chLatin_E, chLatin_S,
    chDash, chLatin_X, chLatin_M, chLatin_L, chLatin_C, chLatin_H, chNull
  };

  static constexpr XMLCh fgXMLString[] = {
    chLatin_x, chLatin_m, chLatin_l, chNull
  };

  //xml{S}
  static constexpr XMLCh fgXMLStringSpace[] = {
    chLatin_x, chLatin_m, chLatin_l, chSpace, chNull
  };

  static constexpr XMLCh fgXMLStringHTab[] = {
    chLatin_x, chLatin_m, chLatin_l, chHTab, chNull
  };

  static constexpr XMLCh fgXMLStringCR[] = {
    chLatin_x, chLatin_m, chLatin_l, chCR, chNull
  };

  static constexpr XMLCh fgXMLStringLF[] = {
    chLatin_x, chLatin_m, chLatin_l, chLF, chNull
  };

  //XML{S}
  static constexpr XMLCh fgXMLStringSpaceU[] = {
    chLatin_X, chLatin_M, chLatin_L, chSpace, chNull
  };

  static constexpr XMLCh fgXMLStringHTabU[] = {
    chLatin_X, chLatin_M, chLatin_L, chHTab, chNull
  };

  static constexpr XMLCh fgXMLStringCRU[] = {
    chLatin_X, chLatin_M, chLatin_L, chCR, chNull
  };

  static constexpr XMLCh fgXMLStringLFU[] = {
    chLatin_X, chLatin_M, chLatin_L, chLF, chNull
  };

  //<?xml{S}
  static constexpr XMLCh fgXMLDeclString[] = {
    chOpenAngle, chQuestion, chLatin_x, chLatin_m, chLatin_l, chNull
  };

  static constexpr XMLCh fgXMLDeclStringSpace[] = {
    chOpenAngle, chQuestion, chLatin_x, chLatin_m, chLatin_l, chSpace, chNull
  };

  static constexpr XMLCh fgXMLDeclStringHTab[] = {
    chOpenAngle, chQuestion, chLatin_x, chLatin_m, chLatin_l, chHTab, chNull
  };

  static constexpr XMLCh fgXMLDeclStringLF[] = {
    chOpenAngle, chQuestion, chLatin_x, chLatin_m, chLatin_l, chLF, chNull
  };

  static constexpr XMLCh fgXMLDeclStringCR[] = {
    chOpenAngle, chQuestion, chLatin_x, chLatin_m, chLatin_l, chCR, chNull
  };

  //<?XML{S}
  static constexpr XMLCh fgXMLDeclStringSpaceU[] = {
    chOpenAngle, chQuestion, chLatin_X, chLatin_M, chLatin_L, chSpace, chNull
  };

  static constexpr XMLCh fgXMLDeclStringHTabU[] = {
    chOpenAngle, chQuestion, chLatin_X, chLatin_M, chLatin_L, chHTab, chNull
  };

  static constexpr XMLCh fgXMLDeclStringLFU[] = {
    chOpenAngle, chQuestion, chLatin_X, chLatin_M, chLatin_L, chLF, chNull
  };

  static constexpr XMLCh fgXMLDeclStringCRU[] = {
    chOpenAngle, chQuestion, chLatin_X, chLatin_M, chLatin_L, chCR, chNull
  };

  static constexpr XMLCh fgXMLNSString[] = {
    chLatin_x, chLatin_m, chLatin_l, chLatin_n, chLatin_s, chNull
  };

  static constexpr XMLCh fgXMLNSColonString[] = {
    chLatin_x, chLatin_m, chLatin_l, chLatin_n, chLatin_s, chColon, chNull
  };

  static constexpr XMLCh fgXMLNSURIName[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_w, chLatin_w, chLatin_w, chPeriod, chLatin_w,
    chDigit_3, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chDigit_2, chDigit_0, chDigit_0, chDigit_0, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chLatin_n, chLatin_s, chForwardSlash,
    chNull
  };

  static constexpr XMLCh fgXMLErrDomain[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_m, chLatin_e,
    chLatin_s, chLatin_s, chLatin_a, chLatin_g, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_X, chLatin_M, chLatin_L, chLatin_E, chLatin_r,
    chLatin_r, chLatin_o, chLatin_r, chLatin_s, chNull
  };

  static constexpr XMLCh fgXMLURIName[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_w, chLatin_w, chLatin_w, chPeriod, chLatin_w,
    chDigit_3, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_X, chLatin_M, chLatin_L, chForwardSlash, chDigit_1, chDigit_9,
    chDigit_9, chDigit_8, chForwardSlash, chLatin_n, chLatin_a, chLatin_m,
    chLatin_e, chLatin_s, chLatin_p, chLatin_a, chLatin_c, chLatin_e, chNull
  };

  static constexpr XMLCh fgInfosetURIName[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_w, chLatin_w, chLatin_w, chPeriod, chLatin_w,
    chDigit_3, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_T, chLatin_R, chForwardSlash, chLatin_R, chLatin_E, chLatin_C,
    chDash, chLatin_x, chLatin_m, chLatin_l, chNull
  };

  static constexpr XMLCh fgYesString[] = {
    chLatin_y, chLatin_e, chLatin_s, chNull
  };

  static constexpr XMLCh fgZeroLenString[] = { chNull };

  static constexpr XMLCh fgDTDEntityString[] = {
    chOpenSquare, chLatin_d, chLatin_t, chLatin_d, chCloseSquare, chNull
  };

  static constexpr XMLCh fgAmp[] = {
    chLatin_a, chLatin_m, chLatin_p, chNull
  };

  static constexpr XMLCh fgLT[] = {
    chLatin_l, chLatin_t, chNull
  };

  static constexpr XMLCh fgGT[] = {
    chLatin_g, chLatin_t, chNull
  };

  static constexpr XMLCh fgQuot[] = {
    chLatin_q, chLatin_u, chLatin_o, chLatin_t, chNull
  };

  static constexpr XMLCh fgApos[] = {
    chLatin_a, chLatin_p, chLatin_o, chLatin_s, chNull
  };

  static constexpr XMLCh fgWFXMLScanner[] = {
    chLatin_W, chLatin_F, chLatin_X, chLatin_M, chLatin_L, chLatin_S,
    chLatin_c, chLatin_a, chLatin_n, chLatin_n, chLatin_e, chLatin_r, chNull
  };

  static constexpr XMLCh fgIGXMLScanner[] = {
    chLatin_I, chLatin_G, chLatin_X, chLatin_M, chLatin_L, chLatin_S,
    chLatin_c, chLatin_a, chLatin_n, chLatin_n, chLatin_e, chLatin_r, chNull
  };

  static constexpr XMLCh fgSGXMLScanner[] = {
    chLatin_S, chLatin_G, chLatin_X, chLatin_M, chLatin_L, chLatin_S,
    chLatin_c, chLatin_a, chLatin_n, chLatin_n, chLatin_e, chLatin_r, chNull
  };

  static constexpr XMLCh fgDGXMLScanner[] = {
    chLatin_D, chLatin_G, chLatin_X, chLatin_M, chLatin_L, chLatin_S,
    chLatin_c, chLatin_a, chLatin_n, chLatin_n, chLatin_e, chLatin_r, chNull
  };

  static constexpr XMLCh fgXSAXMLScanner[] = {
    chLatin_X, chLatin_S, chLatin_A,
    chLatin_X, chLatin_M, chLatin_L, chLatin_S,
    chLatin_c, chLatin_a, chLatin_n, chLatin_n, chLatin_e, chLatin_r, chNull
  };

  static constexpr XMLCh fgCDataStart[] = {
    chOpenAngle, chBang, chOpenSquare, chLatin_C, chLatin_D,
    chLatin_A, chLatin_T, chLatin_A, chOpenSquare, chNull
  };

  static constexpr XMLCh fgCDataEnd[] = {
    chCloseSquare, chCloseSquare, chCloseAngle, chNull
  };

  //Exception strings
  static constexpr XMLCh fgArrayIndexOutOfBoundsException_Name[] = {
    chLatin_A, chLatin_r, chLatin_r, chLatin_a, chLatin_y, chLatin_I,
    chLatin_n, chLatin_d, chLatin_e, chLatin_x, chLatin_O, chLatin_u,
    chLatin_t, chLatin_o, chLatin_f, chLatin_B, chLatin_o, chLatin_u,
    chLatin_n, chLatin_d, chLatin_s, chLatin_E, chLatin_x, chLatin_c,
    chLatin_e, chLatin_p, chLatin_t, chLatin_i, chLatin_o, chLatin_n,
    chNull
  };

  static constexpr XMLCh fgEmptyStackException_Name[] = {
    chLatin_E, chLatin_m, chLatin_p, chLatin_t, chLatin_y, chLatin_S,
    chLatin_t, chLatin_a, chLatin_c, chLatin_k, chLatin_E, chLatin_x,
    chLatin_c, chLatin_e, chLatin_p, chLatin_t, chLatin_i, chLatin_o,
    chLatin_n, chNull
  };

  static constexpr XMLCh fgIllegalArgumentException_Name[] = {
    chLatin_I, chLatin_l, chLatin_l, chLatin_e, chLatin_g, chLatin_a,
    chLatin_l, chLatin_A, chLatin_r, chLatin_g, chLatin_u, chLatin_m,
    chLatin_e, chLatin_n, chLatin_t, chLatin_E, chLatin_x, chLatin_c,
    chLatin_e, chLatin_p, chLatin_t, chLatin_i, chLatin_o, chLatin_n,
    chNull
  };

  static constexpr XMLCh fgInvalidCastException_Name[] = {
    chLatin_I, chLatin_n, chLatin_v, chLatin_a, chLatin_l, chLatin_i,
    chLatin_d, chLatin_C, chLatin_a, chLatin_s, chLatin_t, chLatin_E,
    chLatin_x, chLatin_c, chLatin_e, chLatin_p, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgIOException_Name[] = {
    chLatin_I, chLatin_O, chLatin_E, chLatin_x, chLatin_c, chLatin_e,
    chLatin_p, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgNoSuchElementException_Name[] = {
    chLatin_N, chLatin_o, chLatin_S, chLatin_u, chLatin_c, chLatin_h,
    chLatin_E, chLatin_l, chLatin_e, chLatin_m, chLatin_e, chLatin_n,
    chLatin_t, chLatin_E, chLatin_x, chLatin_c, chLatin_e, chLatin_p,
    chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgNullPointerException_Name[] = {
    chLatin_N, chLatin_u, chLatin_l, chLatin_l, chLatin_P, chLatin_o,
    chLatin_i, chLatin_n, chLatin_t, chLatin_e, chLatin_r, chLatin_E,
    chLatin_x, chLatin_c, chLatin_e, chLatin_p, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgXMLPlatformUtilsException_Name[] = {
    chLatin_X, chLatin_M, chLatin_L, chLatin_P, chLatin_l, chLatin_a,
    chLatin_t, chLatin_f, chLatin_o, chLatin_r, chLatin_m, chLatin_E,
    chLatin_x, chLatin_c, chLatin_e, chLatin_p, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgRuntimeException_Name[] = {
    chLatin_R, chLatin_u, chLatin_n, chLatin_t, chLatin_i,
    chLatin_m, chLatin_e, chLatin_E, chLatin_x, chLatin_c,
    chLatin_e, chLatin_p, chLatin_t, chLatin_i, chLatin_o,
    chLatin_n, chNull
  };

  static constexpr XMLCh fgTranscodingException_Name[] = {
    chLatin_T, chLatin_r, chLatin_a, chLatin_n, chLatin_s, chLatin_c,
    chLatin_o, chLatin_d, chLatin_i, chLatin_n, chLatin_g, chLatin_E,
    chLatin_x, chLatin_c, chLatin_e, chLatin_p, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgUnexpectedEOFException_Name[] = {
    chLatin_U, chLatin_n, chLatin_e, chLatin_x, chLatin_p, chLatin_e,
    chLatin_c, chLatin_t, chLatin_e, chLatin_d, chLatin_E, chLatin_O,
    chLatin_F, chLatin_E, chLatin_x, chLatin_c, chLatin_e, chLatin_p,
    chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgUnsupportedEncodingException_Name[] = {
    chLatin_U, chLatin_n, chLatin_s, chLatin_u, chLatin_p, chLatin_p,
    chLatin_o, chLatin_r, chLatin_t, chLatin_e, chLatin_d, chLatin_E,
    chLatin_n, chLatin_c, chLatin_o, chLatin_d, chLatin_i, chLatin_n,
    chLatin_g, chLatin_E, chLatin_x, chLatin_c, chLatin_e, chLatin_p,
    chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgUTFDataFormatException_Name[] = {
    chLatin_U, chLatin_T, chLatin_F, chLatin_D, chLatin_a, chLatin_t,
    chLatin_a, chLatin_F, chLatin_o, chLatin_r, chLatin_m, chLatin_a,
    chLatin_t, chLatin_E, chLatin_x, chLatin_c, chLatin_e, chLatin_p,
    chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };


  static constexpr XMLCh fgNetAccessorException_Name[] = {
    chLatin_N, chLatin_e, chLatin_t, chLatin_A, chLatin_c, chLatin_c,
    chLatin_e, chLatin_s, chLatin_s, chLatin_o, chLatin_r, chLatin_E,
    chLatin_x, chLatin_c, chLatin_e, chLatin_p, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chNull
  };


  static constexpr XMLCh fgMalformedURLException_Name[] = {
    chLatin_M, chLatin_a, chLatin_l, chLatin_f, chLatin_o, chLatin_r,
    chLatin_m, chLatin_e, chLatin_d, chLatin_U, chLatin_R, chLatin_L,
    chLatin_E, chLatin_x, chLatin_c, chLatin_e, chLatin_p, chLatin_t,
    chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgNumberFormatException_Name[] = {
    chLatin_N, chLatin_u, chLatin_m, chLatin_b, chLatin_e, chLatin_r,
    chLatin_F, chLatin_o, chLatin_r, chLatin_m, chLatin_a, chLatin_t,
    chLatin_E, chLatin_x, chLatin_c, chLatin_e, chLatin_p, chLatin_t,
    chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgParseException_Name[] = {
    chLatin_P, chLatin_a, chLatin_r, chLatin_s, chLatin_e,
    chLatin_E, chLatin_x, chLatin_c, chLatin_e, chLatin_p, chLatin_t,
    chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgInvalidDatatypeFacetException_Name[] = {
    chLatin_I, chLatin_n, chLatin_v, chLatin_a, chLatin_l, chLatin_i,
    chLatin_d, chLatin_D, chLatin_a, chLatin_t, chLatin_a, chLatin_t,
    chLatin_y, chLatin_p, chLatin_e, chLatin_F, chLatin_a, chLatin_c,
    chLatin_e, chLatin_t, chLatin_E, chLatin_x, chLatin_c, chLatin_e,
    chLatin_p, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgInvalidDatatypeValueException_Name[] = {
    chLatin_I, chLatin_n, chLatin_v, chLatin_a, chLatin_l, chLatin_i,
    chLatin_d, chLatin_D, chLatin_a, chLatin_t, chLatin_a, chLatin_t,
    chLatin_y, chLatin_p, chLatin_e, chLatin_V, chLatin_a, chLatin_l,
    chLatin_u, chLatin_e, chLatin_E, chLatin_x, chLatin_c, chLatin_e,
    chLatin_p, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgSchemaDateTimeException_Name[] = {
    chLatin_S, chLatin_c, chLatin_h, chLatin_e, chLatin_m, chLatin_a,
    chLatin_D, chLatin_a, chLatin_t, chLatin_e,
    chLatin_T, chLatin_i, chLatin_m, chLatin_e,
    chLatin_E, chLatin_x, chLatin_c, chLatin_e,
    chLatin_p, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgXPathException_Name[] = {
    chLatin_X, chLatin_P, chLatin_a, chLatin_t, chLatin_h, chLatin_E,
    chLatin_x, chLatin_c, chLatin_e, chLatin_p, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgXSerializationException_Name[] = {
    chLatin_X, chLatin_S, chLatin_e, chLatin_r, chLatin_i, chLatin_a,
    chLatin_l, chLatin_i, chLatin_z, chLatin_a, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chLatin_E, chLatin_x, chLatin_c, chLatin_e,
    chLatin_p, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgXMLXIncludeException_Name[] = {
    chLatin_X, chLatin_M, chLatin_L, chLatin_X, chLatin_I, chLatin_n,
    chLatin_c, chLatin_l, chLatin_u, chLatin_d, chLatin_e, chLatin_E,
    chLatin_x, chLatin_c, chLatin_e, chLatin_p, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgNegINFString[] = {
    chDash, chLatin_I, chLatin_N, chLatin_F, chNull
  };

  static constexpr XMLCh fgNegZeroString[] = {
    chDash, chDigit_0, chNull
  };

  static constexpr XMLCh fgPosZeroString[] = {
    chDigit_0, chNull
  };

  static constexpr XMLCh fgPosINFString[] = {
    chLatin_I, chLatin_N, chLatin_F, chNull
  };

  static constexpr XMLCh fgNaNString[] = {
    chLatin_N, chLatin_a, chLatin_N, chNull
  };

  static constexpr XMLCh fgEString[] = {
    chLatin_E, chNull
  };

  static constexpr XMLCh fgZeroString[] = {
    chDigit_0, chNull
  };

  static constexpr XMLCh fgNullString[] = {
    chLatin_n, chLatin_u, chLatin_l, chLatin_l, chNull
  };

  // SAX2 Core: http://xml.org/sax/features/validation
  static constexpr XMLCh fgSAX2CoreValidation[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_x, chLatin_m, chLatin_l, chPeriod, chLatin_o,
    chLatin_r, chLatin_g, chForwardSlash, chLatin_s, chLatin_a, chLatin_x,
    chForwardSlash, chLatin_f, chLatin_e, chLatin_a, chLatin_t, chLatin_u,
    chLatin_r, chLatin_e, chLatin_s, chForwardSlash, chLatin_v, chLatin_a,
    chLatin_l, chLatin_i, chLatin_d, chLatin_a, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chNull
  };

  // SAX2 Core: http://xml.org/sax/features/namespaces
  static constexpr XMLCh fgSAX2CoreNameSpaces[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_x, chLatin_m, chLatin_l, chPeriod, chLatin_o,
    chLatin_r, chLatin_g, chForwardSlash, chLatin_s, chLatin_a, chLatin_x,
    chForwardSlash, chLatin_f, chLatin_e, chLatin_a, chLatin_t, chLatin_u,
    chLatin_r, chLatin_e, chLatin_s, chForwardSlash, chLatin_n, chLatin_a,
    chLatin_m, chLatin_e, chLatin_s, chLatin_p, chLatin_a, chLatin_c,
    chLatin_e, chLatin_s, chNull
  };

  //SAX2 Core: http://xml.org/sax/features/namespace-prefixes
  static constexpr XMLCh fgSAX2CoreNameSpacePrefixes[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_x, chLatin_m, chLatin_l, chPeriod, chLatin_o,
    chLatin_r, chLatin_g, chForwardSlash, chLatin_s, chLatin_a, chLatin_x,
    chForwardSlash, chLatin_f, chLatin_e, chLatin_a, chLatin_t, chLatin_u,
    chLatin_r, chLatin_e, chLatin_s, chForwardSlash, chLatin_n, chLatin_a,
    chLatin_m, chLatin_e, chLatin_s, chLatin_p, chLatin_a, chLatin_c, chLatin_e,
    chDash, chLatin_p, chLatin_r, chLatin_e, chLatin_f, chLatin_i, chLatin_x,
    chLatin_e, chLatin_s, chNull
  };

  //Xerces: http://apache.org/xml/features/validation/dynamic
  static constexpr XMLCh fgXercesDynamic[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash , chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chForwardSlash,
    chLatin_d, chLatin_y, chLatin_n, chLatin_a, chLatin_m, chLatin_i, chLatin_c, chNull
  };

  //Xerces: http://apache.org/xml/features/validation/schema
  static constexpr XMLCh fgXercesSchema[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chForwardSlash,
    chLatin_s, chLatin_c, chLatin_h, chLatin_e, chLatin_m, chLatin_a, chNull
  };

  //Xerces: http://apache.org/xml/features/validation/schema-full-checking
  static constexpr XMLCh fgXercesSchemaFullChecking[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chForwardSlash,
    chLatin_s, chLatin_c, chLatin_h, chLatin_e, chLatin_m, chLatin_a, chDash,
    chLatin_f, chLatin_u, chLatin_l, chLatin_l, chDash, chLatin_c, chLatin_h,
    chLatin_e, chLatin_c, chLatin_k, chLatin_i, chLatin_n, chLatin_g, chNull
  };

  //Xerces: http://apache.org/xml/features/validating/load-schema
  static constexpr XMLCh fgXercesLoadSchema[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash,
    chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_n, chLatin_g, chForwardSlash,
    chLatin_l, chLatin_o, chLatin_a, chLatin_d, chDash,
    chLatin_s, chLatin_c, chLatin_h, chLatin_e, chLatin_m, chLatin_a, chNull
  };

  //Xerces: http://apache.org/xml/features/validation/identity-static constexprraint-checking
  static constexpr XMLCh fgXercesIdentityConstraintChecking[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chForwardSlash,
    chLatin_i, chLatin_d, chLatin_e, chLatin_n, chLatin_t, chLatin_i,
    chLatin_t, chLatin_y, chDash   , chLatin_c, chLatin_o, chLatin_n, chLatin_s,
    chLatin_t, chLatin_r, chLatin_a, chLatin_i, chLatin_n, chLatin_t,
    chDash, chLatin_c, chLatin_h, chLatin_e, chLatin_c, chLatin_k, chLatin_i,
    chLatin_n, chLatin_g, chNull
  };

  //Xerces: http://apache.org/xml/features/nonvalidating/load-external-dtd
  static constexpr XMLCh fgXercesLoadExternalDTD[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_n, chLatin_o, chLatin_n,
    chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_n, chLatin_g, chForwardSlash,
    chLatin_l, chLatin_o, chLatin_a, chLatin_d, chDash,
    chLatin_e, chLatin_x, chLatin_t, chLatin_e, chLatin_r, chLatin_n, chLatin_a, chLatin_l, chDash,
    chLatin_d, chLatin_t, chLatin_d, chNull
  };

  //Xerces: http://apache.org/xml/features/continue-after-fatal-error
  static constexpr XMLCh fgXercesContinueAfterFatalError[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_c, chLatin_o, chLatin_n,  chLatin_t, chLatin_i, chLatin_n, chLatin_u, chLatin_e, chDash,
    chLatin_a, chLatin_f, chLatin_t, chLatin_e, chLatin_r, chDash,
    chLatin_f, chLatin_a, chLatin_t, chLatin_a, chLatin_l, chDash,
    chLatin_e, chLatin_r, chLatin_r, chLatin_o, chLatin_r, chNull
  };

  //Xerces: http://apache.org/xml/features/validation-error-as-fatal
  static constexpr XMLCh fgXercesValidationErrorAsFatal[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d, chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chDash,
    chLatin_e, chLatin_r, chLatin_r, chLatin_o, chLatin_r, chDash,
    chLatin_a, chLatin_s, chDash,
    chLatin_f, chLatin_a, chLatin_t, chLatin_a, chLatin_l, chNull
  };

  //Xerces: http://apache.org/xml/features/calculate-src-ofs
  static constexpr XMLCh fgXercesCalculateSrcOfs[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_c, chLatin_a, chLatin_l, chLatin_c, chLatin_u,
    chLatin_l, chLatin_a, chLatin_t, chLatin_e, chDash, chLatin_s, chLatin_r,
    chLatin_c, chDash, chLatin_o, chLatin_f, chLatin_s, chNull
  };

  //Xerces: http://apache.org/xml/features/standard-uri-conformant
  static constexpr XMLCh fgXercesStandardUriConformant[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_s, chLatin_t, chLatin_a, chLatin_n, chLatin_d,
    chLatin_a, chLatin_r, chLatin_d, chDash, chLatin_u, chLatin_r, chLatin_i,
    chDash, chLatin_c, chLatin_o, chLatin_n, chLatin_f, chLatin_o, chLatin_r,
    chLatin_m, chLatin_a, chLatin_n, chLatin_t, chNull
  };

  //Xerces: http://apache.org/xml/features/dom-has-psvi-info
  static constexpr XMLCh fgXercesDOMHasPSVIInfo[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_d, chLatin_o, chLatin_m, chDash, chLatin_h,
    chLatin_a, chLatin_s, chDash, chLatin_p, chLatin_s, chLatin_v, chLatin_i,
    chDash, chLatin_i, chLatin_n, chLatin_f, chLatin_o, chNull
  };

  //Xerces: http://apache.org/xml/features/generate-synthetic-annotations
  static constexpr XMLCh fgXercesGenerateSyntheticAnnotations[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_g, chLatin_e, chLatin_n, chLatin_e, chLatin_r,
    chLatin_a, chLatin_t, chLatin_e, chDash, chLatin_s, chLatin_y, chLatin_n,
    chLatin_t, chLatin_h, chLatin_e, chLatin_t, chLatin_i, chLatin_c, chDash,
    chLatin_a, chLatin_n, chLatin_n, chLatin_o, chLatin_t, chLatin_a, chLatin_t,
    chLatin_i, chLatin_o, chLatin_n, chLatin_s, chNull
  };

  //Xerces: http://apache.org/xml/features/validate-annotations
  static constexpr XMLCh fgXercesValidateAnnotations[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_e, chDash,
    chLatin_a, chLatin_n, chLatin_n, chLatin_o, chLatin_t, chLatin_a, chLatin_t,
    chLatin_i, chLatin_o, chLatin_n, chLatin_s, chNull
  };

  //Property
  //Xerces: http://apache.org/xml/properties/schema/external-schemaLocation
  static constexpr XMLCh fgXercesSchemaExternalSchemaLocation[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_p, chLatin_r,
    chLatin_o, chLatin_p, chLatin_e, chLatin_r, chLatin_t, chLatin_i,
    chLatin_e, chLatin_s, chForwardSlash, chLatin_s, chLatin_c, chLatin_h,
    chLatin_e, chLatin_m, chLatin_a, chForwardSlash, chLatin_e, chLatin_x,
    chLatin_t, chLatin_e, chLatin_r, chLatin_n, chLatin_a, chLatin_l, chDash,
    chLatin_s, chLatin_c, chLatin_h, chLatin_e, chLatin_m, chLatin_a, chLatin_L,
    chLatin_o, chLatin_c, chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  //Property
  //Xerces: http://apache.org/xml/properties/security-manager
  static constexpr XMLCh fgXercesSecurityManager[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_p, chLatin_r,
    chLatin_o, chLatin_p, chLatin_e, chLatin_r, chLatin_t, chLatin_i,
    chLatin_e, chLatin_s, chForwardSlash, chLatin_s, chLatin_e, chLatin_c,
    chLatin_u, chLatin_r, chLatin_i, chLatin_t, chLatin_y, chDash,
    chLatin_m, chLatin_a, chLatin_n, chLatin_a, chLatin_g, chLatin_e, chLatin_r,
    chNull
  };

  //Property
  //Xerces: http://apache.org/xml/properties/schema/external-noNamespaceSchemaLocation
  static constexpr XMLCh fgXercesSchemaExternalNoNameSpaceSchemaLocation[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_p, chLatin_r,
    chLatin_o, chLatin_p, chLatin_e, chLatin_r, chLatin_t, chLatin_i,
    chLatin_e, chLatin_s, chForwardSlash, chLatin_s, chLatin_c, chLatin_h,
    chLatin_e, chLatin_m, chLatin_a, chForwardSlash, chLatin_e, chLatin_x,
    chLatin_t, chLatin_e, chLatin_r, chLatin_n, chLatin_a, chLatin_l, chDash,
    chLatin_n, chLatin_o, chLatin_N, chLatin_a, chLatin_m, chLatin_e, chLatin_s,
    chLatin_p, chLatin_a, chLatin_c, chLatin_e, chLatin_S, chLatin_c, chLatin_h,
    chLatin_e, chLatin_m, chLatin_a, chLatin_L, chLatin_o, chLatin_c, chLatin_a,
    chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  //Property
  //Xerces: http://apache.org/xml/properties/scannerName
  static constexpr XMLCh fgXercesScannerName[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_p, chLatin_r,
    chLatin_o, chLatin_p, chLatin_e, chLatin_r, chLatin_t, chLatin_i,
    chLatin_e, chLatin_s, chForwardSlash, chLatin_s, chLatin_c, chLatin_a,
    chLatin_n, chLatin_n, chLatin_e, chLatin_r, chLatin_N, chLatin_a,
    chLatin_m, chLatin_e, chNull
  };

  //Property
  //Xerces: http://apache.org/xml/properties/parser-use-DOMDocument-from-Implementation
  static constexpr XMLCh fgXercesParserUseDocumentFromImplementation[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_p, chLatin_a,
    chLatin_r, chLatin_s, chLatin_e, chLatin_r, chDash, chLatin_u, chLatin_s,
    chLatin_e, chDash, chLatin_D, chLatin_O, chLatin_M, chLatin_D, chLatin_o,
    chLatin_c, chLatin_u, chLatin_m, chLatin_e, chLatin_n, chLatin_t, chDash,
    chLatin_f, chLatin_r, chLatin_o, chLatin_m, chDash, chLatin_I, chLatin_m,
    chLatin_p, chLatin_l, chLatin_e, chLatin_m, chLatin_e, chLatin_n, chLatin_t,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  //Property
  //Xerces: http://apache.org/xml/properties/entity-resolver
  static constexpr XMLCh fgXercesEntityResolver[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_p, chLatin_a,
    chLatin_r, chLatin_s, chLatin_e, chLatin_r, chDash, chLatin_e, chLatin_n,
    chLatin_t, chLatin_i, chLatin_t, chLatin_y, chDash, chLatin_r, chLatin_e,
    chLatin_s, chLatin_o, chLatin_l, chLatin_v, chLatin_e, chLatin_r, chNull
  };


  //Xerces: http://apache.org/xml/features/dom/user-adopts-DOMDocument
  static constexpr XMLCh fgXercesUserAdoptsDOMDocument[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_d, chLatin_o, chLatin_m, chForwardSlash,
    chLatin_u, chLatin_s, chLatin_e, chLatin_r, chDash,
    chLatin_a, chLatin_d, chLatin_o, chLatin_p, chLatin_t, chLatin_s, chDash,
    chLatin_D, chLatin_O, chLatin_M,
    chLatin_D, chLatin_o, chLatin_c, chLatin_u, chLatin_m, chLatin_e, chLatin_n, chLatin_t, chNull
  };

  //Xerces: http://apache.org/xml/features/validation/cache-grammarFromParse
  static constexpr XMLCh fgXercesCacheGrammarFromParse[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chForwardSlash,
    chLatin_c, chLatin_a, chLatin_c, chLatin_h, chLatin_e, chDash, chLatin_g,
    chLatin_r, chLatin_a, chLatin_m, chLatin_m, chLatin_a, chLatin_r,
    chLatin_F, chLatin_r, chLatin_o, chLatin_m, chLatin_P, chLatin_a, chLatin_r,
    chLatin_s, chLatin_e, chNull
  };

  //Xerces: http://apache.org/xml/features/validation/use-cachedGrammarInParse
  static constexpr XMLCh fgXercesUseCachedGrammarInParse[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chForwardSlash,
    chLatin_u, chLatin_s, chLatin_e, chDash, chLatin_c, chLatin_a, chLatin_c,
    chLatin_h, chLatin_e, chLatin_d, chLatin_G, chLatin_r, chLatin_a, chLatin_m,
    chLatin_m, chLatin_a, chLatin_r, chLatin_I, chLatin_n, chLatin_P, chLatin_a,
    chLatin_r, chLatin_s, chLatin_e, chNull
  };

  //Xerces: http://apache.org/xml/features/validation/ignoreCachedDTD
  static constexpr XMLCh fgXercesIgnoreCachedDTD[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chForwardSlash,
    chLatin_i, chLatin_g, chLatin_n, chLatin_o, chLatin_r, chLatin_e,
    chLatin_C, chLatin_a, chLatin_c, chLatin_h, chLatin_e, chLatin_d,
    chLatin_D, chLatin_T, chLatin_D, chNull
  };

  //Xerces: http://apache.org/xml/features/schema/ignore-annotations
  static constexpr XMLCh fgXercesIgnoreAnnotations[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_s, chLatin_c, chLatin_h, chLatin_e, chLatin_m,
    chLatin_a, chForwardSlash, chLatin_i, chLatin_g, chLatin_n, chLatin_o,
    chLatin_r, chLatin_e, chDash,
    chLatin_a, chLatin_n, chLatin_n, chLatin_o, chLatin_t, chLatin_a, chLatin_t,
    chLatin_i, chLatin_o, chLatin_n, chLatin_s, chNull
  };

  //Xerces: http://apache.org/xml/features/disable-default-entity-resolution
  static constexpr XMLCh fgXercesDisableDefaultEntityResolution[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_d, chLatin_i, chLatin_s, chLatin_a, chLatin_b,
    chLatin_l, chLatin_e, chDash, chLatin_d, chLatin_e, chLatin_f,
    chLatin_a, chLatin_u, chLatin_l, chLatin_t, chDash, chLatin_e,
    chLatin_n, chLatin_t, chLatin_i, chLatin_t, chLatin_y, chDash,
    chLatin_r, chLatin_e, chLatin_s, chLatin_o, chLatin_l, chLatin_u,
    chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  //Xerces: http://apache.org/xml/features/validation/schema/skip-dtd-validation
  static constexpr XMLCh fgXercesSkipDTDValidation[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chForwardSlash,
    chLatin_s, chLatin_c, chLatin_h, chLatin_e, chLatin_m, chLatin_a,
    chForwardSlash, chLatin_s, chLatin_k, chLatin_i, chLatin_p, chDash,
    chLatin_d, chLatin_t, chLatin_d, chDash, chLatin_v, chLatin_a,
    chLatin_l, chLatin_i, chLatin_d, chLatin_a, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chNull
  };

  //Xerces: http://apache.org/xml/features/validation/schema/handle-multiple-imports
  static constexpr XMLCh fgXercesHandleMultipleImports[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chForwardSlash,
    chLatin_s, chLatin_c, chLatin_h, chLatin_e, chLatin_m, chLatin_a,
    chForwardSlash, chLatin_h, chLatin_a, chLatin_n, chLatin_d, chLatin_l, chLatin_e, chDash,
    chLatin_m, chLatin_u, chLatin_l, chLatin_t, chLatin_i, chLatin_p,
    chLatin_l, chLatin_e, chDash, chLatin_i, chLatin_m, chLatin_p, chLatin_o,
    chLatin_r, chLatin_t, chLatin_s, chNull
  };

  //Property
  //Xerces: http://apache.org/xml/properties/low-water-mark
  static constexpr XMLCh fgXercesLowWaterMark[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_p, chLatin_r,
    chLatin_o, chLatin_p, chLatin_e, chLatin_r, chLatin_t, chLatin_i,
    chLatin_e, chLatin_s, chForwardSlash, chLatin_l, chLatin_o, chLatin_w,
    chDash, chLatin_w, chLatin_a, chLatin_t, chLatin_e, chLatin_r, chDash,
    chLatin_m, chLatin_a, chLatin_r, chLatin_k, chNull
  };

  //Introduced in DOM Level 3
  static constexpr XMLCh fgDOMCanonicalForm[] = {
    chLatin_c, chLatin_a, chLatin_n, chLatin_o, chLatin_n, chLatin_i, chLatin_c,
    chLatin_a, chLatin_l, chDash, chLatin_f, chLatin_o, chLatin_r, chLatin_m, chNull
  };

  static constexpr XMLCh fgDOMCDATASections[] = {
    chLatin_c, chLatin_d, chLatin_a, chLatin_t, chLatin_a, chDash, chLatin_s,
    chLatin_e, chLatin_c, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chLatin_s, chNull
  };

  static constexpr XMLCh fgDOMComments[] = {
    chLatin_c, chLatin_o, chLatin_m, chLatin_m, chLatin_e, chLatin_n, chLatin_t,
    chLatin_s, chNull
  };

  static constexpr XMLCh fgDOMCharsetOverridesXMLEncoding[] = {
    chLatin_c, chLatin_h, chLatin_a, chLatin_r, chLatin_s, chLatin_e, chLatin_t,
    chDash, chLatin_o, chLatin_v, chLatin_e, chLatin_r, chLatin_r, chLatin_i,
    chLatin_d, chLatin_e, chLatin_s, chDash, chLatin_x, chLatin_m, chLatin_l,
    chDash, chLatin_e, chLatin_n, chLatin_c, chLatin_o, chLatin_d, chLatin_i,
    chLatin_n, chLatin_g, chNull
  };

  static constexpr XMLCh fgDOMCheckCharacterNormalization[] = {
    chLatin_c, chLatin_h, chLatin_e, chLatin_c, chLatin_k, chDash,
    chLatin_c, chLatin_h, chLatin_a, chLatin_r, chLatin_a, chLatin_c, chLatin_t,
    chLatin_e, chLatin_r, chDash, chLatin_n, chLatin_o, chLatin_r, chLatin_m,
    chLatin_a, chLatin_l, chLatin_i, chLatin_z, chLatin_a, chLatin_t, chLatin_i,
    chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgDOMDatatypeNormalization[] = {
    chLatin_d, chLatin_a, chLatin_t, chLatin_a, chLatin_t, chLatin_y, chLatin_p,
    chLatin_e, chDash, chLatin_n, chLatin_o, chLatin_r, chLatin_m, chLatin_a,
    chLatin_l, chLatin_i, chLatin_z, chLatin_a, chLatin_t, chLatin_i, chLatin_o,
    chLatin_n, chNull
  };

  static constexpr XMLCh fgDOMDisallowDoctype[] = {
    chLatin_d, chLatin_i, chLatin_s, chLatin_a, chLatin_l, chLatin_l, chLatin_o,
    chLatin_w, chDash, chLatin_d, chLatin_o, chLatin_c, chLatin_t, chLatin_y,
    chLatin_e, chNull
  };

  static constexpr XMLCh fgDOMElementContentWhitespace[] = {
    chLatin_e, chLatin_l, chLatin_e, chLatin_m, chLatin_e, chLatin_n, chLatin_t,
    chDash, chLatin_c, chLatin_o, chLatin_n, chLatin_t, chLatin_e, chLatin_n,
    chLatin_t, chDash, chLatin_w, chLatin_h, chLatin_i, chLatin_t, chLatin_e,
    chLatin_s, chLatin_p, chLatin_a, chLatin_c, chLatin_e, chNull
  };

  static constexpr XMLCh fgDOMEntities[] = {
    chLatin_e, chLatin_n, chLatin_t, chLatin_i, chLatin_t, chLatin_i, chLatin_e,
    chLatin_s, chNull
  };

  static constexpr XMLCh fgDOMErrorHandler[] = {
    chLatin_e, chLatin_r, chLatin_r, chLatin_o, chLatin_r, chDash, chLatin_h,
    chLatin_a, chLatin_n, chLatin_d, chLatin_l, chLatin_e, chLatin_r, chNull
  };

  static constexpr XMLCh fgDOMInfoset[] = {
    chLatin_i, chLatin_n, chLatin_f, chLatin_o, chLatin_s, chLatin_e, chLatin_t, chNull
  };

  static constexpr XMLCh fgDOMIgnoreUnknownCharacterDenormalization[] = {
    chLatin_i, chLatin_g, chLatin_n, chLatin_o, chLatin_r, chLatin_e, chDash,
    chLatin_u, chLatin_n, chLatin_k, chLatin_n, chLatin_o, chLatin_w, chLatin_n,
    chDash, chLatin_c, chLatin_h, chLatin_a, chLatin_r, chLatin_a, chLatin_c,
    chLatin_t, chLatin_e, chLatin_r, chDash, chLatin_d, chLatin_e, chLatin_n,
    chLatin_o, chLatin_r, chLatin_m, chLatin_a, chLatin_l, chLatin_i, chLatin_z,
    chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  static constexpr XMLCh fgDOMNamespaces[] = {
    chLatin_n, chLatin_a, chLatin_m, chLatin_e, chLatin_s, chLatin_p, chLatin_a,
    chLatin_c, chLatin_e, chLatin_s, chNull
  };

  static constexpr XMLCh fgDOMNamespaceDeclarations[] = {
    chLatin_n, chLatin_a, chLatin_m, chLatin_e, chLatin_s, chLatin_p, chLatin_a,
    chLatin_c, chLatin_e, chDash, chLatin_d, chLatin_e, chLatin_c, chLatin_l,
    chLatin_a, chLatin_r, chLatin_a, chLatin_t, chLatin_i, chLatin_o, chLatin_n,
    chLatin_s, chNull
  };

  static constexpr XMLCh fgDOMNormalizeCharacters[] = {
    chLatin_n, chLatin_o, chLatin_r, chLatin_m, chLatin_a, chLatin_l, chLatin_i,
    chLatin_z, chLatin_e, chDash, chLatin_c, chLatin_h, chLatin_a, chLatin_r,
    chLatin_a, chLatin_c, chLatin_t, chLatin_e, chLatin_r, chLatin_s, chNull
  };

  static constexpr XMLCh fgDOMResourceResolver[] = {
    chLatin_r, chLatin_e, chLatin_s, chLatin_o, chLatin_u, chLatin_r, chLatin_c,
    chLatin_e, chDash, chLatin_r, chLatin_e, chLatin_s, chLatin_o, chLatin_l,
    chLatin_v, chLatin_e, chLatin_r, chNull
  };

  static constexpr XMLCh fgDOMSchemaLocation[] = {
    chLatin_s, chLatin_c, chLatin_h, chLatin_e, chLatin_m, chLatin_a, chDash,
    chLatin_l, chLatin_o, chLatin_c, chLatin_a, chLatin_t, chLatin_i, chLatin_o,
    chLatin_n, chNull
  };

  static constexpr XMLCh fgDOMSchemaType[] = {
    chLatin_s, chLatin_c, chLatin_h, chLatin_e, chLatin_m, chLatin_a, chDash,
    chLatin_t, chLatin_y, chLatin_p, chLatin_e, chNull
  };

  static constexpr XMLCh fgDOMSplitCDATASections[] = {
    chLatin_s, chLatin_p, chLatin_l, chLatin_i, chLatin_t, chDash, chLatin_c,
    chLatin_d, chLatin_a, chLatin_t, chLatin_a, chDash, chLatin_s, chLatin_e,
    chLatin_c, chLatin_t, chLatin_i, chLatin_o, chLatin_n, chLatin_s, chNull
  };

  static constexpr XMLCh fgDOMSupportedMediatypesOnly[] = {
    chLatin_s, chLatin_u, chLatin_p, chLatin_p, chLatin_o, chLatin_r, chLatin_t,
    chLatin_e, chLatin_d, chDash, chLatin_m, chLatin_e, chLatin_d, chLatin_i,
    chLatin_a, chDash, chLatin_t, chLatin_y, chLatin_p, chLatin_e, chLatin_s, chDash,
    chLatin_o, chLatin_n, chLatin_l, chLatin_y, chNull
  };

  static constexpr XMLCh fgDOMValidate[] = {
    chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d, chLatin_a, chLatin_t,
    chLatin_e, chNull
  };

  static constexpr XMLCh fgDOMValidateIfSchema[] = {
    chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d, chLatin_a, chLatin_t,
    chLatin_e, chDash, chLatin_i, chLatin_f, chDash, chLatin_s, chLatin_c,
    chLatin_h, chLatin_e, chLatin_m, chLatin_a, chNull
  };

  static constexpr XMLCh fgDOMWellFormed[] = {
    chLatin_w, chLatin_e, chLatin_l, chLatin_l, chDash, chLatin_f, chLatin_o,
    chLatin_r, chLatin_m, chLatin_e, chLatin_d, chNull
  };



  static constexpr XMLCh fgDOMXMLSchemaType[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_w, chLatin_w, chLatin_w, chPeriod, chLatin_w,
    chDigit_3, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chDigit_2, chDigit_0, chDigit_0, chDigit_1, chForwardSlash, chLatin_X,
    chLatin_M, chLatin_L, chLatin_S, chLatin_c, chLatin_h, chLatin_e,
    chLatin_m, chLatin_a, chNull
  };

  static constexpr XMLCh fgDOMDTDType[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_w, chLatin_w, chLatin_w, chPeriod, chLatin_w,
    chDigit_3, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_T, chLatin_R, chForwardSlash, chLatin_R, chLatin_E, chLatin_C,
    chDash, chLatin_x, chLatin_m, chLatin_l, chNull
  };

  //Introduced in DOM Level 3
  //canonical-form
  static constexpr XMLCh fgDOMWRTCanonicalForm[] = {
    chLatin_c, chLatin_a, chLatin_n, chLatin_o, chLatin_n, chLatin_i,
    chLatin_c, chLatin_a, chLatin_l, chDash, chLatin_f, chLatin_o,
    chLatin_r, chLatin_m, chNull
  };

  //discard-default-content
  static constexpr XMLCh fgDOMWRTDiscardDefaultContent[] = {
    chLatin_d, chLatin_i, chLatin_s, chLatin_c, chLatin_a, chLatin_r,
    chLatin_d, chDash, chLatin_d, chLatin_e, chLatin_f, chLatin_a,
    chLatin_u, chLatin_l, chLatin_l, chLatin_t, chDash, chLatin_c,
    chLatin_o, chLatin_n, chLatin_t, chLatin_e, chLatin_n, chLatin_t,
    chNull
  };

  //entities
  static constexpr XMLCh fgDOMWRTEntities[] = {
    chLatin_e, chLatin_n, chLatin_t, chLatin_i, chLatin_t, chLatin_i,
    chLatin_e, chLatin_s, chNull
  };

  //format-pretty-print
  static constexpr XMLCh fgDOMWRTFormatPrettyPrint[] = {
    chLatin_f, chLatin_o, chLatin_r, chLatin_m, chLatin_a, chLatin_t,
    chDash, chLatin_p, chLatin_r, chLatin_e, chLatin_t, chLatin_t,
    chLatin_y, chDash, chLatin_p, chLatin_r, chLatin_i, chLatin_n,
    chLatin_t, chNull
  };

  //normalize-characters
  static constexpr XMLCh fgDOMWRTNormalizeCharacters[] = {
    chLatin_n, chLatin_o, chLatin_r, chLatin_m, chLatin_a, chLatin_l,
    chLatin_i, chLatin_z, chLatin_e, chDash, chLatin_c, chLatin_h,
    chLatin_a, chLatin_r, chLatin_a, chLatin_c, chLatin_t, chLatin_e,
    chLatin_r, chLatin_s, chNull
  };

  //split-cdata-sections
  static constexpr XMLCh fgDOMWRTSplitCdataSections[] = {
    chLatin_s, chLatin_p, chLatin_l, chLatin_i, chLatin_t, chDash,
    chLatin_c, chLatin_d, chLatin_a, chLatin_t, chLatin_a, chDash,
    chLatin_s, chLatin_e, chLatin_c, chLatin_t, chLatin_i, chLatin_o,
    chLatin_n, chLatin_s, chNull
  };

  //validation
  static constexpr XMLCh fgDOMWRTValidation[] = {
    chLatin_v, chLatin_a, chLatin_l, chLatin_i, chLatin_d, chLatin_a,
    chLatin_t, chLatin_i, chLatin_o, chLatin_n, chNull
  };

  //whitespace-in-element-content
  static constexpr XMLCh fgDOMWRTWhitespaceInElementContent[] = {
    chLatin_w, chLatin_h, chLatin_i, chLatin_t, chLatin_e, chLatin_s,
    chLatin_p, chLatin_a, chLatin_c, chLatin_e, chDash, chLatin_i,
    chLatin_n, chDash, chLatin_e, chLatin_l, chLatin_e, chLatin_m,
    chLatin_e, chLatin_n, chLatin_t, chDash, chLatin_c, chLatin_o,
    chLatin_n, chLatin_t, chLatin_e, chLatin_n, chLatin_t, chNull
  };

  //Xerces: http://apache.org/xml/features/dom/byte-order-mark
  static constexpr XMLCh fgDOMWRTBOM[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_d, chLatin_o, chLatin_m, chForwardSlash,
    chLatin_b, chLatin_y, chLatin_t, chLatin_e, chDash,
    chLatin_o, chLatin_r, chLatin_d, chLatin_e, chLatin_r, chDash,
    chLatin_m, chLatin_a, chLatin_r, chLatin_k, chNull
  };

  //xml-declaration
  static constexpr XMLCh fgDOMXMLDeclaration[] = {
    chLatin_x, chLatin_m, chLatin_l, chDash, chLatin_d, chLatin_e, chLatin_c,
    chLatin_l, chLatin_a, chLatin_r, chLatin_a, chLatin_t, chLatin_i, chLatin_o,
    chLatin_n, chNull
  };

  //Xerces: http://apache.org/xml/features/pretty-print/space-first-level-elements
  static constexpr XMLCh fgDOMWRTXercesPrettyPrint[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c, chLatin_h,
    chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g, chForwardSlash,
    chLatin_x, chLatin_m, chLatin_l, chForwardSlash, chLatin_f, chLatin_e,
    chLatin_a, chLatin_t, chLatin_u, chLatin_r, chLatin_e, chLatin_s,
    chForwardSlash, chLatin_p, chLatin_r, chLatin_e, chLatin_t, chLatin_t,
    chLatin_y, chDash, chLatin_p, chLatin_r, chLatin_i, chLatin_n, chLatin_t,
    chForwardSlash, chLatin_s, chLatin_p, chLatin_a, chLatin_c, chLatin_e,
    chDash, chLatin_f, chLatin_i, chLatin_r, chLatin_s, chLatin_t, chDash,
    chLatin_l, chLatin_e, chLatin_v, chLatin_e, chLatin_l, chDash,
    chLatin_e, chLatin_l, chLatin_e, chLatin_m, chLatin_e, chLatin_n,
    chLatin_t, chLatin_s, chNull
  };

  static constexpr XMLCh fgXercescInterfacePSVITypeInfo[] = {
    chLatin_D, chLatin_O, chLatin_M, chLatin_P, chLatin_S, chLatin_V, chLatin_I,
    chLatin_T, chLatin_y, chLatin_p, chLatin_e, chLatin_I, chLatin_n, chLatin_f,
    chLatin_o, chNull
  };

  static constexpr XMLCh fgXercescInterfaceDOMDocumentTypeImpl[] = {
    chLatin_D, chLatin_O, chLatin_M, chLatin_D, chLatin_o, chLatin_c, chLatin_u,
    chLatin_m, chLatin_e, chLatin_n, chLatin_t, chLatin_T, chLatin_y, chLatin_p,
    chLatin_e, chLatin_I, chLatin_m, chLatin_p, chLatin_l, chNull
  };

  static constexpr XMLCh fgXercescInterfaceDOMDocumentImpl[] = {
    chLatin_D, chLatin_O, chLatin_M, chLatin_D, chLatin_o, chLatin_c, chLatin_u,
    chLatin_m, chLatin_e, chLatin_n, chLatin_t, chLatin_I, chLatin_m, chLatin_p,
    chLatin_l, chNull
  };

  static constexpr XMLCh fgXercescInterfaceDOMMemoryManager[] = {
    chLatin_D, chLatin_O, chLatin_M, chLatin_M, chLatin_e, chLatin_m, chLatin_o,
    chLatin_r, chLatin_y, chLatin_M, chLatin_a, chLatin_n, chLatin_a, chLatin_g,
    chLatin_e, chLatin_r, chNull
  };

  // en_US
  static constexpr char fgXercescDefaultLocale[] = "en_US";

  // DOM Message Domain
  static constexpr XMLCh fgXMLDOMMsgDomain[] = {
    chLatin_h, chLatin_t, chLatin_t, chLatin_p, chColon, chForwardSlash,
    chForwardSlash, chLatin_a, chLatin_p, chLatin_a, chLatin_c,
    chLatin_h, chLatin_e, chPeriod, chLatin_o, chLatin_r, chLatin_g,
    chForwardSlash, chLatin_x, chLatin_m, chLatin_l, chForwardSlash,
    chLatin_m, chLatin_e, chLatin_s, chLatin_s, chLatin_a, chLatin_g,
    chLatin_e, chLatin_s, chForwardSlash, chLatin_X, chLatin_M, chLatin_L,
    chLatin_D, chLatin_O, chLatin_M, chLatin_M, chLatin_s, chLatin_g,
    chNull
  };

  // default exception string
  static constexpr XMLCh fgDefErrMsg[] = {
    chLatin_C, chLatin_o, chLatin_u, chLatin_l, chLatin_d,
    chSpace, chLatin_n, chLatin_o, chLatin_t, chSpace,
    chLatin_l, chLatin_o, chLatin_a, chLatin_d, chSpace,
    chLatin_m, chLatin_e, chLatin_s, chLatin_s, chLatin_a,
    chLatin_g, chLatin_e, chNull
  };

  // Datatype
  static constexpr XMLCh fgValueZero[] = {
    chDigit_0, chNull
  };

  static constexpr XMLCh fgNegOne[] = {
    chDash, chDigit_1, chNull
  };

  static constexpr XMLCh fgValueOne[] = {
    chDigit_1, chNull
  };

  //"9223372036854775807"
  static constexpr XMLCh fgLongMaxInc[] = {
    chDigit_9, chDigit_2, chDigit_2, chDigit_3, chDigit_3, chDigit_7, chDigit_2,
    chDigit_0, chDigit_3, chDigit_6, chDigit_8, chDigit_5, chDigit_4, chDigit_7,
    chDigit_7, chDigit_5, chDigit_8, chDigit_0, chDigit_7, chNull
  };

  //"-9223372036854775808"
  static constexpr XMLCh fgLongMinInc[] = {
    chDash, chDigit_9, chDigit_2, chDigit_2, chDigit_3, chDigit_3, chDigit_7,
    chDigit_2, chDigit_0, chDigit_3, chDigit_6, chDigit_8, chDigit_5, chDigit_4,
    chDigit_7, chDigit_7, chDigit_5, chDigit_8, chDigit_0, chDigit_8,  chNull
  };

  static constexpr XMLCh fgIntMaxInc[] = {
    chDigit_2, chDigit_1, chDigit_4, chDigit_7, chDigit_4, chDigit_8,
    chDigit_3, chDigit_6, chDigit_4, chDigit_7, chNull
  };

  static constexpr XMLCh fgIntMinInc[] = {
    chDash, chDigit_2, chDigit_1, chDigit_4, chDigit_7, chDigit_4,
    chDigit_8, chDigit_3, chDigit_6, chDigit_4, chDigit_8, chNull
  };

  static constexpr XMLCh fgShortMaxInc[] = {
    chDigit_3, chDigit_2, chDigit_7, chDigit_6, chDigit_7, chNull
  };

  static constexpr XMLCh fgShortMinInc[] = {
    chDash, chDigit_3, chDigit_2, chDigit_7, chDigit_6, chDigit_8, chNull
  };

  static constexpr XMLCh fgByteMaxInc[] = {
    chDigit_1, chDigit_2, chDigit_7, chNull
  };

  static constexpr XMLCh fgByteMinInc[] = {
    chDash, chDigit_1, chDigit_2, chDigit_8, chNull
  };

  static constexpr XMLCh fgULongMaxInc[] = {
    chDigit_1, chDigit_8, chDigit_4, chDigit_4, chDigit_6, chDigit_7, chDigit_4,
    chDigit_4, chDigit_0, chDigit_7, chDigit_3, chDigit_7, chDigit_0, chDigit_9,
    chDigit_5, chDigit_5, chDigit_1, chDigit_6, chDigit_1, chDigit_5, chNull
  };

  static constexpr XMLCh fgUIntMaxInc[] = {
    chDigit_4, chDigit_2, chDigit_9, chDigit_4, chDigit_9, chDigit_6,
    chDigit_7, chDigit_2, chDigit_9, chDigit_5, chNull
  };

  static constexpr XMLCh fgUShortMaxInc[] = {
    chDigit_6, chDigit_5, chDigit_5, chDigit_3, chDigit_5, chNull
  };

  static constexpr XMLCh fgUByteMaxInc[] = {
    chDigit_2, chDigit_5, chDigit_5, chNull
  };

  // http://www.w3.org/2001/05/xmlschema-errata#Errata2
  // E2-25
  //"([a-zA-Z]{1,8})(-[a-zA-Z0-9]{1,8})*"
  static constexpr XMLCh fgLangPattern[] = {
    chOpenParen, chOpenSquare,  chLatin_a, chDash, chLatin_z, chLatin_A, chDash, chLatin_Z,
    chCloseSquare, chOpenCurly, chDigit_1, chComma, chDigit_8, chCloseCurly, chCloseParen,
    chOpenParen, chDash, chOpenSquare, chLatin_a, chDash, chLatin_z, chLatin_A, chDash, chLatin_Z,
    chDigit_0, chDash, chDigit_9, chCloseSquare, chOpenCurly, chDigit_1, chComma, chDigit_8,
    chCloseCurly,  chCloseParen, chAsterisk, chNull
  };

  static constexpr XMLCh fgBooleanValueSpace[][8] = {
    { chLatin_f, chLatin_a, chLatin_l, chLatin_s, chLatin_e, chNull },
    { chLatin_t, chLatin_r, chLatin_u, chLatin_e, chNull },
    { chDigit_0, chNull },
    { chDigit_1, chNull }
  };

  static constexpr XMLCh fgXercesDoXInclude[] = {
    /* temp value */
    chLatin_D, chLatin_o, chLatin_X, chLatin_I, chNull
  };

  static constexpr XMLSize_t fgBooleanValueSpaceArraySize = sizeof fgBooleanValueSpace / sizeof (fgBooleanValueSpace[0]);

private:
  // -----------------------------------------------------------------------
  //  Unimplemented constructors and operators
  // -----------------------------------------------------------------------
  XMLUni();
};

XERCES_CPP_NAMESPACE_END

#endif
