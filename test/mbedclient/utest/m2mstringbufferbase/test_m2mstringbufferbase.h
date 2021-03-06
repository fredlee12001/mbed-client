/*
 * Copyright (c) 2016 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef TEST_M2M_STRIGBUFFERBASE_H
#define TEST_M2M_STRIGBUFFERBASE_H

#include "m2mstringbufferbase.h"

class Test_M2Mstringbufferbase : StringBufferBase
{
public:
    Test_M2Mstringbufferbase();

    virtual ~Test_M2Mstringbufferbase();

    void test_ensure_space();
    void test_append();
    void test_append_int();
    void test_find_last_of();

};


#endif // TEST_M2M_STRIGBUFFERBASE_H
