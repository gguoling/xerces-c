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
 * $Id: XMLUni.cpp 1726088 2016-01-21 20:18:52Z scantor $
 */


// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include <xercesc/util/XMLUni.hpp>

XERCES_CPP_NAMESPACE_BEGIN

// ---------------------------------------------------------------------------
//  XMLUni: Static data
// ---------------------------------------------------------------------------

constexpr XMLCh XMLUni::fgAnyString[];
constexpr XMLCh XMLUni::fgAttListString[];
constexpr XMLCh XMLUni::fgCommentString[];
constexpr XMLCh XMLUni::fgCDATAString[];
constexpr XMLCh XMLUni::fgDefaultString[];
constexpr XMLCh XMLUni::fgDocTypeString[];
constexpr XMLCh XMLUni::fgEBCDICEncodingString[];
constexpr XMLCh XMLUni::fgElemString[];
constexpr XMLCh XMLUni::fgEmptyString[];
constexpr XMLCh XMLUni::fgEncodingString[];
constexpr XMLCh XMLUni::fgEntitString[];
constexpr XMLCh XMLUni::fgEntityString[];
constexpr XMLCh XMLUni::fgEntitiesString[];
constexpr XMLCh XMLUni::fgEnumerationString[];
constexpr XMLCh XMLUni::fgExceptDomain[];
constexpr XMLCh XMLUni::fgFixedString[];
constexpr XMLCh XMLUni::fgIBM037EncodingString[];
constexpr XMLCh XMLUni::fgIBM037EncodingString2[];
constexpr XMLCh XMLUni::fgIBM1047EncodingString[];
constexpr XMLCh XMLUni::fgIBM1047EncodingString2[];
constexpr XMLCh XMLUni::fgIBM1140EncodingString[];
constexpr XMLCh XMLUni::fgIBM1140EncodingString2[];
constexpr XMLCh XMLUni::fgIBM1140EncodingString3[];
constexpr XMLCh XMLUni::fgIBM1140EncodingString4[];
constexpr XMLCh XMLUni::fgIESString[];
constexpr XMLCh XMLUni::fgIDString[];
constexpr XMLCh XMLUni::fgIDRefString[];
constexpr XMLCh XMLUni::fgIDRefsString[];
constexpr XMLCh XMLUni::fgImpliedString[];
constexpr XMLCh XMLUni::fgIgnoreString[];
constexpr XMLCh XMLUni::fgIncludeString[];
constexpr XMLCh XMLUni::fgISO88591EncodingString[];
constexpr XMLCh XMLUni::fgISO88591EncodingString2[];
constexpr XMLCh XMLUni::fgISO88591EncodingString3[];
constexpr XMLCh XMLUni::fgISO88591EncodingString4[];
constexpr XMLCh XMLUni::fgISO88591EncodingString5[];
constexpr XMLCh XMLUni::fgISO88591EncodingString6[];
constexpr XMLCh XMLUni::fgISO88591EncodingString7[];
constexpr XMLCh XMLUni::fgISO88591EncodingString8[];
constexpr XMLCh XMLUni::fgISO88591EncodingString9[];
constexpr XMLCh XMLUni::fgISO88591EncodingString10[];
constexpr XMLCh XMLUni::fgISO88591EncodingString11[];
constexpr XMLCh XMLUni::fgISO88591EncodingString12[];
constexpr XMLCh XMLUni::fgLocalHostString[];
constexpr XMLCh XMLUni::fgNoString[];
constexpr XMLCh XMLUni::fgNotationString[];
constexpr XMLCh XMLUni::fgNDATAString[];
constexpr XMLCh XMLUni::fgNmTokenString[];
constexpr XMLCh XMLUni::fgNmTokensString[];
constexpr XMLCh XMLUni::fgPCDATAString[];
constexpr XMLCh XMLUni::fgPIString[];
constexpr XMLCh XMLUni::fgPubIDString[];
constexpr XMLCh XMLUni::fgRefString[];
constexpr XMLCh XMLUni::fgRequiredString[];
constexpr XMLCh XMLUni::fgStandaloneString[];
constexpr XMLCh XMLUni::fgVersion1_0[];
constexpr XMLCh XMLUni::fgVersion1_1[];
constexpr XMLCh XMLUni::fgSysIDString[];
constexpr XMLCh XMLUni::fgUnknownURIName[];
constexpr XMLCh XMLUni::fgUCS4EncodingString[];
constexpr XMLCh XMLUni::fgUCS4EncodingString2[];
constexpr XMLCh XMLUni::fgUCS4EncodingString3[];
constexpr XMLCh XMLUni::fgUCS4EncodingString4[];
constexpr XMLCh XMLUni::fgUCS4EncodingString5[];
constexpr XMLCh XMLUni::fgUCS4BEncodingString[];
constexpr XMLCh XMLUni::fgUCS4BEncodingString2[];
constexpr XMLCh XMLUni::fgUCS4LEncodingString[];
constexpr XMLCh XMLUni::fgUCS4LEncodingString2[];
constexpr XMLCh XMLUni::fgUSASCIIEncodingString[];
constexpr XMLCh XMLUni::fgUSASCIIEncodingString2[];
constexpr XMLCh XMLUni::fgUSASCIIEncodingString3[];
constexpr XMLCh XMLUni::fgUSASCIIEncodingString4[];
constexpr XMLCh XMLUni::fgUTF8EncodingString[];
constexpr XMLCh XMLUni::fgUTF8EncodingString2[];
constexpr XMLCh XMLUni::fgUTF16EncodingString[];
constexpr XMLCh XMLUni::fgUTF16EncodingString2[];
constexpr XMLCh XMLUni::fgUTF16EncodingString3[];
constexpr XMLCh XMLUni::fgUTF16EncodingString4[];
constexpr XMLCh XMLUni::fgUTF16EncodingString5[];
constexpr XMLCh XMLUni::fgUTF16EncodingString6[];
constexpr XMLCh XMLUni::fgUTF16EncodingString7[];
constexpr XMLCh XMLUni::fgUTF16BEncodingString[];
constexpr XMLCh XMLUni::fgUTF16BEncodingString2[];
constexpr XMLCh XMLUni::fgUTF16LEncodingString[];
constexpr XMLCh XMLUni::fgUTF16LEncodingString2[];
constexpr XMLCh XMLUni::fgVersionString[];
constexpr XMLCh XMLUni::fgValidityDomain[];
constexpr XMLCh XMLUni::fgWin1252EncodingString[];
constexpr XMLCh XMLUni::fgXMLChEncodingString[];
constexpr XMLCh XMLUni::fgXMLDOMMsgDomain[];
constexpr XMLCh XMLUni::fgXMLString[];
constexpr XMLCh XMLUni::fgXMLStringSpace[];
constexpr XMLCh XMLUni::fgXMLStringHTab[];
constexpr XMLCh XMLUni::fgXMLStringCR[];
constexpr XMLCh XMLUni::fgXMLStringLF[];
constexpr XMLCh XMLUni::fgXMLStringSpaceU[];
constexpr XMLCh XMLUni::fgXMLStringHTabU[];
constexpr XMLCh XMLUni::fgXMLStringCRU[];
constexpr XMLCh XMLUni::fgXMLStringLFU[];
constexpr XMLCh XMLUni::fgXMLDeclString[];
constexpr XMLCh XMLUni::fgXMLDeclStringSpace[];
constexpr XMLCh XMLUni::fgXMLDeclStringHTab[];
constexpr XMLCh XMLUni::fgXMLDeclStringLF[];
constexpr XMLCh XMLUni::fgXMLDeclStringCR[];
constexpr XMLCh XMLUni::fgXMLDeclStringSpaceU[];
constexpr XMLCh XMLUni::fgXMLDeclStringHTabU[];
constexpr XMLCh XMLUni::fgXMLDeclStringLFU[];
constexpr XMLCh XMLUni::fgXMLDeclStringCRU[];
constexpr XMLCh XMLUni::fgXMLNSString[];
constexpr XMLCh XMLUni::fgXMLNSColonString[];
constexpr XMLCh XMLUni::fgXMLNSURIName[];
constexpr XMLCh XMLUni::fgXMLErrDomain[];
constexpr XMLCh XMLUni::fgXMLURIName[];
constexpr XMLCh XMLUni::fgInfosetURIName[];
constexpr XMLCh XMLUni::fgYesString[];
constexpr XMLCh XMLUni::fgZeroLenString[];
constexpr XMLCh XMLUni::fgDTDEntityString[];
constexpr XMLCh XMLUni::fgAmp[];
constexpr XMLCh XMLUni::fgLT[];
constexpr XMLCh XMLUni::fgGT[];
constexpr XMLCh XMLUni::fgQuot[];
constexpr XMLCh XMLUni::fgApos[];
constexpr XMLCh XMLUni::fgWFXMLScanner[];
constexpr XMLCh XMLUni::fgIGXMLScanner[];
constexpr XMLCh XMLUni::fgSGXMLScanner[];
constexpr XMLCh XMLUni::fgDGXMLScanner[];
constexpr XMLCh XMLUni::fgXSAXMLScanner[];
constexpr XMLCh XMLUni::fgCDataStart[];
constexpr XMLCh XMLUni::fgCDataEnd[];

