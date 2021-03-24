// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTBrowsable
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
#include "ROOT/Browsable/RAnyObjectHolder.hxx"
#include "ROOT/Browsable/RElement.hxx"
#include "ROOT/Browsable/RGroup.hxx"
#include "ROOT/Browsable/RHolder.hxx"
#include "ROOT/Browsable/RItem.hxx"
#include "ROOT/Browsable/RLevelIter.hxx"
#include "ROOT/Browsable/RProvider.hxx"
#include "ROOT/Browsable/RShared.hxx"
#include "ROOT/Browsable/RSysFile.hxx"
#include "ROOT/Browsable/RSysFileItem.hxx"
#include "ROOT/Browsable/RUnique.hxx"
#include "ROOT/Browsable/RWrapper.hxx"
#include "ROOT/Browsable/TKeyItem.hxx"
#include "ROOT/Browsable/TObjectElement.hxx"
#include "ROOT/Browsable/TObjectHolder.hxx"
#include "ROOT/Browsable/TObjectItem.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   namespace Experimental {
      namespace Browsable {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLExperimentalcLcLBrowsable_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Experimental::Browsable", 0 /*version*/, "ROOT/Browsable/RHolder.hxx", 23,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLExperimentalcLcLBrowsable_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLExperimentalcLcLBrowsable_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::RHolder*)
   {
      ::ROOT::Experimental::Browsable::RHolder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::RHolder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::RHolder", "ROOT/Browsable/RHolder.hxx", 33,
                  typeid(::ROOT::Experimental::Browsable::RHolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::RHolder) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::RHolder*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::RHolder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RHolder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RHolder*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::RAnyObjectHolder*)
   {
      ::ROOT::Experimental::Browsable::RAnyObjectHolder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::RAnyObjectHolder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::RAnyObjectHolder", "ROOT/Browsable/RAnyObjectHolder.hxx", 26,
                  typeid(::ROOT::Experimental::Browsable::RAnyObjectHolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::RAnyObjectHolder) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::RAnyObjectHolder*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::RAnyObjectHolder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RAnyObjectHolder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RAnyObjectHolder*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRElement_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRElement_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRElement(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRElement(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::RElement*)
   {
      ::ROOT::Experimental::Browsable::RElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::RElement));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::RElement", "ROOT/Browsable/RElement.hxx", 33,
                  typeid(::ROOT::Experimental::Browsable::RElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLRElement_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::RElement) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRElement);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRElement);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::RElement*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::RElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRElement_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RElement*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLRElement_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRElement_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::RGroup*)
   {
      ::ROOT::Experimental::Browsable::RGroup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::RGroup));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::RGroup", "ROOT/Browsable/RGroup.hxx", 26,
                  typeid(::ROOT::Experimental::Browsable::RGroup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::RGroup) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::RGroup*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::RGroup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RGroup*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RGroup*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::RItem*)
   {
      ::ROOT::Experimental::Browsable::RItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::RItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::RItem", "ROOT/Browsable/RItem.hxx", 23,
                  typeid(::ROOT::Experimental::Browsable::RItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLRItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::RItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::RItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::RItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLRItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::RLevelIter*)
   {
      ::ROOT::Experimental::Browsable::RLevelIter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::RLevelIter));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::RLevelIter", "ROOT/Browsable/RLevelIter.hxx", 30,
                  typeid(::ROOT::Experimental::Browsable::RLevelIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::RLevelIter) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::RLevelIter*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::RLevelIter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RLevelIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RLevelIter*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::RProvider*)
   {
      ::ROOT::Experimental::Browsable::RProvider *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::RProvider));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::RProvider", "ROOT/Browsable/RProvider.hxx", 36,
                  typeid(::ROOT::Experimental::Browsable::RProvider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::RProvider) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::RProvider*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::RProvider*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RProvider*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RProvider*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::RSysFile*)
   {
      ::ROOT::Experimental::Browsable::RSysFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::RSysFile));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::RSysFile", "ROOT/Browsable/RSysFile.hxx", 28,
                  typeid(::ROOT::Experimental::Browsable::RSysFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::RSysFile) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::RSysFile*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::RSysFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RSysFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RSysFile*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::RSysFileItem*)
   {
      ::ROOT::Experimental::Browsable::RSysFileItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::RSysFileItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::RSysFileItem", "ROOT/Browsable/RSysFileItem.hxx", 23,
                  typeid(::ROOT::Experimental::Browsable::RSysFileItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::RSysFileItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::RSysFileItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::RSysFileItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RSysFileItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RSysFileItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::RWrapper*)
   {
      ::ROOT::Experimental::Browsable::RWrapper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::RWrapper));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::RWrapper", "ROOT/Browsable/RWrapper.hxx", 27,
                  typeid(::ROOT::Experimental::Browsable::RWrapper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::RWrapper) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::RWrapper*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::RWrapper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RWrapper*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::RWrapper*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::TKeyItem*)
   {
      ::ROOT::Experimental::Browsable::TKeyItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::TKeyItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::TKeyItem", "ROOT/Browsable/TKeyItem.hxx", 25,
                  typeid(::ROOT::Experimental::Browsable::TKeyItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::TKeyItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::TKeyItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::TKeyItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::TKeyItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::TKeyItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::TObjectHolder*)
   {
      ::ROOT::Experimental::Browsable::TObjectHolder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::TObjectHolder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::TObjectHolder", "ROOT/Browsable/TObjectHolder.hxx", 26,
                  typeid(::ROOT::Experimental::Browsable::TObjectHolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::TObjectHolder) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::TObjectHolder*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::TObjectHolder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::TObjectHolder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::TObjectHolder*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Browsable::TObjectItem*)
   {
      ::ROOT::Experimental::Browsable::TObjectItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Browsable::TObjectItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Browsable::TObjectItem", "ROOT/Browsable/TObjectItem.hxx", 26,
                  typeid(::ROOT::Experimental::Browsable::TObjectItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Browsable::TObjectItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Browsable::TObjectItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Browsable::TObjectItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::TObjectItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Browsable::TObjectItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder(void *p) {
      delete ((::ROOT::Experimental::Browsable::RHolder*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::RHolder*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRHolder(void *p) {
      typedef ::ROOT::Experimental::Browsable::RHolder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::RHolder

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder(void *p) {
      delete ((::ROOT::Experimental::Browsable::RAnyObjectHolder*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::RAnyObjectHolder*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRAnyObjectHolder(void *p) {
      typedef ::ROOT::Experimental::Browsable::RAnyObjectHolder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::RAnyObjectHolder

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRElement(void *p) {
      delete ((::ROOT::Experimental::Browsable::RElement*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRElement(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::RElement*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRElement(void *p) {
      typedef ::ROOT::Experimental::Browsable::RElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::RElement

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup(void *p) {
      delete ((::ROOT::Experimental::Browsable::RGroup*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::RGroup*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRGroup(void *p) {
      typedef ::ROOT::Experimental::Browsable::RGroup current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::RGroup

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::RItem : new ::ROOT::Experimental::Browsable::RItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::RItem[nElements] : new ::ROOT::Experimental::Browsable::RItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem(void *p) {
      delete ((::ROOT::Experimental::Browsable::RItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::RItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRItem(void *p) {
      typedef ::ROOT::Experimental::Browsable::RItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::RItem

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter(void *p) {
      delete ((::ROOT::Experimental::Browsable::RLevelIter*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::RLevelIter*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRLevelIter(void *p) {
      typedef ::ROOT::Experimental::Browsable::RLevelIter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::RLevelIter

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::RProvider : new ::ROOT::Experimental::Browsable::RProvider;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::RProvider[nElements] : new ::ROOT::Experimental::Browsable::RProvider[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider(void *p) {
      delete ((::ROOT::Experimental::Browsable::RProvider*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::RProvider*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRProvider(void *p) {
      typedef ::ROOT::Experimental::Browsable::RProvider current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::RProvider

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile(void *p) {
      delete ((::ROOT::Experimental::Browsable::RSysFile*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::RSysFile*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFile(void *p) {
      typedef ::ROOT::Experimental::Browsable::RSysFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::RSysFile

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::RSysFileItem : new ::ROOT::Experimental::Browsable::RSysFileItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::RSysFileItem[nElements] : new ::ROOT::Experimental::Browsable::RSysFileItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem(void *p) {
      delete ((::ROOT::Experimental::Browsable::RSysFileItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::RSysFileItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRSysFileItem(void *p) {
      typedef ::ROOT::Experimental::Browsable::RSysFileItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::RSysFileItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::RWrapper : new ::ROOT::Experimental::Browsable::RWrapper;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::RWrapper[nElements] : new ::ROOT::Experimental::Browsable::RWrapper[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper(void *p) {
      delete ((::ROOT::Experimental::Browsable::RWrapper*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::RWrapper*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLRWrapper(void *p) {
      typedef ::ROOT::Experimental::Browsable::RWrapper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::RWrapper

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::TKeyItem : new ::ROOT::Experimental::Browsable::TKeyItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::TKeyItem[nElements] : new ::ROOT::Experimental::Browsable::TKeyItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem(void *p) {
      delete ((::ROOT::Experimental::Browsable::TKeyItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::TKeyItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLTKeyItem(void *p) {
      typedef ::ROOT::Experimental::Browsable::TKeyItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::TKeyItem

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder(void *p) {
      delete ((::ROOT::Experimental::Browsable::TObjectHolder*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::TObjectHolder*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectHolder(void *p) {
      typedef ::ROOT::Experimental::Browsable::TObjectHolder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::TObjectHolder

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::TObjectItem : new ::ROOT::Experimental::Browsable::TObjectItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Browsable::TObjectItem[nElements] : new ::ROOT::Experimental::Browsable::TObjectItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem(void *p) {
      delete ((::ROOT::Experimental::Browsable::TObjectItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem(void *p) {
      delete [] ((::ROOT::Experimental::Browsable::TObjectItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLBrowsablecLcLTObjectItem(void *p) {
      typedef ::ROOT::Experimental::Browsable::TObjectItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Browsable::TObjectItem

namespace ROOT {
   static TClass *vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR_Dictionary();
   static void vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR(void *p = 0);
   static void *newArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR(Long_t size, void *p);
   static void delete_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR(void *p);
   static void deleteArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR(void *p);
   static void destruct_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >*)
   {
      vector<shared_ptr<ROOT::Experimental::Browsable::RElement> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >", -2, "vector", 386,
                  typeid(vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >) );
      instance.SetNew(&new_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR);
      instance.SetNewArray(&newArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR);
      instance.SetDelete(&delete_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR);
      instance.SetDestructor(&destruct_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<shared_ptr<ROOT::Experimental::Browsable::RElement> > >()));

      ::ROOT::AddClassAlternate("vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >","std::vector<std::shared_ptr<ROOT::Experimental::Browsable::RElement>, std::allocator<std::shared_ptr<ROOT::Experimental::Browsable::RElement> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >*)0x0)->GetClass();
      vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<shared_ptr<ROOT::Experimental::Browsable::RElement> > : new vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >;
   }
   static void *newArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >[nElements] : new vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR(void *p) {
      delete ((vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >*)p);
   }
   static void deleteArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR(void *p) {
      delete [] ((vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >*)p);
   }
   static void destruct_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLBrowsablecLcLRElementgRsPgR(void *p) {
      typedef vector<shared_ptr<ROOT::Experimental::Browsable::RElement> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<shared_ptr<ROOT::Experimental::Browsable::RElement> >

namespace {
  void TriggerDictionaryInitialization_libROOTBrowsable_Impl() {
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
      TROOT::RegisterModule("libROOTBrowsable",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTBrowsable_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTBrowsable_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTBrowsable() {
  TriggerDictionaryInitialization_libROOTBrowsable_Impl();
}
