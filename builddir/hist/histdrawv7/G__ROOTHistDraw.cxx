// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTHistDraw
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
#include "ROOT/RHistDisplayItem.hxx"
#include "ROOT/RHistDrawable.hxx"
#include "ROOT/RHistStatBox.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >*)
   {
      ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >", "ROOT/RDrawable.hxx", 55,
                  typeid(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >*)
   {
      ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >", "ROOT/RDrawable.hxx", 55,
                  typeid(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >*)
   {
      ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >", "ROOT/RDrawable.hxx", 55,
                  typeid(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistDisplayItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistDisplayItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistDisplayItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistDisplayItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistDisplayItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDisplayItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistDisplayItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistDisplayItem*)
   {
      ::ROOT::Experimental::RHistDisplayItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistDisplayItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistDisplayItem", "ROOT/RHistDisplayItem.hxx", 28,
                  typeid(::ROOT::Experimental::RHistDisplayItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistDisplayItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistDisplayItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistDisplayItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistDisplayItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistDisplayItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistDisplayItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistDisplayItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistDisplayItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistDisplayItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDisplayItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistDisplayItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDisplayItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistDisplayItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistDisplayItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawableBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistDrawableBase_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawableBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawableBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawableBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistDrawableBase*)
   {
      ::ROOT::Experimental::RHistDrawableBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistDrawableBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistDrawableBase", "ROOT/RHistDrawable.hxx", 37,
                  typeid(::ROOT::Experimental::RHistDrawableBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistDrawableBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistDrawableBase) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistDrawableBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistDrawableBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistDrawableBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistDrawableBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistDrawableBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawableBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawableBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawableBase*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistDrawableBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistDrawableBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistDrawableBase::RReply*)
   {
      ::ROOT::Experimental::RHistDrawableBase::RReply *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistDrawableBase::RReply));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistDrawableBase::RReply", "ROOT/RHistDrawable.hxx", 77,
                  typeid(::ROOT::Experimental::RHistDrawableBase::RReply), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistDrawableBase::RReply) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistDrawableBase::RReply*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistDrawableBase::RReply*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawableBase::RReply*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawableBase::RReply*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistDrawableBase::RRequest*)
   {
      ::ROOT::Experimental::RHistDrawableBase::RRequest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistDrawableBase::RRequest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistDrawableBase::RRequest", "ROOT/RHistDrawable.hxx", 82,
                  typeid(::ROOT::Experimental::RHistDrawableBase::RRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistDrawableBase::RRequest) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistDrawableBase::RRequest*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistDrawableBase::RRequest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawableBase::RRequest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawableBase::RRequest*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawablelE1gR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistDrawablelE1gR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawablelE1gR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawablelE1gR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawablelE1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistDrawable<1>*)
   {
      ::ROOT::Experimental::RHistDrawable<1> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistDrawable<1>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistDrawable<1>", "ROOT/RHistDrawable.hxx", 119,
                  typeid(::ROOT::Experimental::RHistDrawable<1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistDrawablelE1gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistDrawable<1>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistDrawablelE1gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistDrawablelE1gR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistDrawablelE1gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistDrawable<1>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistDrawable<1>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawable<1>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawablelE1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawable<1>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistDrawablelE1gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistDrawablelE1gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawablelE2gR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistDrawablelE2gR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawablelE2gR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawablelE2gR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawablelE2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistDrawable<2>*)
   {
      ::ROOT::Experimental::RHistDrawable<2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistDrawable<2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistDrawable<2>", "ROOT/RHistDrawable.hxx", 119,
                  typeid(::ROOT::Experimental::RHistDrawable<2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistDrawablelE2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistDrawable<2>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistDrawablelE2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistDrawablelE2gR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistDrawablelE2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistDrawable<2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistDrawable<2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawable<2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawablelE2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawable<2>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistDrawablelE2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistDrawablelE2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawablelE3gR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistDrawablelE3gR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawablelE3gR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawablelE3gR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawablelE3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistDrawable<3>*)
   {
      ::ROOT::Experimental::RHistDrawable<3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistDrawable<3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistDrawable<3>", "ROOT/RHistDrawable.hxx", 119,
                  typeid(::ROOT::Experimental::RHistDrawable<3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistDrawablelE3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistDrawable<3>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistDrawablelE3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistDrawablelE3gR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistDrawablelE3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistDrawable<3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistDrawable<3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawable<3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistDrawablelE3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistDrawable<3>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistDrawablelE3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistDrawablelE3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHist1Drawable_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHist1Drawable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHist1Drawable(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHist1Drawable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHist1Drawable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist1Drawable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHist1Drawable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist1Drawable*)
   {
      ::ROOT::Experimental::RHist1Drawable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist1Drawable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist1Drawable", "ROOT/RHistDrawable.hxx", 143,
                  typeid(::ROOT::Experimental::RHist1Drawable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHist1Drawable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist1Drawable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHist1Drawable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHist1Drawable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHist1Drawable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHist1Drawable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHist1Drawable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist1Drawable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist1Drawable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist1Drawable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHist1Drawable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist1Drawable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHist1Drawable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHist1Drawable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHist2Drawable_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHist2Drawable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHist2Drawable(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHist2Drawable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHist2Drawable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist2Drawable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHist2Drawable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist2Drawable*)
   {
      ::ROOT::Experimental::RHist2Drawable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist2Drawable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist2Drawable", "ROOT/RHistDrawable.hxx", 174,
                  typeid(::ROOT::Experimental::RHist2Drawable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHist2Drawable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist2Drawable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHist2Drawable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHist2Drawable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHist2Drawable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHist2Drawable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHist2Drawable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist2Drawable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist2Drawable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist2Drawable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHist2Drawable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist2Drawable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHist2Drawable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHist2Drawable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHist3Drawable_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHist3Drawable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHist3Drawable(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHist3Drawable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHist3Drawable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist3Drawable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHist3Drawable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist3Drawable*)
   {
      ::ROOT::Experimental::RHist3Drawable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist3Drawable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist3Drawable", "ROOT/RHistDrawable.hxx", 201,
                  typeid(::ROOT::Experimental::RHist3Drawable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHist3Drawable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist3Drawable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHist3Drawable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHist3Drawable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHist3Drawable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHist3Drawable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHist3Drawable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist3Drawable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist3Drawable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist3Drawable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHist3Drawable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist3Drawable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHist3Drawable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHist3Drawable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRDisplayHistStat_Dictionary();
   static void ROOTcLcLExperimentalcLcLRDisplayHistStat_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRDisplayHistStat(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRDisplayHistStat(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRDisplayHistStat(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRDisplayHistStat(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRDisplayHistStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RDisplayHistStat*)
   {
      ::ROOT::Experimental::RDisplayHistStat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RDisplayHistStat));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RDisplayHistStat", "ROOT/RHistStatBox.hxx", 35,
                  typeid(::ROOT::Experimental::RDisplayHistStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRDisplayHistStat_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RDisplayHistStat) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRDisplayHistStat);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRDisplayHistStat);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRDisplayHistStat);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRDisplayHistStat);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRDisplayHistStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RDisplayHistStat*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RDisplayHistStat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RDisplayHistStat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRDisplayHistStat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RDisplayHistStat*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRDisplayHistStat_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRDisplayHistStat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatBoxBase_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistStatBoxBase(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatBoxBase(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatBoxBase*)
   {
      ::ROOT::Experimental::RHistStatBoxBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatBoxBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatBoxBase", "ROOT/RHistStatBox.hxx", 58,
                  typeid(::ROOT::Experimental::RHistStatBoxBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatBoxBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatBoxBase) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistStatBoxBase);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistStatBoxBase);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatBoxBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatBoxBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatBoxBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatBoxBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBoxBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBoxBase*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatBoxBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatBoxBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatBoxBase::RReply*)
   {
      ::ROOT::Experimental::RHistStatBoxBase::RReply *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatBoxBase::RReply));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatBoxBase::RReply", "ROOT/RHistStatBox.hxx", 75,
                  typeid(::ROOT::Experimental::RHistStatBoxBase::RReply), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatBoxBase::RReply) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatBoxBase::RReply*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatBoxBase::RReply*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBoxBase::RReply*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBoxBase::RReply*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatBoxBase::RRequest*)
   {
      ::ROOT::Experimental::RHistStatBoxBase::RRequest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatBoxBase::RRequest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatBoxBase::RRequest", "ROOT/RHistStatBox.hxx", 85,
                  typeid(::ROOT::Experimental::RHistStatBoxBase::RRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatBoxBase::RRequest) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatBoxBase::RRequest*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatBoxBase::RRequest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBoxBase::RRequest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBoxBase::RRequest*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatBox<1>*)
   {
      ::ROOT::Experimental::RHistStatBox<1> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatBox<1>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatBox<1>", "ROOT/RHistStatBox.hxx", 132,
                  typeid(::ROOT::Experimental::RHistStatBox<1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatBox<1>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatBox<1>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatBox<1>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBox<1>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBox<1>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatBox<2>*)
   {
      ::ROOT::Experimental::RHistStatBox<2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatBox<2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatBox<2>", "ROOT/RHistStatBox.hxx", 132,
                  typeid(::ROOT::Experimental::RHistStatBox<2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatBox<2>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatBox<2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatBox<2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBox<2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBox<2>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatBox<3>*)
   {
      ::ROOT::Experimental::RHistStatBox<3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatBox<3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatBox<3>", "ROOT/RHistStatBox.hxx", 132,
                  typeid(::ROOT::Experimental::RHistStatBox<3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatBox<3>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatBox<3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatBox<3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBox<3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatBox<3>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHist1StatBox_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHist1StatBox_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHist1StatBox(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist1StatBox(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHist1StatBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist1StatBox*)
   {
      ::ROOT::Experimental::RHist1StatBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist1StatBox));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist1StatBox", "ROOT/RHistStatBox.hxx", 156,
                  typeid(::ROOT::Experimental::RHist1StatBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHist1StatBox_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist1StatBox) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHist1StatBox);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHist1StatBox);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHist1StatBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist1StatBox*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist1StatBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist1StatBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHist1StatBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist1StatBox*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHist1StatBox_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHist1StatBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHist2StatBox_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHist2StatBox_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHist2StatBox(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist2StatBox(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHist2StatBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist2StatBox*)
   {
      ::ROOT::Experimental::RHist2StatBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist2StatBox));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist2StatBox", "ROOT/RHistStatBox.hxx", 164,
                  typeid(::ROOT::Experimental::RHist2StatBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHist2StatBox_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist2StatBox) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHist2StatBox);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHist2StatBox);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHist2StatBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist2StatBox*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist2StatBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist2StatBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHist2StatBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist2StatBox*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHist2StatBox_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHist2StatBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHist3StatBox_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHist3StatBox_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHist3StatBox(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist3StatBox(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHist3StatBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist3StatBox*)
   {
      ::ROOT::Experimental::RHist3StatBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist3StatBox));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist3StatBox", "ROOT/RHistStatBox.hxx", 172,
                  typeid(::ROOT::Experimental::RHist3StatBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHist3StatBox_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist3StatBox) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHist3StatBox);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHist3StatBox);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHist3StatBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist3StatBox*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist3StatBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist3StatBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHist3StatBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist3StatBox*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHist3StatBox_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHist3StatBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> > : new ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >[nElements] : new ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR(void *p) {
      delete ((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR(void *p) {
      delete [] ((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gRsPgR(void *p) {
      typedef ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> > : new ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >[nElements] : new ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR(void *p) {
      delete ((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR(void *p) {
      delete [] ((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gRsPgR(void *p) {
      typedef ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> > : new ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >[nElements] : new ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR(void *p) {
      delete ((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR(void *p) {
      delete [] ((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gRsPgR(void *p) {
      typedef ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistDisplayItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistDisplayItem : new ::ROOT::Experimental::RHistDisplayItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistDisplayItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistDisplayItem[nElements] : new ::ROOT::Experimental::RHistDisplayItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistDisplayItem(void *p) {
      delete ((::ROOT::Experimental::RHistDisplayItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDisplayItem(void *p) {
      delete [] ((::ROOT::Experimental::RHistDisplayItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistDisplayItem(void *p) {
      typedef ::ROOT::Experimental::RHistDisplayItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistDisplayItem

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawableBase(void *p) {
      delete ((::ROOT::Experimental::RHistDrawableBase*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawableBase(void *p) {
      delete [] ((::ROOT::Experimental::RHistDrawableBase*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawableBase(void *p) {
      typedef ::ROOT::Experimental::RHistDrawableBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistDrawableBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistDrawableBase::RReply : new ::ROOT::Experimental::RHistDrawableBase::RReply;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistDrawableBase::RReply[nElements] : new ::ROOT::Experimental::RHistDrawableBase::RReply[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply(void *p) {
      delete ((::ROOT::Experimental::RHistDrawableBase::RReply*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply(void *p) {
      delete [] ((::ROOT::Experimental::RHistDrawableBase::RReply*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRReply(void *p) {
      typedef ::ROOT::Experimental::RHistDrawableBase::RReply current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistDrawableBase::RReply

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistDrawableBase::RRequest : new ::ROOT::Experimental::RHistDrawableBase::RRequest;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistDrawableBase::RRequest[nElements] : new ::ROOT::Experimental::RHistDrawableBase::RRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest(void *p) {
      delete ((::ROOT::Experimental::RHistDrawableBase::RRequest*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest(void *p) {
      delete [] ((::ROOT::Experimental::RHistDrawableBase::RRequest*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawableBasecLcLRRequest(void *p) {
      typedef ::ROOT::Experimental::RHistDrawableBase::RRequest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistDrawableBase::RRequest

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawablelE1gR(void *p) {
      delete ((::ROOT::Experimental::RHistDrawable<1>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawablelE1gR(void *p) {
      delete [] ((::ROOT::Experimental::RHistDrawable<1>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawablelE1gR(void *p) {
      typedef ::ROOT::Experimental::RHistDrawable<1> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistDrawable<1>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawablelE2gR(void *p) {
      delete ((::ROOT::Experimental::RHistDrawable<2>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawablelE2gR(void *p) {
      delete [] ((::ROOT::Experimental::RHistDrawable<2>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawablelE2gR(void *p) {
      typedef ::ROOT::Experimental::RHistDrawable<2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistDrawable<2>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistDrawablelE3gR(void *p) {
      delete ((::ROOT::Experimental::RHistDrawable<3>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistDrawablelE3gR(void *p) {
      delete [] ((::ROOT::Experimental::RHistDrawable<3>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistDrawablelE3gR(void *p) {
      typedef ::ROOT::Experimental::RHistDrawable<3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistDrawable<3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHist1Drawable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist1Drawable : new ::ROOT::Experimental::RHist1Drawable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHist1Drawable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist1Drawable[nElements] : new ::ROOT::Experimental::RHist1Drawable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHist1Drawable(void *p) {
      delete ((::ROOT::Experimental::RHist1Drawable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist1Drawable(void *p) {
      delete [] ((::ROOT::Experimental::RHist1Drawable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHist1Drawable(void *p) {
      typedef ::ROOT::Experimental::RHist1Drawable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist1Drawable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHist2Drawable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist2Drawable : new ::ROOT::Experimental::RHist2Drawable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHist2Drawable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist2Drawable[nElements] : new ::ROOT::Experimental::RHist2Drawable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHist2Drawable(void *p) {
      delete ((::ROOT::Experimental::RHist2Drawable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist2Drawable(void *p) {
      delete [] ((::ROOT::Experimental::RHist2Drawable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHist2Drawable(void *p) {
      typedef ::ROOT::Experimental::RHist2Drawable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist2Drawable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHist3Drawable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist3Drawable : new ::ROOT::Experimental::RHist3Drawable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHist3Drawable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist3Drawable[nElements] : new ::ROOT::Experimental::RHist3Drawable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHist3Drawable(void *p) {
      delete ((::ROOT::Experimental::RHist3Drawable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist3Drawable(void *p) {
      delete [] ((::ROOT::Experimental::RHist3Drawable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHist3Drawable(void *p) {
      typedef ::ROOT::Experimental::RHist3Drawable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist3Drawable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRDisplayHistStat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDisplayHistStat : new ::ROOT::Experimental::RDisplayHistStat;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRDisplayHistStat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDisplayHistStat[nElements] : new ::ROOT::Experimental::RDisplayHistStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRDisplayHistStat(void *p) {
      delete ((::ROOT::Experimental::RDisplayHistStat*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRDisplayHistStat(void *p) {
      delete [] ((::ROOT::Experimental::RDisplayHistStat*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRDisplayHistStat(void *p) {
      typedef ::ROOT::Experimental::RDisplayHistStat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RDisplayHistStat

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistStatBoxBase(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatBoxBase : new ::ROOT::Experimental::RHistStatBoxBase;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatBoxBase(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatBoxBase[nElements] : new ::ROOT::Experimental::RHistStatBoxBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxBase(void *p) {
      delete ((::ROOT::Experimental::RHistStatBoxBase*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxBase(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatBoxBase*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxBase(void *p) {
      typedef ::ROOT::Experimental::RHistStatBoxBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatBoxBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatBoxBase::RReply : new ::ROOT::Experimental::RHistStatBoxBase::RReply;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatBoxBase::RReply[nElements] : new ::ROOT::Experimental::RHistStatBoxBase::RReply[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply(void *p) {
      delete ((::ROOT::Experimental::RHistStatBoxBase::RReply*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatBoxBase::RReply*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRReply(void *p) {
      typedef ::ROOT::Experimental::RHistStatBoxBase::RReply current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatBoxBase::RReply

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatBoxBase::RRequest : new ::ROOT::Experimental::RHistStatBoxBase::RRequest;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatBoxBase::RRequest[nElements] : new ::ROOT::Experimental::RHistStatBoxBase::RRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest(void *p) {
      delete ((::ROOT::Experimental::RHistStatBoxBase::RRequest*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatBoxBase::RRequest*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxBasecLcLRRequest(void *p) {
      typedef ::ROOT::Experimental::RHistStatBoxBase::RRequest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatBoxBase::RRequest

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR(void *p) {
      delete ((::ROOT::Experimental::RHistStatBox<1>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatBox<1>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxlE1gR(void *p) {
      typedef ::ROOT::Experimental::RHistStatBox<1> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatBox<1>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR(void *p) {
      delete ((::ROOT::Experimental::RHistStatBox<2>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatBox<2>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxlE2gR(void *p) {
      typedef ::ROOT::Experimental::RHistStatBox<2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatBox<2>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR(void *p) {
      delete ((::ROOT::Experimental::RHistStatBox<3>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatBox<3>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatBoxlE3gR(void *p) {
      typedef ::ROOT::Experimental::RHistStatBox<3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatBox<3>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHist1StatBox(void *p) {
      delete ((::ROOT::Experimental::RHist1StatBox*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist1StatBox(void *p) {
      delete [] ((::ROOT::Experimental::RHist1StatBox*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHist1StatBox(void *p) {
      typedef ::ROOT::Experimental::RHist1StatBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist1StatBox

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHist2StatBox(void *p) {
      delete ((::ROOT::Experimental::RHist2StatBox*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist2StatBox(void *p) {
      delete [] ((::ROOT::Experimental::RHist2StatBox*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHist2StatBox(void *p) {
      typedef ::ROOT::Experimental::RHist2StatBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist2StatBox

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHist3StatBox(void *p) {
      delete ((::ROOT::Experimental::RHist3StatBox*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHist3StatBox(void *p) {
      delete [] ((::ROOT::Experimental::RHist3StatBox*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHist3StatBox(void *p) {
      typedef ::ROOT::Experimental::RHist3StatBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist3StatBox

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
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 386,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 386,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR_Dictionary();
   static void vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR(void *p = 0);
   static void *newArray_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR(void *p);
   static void deleteArray_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR(void *p);
   static void destruct_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const ROOT::Experimental::RAxisBase*>*)
   {
      vector<const ROOT::Experimental::RAxisBase*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const ROOT::Experimental::RAxisBase*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const ROOT::Experimental::RAxisBase*>", -2, "vector", 386,
                  typeid(vector<const ROOT::Experimental::RAxisBase*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<const ROOT::Experimental::RAxisBase*>) );
      instance.SetNew(&new_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR);
      instance.SetDelete(&delete_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const ROOT::Experimental::RAxisBase*> >()));

      ::ROOT::AddClassAlternate("vector<const ROOT::Experimental::RAxisBase*>","std::vector<ROOT::Experimental::RAxisBase const*, std::allocator<ROOT::Experimental::RAxisBase const*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const ROOT::Experimental::RAxisBase*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const ROOT::Experimental::RAxisBase*>*)0x0)->GetClass();
      vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const ROOT::Experimental::RAxisBase*> : new vector<const ROOT::Experimental::RAxisBase*>;
   }
   static void *newArray_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const ROOT::Experimental::RAxisBase*>[nElements] : new vector<const ROOT::Experimental::RAxisBase*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR(void *p) {
      delete ((vector<const ROOT::Experimental::RAxisBase*>*)p);
   }
   static void deleteArray_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR(void *p) {
      delete [] ((vector<const ROOT::Experimental::RAxisBase*>*)p);
   }
   static void destruct_vectorlEconstsPROOTcLcLExperimentalcLcLRAxisBasemUgR(void *p) {
      typedef vector<const ROOT::Experimental::RAxisBase*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const ROOT::Experimental::RAxisBase*>

namespace {
  void TriggerDictionaryInitialization_libROOTHistDraw_Impl() {
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
      TROOT::RegisterModule("libROOTHistDraw",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTHistDraw_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTHistDraw_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTHistDraw() {
  TriggerDictionaryInitialization_libROOTHistDraw_Impl();
}
