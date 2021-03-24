// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTHist
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
#include "ROOT/RAxis.hxx"
#include "ROOT/RAxisConfig.hxx"
#include "ROOT/RHist.hxx"
#include "ROOT/RHistBinIter.hxx"
#include "ROOT/RHistBufferedFill.hxx"
#include "ROOT/RHistConcurrentFill.hxx"
#include "ROOT/RHistData.hxx"
#include "ROOT/RHistImpl.hxx"
#include "ROOT/RHistUtils.hxx"
#include "ROOT/RHistView.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)
   {
      ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>", "tuple", 523,
                  typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>","std::tuple<ROOT::Experimental::RAxisIrregular, ROOT::Experimental::RAxisIrregular, ROOT::Experimental::RAxisIrregular>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)
   {
      ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>", "tuple", 523,
                  typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>","std::tuple<ROOT::Experimental::RAxisIrregular, ROOT::Experimental::RAxisIrregular, ROOT::Experimental::RAxisEquidistant>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)
   {
      ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>", "tuple", 523,
                  typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>","std::tuple<ROOT::Experimental::RAxisIrregular, ROOT::Experimental::RAxisEquidistant, ROOT::Experimental::RAxisIrregular>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)
   {
      ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>", "tuple", 523,
                  typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>","std::tuple<ROOT::Experimental::RAxisIrregular, ROOT::Experimental::RAxisEquidistant, ROOT::Experimental::RAxisEquidistant>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)
   {
      ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>", "tuple", 523,
                  typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>","std::tuple<ROOT::Experimental::RAxisEquidistant, ROOT::Experimental::RAxisIrregular, ROOT::Experimental::RAxisIrregular>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)
   {
      ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>", "tuple", 523,
                  typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>","std::tuple<ROOT::Experimental::RAxisEquidistant, ROOT::Experimental::RAxisIrregular, ROOT::Experimental::RAxisEquidistant>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)
   {
      ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>", "tuple", 523,
                  typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>","std::tuple<ROOT::Experimental::RAxisEquidistant, ROOT::Experimental::RAxisEquidistant, ROOT::Experimental::RAxisIrregular>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)
   {
      ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>", "tuple", 523,
                  typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>","std::tuple<ROOT::Experimental::RAxisEquidistant, ROOT::Experimental::RAxisEquidistant, ROOT::Experimental::RAxisEquidistant>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)
   {
      ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>", "tuple", 893,
                  typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>","std::tuple<ROOT::Experimental::RAxisIrregular, ROOT::Experimental::RAxisIrregular>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)
   {
      ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>", "tuple", 893,
                  typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>","std::tuple<ROOT::Experimental::RAxisEquidistant, ROOT::Experimental::RAxisEquidistant>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)
   {
      ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>", "tuple", 893,
                  typeid(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>","std::tuple<ROOT::Experimental::RAxisIrregular, ROOT::Experimental::RAxisEquidistant>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)
   {
      ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>", "tuple", 893,
                  typeid(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>","std::tuple<ROOT::Experimental::RAxisEquidistant, ROOT::Experimental::RAxisIrregular>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisIrregular>*)
   {
      ::tuple<ROOT::Experimental::RAxisIrregular> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisIrregular>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisIrregular>", "tuple", 523,
                  typeid(::tuple<ROOT::Experimental::RAxisIrregular>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisIrregular>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisIrregular>","std::tuple<ROOT::Experimental::RAxisIrregular>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisIrregular>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary();
   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass*);
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p = 0);
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t size, void *p);
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<ROOT::Experimental::RAxisEquidistant>*)
   {
      ::tuple<ROOT::Experimental::RAxisEquidistant> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<ROOT::Experimental::RAxisEquidistant>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<ROOT::Experimental::RAxisEquidistant>", "tuple", 523,
                  typeid(::tuple<ROOT::Experimental::RAxisEquidistant>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<ROOT::Experimental::RAxisEquidistant>) );
      instance.SetNew(&new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetNewArray(&newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDelete(&delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDeleteArray(&deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR);
      instance.SetDestructor(&destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR);

      ::ROOT::AddClassAlternate("tuple<ROOT::Experimental::RAxisEquidistant>","std::tuple<ROOT::Experimental::RAxisEquidistant>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<ROOT::Experimental::RAxisEquidistant>*)0x0)->GetClass();
      tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAxisBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAxisBase_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAxisBase*)
   {
      ::ROOT::Experimental::RAxisBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAxisBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAxisBase", "ROOT/RAxis.hxx", 44,
                  typeid(::ROOT::Experimental::RAxisBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAxisBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAxisBase) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAxisBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAxisBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAxisBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisBase*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAxisBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAxisBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAxisEquidistant_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAxisEquidistant_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAxisEquidistant(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAxisEquidistant(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAxisEquidistant(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisEquidistant(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAxisEquidistant(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAxisEquidistant*)
   {
      ::ROOT::Experimental::RAxisEquidistant *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAxisEquidistant));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAxisEquidistant", "ROOT/RAxis.hxx", 384,
                  typeid(::ROOT::Experimental::RAxisEquidistant), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAxisEquidistant_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAxisEquidistant) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAxisEquidistant);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAxisEquidistant);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAxisEquidistant);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAxisEquidistant);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAxisEquidistant);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAxisEquidistant*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAxisEquidistant*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisEquidistant*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAxisEquidistant_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisEquidistant*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAxisEquidistant_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAxisEquidistant_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAxisIrregular_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAxisIrregular_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAxisIrregular(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAxisIrregular(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAxisIrregular(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisIrregular(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAxisIrregular(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAxisIrregular*)
   {
      ::ROOT::Experimental::RAxisIrregular *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAxisIrregular));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAxisIrregular", "ROOT/RAxis.hxx", 590,
                  typeid(::ROOT::Experimental::RAxisIrregular), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAxisIrregular_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAxisIrregular) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAxisIrregular);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAxisIrregular);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAxisIrregular);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAxisIrregular);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAxisIrregular);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAxisIrregular*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAxisIrregular*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisIrregular*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAxisIrregular_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisIrregular*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAxisIrregular_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAxisIrregular_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>", "ROOT/RHist.hxx", 53,
                  typeid(::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RH1D");

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RHist<1, double, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>", "ROOT/RHist.hxx", 53,
                  typeid(::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RH1F");

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RHist<1, float, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>", "ROOT/RHist.hxx", 53,
                  typeid(::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RH2D");

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RHist<2, double, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>", "ROOT/RHist.hxx", 53,
                  typeid(::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RH2F");

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RHist<2, float, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>", "ROOT/RHist.hxx", 53,
                  typeid(::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RH3D");

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RHist<3, double, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>", "ROOT/RHist.hxx", 53,
                  typeid(::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RH3F");

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::RHist<3, float, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>*)
   {
      ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>", "ROOT/RHistImpl.hxx", 72,
                  typeid(::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>*)
   {
      ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>", "ROOT/RHistImpl.hxx", 72,
                  typeid(::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>*)
   {
      ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>", "ROOT/RHistImpl.hxx", 72,
                  typeid(::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)
   {
      ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >", "ROOT/RHistImpl.hxx", 152,
                  typeid(::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >","ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3, double, std::vector<double, std::allocator<double> >, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)
   {
      ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >", "ROOT/RHistImpl.hxx", 152,
                  typeid(::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >","ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2, double, std::vector<double, std::allocator<double> >, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)
   {
      ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >", "ROOT/RHistImpl.hxx", 152,
                  typeid(::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >","ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1, double, std::vector<double, std::allocator<double> >, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatContent<3,double>*)
   {
      ::ROOT::Experimental::RHistStatContent<3,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatContent<3,double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatContent<3,double>", "ROOT/RHistData.hxx", 36,
                  typeid(::ROOT::Experimental::RHistStatContent<3,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatContent<3,double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHistStatContent<3,double>","ROOT::Experimental::RHistStatContent<3, double>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatContent<3,double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatContent<3,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatContent<3,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatContent<3,double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatContent<2,double>*)
   {
      ::ROOT::Experimental::RHistStatContent<2,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatContent<2,double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatContent<2,double>", "ROOT/RHistData.hxx", 36,
                  typeid(::ROOT::Experimental::RHistStatContent<2,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatContent<2,double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHistStatContent<2,double>","ROOT::Experimental::RHistStatContent<2, double>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatContent<2,double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatContent<2,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatContent<2,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatContent<2,double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatContent<1,double>*)
   {
      ::ROOT::Experimental::RHistStatContent<1,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatContent<1,double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatContent<1,double>", "ROOT/RHistData.hxx", 36,
                  typeid(::ROOT::Experimental::RHistStatContent<1,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatContent<1,double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHistStatContent<1,double>","ROOT::Experimental::RHistStatContent<1, double>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatContent<1,double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatContent<1,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatContent<1,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatContent<1,double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatUncertainty<3,double>*)
   {
      ::ROOT::Experimental::RHistStatUncertainty<3,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatUncertainty<3,double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatUncertainty<3,double>", "ROOT/RHistData.hxx", 259,
                  typeid(::ROOT::Experimental::RHistStatUncertainty<3,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatUncertainty<3,double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHistStatUncertainty<3,double>","ROOT::Experimental::RHistStatUncertainty<3, double>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatUncertainty<3,double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatUncertainty<3,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatUncertainty<3,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatUncertainty<3,double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatUncertainty<2,double>*)
   {
      ::ROOT::Experimental::RHistStatUncertainty<2,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatUncertainty<2,double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatUncertainty<2,double>", "ROOT/RHistData.hxx", 259,
                  typeid(::ROOT::Experimental::RHistStatUncertainty<2,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatUncertainty<2,double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHistStatUncertainty<2,double>","ROOT::Experimental::RHistStatUncertainty<2, double>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatUncertainty<2,double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatUncertainty<2,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatUncertainty<2,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatUncertainty<2,double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStatUncertainty<1,double>*)
   {
      ::ROOT::Experimental::RHistStatUncertainty<1,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStatUncertainty<1,double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStatUncertainty<1,double>", "ROOT/RHistData.hxx", 259,
                  typeid(::ROOT::Experimental::RHistStatUncertainty<1,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RHistStatUncertainty<1,double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RHistStatUncertainty<1,double>","ROOT::Experimental::RHistStatUncertainty<1, double>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStatUncertainty<1,double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RHistStatUncertainty<1,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatUncertainty<1,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RHistStatUncertainty<1,double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>", "ROOT/RHistData.hxx", 510,
                  typeid(::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::Detail::RHistData<3, double, std::vector<double, std::allocator<double> >, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>", "ROOT/RHistData.hxx", 510,
                  typeid(::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::Detail::RHistData<2, double, std::vector<double, std::allocator<double> >, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>", "ROOT/RHistData.hxx", 510,
                  typeid(::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>","ROOT::Experimental::Detail::RHistData<1, double, std::vector<double, std::allocator<double> >, ROOT::Experimental::RHistStatContent, ROOT::Experimental::RHistStatUncertainty>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular> : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>[nElements] : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant> : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>[nElements] : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular> : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>[nElements] : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant> : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>[nElements] : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular> : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>[nElements] : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant> : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>[nElements] : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular> : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>[nElements] : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant> : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>[nElements] : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular> : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>[nElements] : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisIrregular>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant> : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>[nElements] : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisEquidistant>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant> : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>[nElements] : new ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregularcOROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisIrregular,ROOT::Experimental::RAxisEquidistant>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular> : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>[nElements] : new ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantcOROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisEquidistant,ROOT::Experimental::RAxisIrregular>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular> : new ::tuple<ROOT::Experimental::RAxisIrregular>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisIrregular>[nElements] : new ::tuple<ROOT::Experimental::RAxisIrregular>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisIrregular>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisIrregulargR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisIrregular> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisIrregular>

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant> : new ::tuple<ROOT::Experimental::RAxisEquidistant>;
   }
   static void *newArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<ROOT::Experimental::RAxisEquidistant>[nElements] : new ::tuple<ROOT::Experimental::RAxisEquidistant>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete ((::tuple<ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void deleteArray_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      delete [] ((::tuple<ROOT::Experimental::RAxisEquidistant>*)p);
   }
   static void destruct_tuplelEROOTcLcLExperimentalcLcLRAxisEquidistantgR(void *p) {
      typedef ::tuple<ROOT::Experimental::RAxisEquidistant> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<ROOT::Experimental::RAxisEquidistant>

namespace ROOT {
} // end of namespace ROOT for class ::ROOT::Experimental::RAxisBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAxisEquidistant(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAxisEquidistant : new ::ROOT::Experimental::RAxisEquidistant;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAxisEquidistant(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAxisEquidistant[nElements] : new ::ROOT::Experimental::RAxisEquidistant[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAxisEquidistant(void *p) {
      delete ((::ROOT::Experimental::RAxisEquidistant*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisEquidistant(void *p) {
      delete [] ((::ROOT::Experimental::RAxisEquidistant*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAxisEquidistant(void *p) {
      typedef ::ROOT::Experimental::RAxisEquidistant current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAxisEquidistant

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAxisIrregular(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAxisIrregular : new ::ROOT::Experimental::RAxisIrregular;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAxisIrregular(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAxisIrregular[nElements] : new ::ROOT::Experimental::RAxisIrregular[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAxisIrregular(void *p) {
      delete ((::ROOT::Experimental::RAxisIrregular*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisIrregular(void *p) {
      delete [] ((::ROOT::Experimental::RAxisIrregular*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAxisIrregular(void *p) {
      typedef ::ROOT::Experimental::RAxisIrregular current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAxisIrregular

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> : new ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements] : new ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete ((::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete [] ((::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE1cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      typedef ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<1,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> : new ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements] : new ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete ((::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete [] ((::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE1cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      typedef ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<1,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> : new ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements] : new ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete ((::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete [] ((::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE2cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      typedef ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<2,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> : new ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements] : new ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete ((::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete [] ((::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE2cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      typedef ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<2,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> : new ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements] : new ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete ((::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete [] ((::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE3cOdoublecOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      typedef ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<3,double,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> : new ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements] : new ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete ((::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete [] ((::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlE3cOfloatcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      typedef ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<3,float,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR(void *p) {
      delete ((::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE3gR(void *p) {
      typedef ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<3>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR(void *p) {
      delete ((::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE2gR(void *p) {
      typedef ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<2>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR(void *p) {
      delete ((::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplPrecisionAgnosticBaselE1gR(void *p) {
      typedef ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RHistImplPrecisionAgnosticBase<1>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p) {
      delete ((::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p) {
      typedef ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p) {
      delete ((::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p) {
      typedef ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p) {
      delete ((::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistImplBaselEROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygRsPgR(void *p) {
      typedef ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RHistImplBase<ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatContent<3,double> : new ::ROOT::Experimental::RHistStatContent<3,double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatContent<3,double>[nElements] : new ::ROOT::Experimental::RHistStatContent<3,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR(void *p) {
      delete ((::ROOT::Experimental::RHistStatContent<3,double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatContent<3,double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatContentlE3cOdoublegR(void *p) {
      typedef ::ROOT::Experimental::RHistStatContent<3,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatContent<3,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatContent<2,double> : new ::ROOT::Experimental::RHistStatContent<2,double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatContent<2,double>[nElements] : new ::ROOT::Experimental::RHistStatContent<2,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR(void *p) {
      delete ((::ROOT::Experimental::RHistStatContent<2,double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatContent<2,double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatContentlE2cOdoublegR(void *p) {
      typedef ::ROOT::Experimental::RHistStatContent<2,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatContent<2,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatContent<1,double> : new ::ROOT::Experimental::RHistStatContent<1,double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatContent<1,double>[nElements] : new ::ROOT::Experimental::RHistStatContent<1,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR(void *p) {
      delete ((::ROOT::Experimental::RHistStatContent<1,double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatContent<1,double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatContentlE1cOdoublegR(void *p) {
      typedef ::ROOT::Experimental::RHistStatContent<1,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatContent<1,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatUncertainty<3,double> : new ::ROOT::Experimental::RHistStatUncertainty<3,double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatUncertainty<3,double>[nElements] : new ::ROOT::Experimental::RHistStatUncertainty<3,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR(void *p) {
      delete ((::ROOT::Experimental::RHistStatUncertainty<3,double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatUncertainty<3,double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE3cOdoublegR(void *p) {
      typedef ::ROOT::Experimental::RHistStatUncertainty<3,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatUncertainty<3,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatUncertainty<2,double> : new ::ROOT::Experimental::RHistStatUncertainty<2,double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatUncertainty<2,double>[nElements] : new ::ROOT::Experimental::RHistStatUncertainty<2,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR(void *p) {
      delete ((::ROOT::Experimental::RHistStatUncertainty<2,double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatUncertainty<2,double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE2cOdoublegR(void *p) {
      typedef ::ROOT::Experimental::RHistStatUncertainty<2,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatUncertainty<2,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatUncertainty<1,double> : new ::ROOT::Experimental::RHistStatUncertainty<1,double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RHistStatUncertainty<1,double>[nElements] : new ::ROOT::Experimental::RHistStatUncertainty<1,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR(void *p) {
      delete ((::ROOT::Experimental::RHistStatUncertainty<1,double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::RHistStatUncertainty<1,double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStatUncertaintylE1cOdoublegR(void *p) {
      typedef ::ROOT::Experimental::RHistStatUncertainty<1,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStatUncertainty<1,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> : new ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements] : new ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete ((::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE3cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      typedef ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RHistData<3,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> : new ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements] : new ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete ((::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE2cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      typedef ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RHistData<2,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> : new ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements] : new ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete ((::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRHistDatalE1cOdoublecOvectorlEdoublegRcOROOTcLcLExperimentalcLcLRHistStatContentcOROOTcLcLExperimentalcLcLRHistStatUncertaintygR(void *p) {
      typedef ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RHistData<1,double,vector<double>,ROOT::Experimental::RHistStatContent,ROOT::Experimental::RHistStatUncertainty>

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

namespace {
  void TriggerDictionaryInitialization_libROOTHist_Impl() {
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
      TROOT::RegisterModule("libROOTHist",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTHist_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTHist_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTHist() {
  TriggerDictionaryInitialization_libROOTHist_Impl();
}
