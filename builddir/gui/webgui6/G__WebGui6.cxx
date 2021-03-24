// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__WebGui6
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
#include "TWebCanvas.h"
#include "TWebGuiFactory.h"
#include "TWebMenuItem.h"
#include "TWebPadOptions.h"
#include "TWebPadPainter.h"
#include "TWebPainting.h"
#include "TWebPS.h"
#include "TWebSnapshot.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *TWebObjectOptions_Dictionary();
   static void TWebObjectOptions_TClassManip(TClass*);
   static void *new_TWebObjectOptions(void *p = 0);
   static void *newArray_TWebObjectOptions(Long_t size, void *p);
   static void delete_TWebObjectOptions(void *p);
   static void deleteArray_TWebObjectOptions(void *p);
   static void destruct_TWebObjectOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebObjectOptions*)
   {
      ::TWebObjectOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebObjectOptions));
      static ::ROOT::TGenericClassInfo 
         instance("TWebObjectOptions", "TWebPadOptions.h", 24,
                  typeid(::TWebObjectOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebObjectOptions_Dictionary, isa_proxy, 4,
                  sizeof(::TWebObjectOptions) );
      instance.SetNew(&new_TWebObjectOptions);
      instance.SetNewArray(&newArray_TWebObjectOptions);
      instance.SetDelete(&delete_TWebObjectOptions);
      instance.SetDeleteArray(&deleteArray_TWebObjectOptions);
      instance.SetDestructor(&destruct_TWebObjectOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebObjectOptions*)
   {
      return GenerateInitInstanceLocal((::TWebObjectOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebObjectOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebObjectOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TWebObjectOptions*)0x0)->GetClass();
      TWebObjectOptions_TClassManip(theClass);
   return theClass;
   }

   static void TWebObjectOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebPadOptions_Dictionary();
   static void TWebPadOptions_TClassManip(TClass*);
   static void *new_TWebPadOptions(void *p = 0);
   static void *newArray_TWebPadOptions(Long_t size, void *p);
   static void delete_TWebPadOptions(void *p);
   static void deleteArray_TWebPadOptions(void *p);
   static void destruct_TWebPadOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebPadOptions*)
   {
      ::TWebPadOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebPadOptions));
      static ::ROOT::TGenericClassInfo 
         instance("TWebPadOptions", "TWebPadOptions.h", 33,
                  typeid(::TWebPadOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebPadOptions_Dictionary, isa_proxy, 4,
                  sizeof(::TWebPadOptions) );
      instance.SetNew(&new_TWebPadOptions);
      instance.SetNewArray(&newArray_TWebPadOptions);
      instance.SetDelete(&delete_TWebPadOptions);
      instance.SetDeleteArray(&deleteArray_TWebPadOptions);
      instance.SetDestructor(&destruct_TWebPadOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebPadOptions*)
   {
      return GenerateInitInstanceLocal((::TWebPadOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebPadOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebPadOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TWebPadOptions*)0x0)->GetClass();
      TWebPadOptions_TClassManip(theClass);
   return theClass;
   }

   static void TWebPadOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebPadClick_Dictionary();
   static void TWebPadClick_TClassManip(TClass*);
   static void *new_TWebPadClick(void *p = 0);
   static void *newArray_TWebPadClick(Long_t size, void *p);
   static void delete_TWebPadClick(void *p);
   static void deleteArray_TWebPadClick(void *p);
   static void destruct_TWebPadClick(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebPadClick*)
   {
      ::TWebPadClick *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebPadClick));
      static ::ROOT::TGenericClassInfo 
         instance("TWebPadClick", "TWebPadOptions.h", 50,
                  typeid(::TWebPadClick), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebPadClick_Dictionary, isa_proxy, 4,
                  sizeof(::TWebPadClick) );
      instance.SetNew(&new_TWebPadClick);
      instance.SetNewArray(&newArray_TWebPadClick);
      instance.SetDelete(&delete_TWebPadClick);
      instance.SetDeleteArray(&deleteArray_TWebPadClick);
      instance.SetDestructor(&destruct_TWebPadClick);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebPadClick*)
   {
      return GenerateInitInstanceLocal((::TWebPadClick*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebPadClick*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebPadClick_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TWebPadClick*)0x0)->GetClass();
      TWebPadClick_TClassManip(theClass);
   return theClass;
   }

   static void TWebPadClick_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TWebCanvas(void *p);
   static void deleteArray_TWebCanvas(void *p);
   static void destruct_TWebCanvas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebCanvas*)
   {
      ::TWebCanvas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebCanvas >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TWebCanvas", ::TWebCanvas::Class_Version(), "TWebCanvas.h", 32,
                  typeid(::TWebCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebCanvas::Dictionary, isa_proxy, 4,
                  sizeof(::TWebCanvas) );
      instance.SetDelete(&delete_TWebCanvas);
      instance.SetDeleteArray(&deleteArray_TWebCanvas);
      instance.SetDestructor(&destruct_TWebCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebCanvas*)
   {
      return GenerateInitInstanceLocal((::TWebCanvas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebCanvas*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TWebGuiFactory(void *p = 0);
   static void *newArray_TWebGuiFactory(Long_t size, void *p);
   static void delete_TWebGuiFactory(void *p);
   static void deleteArray_TWebGuiFactory(void *p);
   static void destruct_TWebGuiFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebGuiFactory*)
   {
      ::TWebGuiFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebGuiFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TWebGuiFactory", ::TWebGuiFactory::Class_Version(), "TWebGuiFactory.h", 18,
                  typeid(::TWebGuiFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebGuiFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TWebGuiFactory) );
      instance.SetNew(&new_TWebGuiFactory);
      instance.SetNewArray(&newArray_TWebGuiFactory);
      instance.SetDelete(&delete_TWebGuiFactory);
      instance.SetDeleteArray(&deleteArray_TWebGuiFactory);
      instance.SetDestructor(&destruct_TWebGuiFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebGuiFactory*)
   {
      return GenerateInitInstanceLocal((::TWebGuiFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebGuiFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebMenuItem_Dictionary();
   static void TWebMenuItem_TClassManip(TClass*);
   static void delete_TWebMenuItem(void *p);
   static void deleteArray_TWebMenuItem(void *p);
   static void destruct_TWebMenuItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebMenuItem*)
   {
      ::TWebMenuItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebMenuItem));
      static ::ROOT::TGenericClassInfo 
         instance("TWebMenuItem", "TWebMenuItem.h", 30,
                  typeid(::TWebMenuItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebMenuItem_Dictionary, isa_proxy, 4,
                  sizeof(::TWebMenuItem) );
      instance.SetDelete(&delete_TWebMenuItem);
      instance.SetDeleteArray(&deleteArray_TWebMenuItem);
      instance.SetDestructor(&destruct_TWebMenuItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebMenuItem*)
   {
      return GenerateInitInstanceLocal((::TWebMenuItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebMenuItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebMenuItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TWebMenuItem*)0x0)->GetClass();
      TWebMenuItem_TClassManip(theClass);
   return theClass;
   }

   static void TWebMenuItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebCheckedMenuItem_Dictionary();
   static void TWebCheckedMenuItem_TClassManip(TClass*);
   static void delete_TWebCheckedMenuItem(void *p);
   static void deleteArray_TWebCheckedMenuItem(void *p);
   static void destruct_TWebCheckedMenuItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebCheckedMenuItem*)
   {
      ::TWebCheckedMenuItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebCheckedMenuItem));
      static ::ROOT::TGenericClassInfo 
         instance("TWebCheckedMenuItem", "TWebMenuItem.h", 58,
                  typeid(::TWebCheckedMenuItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebCheckedMenuItem_Dictionary, isa_proxy, 4,
                  sizeof(::TWebCheckedMenuItem) );
      instance.SetDelete(&delete_TWebCheckedMenuItem);
      instance.SetDeleteArray(&deleteArray_TWebCheckedMenuItem);
      instance.SetDestructor(&destruct_TWebCheckedMenuItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebCheckedMenuItem*)
   {
      return GenerateInitInstanceLocal((::TWebCheckedMenuItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebCheckedMenuItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebCheckedMenuItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TWebCheckedMenuItem*)0x0)->GetClass();
      TWebCheckedMenuItem_TClassManip(theClass);
   return theClass;
   }

   static void TWebCheckedMenuItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebMenuArgument_Dictionary();
   static void TWebMenuArgument_TClassManip(TClass*);
   static void *new_TWebMenuArgument(void *p = 0);
   static void *newArray_TWebMenuArgument(Long_t size, void *p);
   static void delete_TWebMenuArgument(void *p);
   static void deleteArray_TWebMenuArgument(void *p);
   static void destruct_TWebMenuArgument(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebMenuArgument*)
   {
      ::TWebMenuArgument *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebMenuArgument));
      static ::ROOT::TGenericClassInfo 
         instance("TWebMenuArgument", "TWebMenuItem.h", 79,
                  typeid(::TWebMenuArgument), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebMenuArgument_Dictionary, isa_proxy, 4,
                  sizeof(::TWebMenuArgument) );
      instance.SetNew(&new_TWebMenuArgument);
      instance.SetNewArray(&newArray_TWebMenuArgument);
      instance.SetDelete(&delete_TWebMenuArgument);
      instance.SetDeleteArray(&deleteArray_TWebMenuArgument);
      instance.SetDestructor(&destruct_TWebMenuArgument);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebMenuArgument*)
   {
      return GenerateInitInstanceLocal((::TWebMenuArgument*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebMenuArgument*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebMenuArgument_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TWebMenuArgument*)0x0)->GetClass();
      TWebMenuArgument_TClassManip(theClass);
   return theClass;
   }

   static void TWebMenuArgument_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebArgsMenuItem_Dictionary();
   static void TWebArgsMenuItem_TClassManip(TClass*);
   static void delete_TWebArgsMenuItem(void *p);
   static void deleteArray_TWebArgsMenuItem(void *p);
   static void destruct_TWebArgsMenuItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebArgsMenuItem*)
   {
      ::TWebArgsMenuItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebArgsMenuItem));
      static ::ROOT::TGenericClassInfo 
         instance("TWebArgsMenuItem", "TWebMenuItem.h", 99,
                  typeid(::TWebArgsMenuItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebArgsMenuItem_Dictionary, isa_proxy, 4,
                  sizeof(::TWebArgsMenuItem) );
      instance.SetDelete(&delete_TWebArgsMenuItem);
      instance.SetDeleteArray(&deleteArray_TWebArgsMenuItem);
      instance.SetDestructor(&destruct_TWebArgsMenuItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebArgsMenuItem*)
   {
      return GenerateInitInstanceLocal((::TWebArgsMenuItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebArgsMenuItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebArgsMenuItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TWebArgsMenuItem*)0x0)->GetClass();
      TWebArgsMenuItem_TClassManip(theClass);
   return theClass;
   }

   static void TWebArgsMenuItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebMenuItems_Dictionary();
   static void TWebMenuItems_TClassManip(TClass*);
   static void *new_TWebMenuItems(void *p = 0);
   static void *newArray_TWebMenuItems(Long_t size, void *p);
   static void delete_TWebMenuItems(void *p);
   static void deleteArray_TWebMenuItems(void *p);
   static void destruct_TWebMenuItems(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebMenuItems*)
   {
      ::TWebMenuItems *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebMenuItems));
      static ::ROOT::TGenericClassInfo 
         instance("TWebMenuItems", "TWebMenuItem.h", 116,
                  typeid(::TWebMenuItems), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebMenuItems_Dictionary, isa_proxy, 4,
                  sizeof(::TWebMenuItems) );
      instance.SetNew(&new_TWebMenuItems);
      instance.SetNewArray(&newArray_TWebMenuItems);
      instance.SetDelete(&delete_TWebMenuItems);
      instance.SetDeleteArray(&deleteArray_TWebMenuItems);
      instance.SetDestructor(&destruct_TWebMenuItems);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebMenuItems*)
   {
      return GenerateInitInstanceLocal((::TWebMenuItems*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebMenuItems*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebMenuItems_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TWebMenuItems*)0x0)->GetClass();
      TWebMenuItems_TClassManip(theClass);
   return theClass;
   }

   static void TWebMenuItems_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TWebPainting(void *p = 0);
   static void *newArray_TWebPainting(Long_t size, void *p);
   static void delete_TWebPainting(void *p);
   static void deleteArray_TWebPainting(void *p);
   static void destruct_TWebPainting(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebPainting*)
   {
      ::TWebPainting *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebPainting >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TWebPainting", ::TWebPainting::Class_Version(), "TWebPainting.h", 25,
                  typeid(::TWebPainting), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebPainting::Dictionary, isa_proxy, 4,
                  sizeof(::TWebPainting) );
      instance.SetNew(&new_TWebPainting);
      instance.SetNewArray(&newArray_TWebPainting);
      instance.SetDelete(&delete_TWebPainting);
      instance.SetDeleteArray(&deleteArray_TWebPainting);
      instance.SetDestructor(&destruct_TWebPainting);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebPainting*)
   {
      return GenerateInitInstanceLocal((::TWebPainting*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebPainting*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TWebPadPainter(void *p = 0);
   static void *newArray_TWebPadPainter(Long_t size, void *p);
   static void delete_TWebPadPainter(void *p);
   static void deleteArray_TWebPadPainter(void *p);
   static void destruct_TWebPadPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebPadPainter*)
   {
      ::TWebPadPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebPadPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TWebPadPainter", ::TWebPadPainter::Class_Version(), "TWebPadPainter.h", 26,
                  typeid(::TWebPadPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebPadPainter::Dictionary, isa_proxy, 4,
                  sizeof(::TWebPadPainter) );
      instance.SetNew(&new_TWebPadPainter);
      instance.SetNewArray(&newArray_TWebPadPainter);
      instance.SetDelete(&delete_TWebPadPainter);
      instance.SetDeleteArray(&deleteArray_TWebPadPainter);
      instance.SetDestructor(&destruct_TWebPadPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebPadPainter*)
   {
      return GenerateInitInstanceLocal((::TWebPadPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebPadPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TWebPS(void *p = 0);
   static void *newArray_TWebPS(Long_t size, void *p);
   static void delete_TWebPS(void *p);
   static void deleteArray_TWebPS(void *p);
   static void destruct_TWebPS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebPS*)
   {
      ::TWebPS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebPS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TWebPS", ::TWebPS::Class_Version(), "TWebPS.h", 21,
                  typeid(::TWebPS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebPS::Dictionary, isa_proxy, 4,
                  sizeof(::TWebPS) );
      instance.SetNew(&new_TWebPS);
      instance.SetNewArray(&newArray_TWebPS);
      instance.SetDelete(&delete_TWebPS);
      instance.SetDeleteArray(&deleteArray_TWebPS);
      instance.SetDestructor(&destruct_TWebPS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebPS*)
   {
      return GenerateInitInstanceLocal((::TWebPS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebPS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TWebSnapshot(void *p = 0);
   static void *newArray_TWebSnapshot(Long_t size, void *p);
   static void delete_TWebSnapshot(void *p);
   static void deleteArray_TWebSnapshot(void *p);
   static void destruct_TWebSnapshot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebSnapshot*)
   {
      ::TWebSnapshot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebSnapshot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TWebSnapshot", ::TWebSnapshot::Class_Version(), "TWebSnapshot.h", 20,
                  typeid(::TWebSnapshot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebSnapshot::Dictionary, isa_proxy, 4,
                  sizeof(::TWebSnapshot) );
      instance.SetNew(&new_TWebSnapshot);
      instance.SetNewArray(&newArray_TWebSnapshot);
      instance.SetDelete(&delete_TWebSnapshot);
      instance.SetDeleteArray(&deleteArray_TWebSnapshot);
      instance.SetDestructor(&destruct_TWebSnapshot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebSnapshot*)
   {
      return GenerateInitInstanceLocal((::TWebSnapshot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebSnapshot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPadWebSnapshot(void *p = 0);
   static void *newArray_TPadWebSnapshot(Long_t size, void *p);
   static void delete_TPadWebSnapshot(void *p);
   static void deleteArray_TPadWebSnapshot(void *p);
   static void destruct_TPadWebSnapshot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPadWebSnapshot*)
   {
      ::TPadWebSnapshot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPadWebSnapshot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPadWebSnapshot", ::TPadWebSnapshot::Class_Version(), "TWebSnapshot.h", 59,
                  typeid(::TPadWebSnapshot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPadWebSnapshot::Dictionary, isa_proxy, 4,
                  sizeof(::TPadWebSnapshot) );
      instance.SetNew(&new_TPadWebSnapshot);
      instance.SetNewArray(&newArray_TPadWebSnapshot);
      instance.SetDelete(&delete_TPadWebSnapshot);
      instance.SetDeleteArray(&deleteArray_TPadWebSnapshot);
      instance.SetDestructor(&destruct_TPadWebSnapshot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPadWebSnapshot*)
   {
      return GenerateInitInstanceLocal((::TPadWebSnapshot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPadWebSnapshot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCanvasWebSnapshot(void *p = 0);
   static void *newArray_TCanvasWebSnapshot(Long_t size, void *p);
   static void delete_TCanvasWebSnapshot(void *p);
   static void deleteArray_TCanvasWebSnapshot(void *p);
   static void destruct_TCanvasWebSnapshot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCanvasWebSnapshot*)
   {
      ::TCanvasWebSnapshot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCanvasWebSnapshot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCanvasWebSnapshot", ::TCanvasWebSnapshot::Class_Version(), "TWebSnapshot.h", 87,
                  typeid(::TCanvasWebSnapshot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCanvasWebSnapshot::Dictionary, isa_proxy, 4,
                  sizeof(::TCanvasWebSnapshot) );
      instance.SetNew(&new_TCanvasWebSnapshot);
      instance.SetNewArray(&newArray_TCanvasWebSnapshot);
      instance.SetDelete(&delete_TCanvasWebSnapshot);
      instance.SetDeleteArray(&deleteArray_TCanvasWebSnapshot);
      instance.SetDestructor(&destruct_TCanvasWebSnapshot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCanvasWebSnapshot*)
   {
      return GenerateInitInstanceLocal((::TCanvasWebSnapshot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCanvasWebSnapshot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TWebCanvas::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebCanvas::Class_Name()
{
   return "TWebCanvas";
}

//______________________________________________________________________________
const char *TWebCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebCanvas*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TWebCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebCanvas*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebCanvas*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebCanvas*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebGuiFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebGuiFactory::Class_Name()
{
   return "TWebGuiFactory";
}

//______________________________________________________________________________
const char *TWebGuiFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebGuiFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TWebGuiFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebGuiFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebGuiFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebGuiFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebGuiFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebGuiFactory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebPainting::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebPainting::Class_Name()
{
   return "TWebPainting";
}

//______________________________________________________________________________
const char *TWebPainting::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPainting*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TWebPainting::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPainting*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebPainting::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPainting*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebPainting::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPainting*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebPadPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebPadPainter::Class_Name()
{
   return "TWebPadPainter";
}

//______________________________________________________________________________
const char *TWebPadPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPadPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TWebPadPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPadPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebPadPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPadPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebPadPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPadPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebPS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebPS::Class_Name()
{
   return "TWebPS";
}

//______________________________________________________________________________
const char *TWebPS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TWebPS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebPS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebPS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebSnapshot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebSnapshot::Class_Name()
{
   return "TWebSnapshot";
}

//______________________________________________________________________________
const char *TWebSnapshot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebSnapshot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TWebSnapshot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebSnapshot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebSnapshot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebSnapshot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebSnapshot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebSnapshot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPadWebSnapshot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPadWebSnapshot::Class_Name()
{
   return "TPadWebSnapshot";
}

//______________________________________________________________________________
const char *TPadWebSnapshot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadWebSnapshot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPadWebSnapshot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadWebSnapshot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPadWebSnapshot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadWebSnapshot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPadWebSnapshot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadWebSnapshot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCanvasWebSnapshot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCanvasWebSnapshot::Class_Name()
{
   return "TCanvasWebSnapshot";
}

//______________________________________________________________________________
const char *TCanvasWebSnapshot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCanvasWebSnapshot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCanvasWebSnapshot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCanvasWebSnapshot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCanvasWebSnapshot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCanvasWebSnapshot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCanvasWebSnapshot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCanvasWebSnapshot*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebObjectOptions(void *p) {
      return  p ? new(p) ::TWebObjectOptions : new ::TWebObjectOptions;
   }
   static void *newArray_TWebObjectOptions(Long_t nElements, void *p) {
      return p ? new(p) ::TWebObjectOptions[nElements] : new ::TWebObjectOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebObjectOptions(void *p) {
      delete ((::TWebObjectOptions*)p);
   }
   static void deleteArray_TWebObjectOptions(void *p) {
      delete [] ((::TWebObjectOptions*)p);
   }
   static void destruct_TWebObjectOptions(void *p) {
      typedef ::TWebObjectOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebObjectOptions

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebPadOptions(void *p) {
      return  p ? new(p) ::TWebPadOptions : new ::TWebPadOptions;
   }
   static void *newArray_TWebPadOptions(Long_t nElements, void *p) {
      return p ? new(p) ::TWebPadOptions[nElements] : new ::TWebPadOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebPadOptions(void *p) {
      delete ((::TWebPadOptions*)p);
   }
   static void deleteArray_TWebPadOptions(void *p) {
      delete [] ((::TWebPadOptions*)p);
   }
   static void destruct_TWebPadOptions(void *p) {
      typedef ::TWebPadOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebPadOptions

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebPadClick(void *p) {
      return  p ? new(p) ::TWebPadClick : new ::TWebPadClick;
   }
   static void *newArray_TWebPadClick(Long_t nElements, void *p) {
      return p ? new(p) ::TWebPadClick[nElements] : new ::TWebPadClick[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebPadClick(void *p) {
      delete ((::TWebPadClick*)p);
   }
   static void deleteArray_TWebPadClick(void *p) {
      delete [] ((::TWebPadClick*)p);
   }
   static void destruct_TWebPadClick(void *p) {
      typedef ::TWebPadClick current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebPadClick

//______________________________________________________________________________
void TWebCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebCanvas.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebCanvas::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebCanvas::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TWebCanvas(void *p) {
      delete ((::TWebCanvas*)p);
   }
   static void deleteArray_TWebCanvas(void *p) {
      delete [] ((::TWebCanvas*)p);
   }
   static void destruct_TWebCanvas(void *p) {
      typedef ::TWebCanvas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebCanvas

//______________________________________________________________________________
void TWebGuiFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebGuiFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebGuiFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebGuiFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebGuiFactory(void *p) {
      return  p ? new(p) ::TWebGuiFactory : new ::TWebGuiFactory;
   }
   static void *newArray_TWebGuiFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TWebGuiFactory[nElements] : new ::TWebGuiFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebGuiFactory(void *p) {
      delete ((::TWebGuiFactory*)p);
   }
   static void deleteArray_TWebGuiFactory(void *p) {
      delete [] ((::TWebGuiFactory*)p);
   }
   static void destruct_TWebGuiFactory(void *p) {
      typedef ::TWebGuiFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebGuiFactory

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TWebMenuItem(void *p) {
      delete ((::TWebMenuItem*)p);
   }
   static void deleteArray_TWebMenuItem(void *p) {
      delete [] ((::TWebMenuItem*)p);
   }
   static void destruct_TWebMenuItem(void *p) {
      typedef ::TWebMenuItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebMenuItem

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TWebCheckedMenuItem(void *p) {
      delete ((::TWebCheckedMenuItem*)p);
   }
   static void deleteArray_TWebCheckedMenuItem(void *p) {
      delete [] ((::TWebCheckedMenuItem*)p);
   }
   static void destruct_TWebCheckedMenuItem(void *p) {
      typedef ::TWebCheckedMenuItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebCheckedMenuItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebMenuArgument(void *p) {
      return  p ? new(p) ::TWebMenuArgument : new ::TWebMenuArgument;
   }
   static void *newArray_TWebMenuArgument(Long_t nElements, void *p) {
      return p ? new(p) ::TWebMenuArgument[nElements] : new ::TWebMenuArgument[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebMenuArgument(void *p) {
      delete ((::TWebMenuArgument*)p);
   }
   static void deleteArray_TWebMenuArgument(void *p) {
      delete [] ((::TWebMenuArgument*)p);
   }
   static void destruct_TWebMenuArgument(void *p) {
      typedef ::TWebMenuArgument current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebMenuArgument

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TWebArgsMenuItem(void *p) {
      delete ((::TWebArgsMenuItem*)p);
   }
   static void deleteArray_TWebArgsMenuItem(void *p) {
      delete [] ((::TWebArgsMenuItem*)p);
   }
   static void destruct_TWebArgsMenuItem(void *p) {
      typedef ::TWebArgsMenuItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebArgsMenuItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebMenuItems(void *p) {
      return  p ? new(p) ::TWebMenuItems : new ::TWebMenuItems;
   }
   static void *newArray_TWebMenuItems(Long_t nElements, void *p) {
      return p ? new(p) ::TWebMenuItems[nElements] : new ::TWebMenuItems[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebMenuItems(void *p) {
      delete ((::TWebMenuItems*)p);
   }
   static void deleteArray_TWebMenuItems(void *p) {
      delete [] ((::TWebMenuItems*)p);
   }
   static void destruct_TWebMenuItems(void *p) {
      typedef ::TWebMenuItems current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebMenuItems

//______________________________________________________________________________
void TWebPainting::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebPainting.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebPainting::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebPainting::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebPainting(void *p) {
      return  p ? new(p) ::TWebPainting : new ::TWebPainting;
   }
   static void *newArray_TWebPainting(Long_t nElements, void *p) {
      return p ? new(p) ::TWebPainting[nElements] : new ::TWebPainting[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebPainting(void *p) {
      delete ((::TWebPainting*)p);
   }
   static void deleteArray_TWebPainting(void *p) {
      delete [] ((::TWebPainting*)p);
   }
   static void destruct_TWebPainting(void *p) {
      typedef ::TWebPainting current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebPainting

//______________________________________________________________________________
void TWebPadPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebPadPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebPadPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebPadPainter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebPadPainter(void *p) {
      return  p ? new(p) ::TWebPadPainter : new ::TWebPadPainter;
   }
   static void *newArray_TWebPadPainter(Long_t nElements, void *p) {
      return p ? new(p) ::TWebPadPainter[nElements] : new ::TWebPadPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebPadPainter(void *p) {
      delete ((::TWebPadPainter*)p);
   }
   static void deleteArray_TWebPadPainter(void *p) {
      delete [] ((::TWebPadPainter*)p);
   }
   static void destruct_TWebPadPainter(void *p) {
      typedef ::TWebPadPainter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebPadPainter

//______________________________________________________________________________
void TWebPS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebPS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebPS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebPS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebPS(void *p) {
      return  p ? new(p) ::TWebPS : new ::TWebPS;
   }
   static void *newArray_TWebPS(Long_t nElements, void *p) {
      return p ? new(p) ::TWebPS[nElements] : new ::TWebPS[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebPS(void *p) {
      delete ((::TWebPS*)p);
   }
   static void deleteArray_TWebPS(void *p) {
      delete [] ((::TWebPS*)p);
   }
   static void destruct_TWebPS(void *p) {
      typedef ::TWebPS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebPS

//______________________________________________________________________________
void TWebSnapshot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebSnapshot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebSnapshot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebSnapshot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebSnapshot(void *p) {
      return  p ? new(p) ::TWebSnapshot : new ::TWebSnapshot;
   }
   static void *newArray_TWebSnapshot(Long_t nElements, void *p) {
      return p ? new(p) ::TWebSnapshot[nElements] : new ::TWebSnapshot[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebSnapshot(void *p) {
      delete ((::TWebSnapshot*)p);
   }
   static void deleteArray_TWebSnapshot(void *p) {
      delete [] ((::TWebSnapshot*)p);
   }
   static void destruct_TWebSnapshot(void *p) {
      typedef ::TWebSnapshot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWebSnapshot

//______________________________________________________________________________
void TPadWebSnapshot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPadWebSnapshot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPadWebSnapshot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPadWebSnapshot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPadWebSnapshot(void *p) {
      return  p ? new(p) ::TPadWebSnapshot : new ::TPadWebSnapshot;
   }
   static void *newArray_TPadWebSnapshot(Long_t nElements, void *p) {
      return p ? new(p) ::TPadWebSnapshot[nElements] : new ::TPadWebSnapshot[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPadWebSnapshot(void *p) {
      delete ((::TPadWebSnapshot*)p);
   }
   static void deleteArray_TPadWebSnapshot(void *p) {
      delete [] ((::TPadWebSnapshot*)p);
   }
   static void destruct_TPadWebSnapshot(void *p) {
      typedef ::TPadWebSnapshot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPadWebSnapshot

//______________________________________________________________________________
void TCanvasWebSnapshot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCanvasWebSnapshot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCanvasWebSnapshot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCanvasWebSnapshot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCanvasWebSnapshot(void *p) {
      return  p ? new(p) ::TCanvasWebSnapshot : new ::TCanvasWebSnapshot;
   }
   static void *newArray_TCanvasWebSnapshot(Long_t nElements, void *p) {
      return p ? new(p) ::TCanvasWebSnapshot[nElements] : new ::TCanvasWebSnapshot[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCanvasWebSnapshot(void *p) {
      delete ((::TCanvasWebSnapshot*)p);
   }
   static void deleteArray_TCanvasWebSnapshot(void *p) {
      delete [] ((::TCanvasWebSnapshot*)p);
   }
   static void destruct_TCanvasWebSnapshot(void *p) {
      typedef ::TCanvasWebSnapshot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCanvasWebSnapshot

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
   static TClass *vectorlETWebSnapshotmUgR_Dictionary();
   static void vectorlETWebSnapshotmUgR_TClassManip(TClass*);
   static void *new_vectorlETWebSnapshotmUgR(void *p = 0);
   static void *newArray_vectorlETWebSnapshotmUgR(Long_t size, void *p);
   static void delete_vectorlETWebSnapshotmUgR(void *p);
   static void deleteArray_vectorlETWebSnapshotmUgR(void *p);
   static void destruct_vectorlETWebSnapshotmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TWebSnapshot*>*)
   {
      vector<TWebSnapshot*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TWebSnapshot*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TWebSnapshot*>", -2, "vector", 386,
                  typeid(vector<TWebSnapshot*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETWebSnapshotmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TWebSnapshot*>) );
      instance.SetNew(&new_vectorlETWebSnapshotmUgR);
      instance.SetNewArray(&newArray_vectorlETWebSnapshotmUgR);
      instance.SetDelete(&delete_vectorlETWebSnapshotmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETWebSnapshotmUgR);
      instance.SetDestructor(&destruct_vectorlETWebSnapshotmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TWebSnapshot*> >()));

      ::ROOT::AddClassAlternate("vector<TWebSnapshot*>","std::vector<TWebSnapshot*, std::allocator<TWebSnapshot*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TWebSnapshot*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETWebSnapshotmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TWebSnapshot*>*)0x0)->GetClass();
      vectorlETWebSnapshotmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETWebSnapshotmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETWebSnapshotmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TWebSnapshot*> : new vector<TWebSnapshot*>;
   }
   static void *newArray_vectorlETWebSnapshotmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TWebSnapshot*>[nElements] : new vector<TWebSnapshot*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETWebSnapshotmUgR(void *p) {
      delete ((vector<TWebSnapshot*>*)p);
   }
   static void deleteArray_vectorlETWebSnapshotmUgR(void *p) {
      delete [] ((vector<TWebSnapshot*>*)p);
   }
   static void destruct_vectorlETWebSnapshotmUgR(void *p) {
      typedef vector<TWebSnapshot*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TWebSnapshot*>

namespace ROOT {
   static TClass *vectorlETWebObjectOptionsgR_Dictionary();
   static void vectorlETWebObjectOptionsgR_TClassManip(TClass*);
   static void *new_vectorlETWebObjectOptionsgR(void *p = 0);
   static void *newArray_vectorlETWebObjectOptionsgR(Long_t size, void *p);
   static void delete_vectorlETWebObjectOptionsgR(void *p);
   static void deleteArray_vectorlETWebObjectOptionsgR(void *p);
   static void destruct_vectorlETWebObjectOptionsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TWebObjectOptions>*)
   {
      vector<TWebObjectOptions> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TWebObjectOptions>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TWebObjectOptions>", -2, "vector", 386,
                  typeid(vector<TWebObjectOptions>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETWebObjectOptionsgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TWebObjectOptions>) );
      instance.SetNew(&new_vectorlETWebObjectOptionsgR);
      instance.SetNewArray(&newArray_vectorlETWebObjectOptionsgR);
      instance.SetDelete(&delete_vectorlETWebObjectOptionsgR);
      instance.SetDeleteArray(&deleteArray_vectorlETWebObjectOptionsgR);
      instance.SetDestructor(&destruct_vectorlETWebObjectOptionsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TWebObjectOptions> >()));

      ::ROOT::AddClassAlternate("vector<TWebObjectOptions>","std::vector<TWebObjectOptions, std::allocator<TWebObjectOptions> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TWebObjectOptions>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETWebObjectOptionsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TWebObjectOptions>*)0x0)->GetClass();
      vectorlETWebObjectOptionsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETWebObjectOptionsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETWebObjectOptionsgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TWebObjectOptions> : new vector<TWebObjectOptions>;
   }
   static void *newArray_vectorlETWebObjectOptionsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TWebObjectOptions>[nElements] : new vector<TWebObjectOptions>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETWebObjectOptionsgR(void *p) {
      delete ((vector<TWebObjectOptions>*)p);
   }
   static void deleteArray_vectorlETWebObjectOptionsgR(void *p) {
      delete [] ((vector<TWebObjectOptions>*)p);
   }
   static void destruct_vectorlETWebObjectOptionsgR(void *p) {
      typedef vector<TWebObjectOptions> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TWebObjectOptions>

namespace ROOT {
   static TClass *vectorlETWebMenuItemmUgR_Dictionary();
   static void vectorlETWebMenuItemmUgR_TClassManip(TClass*);
   static void *new_vectorlETWebMenuItemmUgR(void *p = 0);
   static void *newArray_vectorlETWebMenuItemmUgR(Long_t size, void *p);
   static void delete_vectorlETWebMenuItemmUgR(void *p);
   static void deleteArray_vectorlETWebMenuItemmUgR(void *p);
   static void destruct_vectorlETWebMenuItemmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TWebMenuItem*>*)
   {
      vector<TWebMenuItem*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TWebMenuItem*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TWebMenuItem*>", -2, "vector", 386,
                  typeid(vector<TWebMenuItem*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETWebMenuItemmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TWebMenuItem*>) );
      instance.SetNew(&new_vectorlETWebMenuItemmUgR);
      instance.SetNewArray(&newArray_vectorlETWebMenuItemmUgR);
      instance.SetDelete(&delete_vectorlETWebMenuItemmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETWebMenuItemmUgR);
      instance.SetDestructor(&destruct_vectorlETWebMenuItemmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TWebMenuItem*> >()));

      ::ROOT::AddClassAlternate("vector<TWebMenuItem*>","std::vector<TWebMenuItem*, std::allocator<TWebMenuItem*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TWebMenuItem*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETWebMenuItemmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TWebMenuItem*>*)0x0)->GetClass();
      vectorlETWebMenuItemmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETWebMenuItemmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETWebMenuItemmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TWebMenuItem*> : new vector<TWebMenuItem*>;
   }
   static void *newArray_vectorlETWebMenuItemmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TWebMenuItem*>[nElements] : new vector<TWebMenuItem*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETWebMenuItemmUgR(void *p) {
      delete ((vector<TWebMenuItem*>*)p);
   }
   static void deleteArray_vectorlETWebMenuItemmUgR(void *p) {
      delete [] ((vector<TWebMenuItem*>*)p);
   }
   static void destruct_vectorlETWebMenuItemmUgR(void *p) {
      typedef vector<TWebMenuItem*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TWebMenuItem*>

namespace ROOT {
   static TClass *vectorlETWebMenuArgumentgR_Dictionary();
   static void vectorlETWebMenuArgumentgR_TClassManip(TClass*);
   static void *new_vectorlETWebMenuArgumentgR(void *p = 0);
   static void *newArray_vectorlETWebMenuArgumentgR(Long_t size, void *p);
   static void delete_vectorlETWebMenuArgumentgR(void *p);
   static void deleteArray_vectorlETWebMenuArgumentgR(void *p);
   static void destruct_vectorlETWebMenuArgumentgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TWebMenuArgument>*)
   {
      vector<TWebMenuArgument> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TWebMenuArgument>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TWebMenuArgument>", -2, "vector", 386,
                  typeid(vector<TWebMenuArgument>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETWebMenuArgumentgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TWebMenuArgument>) );
      instance.SetNew(&new_vectorlETWebMenuArgumentgR);
      instance.SetNewArray(&newArray_vectorlETWebMenuArgumentgR);
      instance.SetDelete(&delete_vectorlETWebMenuArgumentgR);
      instance.SetDeleteArray(&deleteArray_vectorlETWebMenuArgumentgR);
      instance.SetDestructor(&destruct_vectorlETWebMenuArgumentgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TWebMenuArgument> >()));

      ::ROOT::AddClassAlternate("vector<TWebMenuArgument>","std::vector<TWebMenuArgument, std::allocator<TWebMenuArgument> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TWebMenuArgument>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETWebMenuArgumentgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TWebMenuArgument>*)0x0)->GetClass();
      vectorlETWebMenuArgumentgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETWebMenuArgumentgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETWebMenuArgumentgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TWebMenuArgument> : new vector<TWebMenuArgument>;
   }
   static void *newArray_vectorlETWebMenuArgumentgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TWebMenuArgument>[nElements] : new vector<TWebMenuArgument>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETWebMenuArgumentgR(void *p) {
      delete ((vector<TWebMenuArgument>*)p);
   }
   static void deleteArray_vectorlETWebMenuArgumentgR(void *p) {
      delete [] ((vector<TWebMenuArgument>*)p);
   }
   static void destruct_vectorlETWebMenuArgumentgR(void *p) {
      typedef vector<TWebMenuArgument> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TWebMenuArgument>

namespace {
  void TriggerDictionaryInitialization_libWebGui6_Impl() {
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
      TROOT::RegisterModule("libWebGui6",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libWebGui6_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libWebGui6_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libWebGui6() {
  TriggerDictionaryInitialization_libWebGui6_Impl();
}
