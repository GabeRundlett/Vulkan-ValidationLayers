#include <stdint.h>
#pragma once

// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See generate_spirv.py for modifications

/***************************************************************************
*
* Copyright (c) 2021-2022 The Khronos Group Inc.
* Copyright (c) 2021-2022 Valve Corporation
* Copyright (c) 2021-2022 LunarG, Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Author: Tony Barbour <tony@lunarg.com>
* Author: Spencer Fricke <spencerfricke@gmail.com>
*
****************************************************************************/

// disassembled SPIR-V
#if 0
// Module Version 10000
// Generated by (magic number): 8000a
// Id's are bound by 115

                              Capability Shader
               1:             ExtInstImport  "GLSL.std.450"
                              MemoryModel Logical GLSL450
                              EntryPoint GLCompute 4  "main"
                              ExecutionMode 4 LocalSize 1 1 1
                              Source GLSL 450
                              SourceExtension  "GL_GOOGLE_cpp_style_line_directive"
                              SourceExtension  "GL_GOOGLE_include_directive"
                              Name 4  "main"
                              Name 11  "valErrorOut(u1;u1;"
                              Name 9  "error"
                              Name 10  "count"
                              Name 13  "vo_idx"
                              Name 15  "OutputBuffer"
                              MemberName 15(OutputBuffer) 0  "output_buffer_count"
                              MemberName 15(OutputBuffer) 1  "output_buffer"
                              Name 17  ""
                              Name 53  "indirect_x"
                              Name 55  "IndirectBuffer"
                              MemberName 55(IndirectBuffer) 0  "indirect_buffer"
                              Name 57  ""
                              Name 58  "UniformInfo"
                              MemberName 58(UniformInfo) 0  "limit_x"
                              MemberName 58(UniformInfo) 1  "limit_y"
                              MemberName 58(UniformInfo) 2  "limit_z"
                              MemberName 58(UniformInfo) 3  "indirect_x_offset"
                              Name 60  "u_info"
                              Name 67  "indirect_y"
                              Name 73  "indirect_z"
                              Name 85  "param"
                              Name 86  "param"
                              Name 96  "param"
                              Name 97  "param"
                              Name 109  "param"
                              Name 110  "param"
                              Decorate 14 ArrayStride 4
                              MemberDecorate 15(OutputBuffer) 0 Offset 0
                              MemberDecorate 15(OutputBuffer) 1 Offset 4
                              Decorate 15(OutputBuffer) BufferBlock
                              Decorate 17 DescriptorSet 0
                              Decorate 17 Binding 0
                              Decorate 54 ArrayStride 4
                              MemberDecorate 55(IndirectBuffer) 0 Offset 0
                              Decorate 55(IndirectBuffer) BufferBlock
                              Decorate 57 DescriptorSet 0
                              Decorate 57 Binding 1
                              MemberDecorate 58(UniformInfo) 0 Offset 0
                              MemberDecorate 58(UniformInfo) 1 Offset 4
                              MemberDecorate 58(UniformInfo) 2 Offset 8
                              MemberDecorate 58(UniformInfo) 3 Offset 12
                              Decorate 58(UniformInfo) Block
                              Decorate 114 BuiltIn WorkgroupSize
               2:             TypeVoid
               3:             TypeFunction 2
               6:             TypeInt 32 0
               7:             TypePointer Function 6(int)
               8:             TypeFunction 2 7(ptr) 7(ptr)
              14:             TypeRuntimeArray 6(int)
15(OutputBuffer):             TypeStruct 6(int) 14
              16:             TypePointer Uniform 15(OutputBuffer)
              17:     16(ptr) Variable Uniform
              18:             TypeInt 32 1
              19:     18(int) Constant 0
              20:             TypePointer Uniform 6(int)
              22:      6(int) Constant 10
              23:      6(int) Constant 1
              24:      6(int) Constant 0
              31:             TypeBool
              36:     18(int) Constant 1
              38:      6(int) Constant 7
              40:      6(int) Constant 9
              49:      6(int) Constant 2
              54:             TypeRuntimeArray 6(int)
