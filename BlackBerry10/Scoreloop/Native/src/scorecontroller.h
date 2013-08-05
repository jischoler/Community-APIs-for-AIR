/*
* Copyright (c) 2013 WallWizz 
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
  implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/*
 * scorecontroller.h
 *
 *  Created on: Oct 13, 2012
 *      Author: caneraltinbasak
 */

#ifndef SCORECONTROLLER_H_
#define SCORECONTROLLER_H_
#include "sc_common.h"
FREObject initScoreController(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]);
FREObject submitScore(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]);
FREObject getScore(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]);

#endif /* SCORECONTROLLER_H_ */
