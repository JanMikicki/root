// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTBrowserv7
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
#include "ROOT/RBrowser.hxx"
#include "ROOT/RBrowserData.hxx"
#include "ROOT/RBrowserReply.hxx"
#include "ROOT/RBrowserRequest.hxx"
#include "ROOT/RFileDialog.hxx"
#include "ROOT/RWebBrowserImp.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRBrowserRequest_Dictionary();
   static void ROOTcLcLExperimentalcLcLRBrowserRequest_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRBrowserRequest(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRBrowserRequest(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRBrowserRequest(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRBrowserRequest(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRBrowserRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RBrowserRequest*)
   {
      ::ROOT::Experimental::RBrowserRequest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RBrowserRequest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RBrowserRequest", "ROOT/RBrowserRequest.hxx", 27,
                  typeid(::ROOT::Experimental::RBrowserRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRBrowserRequest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RBrowserRequest) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRBrowserRequest);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRBrowserRequest);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRBrowserRequest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRBrowserRequest);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRBrowserRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RBrowserRequest*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RBrowserRequest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RBrowserRequest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRBrowserRequest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RBrowserRequest*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRBrowserRequest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRBrowserRequest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRBrowserReply_Dictionary();
   static void ROOTcLcLExperimentalcLcLRBrowserReply_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRBrowserReply(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRBrowserReply(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRBrowserReply(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRBrowserReply(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRBrowserReply(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RBrowserReply*)
   {
      ::ROOT::Experimental::RBrowserReply *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RBrowserReply));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RBrowserReply", "ROOT/RBrowserReply.hxx", 28,
                  typeid(::ROOT::Experimental::RBrowserReply), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRBrowserReply_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RBrowserReply) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRBrowserReply);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRBrowserReply);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRBrowserReply);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRBrowserReply);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRBrowserReply);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RBrowserReply*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RBrowserReply*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RBrowserReply*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRBrowserReply_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RBrowserReply*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRBrowserReply_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRBrowserReply_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRBrowserData_Dictionary();
   static void ROOTcLcLExperimentalcLcLRBrowserData_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRBrowserData(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRBrowserData(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRBrowserData(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRBrowserData(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRBrowserData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RBrowserData*)
   {
      ::ROOT::Experimental::RBrowserData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RBrowserData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RBrowserData", "ROOT/RBrowserData.hxx", 34,
                  typeid(::ROOT::Experimental::RBrowserData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRBrowserData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RBrowserData) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRBrowserData);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRBrowserData);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRBrowserData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRBrowserData);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRBrowserData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RBrowserData*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RBrowserData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RBrowserData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRBrowserData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RBrowserData*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRBrowserData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRBrowserData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRBrowser_Dictionary();
   static void ROOTcLcLExperimentalcLcLRBrowser_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRBrowser(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRBrowser(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRBrowser(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRBrowser(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRBrowser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RBrowser*)
   {
      ::ROOT::Experimental::RBrowser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RBrowser));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RBrowser", "ROOT/RBrowser.hxx", 27,
                  typeid(::ROOT::Experimental::RBrowser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRBrowser_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RBrowser) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRBrowser);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRBrowser);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRBrowser);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRBrowser);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RBrowser*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RBrowser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RBrowser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRBrowser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RBrowser*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRBrowser_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRBrowser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFileDialog_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFileDialog_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFileDialog(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRFileDialog(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFileDialog(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFileDialog(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFileDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFileDialog*)
   {
      ::ROOT::Experimental::RFileDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFileDialog));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFileDialog", "ROOT/RFileDialog.hxx", 38,
                  typeid(::ROOT::Experimental::RFileDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFileDialog_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFileDialog) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFileDialog);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFileDialog);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFileDialog);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFileDialog);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFileDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFileDialog*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RFileDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RFileDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFileDialog_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RFileDialog*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRFileDialog_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFileDialog_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLRWebBrowserImp(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRWebBrowserImp(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRWebBrowserImp(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRWebBrowserImp(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRWebBrowserImp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RWebBrowserImp*)
   {
      ::ROOT::Experimental::RWebBrowserImp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::RWebBrowserImp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RWebBrowserImp", ::ROOT::Experimental::RWebBrowserImp::Class_Version(), "ROOT/RWebBrowserImp.hxx", 23,
                  typeid(::ROOT::Experimental::RWebBrowserImp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::RWebBrowserImp::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RWebBrowserImp) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRWebBrowserImp);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRWebBrowserImp);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRWebBrowserImp);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRWebBrowserImp);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRWebBrowserImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RWebBrowserImp*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RWebBrowserImp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebBrowserImp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr RWebBrowserImp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RWebBrowserImp::Class_Name()
{
   return "ROOT::Experimental::RWebBrowserImp";
}

