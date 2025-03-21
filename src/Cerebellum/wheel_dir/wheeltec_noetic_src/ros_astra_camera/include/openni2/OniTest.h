/*****************************************************************************
*                                                                            *
*  OpenNI 2.x Alpha                                                          *
*  Copyright (C) 2012 PrimeSense Ltd.                                        *
*                                                                            *
*  This file is part of OpenNI.                                              *
*                                                                            *
*  Licensed under the Apache License, Version 2.0 (the "License");           *
*  you may not use this file except in compliance with the License.          *
*  You may obtain a copy of the License at                                   *
*                                                                            *
*      http://www.apache.org/licenses/LICENSE-2.0                            *
*                                                                            *
*  Unless required by applicable law or agreed to in writing, software       *
*  distributed under the License is distributed on an "AS IS" BASIS,         *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  *
*  See the License for the specific language governing permissions and       *
*  limitations under the License.                                            *
*                                                                            *
*****************************************************************************/
#ifndef ONITEST_H
#define ONITEST_H

#define TEST_DEVICE_NAME "Test" // use with device.open() to create a test device

/**
* Additional commands for Test device streams
*/
enum
{
    TEST_COMMAND_ISSUE_FRAME = 0xFFFF0001, // TestCommandIssueFrame
};

typedef struct TestCommandIssueFrame
{
    uint64_t timestamp;
    void* data;
} TestCommandIssueFrame;

#endif // ONITEST_H
