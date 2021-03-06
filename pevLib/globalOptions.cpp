//          Copyright Billy O'Neal 2012
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
//
// globalOptions::cpp -- Gives the global data structure an
// implementation file to use.
#include "pch.hpp"
#include <vector>
#include <string>
#include <limits>
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include "globalOptions.h"
#include "regex.h"

std::vector<std::shared_ptr<regexClass> > globalOptions::regularExpressions;
std::shared_ptr<criterion>  globalOptions::logicalTree;
bool globalOptions::debug = false;
bool globalOptions::fullPath = false;
bool globalOptions::summary = false;
bool globalOptions::noSubDirectories = false;
std::wstring globalOptions::displaySpecification = L"#f";
globalOptions::sorts globalOptions::sortMethod[6] = {globalOptions::NONE, globalOptions::NONE, globalOptions::NONE, globalOptions::NONE, globalOptions::NONE, globalOptions::NONE} ;
globalOptions::encodings globalOptions::encoding = globalOptions::ENCODING_TYPE_ACP;
unsigned __int64 globalOptions::lineLimit = static_cast <unsigned int> (-1);
unsigned __int32 globalOptions::timeout = std::numeric_limits<unsigned __int32>::max();
bool globalOptions::cancel = false;
unsigned __int64 globalOptions::totalEntries = 0;
unsigned __int64 globalOptions::visibleEntries = 0;
unsigned __int64 globalOptions::totalSize = 0;
unsigned __int64 globalOptions::visibleFiles = 0;
unsigned __int64 globalOptions::visibleDirs = 0;
unsigned __int64 globalOptions::blocks = 0;
std::vector<std::wstring> globalOptions::fileList;
bool globalOptions::expandRegex = false;
bool globalOptions::disable64Redirector = true;
std::wstring globalOptions::zipFileName;
bool globalOptions::killProc = false;