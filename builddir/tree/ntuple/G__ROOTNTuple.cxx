// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTNTuple
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "ROOT/RCluster.hxx"
#include "ROOT/RClusterPool.hxx"
#include "ROOT/RColumn.hxx"
#include "ROOT/RColumnElement.hxx"
#include "ROOT/RColumnModel.hxx"
#include "ROOT/REntry.hxx"
#include "ROOT/RField.hxx"
#include "ROOT/RFieldValue.hxx"
#include "ROOT/RFieldVisitor.hxx"
#include "ROOT/RMiniFile.hxx"
#include "ROOT/RNTuple.hxx"
#include "ROOT/RNTupleDescriptor.hxx"
#include "ROOT/RNTupleMerger.hxx"
#include "ROOT/RNTupleMetrics.hxx"
#include "ROOT/RNTupleModel.hxx"
#include "ROOT/RNTupleOptions.hxx"
#include "ROOT/RNTupleUtil.hxx"
#include "ROOT/RNTupleView.hxx"
#include "ROOT/RNTupleZip.hxx"
#include "ROOT/RPage.hxx"
#include "ROOT/RPageAllocator.hxx"
#include "ROOT/RPagePool.hxx"
#include "ROOT/RPageStorage.hxx"
#include "ROOT/RPageStorageFile.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRNTuple_Dictionary();
   static void ROOTcLcLExperimentalcLcLRNTuple_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRNTuple(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRNTuple(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRNTuple(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRNTuple(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRNTuple(void *p);
   static Long64_t merge_ROOTcLcLExperimentalcLcLRNTuple(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RNTuple*)
   {
      ::ROOT::Experimental::RNTuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RNTuple));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RNTuple", "ROOT/RMiniFile.hxx", 55,
                  typeid(::ROOT::Experimental::RNTuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRNTuple_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RNTuple) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRNTuple);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRNTuple);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRNTuple);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRNTuple);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRNTuple);
      instance.SetMerge(&merge_ROOTcLcLExperimentalcLcLRNTuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RNTuple*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RNTuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RNTuple*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRNTuple_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RNTuple*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRNTuple_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRNTuple_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRNTuple(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RNTuple : new ::ROOT::Experimental::RNTuple;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRNTuple(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RNTuple[nElements] : new ::ROOT::Experimental::RNTuple[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRNTuple(void *p) {
      delete ((::ROOT::Experimental::RNTuple*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRNTuple(void *p) {
      delete [] ((::ROOT::Experimental::RNTuple*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRNTuple(void *p) {
      typedef ::ROOT::Experimental::RNTuple current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t merge_ROOTcLcLExperimentalcLcLRNTuple(void *obj,TCollection *coll,TFileMergeInfo *info) {
      return ((::ROOT::Experimental::RNTuple*)obj)->Merge(coll,info);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RNTuple

namespace {
  void TriggerDictionaryInitialization_libROOTNTuple_Impl() {
    static const char* headers[] = {
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libROOTNTuple",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTNTuple_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTNTuple_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTNTuple() {
  TriggerDictionaryInitialization_libROOTNTuple_Impl();
}
