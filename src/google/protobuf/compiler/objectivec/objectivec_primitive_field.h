// Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.
// http://code.google.com/p/protobuf/
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

// Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.

#ifndef GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_PRIMITIVE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_PRIMITIVE_FIELD_H__

#include <map>
#include <string>
#include <google/protobuf/compiler/objectivec/objectivec_field.h>

namespace google {
namespace protobuf {
namespace compiler {
namespace objectivec {

class PrimitiveFieldGenerator : public FieldGenerator {
 public:
  explicit PrimitiveFieldGenerator(const FieldDescriptor* descriptor);
  ~PrimitiveFieldGenerator();

  void GenerateHasFieldHeader(io::Printer* printer) const;
  void GenerateFieldHeader(io::Printer* printer) const;
  void GenerateHasPropertyHeader(io::Printer* printer) const;
  void GeneratePropertyHeader(io::Printer* printer) const;
  void GenerateMembersHeader(io::Printer* printer) const;
  void GenerateBuilderMembersHeader(io::Printer* printer) const;
  void GenerateMergingCodeHeader(io::Printer* printer) const;
  void GenerateBuildingCodeHeader(io::Printer* printer) const;
  void GenerateParsingCodeHeader(io::Printer* printer) const;
  void GenerateSerializationCodeHeader(io::Printer* printer) const;
  void GenerateSerializedSizeCodeHeader(io::Printer* printer) const;
  
  void GenerateExtensionSource(io::Printer* printer) const;
  void GenerateSynthesizeSource(io::Printer* printer) const;
  void GenerateDeallocSource(io::Printer* printer) const;
  void GenerateInitializationSource(io::Printer* printer) const;
  void GenerateMembersSource(io::Printer* printer) const;
  void GenerateBuilderMembersSource(io::Printer* printer) const;
  void GenerateMergingCodeSource(io::Printer* printer) const;
  void GenerateBuildingCodeSource(io::Printer* printer) const;
  void GenerateParsingCodeSource(io::Printer* printer) const;
  void GenerateSerializationCodeSource(io::Printer* printer) const;
  void GenerateSerializedSizeCodeSource(io::Printer* printer) const;

  string GetBoxedType() const;

 private:
  const FieldDescriptor* descriptor_;
  map<string, string> variables_;

  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(PrimitiveFieldGenerator);
};

class RepeatedPrimitiveFieldGenerator : public FieldGenerator {
 public:
  explicit RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor);
  ~RepeatedPrimitiveFieldGenerator();

  void GenerateHasFieldHeader(io::Printer* printer) const;
  void GenerateFieldHeader(io::Printer* printer) const;
  void GenerateHasPropertyHeader(io::Printer* printer) const;
  void GeneratePropertyHeader(io::Printer* printer) const;
  void GenerateMembersHeader(io::Printer* printer) const;
  void GenerateBuilderMembersHeader(io::Printer* printer) const;
  void GenerateMergingCodeHeader(io::Printer* printer) const;
  void GenerateBuildingCodeHeader(io::Printer* printer) const;
  void GenerateParsingCodeHeader(io::Printer* printer) const;
  void GenerateSerializationCodeHeader(io::Printer* printer) const;
  void GenerateSerializedSizeCodeHeader(io::Printer* printer) const;

  void GenerateExtensionSource(io::Printer* printer) const;
  void GenerateSynthesizeSource(io::Printer* printer) const;
  void GenerateDeallocSource(io::Printer* printer) const;
  void GenerateInitializationSource(io::Printer* printer) const;
  void GenerateMembersSource(io::Printer* printer) const;
  void GenerateBuilderMembersSource(io::Printer* printer) const;
  void GenerateMergingCodeSource(io::Printer* printer) const;
  void GenerateBuildingCodeSource(io::Printer* printer) const;
  void GenerateParsingCodeSource(io::Printer* printer) const;
  void GenerateSerializationCodeSource(io::Printer* printer) const;
  void GenerateSerializedSizeCodeSource(io::Printer* printer) const;

  string GetBoxedType() const;

 private:
  const FieldDescriptor* descriptor_;
  map<string, string> variables_;

  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedPrimitiveFieldGenerator);
};
}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_PRIMITIVE_FIELD_H__
