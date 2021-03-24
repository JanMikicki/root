# CMake generated Testfile for 
# Source directory: /home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE
# Build directory: /home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(pcre_test "sh" "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/pcre_test.sh")
set_tests_properties(pcre_test PROPERTIES  _BACKTRACE_TRIPLES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/CMakeLists.txt;817;ADD_TEST;/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/CMakeLists.txt;0;")
add_test(pcre_grep_test "sh" "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/pcre_grep_test.sh")
set_tests_properties(pcre_grep_test PROPERTIES  _BACKTRACE_TRIPLES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/CMakeLists.txt;833;ADD_TEST;/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/CMakeLists.txt;0;")
add_test(pcrecpp_test "pcrecpp_unittest")
set_tests_properties(pcrecpp_test PROPERTIES  _BACKTRACE_TRIPLES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/CMakeLists.txt;878;ADD_TEST;/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/CMakeLists.txt;0;")
add_test(pcre_scanner_test "pcre_scanner_unittest")
set_tests_properties(pcre_scanner_test PROPERTIES  _BACKTRACE_TRIPLES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/CMakeLists.txt;879;ADD_TEST;/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/CMakeLists.txt;0;")
add_test(pcre_stringpiece_test "pcre_stringpiece_unittest")
set_tests_properties(pcre_stringpiece_test PROPERTIES  _BACKTRACE_TRIPLES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/CMakeLists.txt;880;ADD_TEST;/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/CMakeLists.txt;0;")