//______________________________________________________________________________
const char *RWebBrowserImp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebBrowserImp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RWebBrowserImp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebBrowserImp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RWebBrowserImp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebBrowserImp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RWebBrowserImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RWebBrowserImp*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRBrowserRequest(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RBrowserRequest : new ::ROOT::Experimental::RBrowserRequest;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRBrowserRequest(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RBrowserRequest[nElements] : new ::ROOT::Experimental::RBrowserRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRBrowserRequest(void *p) {
      delete ((::ROOT::Experimental::RBrowserRequest*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRBrowserRequest(void *p) {
      delete [] ((::ROOT::Experimental::RBrowserRequest*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRBrowserRequest(void *p) {
      typedef ::ROOT::Experimental::RBrowserRequest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RBrowserRequest

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRBrowserReply(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RBrowserReply : new ::ROOT::Experimental::RBrowserReply;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRBrowserReply(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RBrowserReply[nElements] : new ::ROOT::Experimental::RBrowserReply[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRBrowserReply(void *p) {
      delete ((::ROOT::Experimental::RBrowserReply*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRBrowserReply(void *p) {
      delete [] ((::ROOT::Experimental::RBrowserReply*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRBrowserReply(void *p) {
      typedef ::ROOT::Experimental::RBrowserReply current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RBrowserReply

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRBrowserData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RBrowserData : new ::ROOT::Experimental::RBrowserData;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRBrowserData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RBrowserData[nElements] : new ::ROOT::Experimental::RBrowserData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRBrowserData(void *p) {
      delete ((::ROOT::Experimental::RBrowserData*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRBrowserData(void *p) {
      delete [] ((::ROOT::Experimental::RBrowserData*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRBrowserData(void *p) {
      typedef ::ROOT::Experimental::RBrowserData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RBrowserData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRBrowser(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RBrowser : new ::ROOT::Experimental::RBrowser;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRBrowser(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RBrowser[nElements] : new ::ROOT::Experimental::RBrowser[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRBrowser(void *p) {
      delete ((::ROOT::Experimental::RBrowser*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRBrowser(void *p) {
      delete [] ((::ROOT::Experimental::RBrowser*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRBrowser(void *p) {
      typedef ::ROOT::Experimental::RBrowser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RBrowser

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFileDialog(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RFileDialog : new ::ROOT::Experimental::RFileDialog;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFileDialog(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RFileDialog[nElements] : new ::ROOT::Experimental::RFileDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFileDialog(void *p) {
      delete ((::ROOT::Experimental::RFileDialog*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFileDialog(void *p) {
      delete [] ((::ROOT::Experimental::RFileDialog*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFileDialog(void *p) {
      typedef ::ROOT::Experimental::RFileDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFileDialog

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void RWebBrowserImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::RWebBrowserImp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::RWebBrowserImp::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::RWebBrowserImp::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRWebBrowserImp(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RWebBrowserImp : new ::ROOT::Experimental::RWebBrowserImp;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRWebBrowserImp(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RWebBrowserImp[nElements] : new ::ROOT::Experimental::RWebBrowserImp[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRWebBrowserImp(void *p) {
      delete ((::ROOT::Experimental::RWebBrowserImp*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRWebBrowserImp(void *p) {
      delete [] ((::ROOT::Experimental::RWebBrowserImp*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRWebBrowserImp(void *p) {
      typedef ::ROOT::Experimental::RWebBrowserImp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RWebBrowserImp

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 386,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      ::ROOT::AddClassAlternate("vector<string>","std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR_Dictionary();
   static void vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR(void *p = 0);
   static void *newArray_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR(void *p);
   static void deleteArray_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR(void *p);
   static void destruct_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const ROOT::Experimental::Browsable::RItem*>*)
   {
      vector<const ROOT::Experimental::Browsable::RItem*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const ROOT::Experimental::Browsable::RItem*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const ROOT::Experimental::Browsable::RItem*>", -2, "vector", 386,
                  typeid(vector<const ROOT::Experimental::Browsable::RItem*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<const ROOT::Experimental::Browsable::RItem*>) );
      instance.SetNew(&new_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR);
      instance.SetDelete(&delete_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const ROOT::Experimental::Browsable::RItem*> >()));

      ::ROOT::AddClassAlternate("vector<const ROOT::Experimental::Browsable::RItem*>","std::vector<ROOT::Experimental::Browsable::RItem const*, std::allocator<ROOT::Experimental::Browsable::RItem const*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const ROOT::Experimental::Browsable::RItem*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const ROOT::Experimental::Browsable::RItem*>*)0x0)->GetClass();
      vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const ROOT::Experimental::Browsable::RItem*> : new vector<const ROOT::Experimental::Browsable::RItem*>;
   }
   static void *newArray_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const ROOT::Experimental::Browsable::RItem*>[nElements] : new vector<const ROOT::Experimental::Browsable::RItem*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR(void *p) {
      delete ((vector<const ROOT::Experimental::Browsable::RItem*>*)p);
   }
   static void deleteArray_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR(void *p) {
      delete [] ((vector<const ROOT::Experimental::Browsable::RItem*>*)p);
   }
   static void destruct_vectorlEconstsPROOTcLcLExperimentalcLcLBrowsablecLcLRItemmUgR(void *p) {
      typedef vector<const ROOT::Experimental::Browsable::RItem*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const ROOT::Experimental::Browsable::RItem*>

namespace {
  void TriggerDictionaryInitialization_libROOTBrowserv7_Impl() {
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
      TROOT::RegisterModule("libROOTBrowserv7",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTBrowserv7_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTBrowserv7_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTBrowserv7() {
  TriggerDictionaryInitialization_libROOTBrowserv7_Impl();
}