// Exception Name
constexpr XMLCh XMLUni::fgArrayIndexOutOfBoundsException_Name[];
constexpr XMLCh XMLUni::fgEmptyStackException_Name[];
constexpr XMLCh XMLUni::fgIllegalArgumentException_Name[];
constexpr XMLCh XMLUni::fgInvalidCastException_Name[];
constexpr XMLCh XMLUni::fgIOException_Name[];
constexpr XMLCh XMLUni::fgNoSuchElementException_Name[];
constexpr XMLCh XMLUni::fgNullPointerException_Name[];
constexpr XMLCh XMLUni::fgXMLPlatformUtilsException_Name[];
constexpr XMLCh XMLUni::fgRuntimeException_Name[];
constexpr XMLCh XMLUni::fgTranscodingException_Name[];
constexpr XMLCh XMLUni::fgUnexpectedEOFException_Name[];
constexpr XMLCh XMLUni::fgUnsupportedEncodingException_Name[];
constexpr XMLCh XMLUni::fgUTFDataFormatException_Name[];
constexpr XMLCh XMLUni::fgNetAccessorException_Name[];
constexpr XMLCh XMLUni::fgMalformedURLException_Name[];
constexpr XMLCh XMLUni::fgNumberFormatException_Name[];
constexpr XMLCh XMLUni::fgParseException_Name[];
constexpr XMLCh XMLUni::fgInvalidDatatypeFacetException_Name[];
constexpr XMLCh XMLUni::fgInvalidDatatypeValueException_Name[];
constexpr XMLCh XMLUni::fgSchemaDateTimeException_Name[];
constexpr XMLCh XMLUni::fgXPathException_Name[];
constexpr XMLCh XMLUni::fgXSerializationException_Name[];
constexpr XMLCh XMLUni::fgXMLXIncludeException_Name[];

