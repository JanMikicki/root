# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/diagoras/root_cern/root

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diagoras/root_cern/root/builddir

# Utility rule file for ClangDiagnosticGroups.

# Include the progress variables for this target.
include interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups.dir/progress.make

interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups: interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc


interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: interpreter/llvm/src/bin/clang-tblgen
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: interpreter/llvm/src/bin/clang-tblgen
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/Attr.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/AttrDocs.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/CommentNodes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DeclNodes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/Diagnostic.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticASTKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticAnalysisKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCategories.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommentKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCrossTUKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticDocs.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticDriverKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticFrontendKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticLexKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticParseKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticRefactoringKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticSemaKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticSerializationKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/StmtNodes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/arm_fp16.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/arm_neon.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/arm_neon_incl.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/CodeGen/SDNodeProperties.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/CodeGen/ValueTypes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/Attributes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/Intrinsics.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsAArch64.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsAMDGPU.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsARM.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsBPF.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsHexagon.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsMips.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsNVVM.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsPowerPC.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsRISCV.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsSystemZ.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsWebAssembly.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsX86.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsXCore.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Option/OptParser.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/TableGen/SearchableTable.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/GenericOpcodes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/GlobalISel/RegisterBank.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/GlobalISel/SelectionDAGCompat.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/GlobalISel/Target.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/Target.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/TargetCallingConv.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/TargetInstrPredicate.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/TargetItinerary.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/TargetPfmCounters.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/TargetSchedule.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/include/llvm/Target/TargetSelectionDAG.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc: ../interpreter/llvm/src/tools/clang/include/clang/Basic/Diagnostic.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building DiagnosticGroups.inc..."
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/include/clang/Basic && ../../../../../bin/clang-tblgen -gen-clang-diag-groups -I /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/include/clang/Basic -I /home/diagoras/root_cern/root/interpreter/llvm/src/include /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/include/clang/Basic/Diagnostic.td -o /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc

ClangDiagnosticGroups: interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups
ClangDiagnosticGroups: interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.inc
ClangDiagnosticGroups: interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups.dir/build.make

.PHONY : ClangDiagnosticGroups

# Rule to build all files generated by this target.
interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups.dir/build: ClangDiagnosticGroups

.PHONY : interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups.dir/build

interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/include/clang/Basic && $(CMAKE_COMMAND) -P CMakeFiles/ClangDiagnosticGroups.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups.dir/clean

interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/include/clang/Basic /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/include/clang/Basic /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticGroups.dir/depend

