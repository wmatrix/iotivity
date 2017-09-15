//******************************************************************
//
// Copyright 2017 Samsung Electronics All Rights Reserved.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#ifndef ES_UTIL_H_
#define ES_UTIL_H_

#include "escommon.h"

#ifdef __cplusplus
extern "C"
{
#endif

// Some type conversion helpers
// For all *EnumToString(...) functions: They take the Enum Type Value as input (val), and return
// the corresponding string representation, which conforms to the OCF specification.
// For all *StringToEnum(...) functions: They take the string representation, as per the OCF
// specification as input (valIn). And return the Enum Value in valOut. If conversion fails,
// false is returned by the function.

const char* WiFiModeEnumToString(WIFI_MODE val);
bool WiFiModeStringToEnum(const char *valIn, WIFI_MODE *valOut);
const char* WiFiFreqEnumToString(WIFI_FREQ val);
bool WiFiFreqStringToEnum(const char *val, WIFI_FREQ *valOut);
const char* WiFiAuthTypeEnumToString(WIFI_AUTHTYPE val);
bool WiFiAuthTypeStringToEnum(const char *val, WIFI_AUTHTYPE *valOut);
const char* WiFiEncTypeEnumToString(WIFI_ENCTYPE val);
bool WiFiEncTypeStringToEnum(const char *val, WIFI_ENCTYPE *valOut);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //ES_UTIL_H_
