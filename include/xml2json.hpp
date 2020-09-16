#ifndef XML2JSON_HPP_INCLUDED
#define XML2JSON_HPP_INCLUDED

#define XML2JSON_API __attribute__((visibility("default")))

// Copyright (C) 2015 Alan Zhuang (Cheedoong)	HKUST.  [Updated to the latest version of rapidjson]
// Copyright (C) 2013 Alan Zhuang (Cheedoong)	Tencent, Inc.

#include <iostream>
#include <map>
#include <string>
#include <cctype>

#include "rapidxml/rapidxml.hpp"
#include "rapidxml/rapidxml_utils.hpp"
#include "rapidxml/rapidxml_print.hpp"

#include "rapidjson/document.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/encodedstream.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/reader.h"
#include "rapidjson/writer.h"
#include "rapidjson/filereadstream.h"
#include "rapidjson/filewritestream.h"
#include "rapidjson/error/en.h"

// Avoided any namespace pollution.
bool xml2json_has_digits_only(const char * input, bool *hasDecimal);
void xml2json_to_array_form(const char *name, rapidjson::Value &jsvalue, rapidjson::Value &jsvalue_chd, rapidjson::Document::AllocatorType& allocator);
void xml2json_add_attributes(rapidxml::xml_node<> *xmlnode, rapidjson::Value &jsvalue, rapidjson::Document::AllocatorType& allocator);
void xml2json_traverse_node(rapidxml::xml_node<> *xmlnode, rapidjson::Value &jsvalue, rapidjson::Document::AllocatorType& allocator);

XML2JSON_API std::string xml2json(const char *xml_str);

#endif
