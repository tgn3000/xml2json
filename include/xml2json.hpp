#ifndef XML2JSON_HPP_INCLUDED
#define XML2JSON_HPP_INCLUDED

#define XML2JSON_API __attribute__((visibility("default")))

// Copyright (C) 2015 Alan Zhuang (Cheedoong)	HKUST.  [Updated to the latest version of rapidjson]
// Copyright (C) 2013 Alan Zhuang (Cheedoong)	Tencent, Inc.

#include <iostream>
#include <map>
#include <string>
#include <cctype>

XML2JSON_API std::string xml2json(const char *xml_str);

#endif
