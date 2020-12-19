/*
 * API.h
 * HRVO Library
 *
 * Copyright 2009 University of North Carolina at Chapel Hill
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Please send all bug reports to <geom@cs.unc.edu>.
 *
 * The authors may be contacted via:
 *
 * Jamie Snape, Jur van den Berg, Stephen J. Guy, and Dinesh Manocha
 * Dept. of Computer Science
 * 201 S. Columbia St.
 * Frederick P. Brooks, Jr. Computer Science Bldg.
 * Chapel Hill, N.C. 27599-3175
 * United States of America
 *
 * <https://gamma.cs.unc.edu/HRVO/>
 */

/**
 * \file   API.h
 * \brief  Defines macros related to Microsoft Windows.
 */

#ifndef HRVO_API_H_
#define HRVO_API_H_

#ifdef _WIN32
#include <SDKDDKVer.h>
#define WIN32_LEAN_AND_MEAN
#define NOCOMM
#define NOIMAGE
#define NOIME
#define NOKANJI
#define NOMCX
#define NOMINMAX
#define NOPROXYSTUB
#define NOSERVICE
#define NOSOUND
#define NOTAPE
#define NORPC
#define _USE_MATH_DEFINES
#include <windows.h>
#endif

#ifdef HRVO_EXPORTS
#define HRVO_API __declspec(dllexport)
#elif defined(HRVO_IMPORTS)
#define HRVO_API __declspec(dllimport)
#else
#define HRVO_API
#endif

#endif /* HRVO_API_H_ */