// Numerical String
constexpr XMLCh XMLUni::fgNegINFString[];
constexpr XMLCh XMLUni::fgNegZeroString[];
constexpr XMLCh XMLUni::fgPosZeroString[];
constexpr XMLCh XMLUni::fgPosINFString[];
constexpr XMLCh XMLUni::fgNaNString[];
constexpr XMLCh XMLUni::fgEString[];
constexpr XMLCh XMLUni::fgZeroString[];
constexpr XMLCh XMLUni::fgNullString[];

// Xerces features/properties names
constexpr XMLCh XMLUni::fgXercesDynamic[];
constexpr XMLCh XMLUni::fgXercesSchema[];
constexpr XMLCh XMLUni::fgXercesSchemaFullChecking[];
constexpr XMLCh XMLUni::fgXercesLoadSchema[];
constexpr XMLCh XMLUni::fgXercesIdentityConstraintChecking[];
constexpr XMLCh XMLUni::fgXercesSchemaExternalSchemaLocation[];
constexpr XMLCh XMLUni::fgXercesSchemaExternalNoNameSpaceSchemaLocation[];
constexpr XMLCh XMLUni::fgXercesSecurityManager[];
constexpr XMLCh XMLUni::fgXercesLoadExternalDTD[];
constexpr XMLCh XMLUni::fgXercesContinueAfterFatalError[];
constexpr XMLCh XMLUni::fgXercesValidationErrorAsFatal[];
constexpr XMLCh XMLUni::fgXercesUserAdoptsDOMDocument[];
constexpr XMLCh XMLUni::fgXercesCacheGrammarFromParse[];
constexpr XMLCh XMLUni::fgXercesUseCachedGrammarInParse[];
constexpr XMLCh XMLUni::fgXercesScannerName[];
constexpr XMLCh XMLUni::fgXercesParserUseDocumentFromImplementation[];
constexpr XMLCh XMLUni::fgXercesCalculateSrcOfs[];
constexpr XMLCh XMLUni::fgXercesStandardUriConformant[];
constexpr XMLCh XMLUni::fgXercesDOMHasPSVIInfo[];
constexpr XMLCh XMLUni::fgXercesGenerateSyntheticAnnotations[];
constexpr XMLCh XMLUni::fgXercesValidateAnnotations[];
constexpr XMLCh XMLUni::fgXercesIgnoreCachedDTD[];
constexpr XMLCh XMLUni::fgXercesIgnoreAnnotations[];
constexpr XMLCh XMLUni::fgXercesDisableDefaultEntityResolution[];
constexpr XMLCh XMLUni::fgXercesSkipDTDValidation[];
constexpr XMLCh XMLUni::fgXercesEntityResolver[];
constexpr XMLCh XMLUni::fgXercesHandleMultipleImports[];
constexpr XMLCh XMLUni::fgXercesDoXInclude[];
constexpr XMLCh XMLUni::fgXercesLowWaterMark[];

// SAX2 features/properties names
constexpr XMLCh XMLUni::fgSAX2CoreValidation[];
constexpr XMLCh XMLUni::fgSAX2CoreNameSpaces[];
constexpr XMLCh XMLUni::fgSAX2CoreNameSpacePrefixes[];

