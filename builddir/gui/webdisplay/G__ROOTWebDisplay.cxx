// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTWebDisplay
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
#include "ROOT/RWebDisplayArgs.hxx"
#include "ROOT/RWebDisplayHandle.hxx"
#include "ROOT/RWebWindow.hxx"
#include "ROOT/RWebWindowsManager.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRWebDisplayArgs_Dictionary();
   static void ROOTcLcLExperimentalcLcLRWebDisplayArgs_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRWebDisplayArgs(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRWebDisplayArgs(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRWebDisplayArgs(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRWebDisplayArgs(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRWebDisplayArgs(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RWebDisplayArgs*)
   {
      ::ROOT::Experimental::RWebDisplayArgs *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RWebDisplayArgs));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RWebDisplayArgs", "ROOT/RWebDisplayArgs.hxx", 30,
                  typeid(::ROOT::Experimental::RWebDisplayArgs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRWebDisplayArgs_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RWebDisplayArgs) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRWebDisplayArgs);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRWebDisplayArgs);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRWebDisplayArgs);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRWebDisplayArgs);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRWebDisplayArgs);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RWebDisplayArgs*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RWebDisplayArgs*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebDisplayArgs*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRWebDisplayArgs_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebDisplayArgs*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRWebDisplayArgs_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRWebDisplayArgs_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRWebDisplayHandle_Dictionary();
   static void ROOTcLcLExperimentalcLcLRWebDisplayHandle_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRWebDisplayHandle(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRWebDisplayHandle(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRWebDisplayHandle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RWebDisplayHandle*)
   {
      ::ROOT::Experimental::RWebDisplayHandle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RWebDisplayHandle));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RWebDisplayHandle", "ROOT/RWebDisplayHandle.hxx", 25,
                  typeid(::ROOT::Experimental::RWebDisplayHandle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRWebDisplayHandle_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RWebDisplayHandle) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRWebDisplayHandle);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRWebDisplayHandle);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRWebDisplayHandle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RWebDisplayHandle*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RWebDisplayHandle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebDisplayHandle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRWebDisplayHandle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebDisplayHandle*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRWebDisplayHandle_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRWebDisplayHandle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRWebWindow_Dictionary();
   static void ROOTcLcLExperimentalcLcLRWebWindow_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRWebWindow(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRWebWindow(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRWebWindow(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRWebWindow(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRWebWindow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RWebWindow*)
   {
      ::ROOT::Experimental::RWebWindow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RWebWindow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RWebWindow", "ROOT/RWebWindow.hxx", 53,
                  typeid(::ROOT::Experimental::RWebWindow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRWebWindow_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RWebWindow) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRWebWindow);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRWebWindow);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRWebWindow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRWebWindow);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRWebWindow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RWebWindow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RWebWindow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebWindow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRWebWindow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebWindow*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRWebWindow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRWebWindow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRWebWindowsManager_Dictionary();
   static void ROOTcLcLExperimentalcLcLRWebWindowsManager_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRWebWindowsManager(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRWebWindowsManager(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRWebWindowsManager(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRWebWindowsManager(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRWebWindowsManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RWebWindowsManager*)
   {
      ::ROOT::Experimental::RWebWindowsManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RWebWindowsManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RWebWindowsManager", "ROOT/RWebWindowsManager.hxx", 31,
                  typeid(::ROOT::Experimental::RWebWindowsManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRWebWindowsManager_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RWebWindowsManager) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRWebWindowsManager);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRWebWindowsManager);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRWebWindowsManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRWebWindowsManager);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRWebWindowsManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RWebWindowsManager*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RWebWindowsManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebWindowsManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRWebWindowsManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebWindowsManager*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRWebWindowsManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRWebWindowsManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRWebDisplayArgs(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RWebDisplayArgs : new ::ROOT::Experimental::RWebDisplayArgs;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRWebDisplayArgs(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RWebDisplayArgs[nElements] : new ::ROOT::Experimental::RWebDisplayArgs[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRWebDisplayArgs(void *p) {
      delete ((::ROOT::Experimental::RWebDisplayArgs*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRWebDisplayArgs(void *p) {
      delete [] ((::ROOT::Experimental::RWebDisplayArgs*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRWebDisplayArgs(void *p) {
      typedef ::ROOT::Experimental::RWebDisplayArgs current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RWebDisplayArgs

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRWebDisplayHandle(void *p) {
      delete ((::ROOT::Experimental::RWebDisplayHandle*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRWebDisplayHandle(void *p) {
      delete [] ((::ROOT::Experimental::RWebDisplayHandle*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRWebDisplayHandle(void *p) {
      typedef ::ROOT::Experimental::RWebDisplayHandle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RWebDisplayHandle

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRWebWindow(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RWebWindow : new ::ROOT::Experimental::RWebWindow;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRWebWindow(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RWebWindow[nElements] : new ::ROOT::Experimental::RWebWindow[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRWebWindow(void *p) {
      delete ((::ROOT::Experimental::RWebWindow*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRWebWindow(void *p) {
      delete [] ((::ROOT::Experimental::RWebWindow*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRWebWindow(void *p) {
      typedef ::ROOT::Experimental::RWebWindow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RWebWindow

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRWebWindowsManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RWebWindowsManager : new ::ROOT::Experimental::RWebWindowsManager;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRWebWindowsManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RWebWindowsManager[nElements] : new ::ROOT::Experimental::RWebWindowsManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRWebWindowsManager(void *p) {
      delete ((::ROOT::Experimental::RWebWindowsManager*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRWebWindowsManager(void *p) {
      delete [] ((::ROOT::Experimental::RWebWindowsManager*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRWebWindowsManager(void *p) {
      typedef ::ROOT::Experimental::RWebWindowsManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RWebWindowsManager

namespace {
  void TriggerDictionaryInitialization_libROOTWebDisplay_Impl() {
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
      TROOT::RegisterModule("libROOTWebDisplay",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTWebDisplay_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTWebDisplay_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTWebDisplay() {
  TriggerDictionaryInitialization_libROOTWebDisplay_Impl();
}