55(IndirectBuffer):             TypeStruct 54
              56:             TypePointer Uniform 55(IndirectBuffer)
              57:     56(ptr) Variable Uniform
 58(UniformInfo):             TypeStruct 6(int) 6(int) 6(int) 6(int)
              59:             TypePointer PushConstant 58(UniformInfo)
      60(u_info):     59(ptr) Variable PushConstant
              61:     18(int) Constant 3
              62:             TypePointer PushConstant 6(int)
             102:     18(int) Constant 2
             108:      6(int) Constant 3
             113:             TypeVector 6(int) 3
             114:  113(ivec3) ConstantComposite 23 23 23
         4(main):           2 Function None 3
               5:             Label
  53(indirect_x):      7(ptr) Variable Function
  67(indirect_y):      7(ptr) Variable Function
  73(indirect_z):      7(ptr) Variable Function
       85(param):      7(ptr) Variable Function
       86(param):      7(ptr) Variable Function
       96(param):      7(ptr) Variable Function
       97(param):      7(ptr) Variable Function
      109(param):      7(ptr) Variable Function
      110(param):      7(ptr) Variable Function
              63:     62(ptr) AccessChain 60(u_info) 61
              64:      6(int) Load 63
              65:     20(ptr) AccessChain 57 19 64
              66:      6(int) Load 65
                              Store 53(indirect_x) 66
              68:     62(ptr) AccessChain 60(u_info) 61
              69:      6(int) Load 68
              70:      6(int) IAdd 69 23
              71:     20(ptr) AccessChain 57 19 70
              72:      6(int) Load 71
                              Store 67(indirect_y) 72
              74:     62(ptr) AccessChain 60(u_info) 61
              75:      6(int) Load 74
              76:      6(int) IAdd 75 49
              77:     20(ptr) AccessChain 57 19 76
              78:      6(int) Load 77
                              Store 73(indirect_z) 78
              79:      6(int) Load 53(indirect_x)
              80:     62(ptr) AccessChain 60(u_info) 19
              81:      6(int) Load 80
              82:    31(bool) UGreaterThan 79 81
                              SelectionMerge 84 None
                              BranchConditional 82 83 89
              83:               Label
                                Store 85(param) 23
              87:      6(int)   Load 53(indirect_x)
                                Store 86(param) 87
              88:           2   FunctionCall 11(valErrorOut(u1;u1;) 85(param) 86(param)
                                Branch 84
              89:               Label
              90:      6(int)   Load 67(indirect_y)
              91:     62(ptr)   AccessChain 60(u_info) 36
              92:      6(int)   Load 91
              93:    31(bool)   UGreaterThan 90 92
                                SelectionMerge 95 None
                                BranchConditional 93 94 100
              94:                 Label
                                  Store 96(param) 49
              98:      6(int)     Load 67(indirect_y)
                                  Store 97(param) 98
              99:           2     FunctionCall 11(valErrorOut(u1;u1;) 96(param) 97(param)
                                  Branch 95
             100:                 Label
             101:      6(int)     Load 73(indirect_z)
             103:     62(ptr)     AccessChain 60(u_info) 102
             104:      6(int)     Load 103
             105:    31(bool)     UGreaterThan 101 104
                                  SelectionMerge 107 None
                                  BranchConditional 105 106 107
             106:                   Label
                                    Store 109(param) 108
             111:      6(int)       Load 73(indirect_z)
                                    Store 110(param) 111
             112:           2       FunctionCall 11(valErrorOut(u1;u1;) 109(param) 110(param)
                                    Branch 107
             107:                 Label
                                  Branch 95
              95:               Label
                                Branch 84
              84:             Label
                              Return
                              FunctionEnd
11(valErrorOut(u1;u1;):           2 Function None 8
        9(error):      7(ptr) FunctionParameter
       10(count):      7(ptr) FunctionParameter
              12:             Label
      13(vo_idx):      7(ptr) Variable Function
              21:     20(ptr) AccessChain 17 19
              25:      6(int) AtomicIAdd 21 23 24 22
                              Store 13(vo_idx) 25
              26:      6(int) Load 13(vo_idx)
              27:      6(int) IAdd 26 22
              28:      6(int) ArrayLength 17 1
              29:     18(int) Bitcast 28
              30:      6(int) Bitcast 29
              32:    31(bool) UGreaterThan 27 30
                              SelectionMerge 34 None
                              BranchConditional 32 33 34
              33:               Label
                                Return
              34:             Label
              37:      6(int) Load 13(vo_idx)
              39:      6(int) IAdd 37 38
              41:     20(ptr) AccessChain 17 36 39
                              Store 41 40
              42:      6(int) Load 13(vo_idx)
              43:      6(int) IAdd 42 38
              44:      6(int) IAdd 43 23
              45:      6(int) Load 9(error)
              46:     20(ptr) AccessChain 17 36 44
                              Store 46 45
              47:      6(int) Load 13(vo_idx)
              48:      6(int) IAdd 47 38
              50:      6(int) IAdd 48 49
              51:      6(int) Load 10(count)
              52:     20(ptr) AccessChain 17 36 50
                              Store 52 51
                              Return
                              FunctionEnd
#endif

static const uint32_t gpu_pre_dispatch_comp[798] = {
    0x07230203, 0x00010000, 0x0008000a, 0x00000073,
    0x00000000, 0x00020011, 0x00000001, 0x0006000b,
    0x00000001, 0x4c534c47, 0x6474732e, 0x3035342e,
    0x00000000, 0x0003000e, 0x00000000, 0x00000001,
    0x0005000f, 0x00000005, 0x00000004, 0x6e69616d,
    0x00000000, 0x00060010, 0x00000004, 0x00000011,
    0x00000001, 0x00000001, 0x00000001, 0x00030003,
    0x00000002, 0x000001c2, 0x000a0004, 0x475f4c47,
    0x4c474f4f, 0x70635f45, 0x74735f70, 0x5f656c79,
    0x656e696c, 0x7269645f, 0x69746365, 0x00006576,
    0x00080004, 0x475f4c47, 0x4c474f4f, 0x6e695f45,
    0x64756c63, 0x69645f65, 0x74636572, 0x00657669,
    0x00040005, 0x00000004, 0x6e69616d, 0x00000000,
    0x00070005, 0x0000000b, 0x456c6176, 0x726f7272,
    0x2874754f, 0x753b3175, 0x00003b31, 0x00040005,
    0x00000009, 0x6f727265, 0x00000072, 0x00040005,
    0x0000000a, 0x6e756f63, 0x00000074, 0x00040005,
    0x0000000d, 0x695f6f76, 0x00007864, 0x00060005,
    0x0000000f, 0x7074754f, 0x75427475, 0x72656666,
    0x00000000, 0x00080006, 0x0000000f, 0x00000000,
    0x7074756f, 0x625f7475, 0x65666675, 0x6f635f72,
    0x00746e75, 0x00070006, 0x0000000f, 0x00000001,
    0x7074756f, 0x625f7475, 0x65666675, 0x00000072,
    0x00030005, 0x00000011, 0x00000000, 0x00050005,
    0x00000035, 0x69646e69, 0x74636572, 0x0000785f,
    0x00060005, 0x00000037, 0x69646e49, 0x74636572,
    0x66667542, 0x00007265, 0x00070006, 0x00000037,
    0x00000000, 0x69646e69, 0x74636572, 0x6675625f,
    0x00726566, 0x00030005, 0x00000039, 0x00000000,
    0x00050005, 0x0000003a, 0x66696e55, 0x496d726f,
    0x006f666e, 0x00050006, 0x0000003a, 0x00000000,
    0x696d696c, 0x00785f74, 0x00050006, 0x0000003a,
    0x00000001, 0x696d696c, 0x00795f74, 0x00050006,
    0x0000003a, 0x00000002, 0x696d696c, 0x007a5f74,
    0x00080006, 0x0000003a, 0x00000003, 0x69646e69,
    0x74636572, 0x6f5f785f, 0x65736666, 0x00000074,
    0x00040005, 0x0000003c, 0x6e695f75, 0x00006f66,
    0x00050005, 0x00000043, 0x69646e69, 0x74636572,
    0x0000795f, 0x00050005, 0x00000049, 0x69646e69,
    0x74636572, 0x00007a5f, 0x00040005, 0x00000055,
    0x61726170, 0x0000006d, 0x00040005, 0x00000056,
    0x61726170, 0x0000006d, 0x00040005, 0x00000060,
    0x61726170, 0x0000006d, 0x00040005, 0x00000061,
    0x61726170, 0x0000006d, 0x00040005, 0x0000006d,
    0x61726170, 0x0000006d, 0x00040005, 0x0000006e,
    0x61726170, 0x0000006d, 0x00040047, 0x0000000e,
    0x00000006, 0x00000004, 0x00050048, 0x0000000f,
    0x00000000, 0x00000023, 0x00000000, 0x00050048,
    0x0000000f, 0x00000001, 0x00000023, 0x00000004,
    0x00030047, 0x0000000f, 0x00000003, 0x00040047,
    0x00000011, 0x00000022, 0x00000000, 0x00040047,
    0x00000011, 0x00000021, 0x00000000, 0x00040047,
    0x00000036, 0x00000006, 0x00000004, 0x00050048,
    0x00000037, 0x00000000, 0x00000023, 0x00000000,
    0x00030047, 0x00000037, 0x00000003, 0x00040047,
    0x00000039, 0x00000022, 0x00000000, 0x00040047,
    0x00000039, 0x00000021, 0x00000001, 0x00050048,
    0x0000003a, 0x00000000, 0x00000023, 0x00000000,
    0x00050048, 0x0000003a, 0x00000001, 0x00000023,
    0x00000004, 0x00050048, 0x0000003a, 0x00000002,
    0x00000023, 0x00000008, 0x00050048, 0x0000003a,
    0x00000003, 0x00000023, 0x0000000c, 0x00030047,
    0x0000003a, 0x00000002, 0x00040047, 0x00000072,
    0x0000000b, 0x00000019, 0x00020013, 0x00000002,
    0x00030021, 0x00000003, 0x00000002, 0x00040015,
    0x00000006, 0x00000020, 0x00000000, 0x00040020,
    0x00000007, 0x00000007, 0x00000006, 0x00050021,
    0x00000008, 0x00000002, 0x00000007, 0x00000007,
    0x0003001d, 0x0000000e, 0x00000006, 0x0004001e,
    0x0000000f, 0x00000006, 0x0000000e, 0x00040020,
    0x00000010, 0x00000002, 0x0000000f, 0x0004003b,
    0x00000010, 0x00000011, 0x00000002, 0x00040015,
    0x00000012, 0x00000020, 0x00000001, 0x0004002b,
    0x00000012, 0x00000013, 0x00000000, 0x00040020,
    0x00000014, 0x00000002, 0x00000006, 0x0004002b,
    0x00000006, 0x00000016, 0x0000000a, 0x0004002b,
    0x00000006, 0x00000017, 0x00000001, 0x0004002b,
    0x00000006, 0x00000018, 0x00000000, 0x00020014,
    0x0000001f, 0x0004002b, 0x00000012, 0x00000024,
    0x00000001, 0x0004002b, 0x00000006, 0x00000026,
    0x00000007, 0x0004002b, 0x00000006, 0x00000028,
    0x00000009, 0x0004002b, 0x00000006, 0x00000031,
    0x00000002, 0x0003001d, 0x00000036, 0x00000006,
    0x0003001e, 0x00000037, 0x00000036, 0x00040020,
    0x00000038, 0x00000002, 0x00000037, 0x0004003b,
    0x00000038, 0x00000039, 0x00000002, 0x0006001e,
    0x0000003a, 0x00000006, 0x00000006, 0x00000006,
    0x00000006, 0x00040020, 0x0000003b, 0x00000009,
    0x0000003a, 0x0004003b, 0x0000003b, 0x0000003c,
    0x00000009, 0x0004002b, 0x00000012, 0x0000003d,
    0x00000003, 0x00040020, 0x0000003e, 0x00000009,
    0x00000006, 0x0004002b, 0x00000012, 0x00000066,
    0x00000002, 0x0004002b, 0x00000006, 0x0000006c,
    0x00000003, 0x00040017, 0x00000071, 0x00000006,
    0x00000003, 0x0006002c, 0x00000071, 0x00000072,
    0x00000017, 0x00000017, 0x00000017, 0x00050036,
    0x00000002, 0x00000004, 0x00000000, 0x00000003,
    0x000200f8, 0x00000005, 0x0004003b, 0x00000007,
    0x00000035, 0x00000007, 0x0004003b, 0x00000007,
    0x00000043, 0x00000007, 0x0004003b, 0x00000007,
    0x00000049, 0x00000007, 0x0004003b, 0x00000007,
    0x00000055, 0x00000007, 0x0004003b, 0x00000007,
    0x00000056, 0x00000007, 0x0004003b, 0x00000007,
    0x00000060, 0x00000007, 0x0004003b, 0x00000007,
    0x00000061, 0x00000007, 0x0004003b, 0x00000007,
    0x0000006d, 0x00000007, 0x0004003b, 0x00000007,
    0x0000006e, 0x00000007, 0x00050041, 0x0000003e,
    0x0000003f, 0x0000003c, 0x0000003d, 0x0004003d,
    0x00000006, 0x00000040, 0x0000003f, 0x00060041,
    0x00000014, 0x00000041, 0x00000039, 0x00000013,
    0x00000040, 0x0004003d, 0x00000006, 0x00000042,
    0x00000041, 0x0003003e, 0x00000035, 0x00000042,
    0x00050041, 0x0000003e, 0x00000044, 0x0000003c,
    0x0000003d, 0x0004003d, 0x00000006, 0x00000045,
    0x00000044, 0x00050080, 0x00000006, 0x00000046,
    0x00000045, 0x00000017, 0x00060041, 0x00000014,
    0x00000047, 0x00000039, 0x00000013, 0x00000046,
    0x0004003d, 0x00000006, 0x00000048, 0x00000047,
    0x0003003e, 0x00000043, 0x00000048, 0x00050041,
    0x0000003e, 0x0000004a, 0x0000003c, 0x0000003d,
    0x0004003d, 0x00000006, 0x0000004b, 0x0000004a,
    0x00050080, 0x00000006, 0x0000004c, 0x0000004b,
    0x00000031, 0x00060041, 0x00000014, 0x0000004d,
    0x00000039, 0x00000013, 0x0000004c, 0x0004003d,
    0x00000006, 0x0000004e, 0x0000004d, 0x0003003e,
    0x00000049, 0x0000004e, 0x0004003d, 0x00000006,
    0x0000004f, 0x00000035, 0x00050041, 0x0000003e,
    0x00000050, 0x0000003c, 0x00000013, 0x0004003d,
    0x00000006, 0x00000051, 0x00000050, 0x000500ac,
    0x0000001f, 0x00000052, 0x0000004f, 0x00000051,
    0x000300f7, 0x00000054, 0x00000000, 0x000400fa,
    0x00000052, 0x00000053, 0x00000059, 0x000200f8,
    0x00000053, 0x0003003e, 0x00000055, 0x00000017,
    0x0004003d, 0x00000006, 0x00000057, 0x00000035,
    0x0003003e, 0x00000056, 0x00000057, 0x00060039,
    0x00000002, 0x00000058, 0x0000000b, 0x00000055,
    0x00000056, 0x000200f9, 0x00000054, 0x000200f8,
    0x00000059, 0x0004003d, 0x00000006, 0x0000005a,
    0x00000043, 0x00050041, 0x0000003e, 0x0000005b,
    0x0000003c, 0x00000024, 0x0004003d, 0x00000006,
    0x0000005c, 0x0000005b, 0x000500ac, 0x0000001f,
    0x0000005d, 0x0000005a, 0x0000005c, 0x000300f7,
    0x0000005f, 0x00000000, 0x000400fa, 0x0000005d,
    0x0000005e, 0x00000064, 0x000200f8, 0x0000005e,
    0x0003003e, 0x00000060, 0x00000031, 0x0004003d,
    0x00000006, 0x00000062, 0x00000043, 0x0003003e,
    0x00000061, 0x00000062, 0x00060039, 0x00000002,
    0x00000063, 0x0000000b, 0x00000060, 0x00000061,
    0x000200f9, 0x0000005f, 0x000200f8, 0x00000064,
    0x0004003d, 0x00000006, 0x00000065, 0x00000049,
    0x00050041, 0x0000003e, 0x00000067, 0x0000003c,
    0x00000066, 0x0004003d, 0x00000006, 0x00000068,
    0x00000067, 0x000500ac, 0x0000001f, 0x00000069,
    0x00000065, 0x00000068, 0x000300f7, 0x0000006b,
    0x00000000, 0x000400fa, 0x00000069, 0x0000006a,
    0x0000006b, 0x000200f8, 0x0000006a, 0x0003003e,
    0x0000006d, 0x0000006c, 0x0004003d, 0x00000006,
    0x0000006f, 0x00000049, 0x0003003e, 0x0000006e,
    0x0000006f, 0x00060039, 0x00000002, 0x00000070,
    0x0000000b, 0x0000006d, 0x0000006e, 0x000200f9,
    0x0000006b, 0x000200f8, 0x0000006b, 0x000200f9,
    0x0000005f, 0x000200f8, 0x0000005f, 0x000200f9,
    0x00000054, 0x000200f8, 0x00000054, 0x000100fd,
    0x00010038, 0x00050036, 0x00000002, 0x0000000b,
    0x00000000, 0x00000008, 0x00030037, 0x00000007,
    0x00000009, 0x00030037, 0x00000007, 0x0000000a,
    0x000200f8, 0x0000000c, 0x0004003b, 0x00000007,
    0x0000000d, 0x00000007, 0x00050041, 0x00000014,
    0x00000015, 0x00000011, 0x00000013, 0x000700ea,
    0x00000006, 0x00000019, 0x00000015, 0x00000017,
    0x00000018, 0x00000016, 0x0003003e, 0x0000000d,
    0x00000019, 0x0004003d, 0x00000006, 0x0000001a,
    0x0000000d, 0x00050080, 0x00000006, 0x0000001b,
    0x0000001a, 0x00000016, 0x00050044, 0x00000006,
    0x0000001c, 0x00000011, 0x00000001, 0x0004007c,
    0x00000012, 0x0000001d, 0x0000001c, 0x0004007c,
    0x00000006, 0x0000001e, 0x0000001d, 0x000500ac,
    0x0000001f, 0x00000020, 0x0000001b, 0x0000001e,
    0x000300f7, 0x00000022, 0x00000000, 0x000400fa,
    0x00000020, 0x00000021, 0x00000022, 0x000200f8,
    0x00000021, 0x000100fd, 0x000200f8, 0x00000022,
    0x0004003d, 0x00000006, 0x00000025, 0x0000000d,
    0x00050080, 0x00000006, 0x00000027, 0x00000025,
    0x00000026, 0x00060041, 0x00000014, 0x00000029,
    0x00000011, 0x00000024, 0x00000027, 0x0003003e,
    0x00000029, 0x00000028, 0x0004003d, 0x00000006,
    0x0000002a, 0x0000000d, 0x00050080, 0x00000006,
    0x0000002b, 0x0000002a, 0x00000026, 0x00050080,
    0x00000006, 0x0000002c, 0x0000002b, 0x00000017,
    0x0004003d, 0x00000006, 0x0000002d, 0x00000009,
    0x00060041, 0x00000014, 0x0000002e, 0x00000011,
    0x00000024, 0x0000002c, 0x0003003e, 0x0000002e,
    0x0000002d, 0x0004003d, 0x00000006, 0x0000002f,
    0x0000000d, 0x00050080, 0x00000006, 0x00000030,
    0x0000002f, 0x00000026, 0x00050080, 0x00000006,
    0x00000032, 0x00000030, 0x00000031, 0x0004003d,
    0x00000006, 0x00000033, 0x0000000a, 0x00060041,
    0x00000014, 0x00000034, 0x00000011, 0x00000024,
    0x00000032, 0x0003003e, 0x00000034, 0x00000033,
    0x000100fd, 0x00010038,
};