// Introduced in DOM Level 3
// DOMLSParser features
constexpr XMLCh XMLUni::fgDOMCanonicalForm[];
constexpr XMLCh XMLUni::fgDOMCDATASections[];
constexpr XMLCh XMLUni::fgDOMComments[];
constexpr XMLCh XMLUni::fgDOMCharsetOverridesXMLEncoding[];
constexpr XMLCh XMLUni::fgDOMCheckCharacterNormalization[];
constexpr XMLCh XMLUni::fgDOMDatatypeNormalization[];
constexpr XMLCh XMLUni::fgDOMDisallowDoctype[];
constexpr XMLCh XMLUni::fgDOMElementContentWhitespace[];
constexpr XMLCh XMLUni::fgDOMErrorHandler[];
constexpr XMLCh XMLUni::fgDOMEntities[];
constexpr XMLCh XMLUni::fgDOMIgnoreUnknownCharacterDenormalization[];
constexpr XMLCh XMLUni::fgDOMInfoset[];
constexpr XMLCh XMLUni::fgDOMNamespaces[];
constexpr XMLCh XMLUni::fgDOMNamespaceDeclarations[];
constexpr XMLCh XMLUni::fgDOMNormalizeCharacters[];
constexpr XMLCh XMLUni::fgDOMResourceResolver[];
constexpr XMLCh XMLUni::fgDOMSchemaLocation[];
constexpr XMLCh XMLUni::fgDOMSchemaType[];
constexpr XMLCh XMLUni::fgDOMSplitCDATASections[];
constexpr XMLCh XMLUni::fgDOMSupportedMediatypesOnly[];
constexpr XMLCh XMLUni::fgDOMValidate[];
constexpr XMLCh XMLUni::fgDOMValidateIfSchema[];
constexpr XMLCh XMLUni::fgDOMWellFormed[];

constexpr XMLCh XMLUni::fgDOMXMLSchemaType[];
constexpr XMLCh XMLUni::fgDOMDTDType[];

// Introduced in DOM Level 3
// DOMLSSerializer feature
constexpr XMLCh XMLUni::fgDOMWRTCanonicalForm[];
constexpr XMLCh XMLUni::fgDOMWRTDiscardDefaultContent[];
constexpr XMLCh XMLUni::fgDOMWRTEntities[];
constexpr XMLCh XMLUni::fgDOMWRTFormatPrettyPrint[];
constexpr XMLCh XMLUni::fgDOMWRTNormalizeCharacters[];
constexpr XMLCh XMLUni::fgDOMWRTSplitCdataSections[];
constexpr XMLCh XMLUni::fgDOMWRTValidation[];
constexpr XMLCh XMLUni::fgDOMWRTWhitespaceInElementContent[];
constexpr XMLCh XMLUni::fgDOMWRTBOM[];
constexpr XMLCh XMLUni::fgDOMXMLDeclaration[];
constexpr XMLCh XMLUni::fgDOMWRTXercesPrettyPrint[];

// Private interface names
constexpr XMLCh XMLUni::fgXercescInterfacePSVITypeInfo[];
constexpr XMLCh XMLUni::fgXercescInterfaceDOMDocumentTypeImpl[];
constexpr XMLCh XMLUni::fgXercescInterfaceDOMDocumentImpl[];
constexpr XMLCh XMLUni::fgXercescInterfaceDOMMemoryManager[];

// Locale
constexpr char XMLUni::fgXercescDefaultLocale[];

// Default Exception String
constexpr XMLCh XMLUni:: fgDefErrMsg[];

// Datatype
constexpr XMLCh XMLUni::fgValueZero[];
constexpr XMLCh XMLUni::fgNegOne[];
constexpr XMLCh XMLUni::fgValueOne[];
constexpr XMLCh XMLUni::fgLongMaxInc[];
constexpr XMLCh XMLUni::fgLongMinInc[];
constexpr XMLCh XMLUni::fgIntMaxInc[];
constexpr XMLCh XMLUni::fgIntMinInc[];
constexpr XMLCh XMLUni::fgShortMaxInc[];
constexpr XMLCh XMLUni::fgShortMinInc[];
constexpr XMLCh XMLUni::fgByteMaxInc[];
constexpr XMLCh XMLUni::fgByteMinInc[];
constexpr XMLCh XMLUni::fgULongMaxInc[];
constexpr XMLCh XMLUni::fgUIntMaxInc[];
constexpr XMLCh XMLUni::fgUShortMaxInc[];
constexpr XMLCh XMLUni::fgUByteMaxInc[];
constexpr XMLCh XMLUni::fgLangPattern[];

constexpr XMLCh XMLUni::fgBooleanValueSpace[][8];
constexpr XMLSize_t XMLUni::fgBooleanValueSpaceArraySize;

XERCES_CPP_NAMESPACE_END
