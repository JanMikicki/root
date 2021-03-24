// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTGpadv7
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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"


// Header files passed as explicit arguments
#include "ROOT/RCanvas.hxx"
#include "ROOT/RFrame.hxx"
#include "ROOT/RMenuItems.hxx"
#include "ROOT/RColor.hxx"
#include "ROOT/RDisplayItem.hxx"
#include "ROOT/RAttrMap.hxx"
#include "ROOT/RAttrBase.hxx"
#include "ROOT/RAttrAxis.hxx"
#include "ROOT/RAttrBox.hxx"
#include "ROOT/RAttrColor.hxx"
#include "ROOT/RAttrLine.hxx"
#include "ROOT/RAttrFill.hxx"
#include "ROOT/RAttrMarker.hxx"
#include "ROOT/RAttrMargins.hxx"
#include "ROOT/RAttrText.hxx"
#include "ROOT/RAttrValue.hxx"
#include "ROOT/RAxisDrawable.hxx"
#include "ROOT/RPalette.hxx"
#include "ROOT/RPaletteDrawable.hxx"
#include "ROOT/RDrawable.hxx"
#include "ROOT/RDrawableRequest.hxx"
#include "ROOT/RStyle.hxx"
#include "ROOT/RPadDisplayItem.hxx"
#include "ROOT/RPadExtent.hxx"
#include "ROOT/RPadBase.hxx"
#include "ROOT/RPad.hxx"
#include "ROOT/RPadLength.hxx"
#include "ROOT/RPadPos.hxx"
#include "ROOT/RPadUserAxis.hxx"
#include "ROOT/RPave.hxx"
#include "ROOT/RVirtualCanvasPainter.hxx"
#include "ROOT/TObjectDrawable.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadLength_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadLength_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadLength(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLength(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadLength(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLength(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadLength(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadLength*)
   {
      ::ROOT::Experimental::RPadLength *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadLength));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadLength", "ROOT/RPadLength.hxx", 31,
                  typeid(::ROOT::Experimental::RPadLength), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadLength_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadLength) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadLength);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadLength);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadLength);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadLength);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadLength);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadLength*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadLength*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadLength_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadLength_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadLength_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>*)
   {
      ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>", "ROOT/RPadLength.hxx", 39,
                  typeid(::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>*)
   {
      ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>", "ROOT/RPadLength.hxx", 39,
                  typeid(::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>*)
   {
      ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>", "ROOT/RPadLength.hxx", 39,
                  typeid(::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadLength::Normal*)
   {
      ::ROOT::Experimental::RPadLength::Normal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadLength::Normal));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadLength::Normal", "ROOT/RPadLength.hxx", 88,
                  typeid(::ROOT::Experimental::RPadLength::Normal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadLength::Normal) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadLength::Normal*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadLength::Normal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::Normal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::Normal*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadLength::Pixel*)
   {
      ::ROOT::Experimental::RPadLength::Pixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadLength::Pixel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadLength::Pixel", "ROOT/RPadLength.hxx", 98,
                  typeid(::ROOT::Experimental::RPadLength::Pixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadLength::Pixel) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadLength::Pixel*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadLength::Pixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::Pixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::Pixel*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLUser_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLUser_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadLength::User*)
   {
      ::ROOT::Experimental::RPadLength::User *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadLength::User));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadLength::User", "ROOT/RPadLength.hxx", 107,
                  typeid(::ROOT::Experimental::RPadLength::User), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadLengthcLcLUser_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadLength::User) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadLength::User*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadLength::User*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::User*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadLengthcLcLUser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadLength::User*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadLengthcLcLUser_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadLengthcLcLUser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrMap_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrMap_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrMap(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMap(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrMap(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMap(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrMap*)
   {
      ::ROOT::Experimental::RAttrMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrMap));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrMap", "ROOT/RAttrMap.hxx", 33,
                  typeid(::ROOT::Experimental::RAttrMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrMap_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrMap) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrMap);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrMap);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrMap);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrMap);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrMap*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrMap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrMap_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrMap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrMap::Value_t*)
   {
      ::ROOT::Experimental::RAttrMap::Value_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrMap::Value_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrMap::Value_t", "ROOT/RAttrMap.hxx", 42,
                  typeid(::ROOT::Experimental::RAttrMap::Value_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrMap::Value_t) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrMap::Value_t*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrMap::Value_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::Value_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::Value_t*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrMap::NoValue_t*)
   {
      ::ROOT::Experimental::RAttrMap::NoValue_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrMap::NoValue_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrMap::NoValue_t", "ROOT/RAttrMap.hxx", 61,
                  typeid(::ROOT::Experimental::RAttrMap::NoValue_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrMap::NoValue_t) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrMap::NoValue_t*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrMap::NoValue_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::NoValue_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::NoValue_t*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrMap::BoolValue_t*)
   {
      ::ROOT::Experimental::RAttrMap::BoolValue_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrMap::BoolValue_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrMap::BoolValue_t", "ROOT/RAttrMap.hxx", 69,
                  typeid(::ROOT::Experimental::RAttrMap::BoolValue_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrMap::BoolValue_t) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrMap::BoolValue_t*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrMap::BoolValue_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::BoolValue_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::BoolValue_t*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrMap::IntValue_t*)
   {
      ::ROOT::Experimental::RAttrMap::IntValue_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrMap::IntValue_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrMap::IntValue_t", "ROOT/RAttrMap.hxx", 84,
                  typeid(::ROOT::Experimental::RAttrMap::IntValue_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrMap::IntValue_t) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrMap::IntValue_t*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrMap::IntValue_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::IntValue_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::IntValue_t*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrMap::DoubleValue_t*)
   {
      ::ROOT::Experimental::RAttrMap::DoubleValue_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrMap::DoubleValue_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrMap::DoubleValue_t", "ROOT/RAttrMap.hxx", 99,
                  typeid(::ROOT::Experimental::RAttrMap::DoubleValue_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrMap::DoubleValue_t) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrMap::DoubleValue_t*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrMap::DoubleValue_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::DoubleValue_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::DoubleValue_t*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrMap::StringValue_t*)
   {
      ::ROOT::Experimental::RAttrMap::StringValue_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrMap::StringValue_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrMap::StringValue_t", "ROOT/RAttrMap.hxx", 114,
                  typeid(::ROOT::Experimental::RAttrMap::StringValue_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrMap::StringValue_t) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrMap::StringValue_t*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrMap::StringValue_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::StringValue_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMap::StringValue_t*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRStyle_Dictionary();
   static void ROOTcLcLExperimentalcLcLRStyle_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRStyle(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRStyle(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRStyle(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRStyle(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRStyle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RStyle*)
   {
      ::ROOT::Experimental::RStyle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RStyle));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RStyle", "ROOT/RStyle.hxx", 32,
                  typeid(::ROOT::Experimental::RStyle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRStyle_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RStyle) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRStyle);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRStyle);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRStyle);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRStyle);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRStyle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RStyle*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RStyle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RStyle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRStyle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RStyle*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRStyle_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRStyle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRStylecLcLBlock_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLRStylecLcLBlock_t_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RStyle::Block_t*)
   {
      ::ROOT::Experimental::RStyle::Block_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RStyle::Block_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RStyle::Block_t", "ROOT/RStyle.hxx", 36,
                  typeid(::ROOT::Experimental::RStyle::Block_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRStylecLcLBlock_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RStyle::Block_t) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RStyle::Block_t*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RStyle::Block_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RStyle::Block_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRStylecLcLBlock_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RStyle::Block_t*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRStylecLcLBlock_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRStylecLcLBlock_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Internal::RIOSharedBase*)
   {
      ::ROOT::Experimental::Internal::RIOSharedBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Internal::RIOSharedBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Internal::RIOSharedBase", "ROOT/RDrawable.hxx", 43,
                  typeid(::ROOT::Experimental::Internal::RIOSharedBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Internal::RIOSharedBase) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Internal::RIOSharedBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Internal::RIOSharedBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOSharedBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOSharedBase*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>*)
   {
      ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>", "ROOT/RDrawable.hxx", 55,
                  typeid(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Internal::RIOShared<TObject>*)
   {
      ::ROOT::Experimental::Internal::RIOShared<TObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Internal::RIOShared<TObject>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Internal::RIOShared<TObject>", "ROOT/RDrawable.hxx", 55,
                  typeid(::ROOT::Experimental::Internal::RIOShared<TObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Internal::RIOShared<TObject>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Internal::RIOShared<TObject>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Internal::RIOShared<TObject>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOShared<TObject>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Internal::RIOShared<TObject>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRDrawable_Dictionary();
   static void ROOTcLcLExperimentalcLcLRDrawable_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRDrawable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRDrawable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RDrawable*)
   {
      ::ROOT::Experimental::RDrawable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RDrawable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RDrawable", "ROOT/RDrawable.hxx", 109,
                  typeid(::ROOT::Experimental::RDrawable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRDrawable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RDrawable) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRDrawable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRDrawable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRDrawable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RDrawable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RDrawable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRDrawable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRDrawable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRDrawable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRDrawableReply_Dictionary();
   static void ROOTcLcLExperimentalcLcLRDrawableReply_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRDrawableReply(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRDrawableReply(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRDrawableReply(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawableReply(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRDrawableReply(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RDrawableReply*)
   {
      ::ROOT::Experimental::RDrawableReply *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RDrawableReply));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RDrawableReply", "ROOT/RDrawableRequest.hxx", 30,
                  typeid(::ROOT::Experimental::RDrawableReply), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRDrawableReply_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RDrawableReply) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRDrawableReply);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRDrawableReply);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRDrawableReply);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRDrawableReply);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRDrawableReply);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RDrawableReply*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RDrawableReply*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawableReply*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRDrawableReply_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawableReply*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRDrawableReply_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRDrawableReply_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRDrawableRequest_Dictionary();
   static void ROOTcLcLExperimentalcLcLRDrawableRequest_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRDrawableRequest(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRDrawableRequest(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRDrawableRequest(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawableRequest(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRDrawableRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RDrawableRequest*)
   {
      ::ROOT::Experimental::RDrawableRequest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RDrawableRequest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RDrawableRequest", "ROOT/RDrawableRequest.hxx", 50,
                  typeid(::ROOT::Experimental::RDrawableRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRDrawableRequest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RDrawableRequest) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRDrawableRequest);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRDrawableRequest);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRDrawableRequest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRDrawableRequest);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRDrawableRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RDrawableRequest*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RDrawableRequest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawableRequest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRDrawableRequest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawableRequest*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRDrawableRequest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRDrawableRequest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRDrawableExecRequest_Dictionary();
   static void ROOTcLcLExperimentalcLcLRDrawableExecRequest_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRDrawableExecRequest(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRDrawableExecRequest(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRDrawableExecRequest(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawableExecRequest(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRDrawableExecRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RDrawableExecRequest*)
   {
      ::ROOT::Experimental::RDrawableExecRequest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RDrawableExecRequest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RDrawableExecRequest", "ROOT/RDrawableRequest.hxx", 89,
                  typeid(::ROOT::Experimental::RDrawableExecRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRDrawableExecRequest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RDrawableExecRequest) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRDrawableExecRequest);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRDrawableExecRequest);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRDrawableExecRequest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRDrawableExecRequest);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRDrawableExecRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RDrawableExecRequest*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RDrawableExecRequest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawableExecRequest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRDrawableExecRequest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawableExecRequest*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRDrawableExecRequest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRDrawableExecRequest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrBase_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrBase(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrBase(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrBase*)
   {
      ::ROOT::Experimental::RAttrBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrBase", "ROOT/RAttrBase.hxx", 31,
                  typeid(::ROOT::Experimental::RAttrBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrBase) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrBase);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrBase);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrBase*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRColor_Dictionary();
   static void ROOTcLcLExperimentalcLcLRColor_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRColor(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRColor(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRColor(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRColor(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRColor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RColor*)
   {
      ::ROOT::Experimental::RColor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RColor));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RColor", "ROOT/RColor.hxx", 35,
                  typeid(::ROOT::Experimental::RColor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRColor_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RColor) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRColor);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRColor);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRColor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRColor);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRColor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RColor*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RColor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RColor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRColor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RColor*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRColor_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRColor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrColor_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrColor_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrColor(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrColor(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrColor(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrColor(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrColor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrColor*)
   {
      ::ROOT::Experimental::RAttrColor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrColor));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrColor", "ROOT/RAttrColor.hxx", 33,
                  typeid(::ROOT::Experimental::RAttrColor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrColor_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrColor) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrColor);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrColor);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrColor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrColor);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrColor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrColor*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrColor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrColor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrColor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrColor*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrColor_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrColor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrValue<double>*)
   {
      ::ROOT::Experimental::RAttrValue<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrValue<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrValue<double>", "ROOT/RAttrValue.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrValue<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrValue<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrValue<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrValue<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrValue<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrValue<double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrValuelEintgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrValuelEintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrValuelEintgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrValuelEintgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrValuelEintgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEintgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrValuelEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrValue<int>*)
   {
      ::ROOT::Experimental::RAttrValue<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrValue<int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrValue<int>", "ROOT/RAttrValue.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrValue<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrValuelEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrValue<int>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrValuelEintgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrValuelEintgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrValuelEintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEintgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrValuelEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrValue<int>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrValue<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrValue<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrValuelEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrValue<int>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrValuelEintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrValuelEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>*)
   {
      ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>", "ROOT/RAttrValue.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrValuelEstringgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrValuelEstringgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrValue<string>*)
   {
      ::ROOT::Experimental::RAttrValue<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrValue<string>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrValue<string>", "ROOT/RAttrValue.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrValue<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrValuelEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrValue<string>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::RAttrValue<string>","ROOT::Experimental::RAttrValue<std::string>");

      ::ROOT::AddClassAlternate("ROOT::Experimental::RAttrValue<string>","ROOT::Experimental::RAttrValue<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrValue<string>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrValue<string>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrValue<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrValuelEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrValue<string>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrValuelEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrValuelEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrValuelEboolgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrValuelEboolgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrValue<bool>*)
   {
      ::ROOT::Experimental::RAttrValue<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrValue<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrValue<bool>", "ROOT/RAttrValue.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrValue<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrValuelEboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrValue<bool>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrValue<bool>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrValue<bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrValue<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrValuelEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrValue<bool>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrValuelEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrValuelEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrLine_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrLine_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrLine(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrLine(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrLine(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrLine(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrLine*)
   {
      ::ROOT::Experimental::RAttrLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrLine));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrLine", "ROOT/RAttrLine.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrLine_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrLine) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrLine);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrLine);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrLine);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrLine);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrLine*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrLine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrLine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrLine*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrLine_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrLine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrFill_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrFill_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrFill(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrFill(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrFill(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrFill(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrFill(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrFill*)
   {
      ::ROOT::Experimental::RAttrFill *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrFill));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrFill", "ROOT/RAttrFill.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrFill), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrFill_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrFill) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrFill);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrFill);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrFill);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrFill);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrFill);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrFill*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrFill*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrFill*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrFill_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrFill*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrFill_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrFill_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrMargins_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrMargins_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrMargins(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMargins(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrMargins(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMargins(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMargins(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrMargins*)
   {
      ::ROOT::Experimental::RAttrMargins *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrMargins));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrMargins", "ROOT/RAttrMargins.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrMargins), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrMargins_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrMargins) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrMargins);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrMargins);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrMargins);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrMargins);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrMargins);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrMargins*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrMargins*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMargins*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrMargins_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMargins*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrMargins_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrMargins_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrText_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrText_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrText(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrText(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrText(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrText(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrText(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrText*)
   {
      ::ROOT::Experimental::RAttrText *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrText));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrText", "ROOT/RAttrText.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrText_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrText) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrText);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrText);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrText);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrText);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrText*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrText*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrText*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrText_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrText*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrText_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrText_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrAxis_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrAxis_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrAxis(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrAxis(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrAxis(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrAxis(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrAxis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrAxis*)
   {
      ::ROOT::Experimental::RAttrAxis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrAxis));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrAxis", "ROOT/RAttrAxis.hxx", 29,
                  typeid(::ROOT::Experimental::RAttrAxis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrAxis_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrAxis) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrAxis);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrAxis);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrAxis);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrAxis);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrAxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrAxis*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrAxis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrAxis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrAxis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrAxis*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrAxis_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrAxis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadUserAxisBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadUserAxisBase_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRPadUserAxisBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadUserAxisBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadUserAxisBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadUserAxisBase*)
   {
      ::ROOT::Experimental::RPadUserAxisBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadUserAxisBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadUserAxisBase", "ROOT/RPadUserAxis.hxx", 28,
                  typeid(::ROOT::Experimental::RPadUserAxisBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadUserAxisBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadUserAxisBase) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadUserAxisBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadUserAxisBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadUserAxisBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadUserAxisBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadUserAxisBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadUserAxisBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadUserAxisBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadUserAxisBase*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadUserAxisBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadUserAxisBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadCartesianUserAxis_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadCartesianUserAxis_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadCartesianUserAxis*)
   {
      ::ROOT::Experimental::RPadCartesianUserAxis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadCartesianUserAxis));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadCartesianUserAxis", "ROOT/RPadUserAxis.hxx", 100,
                  typeid(::ROOT::Experimental::RPadCartesianUserAxis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadCartesianUserAxis_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadCartesianUserAxis) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadCartesianUserAxis*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadCartesianUserAxis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadCartesianUserAxis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadCartesianUserAxis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadCartesianUserAxis*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadCartesianUserAxis_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadCartesianUserAxis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFrame_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFrame_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFrame(void *p = 0);
   static void delete_ROOTcLcLExperimentalcLcLRFrame(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFrame(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFrame*)
   {
      ::ROOT::Experimental::RFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFrame));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFrame", "ROOT/RFrame.hxx", 39,
                  typeid(::ROOT::Experimental::RFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFrame_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFrame) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFrame);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFrame);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFrame);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFrame*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFrame_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RFrame*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRFrame_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFrame_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFrame::RUserRanges*)
   {
      ::ROOT::Experimental::RFrame::RUserRanges *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFrame::RUserRanges));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFrame::RUserRanges", "ROOT/RFrame.hxx", 45,
                  typeid(::ROOT::Experimental::RFrame::RUserRanges), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFrame::RUserRanges) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFrame::RUserRanges*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RFrame::RUserRanges*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RFrame::RUserRanges*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RFrame::RUserRanges*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFrame::RZoomRequest*)
   {
      ::ROOT::Experimental::RFrame::RZoomRequest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFrame::RZoomRequest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFrame::RZoomRequest", "ROOT/RFrame.hxx", 187,
                  typeid(::ROOT::Experimental::RFrame::RZoomRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFrame::RZoomRequest) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFrame::RZoomRequest*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RFrame::RZoomRequest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RFrame::RZoomRequest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RFrame::RZoomRequest*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadExtent_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadExtent_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadExtent(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadExtent(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadExtent(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadExtent(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadExtent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadExtent*)
   {
      ::ROOT::Experimental::RPadExtent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadExtent));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadExtent", "ROOT/RPadExtent.hxx", 27,
                  typeid(::ROOT::Experimental::RPadExtent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadExtent_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadExtent) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadExtent);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadExtent);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadExtent);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadExtent);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadExtent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadExtent*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadExtent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadExtent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadExtent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadExtent*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadExtent_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadExtent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadPos_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadPos_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadPos(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadPos(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadPos(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadPos(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadPos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadPos*)
   {
      ::ROOT::Experimental::RPadPos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadPos));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadPos", "ROOT/RPadPos.hxx", 28,
                  typeid(::ROOT::Experimental::RPadPos), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadPos_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadPos) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadPos);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadPos);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadPos);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadPos);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadPos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadPos*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadPos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadPos*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadPos_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadPos*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadPos_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadPos_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadBase_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRPadBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadBase*)
   {
      ::ROOT::Experimental::RPadBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadBase", "ROOT/RPadBase.hxx", 37,
                  typeid(::ROOT::Experimental::RPadBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadBase) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadBase*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRChangeAttrRequest_Dictionary();
   static void ROOTcLcLExperimentalcLcLRChangeAttrRequest_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRChangeAttrRequest(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRChangeAttrRequest(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRChangeAttrRequest(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRChangeAttrRequest(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRChangeAttrRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RChangeAttrRequest*)
   {
      ::ROOT::Experimental::RChangeAttrRequest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RChangeAttrRequest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RChangeAttrRequest", "ROOT/RCanvas.hxx", 24,
                  typeid(::ROOT::Experimental::RChangeAttrRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRChangeAttrRequest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RChangeAttrRequest) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRChangeAttrRequest);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRChangeAttrRequest);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRChangeAttrRequest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRChangeAttrRequest);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRChangeAttrRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RChangeAttrRequest*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RChangeAttrRequest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RChangeAttrRequest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRChangeAttrRequest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RChangeAttrRequest*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRChangeAttrRequest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRChangeAttrRequest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRCanvas_Dictionary();
   static void ROOTcLcLExperimentalcLcLRCanvas_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRCanvas(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRCanvas(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRCanvas(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRCanvas(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRCanvas(void *p);

   // Schema evolution read functions
   static void read_ROOTcLcLExperimentalcLcLRCanvas_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      ROOT::Experimental::RCanvas* newObj = (ROOT::Experimental::RCanvas*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      newObj->ResolveSharedPtrs() ; 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RCanvas*)
   {
      ::ROOT::Experimental::RCanvas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RCanvas));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RCanvas", "ROOT/RCanvas.hxx", 47,
                  typeid(::ROOT::Experimental::RCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRCanvas_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RCanvas) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRCanvas);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRCanvas);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRCanvas);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRCanvas);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRCanvas);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "ROOT::Experimental::RCanvas";
      rule->fTarget      = "";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_ROOTcLcLExperimentalcLcLRCanvas_0);
      rule->fCode        = " newObj->ResolveSharedPtrs() ; ";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RCanvas*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RCanvas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RCanvas*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRCanvas_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RCanvas*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRCanvas_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRCanvas_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RMenuItem*)
   {
      ::ROOT::Experimental::Detail::RMenuItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RMenuItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RMenuItem", "ROOT/RMenuItems.hxx", 32,
                  typeid(::ROOT::Experimental::Detail::RMenuItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RMenuItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RMenuItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RMenuItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RMenuItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RMenuItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RCheckedMenuItem*)
   {
      ::ROOT::Experimental::Detail::RCheckedMenuItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RCheckedMenuItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RCheckedMenuItem", "ROOT/RMenuItems.hxx", 72,
                  typeid(::ROOT::Experimental::Detail::RCheckedMenuItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RCheckedMenuItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RCheckedMenuItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RCheckedMenuItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RCheckedMenuItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RCheckedMenuItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RMenuArgument*)
   {
      ::ROOT::Experimental::Detail::RMenuArgument *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RMenuArgument));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RMenuArgument", "ROOT/RMenuItems.hxx", 102,
                  typeid(::ROOT::Experimental::Detail::RMenuArgument), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RMenuArgument) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RMenuArgument*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RMenuArgument*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RMenuArgument*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RMenuArgument*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Detail::RArgsMenuItem*)
   {
      ::ROOT::Experimental::Detail::RArgsMenuItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Detail::RArgsMenuItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Detail::RArgsMenuItem", "ROOT/RMenuItems.hxx", 129,
                  typeid(::ROOT::Experimental::Detail::RArgsMenuItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::Detail::RArgsMenuItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Detail::RArgsMenuItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::Detail::RArgsMenuItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RArgsMenuItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::Detail::RArgsMenuItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRMenuItems_Dictionary();
   static void ROOTcLcLExperimentalcLcLRMenuItems_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRMenuItems(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRMenuItems(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRMenuItems(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRMenuItems(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRMenuItems(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RMenuItems*)
   {
      ::ROOT::Experimental::RMenuItems *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RMenuItems));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RMenuItems", "ROOT/RMenuItems.hxx", 157,
                  typeid(::ROOT::Experimental::RMenuItems), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRMenuItems_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RMenuItems) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRMenuItems);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRMenuItems);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRMenuItems);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRMenuItems);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRMenuItems);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RMenuItems*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RMenuItems*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RMenuItems*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRMenuItems_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RMenuItems*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRMenuItems_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRMenuItems_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRDrawableMenuRequest_Dictionary();
   static void ROOTcLcLExperimentalcLcLRDrawableMenuRequest_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRDrawableMenuRequest(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRDrawableMenuRequest(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRDrawableMenuRequest(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawableMenuRequest(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRDrawableMenuRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RDrawableMenuRequest*)
   {
      ::ROOT::Experimental::RDrawableMenuRequest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RDrawableMenuRequest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RDrawableMenuRequest", "ROOT/RMenuItems.hxx", 208,
                  typeid(::ROOT::Experimental::RDrawableMenuRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRDrawableMenuRequest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RDrawableMenuRequest) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRDrawableMenuRequest);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRDrawableMenuRequest);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRDrawableMenuRequest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRDrawableMenuRequest);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRDrawableMenuRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RDrawableMenuRequest*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RDrawableMenuRequest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawableMenuRequest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRDrawableMenuRequest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawableMenuRequest*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRDrawableMenuRequest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRDrawableMenuRequest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRDisplayItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLRDisplayItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRDisplayItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRDisplayItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRDisplayItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRDisplayItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRDisplayItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RDisplayItem*)
   {
      ::ROOT::Experimental::RDisplayItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RDisplayItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RDisplayItem", "ROOT/RDisplayItem.hxx", 31,
                  typeid(::ROOT::Experimental::RDisplayItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRDisplayItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RDisplayItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRDisplayItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRDisplayItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRDisplayItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRDisplayItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRDisplayItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RDisplayItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RDisplayItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RDisplayItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRDisplayItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RDisplayItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRDisplayItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRDisplayItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRDrawableDisplayItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLRDrawableDisplayItem_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRDrawableDisplayItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawableDisplayItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRDrawableDisplayItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RDrawableDisplayItem*)
   {
      ::ROOT::Experimental::RDrawableDisplayItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RDrawableDisplayItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RDrawableDisplayItem", "ROOT/RDisplayItem.hxx", 67,
                  typeid(::ROOT::Experimental::RDrawableDisplayItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRDrawableDisplayItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RDrawableDisplayItem) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRDrawableDisplayItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRDrawableDisplayItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRDrawableDisplayItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RDrawableDisplayItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RDrawableDisplayItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawableDisplayItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRDrawableDisplayItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RDrawableDisplayItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRDrawableDisplayItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRDrawableDisplayItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRIndirectDisplayItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLRIndirectDisplayItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRIndirectDisplayItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRIndirectDisplayItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRIndirectDisplayItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRIndirectDisplayItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRIndirectDisplayItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RIndirectDisplayItem*)
   {
      ::ROOT::Experimental::RIndirectDisplayItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RIndirectDisplayItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RIndirectDisplayItem", "ROOT/RDisplayItem.hxx", 95,
                  typeid(::ROOT::Experimental::RIndirectDisplayItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRIndirectDisplayItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RIndirectDisplayItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRIndirectDisplayItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRIndirectDisplayItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRIndirectDisplayItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRIndirectDisplayItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRIndirectDisplayItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RIndirectDisplayItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RIndirectDisplayItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RIndirectDisplayItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRIndirectDisplayItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RIndirectDisplayItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRIndirectDisplayItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRIndirectDisplayItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLTObjectDisplayItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLTObjectDisplayItem_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLTObjectDisplayItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLTObjectDisplayItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLTObjectDisplayItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::TObjectDisplayItem*)
   {
      ::ROOT::Experimental::TObjectDisplayItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::TObjectDisplayItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::TObjectDisplayItem", "ROOT/RDisplayItem.hxx", 118,
                  typeid(::ROOT::Experimental::TObjectDisplayItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLTObjectDisplayItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::TObjectDisplayItem) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLTObjectDisplayItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLTObjectDisplayItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLTObjectDisplayItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::TObjectDisplayItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::TObjectDisplayItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::TObjectDisplayItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLTObjectDisplayItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TObjectDisplayItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLTObjectDisplayItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLTObjectDisplayItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrBox_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrBox_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrBox(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrBox(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrBox(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrBox(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrBox*)
   {
      ::ROOT::Experimental::RAttrBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrBox));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrBox", "ROOT/RAttrBox.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrBox_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrBox) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrBox);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrBox);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrBox);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrBox);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrBox*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrBox*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrBox_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAttrMarker_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAttrMarker_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAttrMarker(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMarker(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAttrMarker(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMarker(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMarker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAttrMarker*)
   {
      ::ROOT::Experimental::RAttrMarker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAttrMarker));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAttrMarker", "ROOT/RAttrMarker.hxx", 27,
                  typeid(::ROOT::Experimental::RAttrMarker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAttrMarker_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAttrMarker) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAttrMarker);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAttrMarker);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAttrMarker);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAttrMarker);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAttrMarker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAttrMarker*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAttrMarker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMarker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAttrMarker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAttrMarker*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAttrMarker_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAttrMarker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAxisDrawableBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAxisDrawableBase_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAxisDrawableBase(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAxisDrawableBase(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAxisDrawableBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisDrawableBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAxisDrawableBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAxisDrawableBase*)
   {
      ::ROOT::Experimental::RAxisDrawableBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAxisDrawableBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAxisDrawableBase", "ROOT/RAxisDrawable.hxx", 32,
                  typeid(::ROOT::Experimental::RAxisDrawableBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAxisDrawableBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAxisDrawableBase) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAxisDrawableBase);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAxisDrawableBase);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAxisDrawableBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAxisDrawableBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAxisDrawableBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAxisDrawableBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAxisDrawableBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisDrawableBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAxisDrawableBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisDrawableBase*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAxisDrawableBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAxisDrawableBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAxisDrawable_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAxisDrawable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAxisDrawable(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAxisDrawable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAxisDrawable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisDrawable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAxisDrawable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAxisDrawable*)
   {
      ::ROOT::Experimental::RAxisDrawable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAxisDrawable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAxisDrawable", "ROOT/RAxisDrawable.hxx", 74,
                  typeid(::ROOT::Experimental::RAxisDrawable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAxisDrawable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAxisDrawable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAxisDrawable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAxisDrawable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAxisDrawable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAxisDrawable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAxisDrawable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAxisDrawable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAxisDrawable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisDrawable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAxisDrawable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisDrawable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAxisDrawable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAxisDrawable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAxisLabelsDrawable_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAxisLabelsDrawable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAxisLabelsDrawable*)
   {
      ::ROOT::Experimental::RAxisLabelsDrawable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAxisLabelsDrawable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAxisLabelsDrawable", "ROOT/RAxisDrawable.hxx", 100,
                  typeid(::ROOT::Experimental::RAxisLabelsDrawable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAxisLabelsDrawable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RAxisLabelsDrawable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAxisLabelsDrawable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RAxisLabelsDrawable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisLabelsDrawable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAxisLabelsDrawable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RAxisLabelsDrawable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRAxisLabelsDrawable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAxisLabelsDrawable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPalette_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPalette_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPalette(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPalette(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPalette(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPalette(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPalette(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPalette*)
   {
      ::ROOT::Experimental::RPalette *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPalette));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPalette", "ROOT/RPalette.hxx", 38,
                  typeid(::ROOT::Experimental::RPalette), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPalette_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPalette) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPalette);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPalette);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPalette);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPalette);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPalette);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPalette*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPalette*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPalette*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPalette_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPalette*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPalette_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPalette_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPalette::OrdinalAndColor*)
   {
      ::ROOT::Experimental::RPalette::OrdinalAndColor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPalette::OrdinalAndColor));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPalette::OrdinalAndColor", "ROOT/RPalette.hxx", 41,
                  typeid(::ROOT::Experimental::RPalette::OrdinalAndColor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPalette::OrdinalAndColor) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPalette::OrdinalAndColor*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPalette::OrdinalAndColor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPalette::OrdinalAndColor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPalette::OrdinalAndColor*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPaletteDrawable_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPaletteDrawable_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRPaletteDrawable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPaletteDrawable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPaletteDrawable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPaletteDrawable*)
   {
      ::ROOT::Experimental::RPaletteDrawable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPaletteDrawable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPaletteDrawable", "ROOT/RPaletteDrawable.hxx", 32,
                  typeid(::ROOT::Experimental::RPaletteDrawable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPaletteDrawable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPaletteDrawable) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPaletteDrawable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPaletteDrawable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPaletteDrawable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPaletteDrawable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPaletteDrawable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPaletteDrawable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPaletteDrawable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPaletteDrawable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPaletteDrawable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPaletteDrawable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPad_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPad_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPad(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPad(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPad(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPad(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPad(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPad*)
   {
      ::ROOT::Experimental::RPad *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPad));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPad", "ROOT/RPad.hxx", 25,
                  typeid(::ROOT::Experimental::RPad), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPad_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPad) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPad);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPad);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPad);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPad);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPad);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPad*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPad*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPad*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPad_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPad*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPad_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPad_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadBaseDisplayItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadBaseDisplayItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadBaseDisplayItem*)
   {
      ::ROOT::Experimental::RPadBaseDisplayItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadBaseDisplayItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadBaseDisplayItem", "ROOT/RPadDisplayItem.hxx", 28,
                  typeid(::ROOT::Experimental::RPadBaseDisplayItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadBaseDisplayItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadBaseDisplayItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadBaseDisplayItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadBaseDisplayItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadBaseDisplayItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadBaseDisplayItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadBaseDisplayItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadBaseDisplayItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadBaseDisplayItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPadDisplayItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPadDisplayItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPadDisplayItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPadDisplayItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPadDisplayItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadDisplayItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPadDisplayItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPadDisplayItem*)
   {
      ::ROOT::Experimental::RPadDisplayItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPadDisplayItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPadDisplayItem", "ROOT/RPadDisplayItem.hxx", 68,
                  typeid(::ROOT::Experimental::RPadDisplayItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPadDisplayItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPadDisplayItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPadDisplayItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPadDisplayItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPadDisplayItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPadDisplayItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPadDisplayItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPadDisplayItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPadDisplayItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadDisplayItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPadDisplayItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPadDisplayItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPadDisplayItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPadDisplayItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRCanvasDisplayItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLRCanvasDisplayItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRCanvasDisplayItem(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRCanvasDisplayItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRCanvasDisplayItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRCanvasDisplayItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRCanvasDisplayItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RCanvasDisplayItem*)
   {
      ::ROOT::Experimental::RCanvasDisplayItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RCanvasDisplayItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RCanvasDisplayItem", "ROOT/RPadDisplayItem.hxx", 96,
                  typeid(::ROOT::Experimental::RCanvasDisplayItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRCanvasDisplayItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RCanvasDisplayItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRCanvasDisplayItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRCanvasDisplayItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRCanvasDisplayItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRCanvasDisplayItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRCanvasDisplayItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RCanvasDisplayItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RCanvasDisplayItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RCanvasDisplayItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRCanvasDisplayItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RCanvasDisplayItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRCanvasDisplayItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRCanvasDisplayItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPave_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPave_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPave(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRPave(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPave(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPave(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPave(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPave*)
   {
      ::ROOT::Experimental::RPave *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPave));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPave", "ROOT/RPave.hxx", 31,
                  typeid(::ROOT::Experimental::RPave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPave_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPave) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPave);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPave);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPave);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPave);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPave*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RPave*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RPave*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPave_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RPave*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRPave_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPave_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLTObjectDrawable_Dictionary();
   static void ROOTcLcLExperimentalcLcLTObjectDrawable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLTObjectDrawable(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLTObjectDrawable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLTObjectDrawable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLTObjectDrawable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLTObjectDrawable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::TObjectDrawable*)
   {
      ::ROOT::Experimental::TObjectDrawable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::TObjectDrawable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::TObjectDrawable", "ROOT/TObjectDrawable.hxx", 30,
                  typeid(::ROOT::Experimental::TObjectDrawable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLTObjectDrawable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::TObjectDrawable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLTObjectDrawable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLTObjectDrawable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLTObjectDrawable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLTObjectDrawable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLTObjectDrawable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::TObjectDrawable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::TObjectDrawable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::TObjectDrawable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLTObjectDrawable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TObjectDrawable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLTObjectDrawable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLTObjectDrawable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadLength(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength : new ::ROOT::Experimental::RPadLength;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLength(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength[nElements] : new ::ROOT::Experimental::RPadLength[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadLength(void *p) {
      delete ((::ROOT::Experimental::RPadLength*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLength(void *p) {
      delete [] ((::ROOT::Experimental::RPadLength*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadLength(void *p) {
      typedef ::ROOT::Experimental::RPadLength current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadLength

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal> : new ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>[nElements] : new ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR(void *p) {
      delete ((::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR(void *p) {
      delete [] ((::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLNormalgR(void *p) {
      typedef ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Normal>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel> : new ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>[nElements] : new ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR(void *p) {
      delete ((::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR(void *p) {
      delete [] ((::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLPixelgR(void *p) {
      typedef ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::Pixel>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User> : new ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>[nElements] : new ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR(void *p) {
      delete ((::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR(void *p) {
      delete [] ((::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLCoordSysBaselEROOTcLcLExperimentalcLcLRPadLengthcLcLUsergR(void *p) {
      typedef ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadLength::CoordSysBase<ROOT::Experimental::RPadLength::User>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::Normal : new ::ROOT::Experimental::RPadLength::Normal;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::Normal[nElements] : new ::ROOT::Experimental::RPadLength::Normal[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal(void *p) {
      delete ((::ROOT::Experimental::RPadLength::Normal*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal(void *p) {
      delete [] ((::ROOT::Experimental::RPadLength::Normal*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLNormal(void *p) {
      typedef ::ROOT::Experimental::RPadLength::Normal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadLength::Normal

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::Pixel : new ::ROOT::Experimental::RPadLength::Pixel;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::Pixel[nElements] : new ::ROOT::Experimental::RPadLength::Pixel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel(void *p) {
      delete ((::ROOT::Experimental::RPadLength::Pixel*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel(void *p) {
      delete [] ((::ROOT::Experimental::RPadLength::Pixel*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLPixel(void *p) {
      typedef ::ROOT::Experimental::RPadLength::Pixel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadLength::Pixel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::User : new ::ROOT::Experimental::RPadLength::User;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadLength::User[nElements] : new ::ROOT::Experimental::RPadLength::User[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser(void *p) {
      delete ((::ROOT::Experimental::RPadLength::User*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser(void *p) {
      delete [] ((::ROOT::Experimental::RPadLength::User*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadLengthcLcLUser(void *p) {
      typedef ::ROOT::Experimental::RPadLength::User current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadLength::User

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrMap(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap : new ::ROOT::Experimental::RAttrMap;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMap(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap[nElements] : new ::ROOT::Experimental::RAttrMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrMap(void *p) {
      delete ((::ROOT::Experimental::RAttrMap*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMap(void *p) {
      delete [] ((::ROOT::Experimental::RAttrMap*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMap(void *p) {
      typedef ::ROOT::Experimental::RAttrMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrMap

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t(void *p) {
      delete ((::ROOT::Experimental::RAttrMap::Value_t*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t(void *p) {
      delete [] ((::ROOT::Experimental::RAttrMap::Value_t*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLValue_t(void *p) {
      typedef ::ROOT::Experimental::RAttrMap::Value_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrMap::Value_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap::NoValue_t : new ::ROOT::Experimental::RAttrMap::NoValue_t;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap::NoValue_t[nElements] : new ::ROOT::Experimental::RAttrMap::NoValue_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t(void *p) {
      delete ((::ROOT::Experimental::RAttrMap::NoValue_t*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t(void *p) {
      delete [] ((::ROOT::Experimental::RAttrMap::NoValue_t*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLNoValue_t(void *p) {
      typedef ::ROOT::Experimental::RAttrMap::NoValue_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrMap::NoValue_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap::BoolValue_t : new ::ROOT::Experimental::RAttrMap::BoolValue_t;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap::BoolValue_t[nElements] : new ::ROOT::Experimental::RAttrMap::BoolValue_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t(void *p) {
      delete ((::ROOT::Experimental::RAttrMap::BoolValue_t*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t(void *p) {
      delete [] ((::ROOT::Experimental::RAttrMap::BoolValue_t*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLBoolValue_t(void *p) {
      typedef ::ROOT::Experimental::RAttrMap::BoolValue_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrMap::BoolValue_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap::IntValue_t : new ::ROOT::Experimental::RAttrMap::IntValue_t;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap::IntValue_t[nElements] : new ::ROOT::Experimental::RAttrMap::IntValue_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t(void *p) {
      delete ((::ROOT::Experimental::RAttrMap::IntValue_t*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t(void *p) {
      delete [] ((::ROOT::Experimental::RAttrMap::IntValue_t*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLIntValue_t(void *p) {
      typedef ::ROOT::Experimental::RAttrMap::IntValue_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrMap::IntValue_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap::DoubleValue_t : new ::ROOT::Experimental::RAttrMap::DoubleValue_t;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap::DoubleValue_t[nElements] : new ::ROOT::Experimental::RAttrMap::DoubleValue_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t(void *p) {
      delete ((::ROOT::Experimental::RAttrMap::DoubleValue_t*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t(void *p) {
      delete [] ((::ROOT::Experimental::RAttrMap::DoubleValue_t*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLDoubleValue_t(void *p) {
      typedef ::ROOT::Experimental::RAttrMap::DoubleValue_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrMap::DoubleValue_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap::StringValue_t : new ::ROOT::Experimental::RAttrMap::StringValue_t;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMap::StringValue_t[nElements] : new ::ROOT::Experimental::RAttrMap::StringValue_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t(void *p) {
      delete ((::ROOT::Experimental::RAttrMap::StringValue_t*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t(void *p) {
      delete [] ((::ROOT::Experimental::RAttrMap::StringValue_t*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMapcLcLStringValue_t(void *p) {
      typedef ::ROOT::Experimental::RAttrMap::StringValue_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrMap::StringValue_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRStyle(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RStyle : new ::ROOT::Experimental::RStyle;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRStyle(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RStyle[nElements] : new ::ROOT::Experimental::RStyle[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRStyle(void *p) {
      delete ((::ROOT::Experimental::RStyle*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRStyle(void *p) {
      delete [] ((::ROOT::Experimental::RStyle*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRStyle(void *p) {
      typedef ::ROOT::Experimental::RStyle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RStyle

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RStyle::Block_t : new ::ROOT::Experimental::RStyle::Block_t;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RStyle::Block_t[nElements] : new ::ROOT::Experimental::RStyle::Block_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t(void *p) {
      delete ((::ROOT::Experimental::RStyle::Block_t*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t(void *p) {
      delete [] ((::ROOT::Experimental::RStyle::Block_t*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRStylecLcLBlock_t(void *p) {
      typedef ::ROOT::Experimental::RStyle::Block_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RStyle::Block_t

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase(void *p) {
      delete ((::ROOT::Experimental::Internal::RIOSharedBase*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase(void *p) {
      delete [] ((::ROOT::Experimental::Internal::RIOSharedBase*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedBase(void *p) {
      typedef ::ROOT::Experimental::Internal::RIOSharedBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Internal::RIOSharedBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> : new ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>[nElements] : new ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR(void *p) {
      delete ((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR(void *p) {
      delete [] ((::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegR(void *p) {
      typedef ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Internal::RIOShared<TObject> : new ::ROOT::Experimental::Internal::RIOShared<TObject>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Internal::RIOShared<TObject>[nElements] : new ::ROOT::Experimental::Internal::RIOShared<TObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR(void *p) {
      delete ((::ROOT::Experimental::Internal::RIOShared<TObject>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR(void *p) {
      delete [] ((::ROOT::Experimental::Internal::RIOShared<TObject>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlETObjectgR(void *p) {
      typedef ::ROOT::Experimental::Internal::RIOShared<TObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Internal::RIOShared<TObject>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRDrawable(void *p) {
      delete ((::ROOT::Experimental::RDrawable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawable(void *p) {
      delete [] ((::ROOT::Experimental::RDrawable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRDrawable(void *p) {
      typedef ::ROOT::Experimental::RDrawable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RDrawable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRDrawableReply(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDrawableReply : new ::ROOT::Experimental::RDrawableReply;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRDrawableReply(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDrawableReply[nElements] : new ::ROOT::Experimental::RDrawableReply[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRDrawableReply(void *p) {
      delete ((::ROOT::Experimental::RDrawableReply*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawableReply(void *p) {
      delete [] ((::ROOT::Experimental::RDrawableReply*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRDrawableReply(void *p) {
      typedef ::ROOT::Experimental::RDrawableReply current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RDrawableReply

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRDrawableRequest(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDrawableRequest : new ::ROOT::Experimental::RDrawableRequest;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRDrawableRequest(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDrawableRequest[nElements] : new ::ROOT::Experimental::RDrawableRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRDrawableRequest(void *p) {
      delete ((::ROOT::Experimental::RDrawableRequest*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawableRequest(void *p) {
      delete [] ((::ROOT::Experimental::RDrawableRequest*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRDrawableRequest(void *p) {
      typedef ::ROOT::Experimental::RDrawableRequest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RDrawableRequest

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRDrawableExecRequest(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDrawableExecRequest : new ::ROOT::Experimental::RDrawableExecRequest;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRDrawableExecRequest(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDrawableExecRequest[nElements] : new ::ROOT::Experimental::RDrawableExecRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRDrawableExecRequest(void *p) {
      delete ((::ROOT::Experimental::RDrawableExecRequest*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawableExecRequest(void *p) {
      delete [] ((::ROOT::Experimental::RDrawableExecRequest*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRDrawableExecRequest(void *p) {
      typedef ::ROOT::Experimental::RDrawableExecRequest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RDrawableExecRequest

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrBase(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrBase : new ::ROOT::Experimental::RAttrBase;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrBase(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrBase[nElements] : new ::ROOT::Experimental::RAttrBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrBase(void *p) {
      delete ((::ROOT::Experimental::RAttrBase*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrBase(void *p) {
      delete [] ((::ROOT::Experimental::RAttrBase*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrBase(void *p) {
      typedef ::ROOT::Experimental::RAttrBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRColor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RColor : new ::ROOT::Experimental::RColor;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRColor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RColor[nElements] : new ::ROOT::Experimental::RColor[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRColor(void *p) {
      delete ((::ROOT::Experimental::RColor*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRColor(void *p) {
      delete [] ((::ROOT::Experimental::RColor*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRColor(void *p) {
      typedef ::ROOT::Experimental::RColor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RColor

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrColor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrColor : new ::ROOT::Experimental::RAttrColor;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrColor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrColor[nElements] : new ::ROOT::Experimental::RAttrColor[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrColor(void *p) {
      delete ((::ROOT::Experimental::RAttrColor*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrColor(void *p) {
      delete [] ((::ROOT::Experimental::RAttrColor*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrColor(void *p) {
      typedef ::ROOT::Experimental::RAttrColor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrColor

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrValue<double> : new ::ROOT::Experimental::RAttrValue<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrValue<double>[nElements] : new ::ROOT::Experimental::RAttrValue<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR(void *p) {
      delete ((::ROOT::Experimental::RAttrValue<double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::RAttrValue<double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrValuelEdoublegR(void *p) {
      typedef ::ROOT::Experimental::RAttrValue<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrValue<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrValuelEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrValue<int> : new ::ROOT::Experimental::RAttrValue<int>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrValuelEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrValue<int>[nElements] : new ::ROOT::Experimental::RAttrValue<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrValuelEintgR(void *p) {
      delete ((::ROOT::Experimental::RAttrValue<int>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEintgR(void *p) {
      delete [] ((::ROOT::Experimental::RAttrValue<int>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrValuelEintgR(void *p) {
      typedef ::ROOT::Experimental::RAttrValue<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrValue<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength> : new ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>[nElements] : new ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR(void *p) {
      delete ((::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR(void *p) {
      delete [] ((::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrValuelEROOTcLcLExperimentalcLcLRPadLengthgR(void *p) {
      typedef ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrValue<ROOT::Experimental::RPadLength>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrValue<string> : new ::ROOT::Experimental::RAttrValue<string>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrValue<string>[nElements] : new ::ROOT::Experimental::RAttrValue<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR(void *p) {
      delete ((::ROOT::Experimental::RAttrValue<string>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR(void *p) {
      delete [] ((::ROOT::Experimental::RAttrValue<string>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrValuelEstringgR(void *p) {
      typedef ::ROOT::Experimental::RAttrValue<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrValue<string>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrValue<bool> : new ::ROOT::Experimental::RAttrValue<bool>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrValue<bool>[nElements] : new ::ROOT::Experimental::RAttrValue<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR(void *p) {
      delete ((::ROOT::Experimental::RAttrValue<bool>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR(void *p) {
      delete [] ((::ROOT::Experimental::RAttrValue<bool>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrValuelEboolgR(void *p) {
      typedef ::ROOT::Experimental::RAttrValue<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrValue<bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrLine(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrLine : new ::ROOT::Experimental::RAttrLine;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrLine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrLine[nElements] : new ::ROOT::Experimental::RAttrLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrLine(void *p) {
      delete ((::ROOT::Experimental::RAttrLine*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrLine(void *p) {
      delete [] ((::ROOT::Experimental::RAttrLine*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrLine(void *p) {
      typedef ::ROOT::Experimental::RAttrLine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrLine

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrFill(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrFill : new ::ROOT::Experimental::RAttrFill;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrFill(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrFill[nElements] : new ::ROOT::Experimental::RAttrFill[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrFill(void *p) {
      delete ((::ROOT::Experimental::RAttrFill*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrFill(void *p) {
      delete [] ((::ROOT::Experimental::RAttrFill*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrFill(void *p) {
      typedef ::ROOT::Experimental::RAttrFill current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrFill

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrMargins(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMargins : new ::ROOT::Experimental::RAttrMargins;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMargins(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMargins[nElements] : new ::ROOT::Experimental::RAttrMargins[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrMargins(void *p) {
      delete ((::ROOT::Experimental::RAttrMargins*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMargins(void *p) {
      delete [] ((::ROOT::Experimental::RAttrMargins*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMargins(void *p) {
      typedef ::ROOT::Experimental::RAttrMargins current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrMargins

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrText(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrText : new ::ROOT::Experimental::RAttrText;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrText(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrText[nElements] : new ::ROOT::Experimental::RAttrText[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrText(void *p) {
      delete ((::ROOT::Experimental::RAttrText*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrText(void *p) {
      delete [] ((::ROOT::Experimental::RAttrText*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrText(void *p) {
      typedef ::ROOT::Experimental::RAttrText current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrText

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrAxis(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrAxis : new ::ROOT::Experimental::RAttrAxis;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrAxis(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrAxis[nElements] : new ::ROOT::Experimental::RAttrAxis[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrAxis(void *p) {
      delete ((::ROOT::Experimental::RAttrAxis*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrAxis(void *p) {
      delete [] ((::ROOT::Experimental::RAttrAxis*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrAxis(void *p) {
      typedef ::ROOT::Experimental::RAttrAxis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrAxis

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadUserAxisBase(void *p) {
      delete ((::ROOT::Experimental::RPadUserAxisBase*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadUserAxisBase(void *p) {
      delete [] ((::ROOT::Experimental::RPadUserAxisBase*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadUserAxisBase(void *p) {
      typedef ::ROOT::Experimental::RPadUserAxisBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadUserAxisBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadCartesianUserAxis : new ::ROOT::Experimental::RPadCartesianUserAxis;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadCartesianUserAxis[nElements] : new ::ROOT::Experimental::RPadCartesianUserAxis[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis(void *p) {
      delete ((::ROOT::Experimental::RPadCartesianUserAxis*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis(void *p) {
      delete [] ((::ROOT::Experimental::RPadCartesianUserAxis*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadCartesianUserAxis(void *p) {
      typedef ::ROOT::Experimental::RPadCartesianUserAxis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadCartesianUserAxis

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFrame(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RFrame( (TRootIOCtor *)nullptr ) : new ::ROOT::Experimental::RFrame( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFrame(void *p) {
      delete ((::ROOT::Experimental::RFrame*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFrame(void *p) {
      delete [] ((::ROOT::Experimental::RFrame*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFrame(void *p) {
      typedef ::ROOT::Experimental::RFrame current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFrame

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RFrame::RUserRanges : new ::ROOT::Experimental::RFrame::RUserRanges;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RFrame::RUserRanges[nElements] : new ::ROOT::Experimental::RFrame::RUserRanges[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges(void *p) {
      delete ((::ROOT::Experimental::RFrame::RUserRanges*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges(void *p) {
      delete [] ((::ROOT::Experimental::RFrame::RUserRanges*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFramecLcLRUserRanges(void *p) {
      typedef ::ROOT::Experimental::RFrame::RUserRanges current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFrame::RUserRanges

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RFrame::RZoomRequest : new ::ROOT::Experimental::RFrame::RZoomRequest;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RFrame::RZoomRequest[nElements] : new ::ROOT::Experimental::RFrame::RZoomRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest(void *p) {
      delete ((::ROOT::Experimental::RFrame::RZoomRequest*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest(void *p) {
      delete [] ((::ROOT::Experimental::RFrame::RZoomRequest*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFramecLcLRZoomRequest(void *p) {
      typedef ::ROOT::Experimental::RFrame::RZoomRequest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFrame::RZoomRequest

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadExtent(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadExtent : new ::ROOT::Experimental::RPadExtent;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadExtent(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadExtent[nElements] : new ::ROOT::Experimental::RPadExtent[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadExtent(void *p) {
      delete ((::ROOT::Experimental::RPadExtent*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadExtent(void *p) {
      delete [] ((::ROOT::Experimental::RPadExtent*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadExtent(void *p) {
      typedef ::ROOT::Experimental::RPadExtent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadExtent

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadPos(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadPos : new ::ROOT::Experimental::RPadPos;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadPos(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadPos[nElements] : new ::ROOT::Experimental::RPadPos[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadPos(void *p) {
      delete ((::ROOT::Experimental::RPadPos*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadPos(void *p) {
      delete [] ((::ROOT::Experimental::RPadPos*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadPos(void *p) {
      typedef ::ROOT::Experimental::RPadPos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadPos

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadBase(void *p) {
      delete ((::ROOT::Experimental::RPadBase*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadBase(void *p) {
      delete [] ((::ROOT::Experimental::RPadBase*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadBase(void *p) {
      typedef ::ROOT::Experimental::RPadBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRChangeAttrRequest(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RChangeAttrRequest : new ::ROOT::Experimental::RChangeAttrRequest;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRChangeAttrRequest(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RChangeAttrRequest[nElements] : new ::ROOT::Experimental::RChangeAttrRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRChangeAttrRequest(void *p) {
      delete ((::ROOT::Experimental::RChangeAttrRequest*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRChangeAttrRequest(void *p) {
      delete [] ((::ROOT::Experimental::RChangeAttrRequest*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRChangeAttrRequest(void *p) {
      typedef ::ROOT::Experimental::RChangeAttrRequest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RChangeAttrRequest

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRCanvas(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RCanvas : new ::ROOT::Experimental::RCanvas;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRCanvas(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RCanvas[nElements] : new ::ROOT::Experimental::RCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRCanvas(void *p) {
      delete ((::ROOT::Experimental::RCanvas*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRCanvas(void *p) {
      delete [] ((::ROOT::Experimental::RCanvas*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRCanvas(void *p) {
      typedef ::ROOT::Experimental::RCanvas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RCanvas

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RMenuItem : new ::ROOT::Experimental::Detail::RMenuItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RMenuItem[nElements] : new ::ROOT::Experimental::Detail::RMenuItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem(void *p) {
      delete ((::ROOT::Experimental::Detail::RMenuItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RMenuItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRMenuItem(void *p) {
      typedef ::ROOT::Experimental::Detail::RMenuItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RMenuItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RCheckedMenuItem : new ::ROOT::Experimental::Detail::RCheckedMenuItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RCheckedMenuItem[nElements] : new ::ROOT::Experimental::Detail::RCheckedMenuItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem(void *p) {
      delete ((::ROOT::Experimental::Detail::RCheckedMenuItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RCheckedMenuItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRCheckedMenuItem(void *p) {
      typedef ::ROOT::Experimental::Detail::RCheckedMenuItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RCheckedMenuItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RMenuArgument : new ::ROOT::Experimental::Detail::RMenuArgument;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RMenuArgument[nElements] : new ::ROOT::Experimental::Detail::RMenuArgument[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument(void *p) {
      delete ((::ROOT::Experimental::Detail::RMenuArgument*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RMenuArgument*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRMenuArgument(void *p) {
      typedef ::ROOT::Experimental::Detail::RMenuArgument current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RMenuArgument

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RArgsMenuItem : new ::ROOT::Experimental::Detail::RArgsMenuItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::Detail::RArgsMenuItem[nElements] : new ::ROOT::Experimental::Detail::RArgsMenuItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem(void *p) {
      delete ((::ROOT::Experimental::Detail::RArgsMenuItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem(void *p) {
      delete [] ((::ROOT::Experimental::Detail::RArgsMenuItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLDetailcLcLRArgsMenuItem(void *p) {
      typedef ::ROOT::Experimental::Detail::RArgsMenuItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Detail::RArgsMenuItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRMenuItems(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RMenuItems : new ::ROOT::Experimental::RMenuItems;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRMenuItems(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RMenuItems[nElements] : new ::ROOT::Experimental::RMenuItems[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRMenuItems(void *p) {
      delete ((::ROOT::Experimental::RMenuItems*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRMenuItems(void *p) {
      delete [] ((::ROOT::Experimental::RMenuItems*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRMenuItems(void *p) {
      typedef ::ROOT::Experimental::RMenuItems current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RMenuItems

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRDrawableMenuRequest(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDrawableMenuRequest : new ::ROOT::Experimental::RDrawableMenuRequest;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRDrawableMenuRequest(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDrawableMenuRequest[nElements] : new ::ROOT::Experimental::RDrawableMenuRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRDrawableMenuRequest(void *p) {
      delete ((::ROOT::Experimental::RDrawableMenuRequest*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawableMenuRequest(void *p) {
      delete [] ((::ROOT::Experimental::RDrawableMenuRequest*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRDrawableMenuRequest(void *p) {
      typedef ::ROOT::Experimental::RDrawableMenuRequest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RDrawableMenuRequest

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRDisplayItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDisplayItem : new ::ROOT::Experimental::RDisplayItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRDisplayItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RDisplayItem[nElements] : new ::ROOT::Experimental::RDisplayItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRDisplayItem(void *p) {
      delete ((::ROOT::Experimental::RDisplayItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRDisplayItem(void *p) {
      delete [] ((::ROOT::Experimental::RDisplayItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRDisplayItem(void *p) {
      typedef ::ROOT::Experimental::RDisplayItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RDisplayItem

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRDrawableDisplayItem(void *p) {
      delete ((::ROOT::Experimental::RDrawableDisplayItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRDrawableDisplayItem(void *p) {
      delete [] ((::ROOT::Experimental::RDrawableDisplayItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRDrawableDisplayItem(void *p) {
      typedef ::ROOT::Experimental::RDrawableDisplayItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RDrawableDisplayItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRIndirectDisplayItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RIndirectDisplayItem : new ::ROOT::Experimental::RIndirectDisplayItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRIndirectDisplayItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RIndirectDisplayItem[nElements] : new ::ROOT::Experimental::RIndirectDisplayItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRIndirectDisplayItem(void *p) {
      delete ((::ROOT::Experimental::RIndirectDisplayItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRIndirectDisplayItem(void *p) {
      delete [] ((::ROOT::Experimental::RIndirectDisplayItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRIndirectDisplayItem(void *p) {
      typedef ::ROOT::Experimental::RIndirectDisplayItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RIndirectDisplayItem

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLTObjectDisplayItem(void *p) {
      delete ((::ROOT::Experimental::TObjectDisplayItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLTObjectDisplayItem(void *p) {
      delete [] ((::ROOT::Experimental::TObjectDisplayItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLTObjectDisplayItem(void *p) {
      typedef ::ROOT::Experimental::TObjectDisplayItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::TObjectDisplayItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrBox(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrBox : new ::ROOT::Experimental::RAttrBox;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrBox(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrBox[nElements] : new ::ROOT::Experimental::RAttrBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrBox(void *p) {
      delete ((::ROOT::Experimental::RAttrBox*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrBox(void *p) {
      delete [] ((::ROOT::Experimental::RAttrBox*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrBox(void *p) {
      typedef ::ROOT::Experimental::RAttrBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAttrMarker(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMarker : new ::ROOT::Experimental::RAttrMarker;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAttrMarker(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAttrMarker[nElements] : new ::ROOT::Experimental::RAttrMarker[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAttrMarker(void *p) {
      delete ((::ROOT::Experimental::RAttrMarker*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAttrMarker(void *p) {
      delete [] ((::ROOT::Experimental::RAttrMarker*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAttrMarker(void *p) {
      typedef ::ROOT::Experimental::RAttrMarker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAttrMarker

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAxisDrawableBase(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAxisDrawableBase : new ::ROOT::Experimental::RAxisDrawableBase;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAxisDrawableBase(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAxisDrawableBase[nElements] : new ::ROOT::Experimental::RAxisDrawableBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAxisDrawableBase(void *p) {
      delete ((::ROOT::Experimental::RAxisDrawableBase*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisDrawableBase(void *p) {
      delete [] ((::ROOT::Experimental::RAxisDrawableBase*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAxisDrawableBase(void *p) {
      typedef ::ROOT::Experimental::RAxisDrawableBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAxisDrawableBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAxisDrawable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAxisDrawable : new ::ROOT::Experimental::RAxisDrawable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAxisDrawable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAxisDrawable[nElements] : new ::ROOT::Experimental::RAxisDrawable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAxisDrawable(void *p) {
      delete ((::ROOT::Experimental::RAxisDrawable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisDrawable(void *p) {
      delete [] ((::ROOT::Experimental::RAxisDrawable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAxisDrawable(void *p) {
      typedef ::ROOT::Experimental::RAxisDrawable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAxisDrawable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAxisLabelsDrawable : new ::ROOT::Experimental::RAxisLabelsDrawable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RAxisLabelsDrawable[nElements] : new ::ROOT::Experimental::RAxisLabelsDrawable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable(void *p) {
      delete ((::ROOT::Experimental::RAxisLabelsDrawable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable(void *p) {
      delete [] ((::ROOT::Experimental::RAxisLabelsDrawable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAxisLabelsDrawable(void *p) {
      typedef ::ROOT::Experimental::RAxisLabelsDrawable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAxisLabelsDrawable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPalette(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPalette : new ::ROOT::Experimental::RPalette;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPalette(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPalette[nElements] : new ::ROOT::Experimental::RPalette[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPalette(void *p) {
      delete ((::ROOT::Experimental::RPalette*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPalette(void *p) {
      delete [] ((::ROOT::Experimental::RPalette*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPalette(void *p) {
      typedef ::ROOT::Experimental::RPalette current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPalette

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPalette::OrdinalAndColor : new ::ROOT::Experimental::RPalette::OrdinalAndColor;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPalette::OrdinalAndColor[nElements] : new ::ROOT::Experimental::RPalette::OrdinalAndColor[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor(void *p) {
      delete ((::ROOT::Experimental::RPalette::OrdinalAndColor*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor(void *p) {
      delete [] ((::ROOT::Experimental::RPalette::OrdinalAndColor*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColor(void *p) {
      typedef ::ROOT::Experimental::RPalette::OrdinalAndColor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPalette::OrdinalAndColor

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPaletteDrawable(void *p) {
      delete ((::ROOT::Experimental::RPaletteDrawable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPaletteDrawable(void *p) {
      delete [] ((::ROOT::Experimental::RPaletteDrawable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPaletteDrawable(void *p) {
      typedef ::ROOT::Experimental::RPaletteDrawable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPaletteDrawable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPad(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPad : new ::ROOT::Experimental::RPad;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPad(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPad[nElements] : new ::ROOT::Experimental::RPad[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPad(void *p) {
      delete ((::ROOT::Experimental::RPad*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPad(void *p) {
      delete [] ((::ROOT::Experimental::RPad*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPad(void *p) {
      typedef ::ROOT::Experimental::RPad current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPad

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadBaseDisplayItem : new ::ROOT::Experimental::RPadBaseDisplayItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadBaseDisplayItem[nElements] : new ::ROOT::Experimental::RPadBaseDisplayItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem(void *p) {
      delete ((::ROOT::Experimental::RPadBaseDisplayItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem(void *p) {
      delete [] ((::ROOT::Experimental::RPadBaseDisplayItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadBaseDisplayItem(void *p) {
      typedef ::ROOT::Experimental::RPadBaseDisplayItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadBaseDisplayItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPadDisplayItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadDisplayItem : new ::ROOT::Experimental::RPadDisplayItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPadDisplayItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPadDisplayItem[nElements] : new ::ROOT::Experimental::RPadDisplayItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPadDisplayItem(void *p) {
      delete ((::ROOT::Experimental::RPadDisplayItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPadDisplayItem(void *p) {
      delete [] ((::ROOT::Experimental::RPadDisplayItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPadDisplayItem(void *p) {
      typedef ::ROOT::Experimental::RPadDisplayItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPadDisplayItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRCanvasDisplayItem(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RCanvasDisplayItem : new ::ROOT::Experimental::RCanvasDisplayItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRCanvasDisplayItem(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RCanvasDisplayItem[nElements] : new ::ROOT::Experimental::RCanvasDisplayItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRCanvasDisplayItem(void *p) {
      delete ((::ROOT::Experimental::RCanvasDisplayItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRCanvasDisplayItem(void *p) {
      delete [] ((::ROOT::Experimental::RCanvasDisplayItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRCanvasDisplayItem(void *p) {
      typedef ::ROOT::Experimental::RCanvasDisplayItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RCanvasDisplayItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPave(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPave : new ::ROOT::Experimental::RPave;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPave(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RPave[nElements] : new ::ROOT::Experimental::RPave[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPave(void *p) {
      delete ((::ROOT::Experimental::RPave*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPave(void *p) {
      delete [] ((::ROOT::Experimental::RPave*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPave(void *p) {
      typedef ::ROOT::Experimental::RPave current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPave

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLTObjectDrawable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::TObjectDrawable : new ::ROOT::Experimental::TObjectDrawable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLTObjectDrawable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::TObjectDrawable[nElements] : new ::ROOT::Experimental::TObjectDrawable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLTObjectDrawable(void *p) {
      delete ((::ROOT::Experimental::TObjectDrawable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLTObjectDrawable(void *p) {
      delete [] ((::ROOT::Experimental::TObjectDrawable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLTObjectDrawable(void *p) {
      typedef ::ROOT::Experimental::TObjectDrawable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::TObjectDrawable

namespace ROOT {
   static TClass *vectorlEunsignedsPchargR_Dictionary();
   static void vectorlEunsignedsPchargR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPchargR(void *p = 0);
   static void *newArray_vectorlEunsignedsPchargR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPchargR(void *p);
   static void deleteArray_vectorlEunsignedsPchargR(void *p);
   static void destruct_vectorlEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned char>*)
   {
      vector<unsigned char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned char>", -2, "vector", 386,
                  typeid(vector<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPchargR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned char>) );
      instance.SetNew(&new_vectorlEunsignedsPchargR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPchargR);
      instance.SetDelete(&delete_vectorlEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPchargR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned char> >()));

      ::ROOT::AddClassAlternate("vector<unsigned char>","std::vector<unsigned char, std::allocator<unsigned char> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned char>*)0x0)->GetClass();
      vectorlEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned char> : new vector<unsigned char>;
   }
   static void *newArray_vectorlEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned char>[nElements] : new vector<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPchargR(void *p) {
      delete ((vector<unsigned char>*)p);
   }
   static void deleteArray_vectorlEunsignedsPchargR(void *p) {
      delete [] ((vector<unsigned char>*)p);
   }
   static void destruct_vectorlEunsignedsPchargR(void *p) {
      typedef vector<unsigned char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned char>

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
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = 0);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 592,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));

      ::ROOT::AddClassAlternate("vector<bool>","std::vector<bool, std::allocator<bool> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)0x0)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RPalette::OrdinalAndColor>*)
   {
      vector<ROOT::Experimental::RPalette::OrdinalAndColor> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RPalette::OrdinalAndColor>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RPalette::OrdinalAndColor>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::RPalette::OrdinalAndColor>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RPalette::OrdinalAndColor>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RPalette::OrdinalAndColor> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::RPalette::OrdinalAndColor>","std::vector<ROOT::Experimental::RPalette::OrdinalAndColor, std::allocator<ROOT::Experimental::RPalette::OrdinalAndColor> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::RPalette::OrdinalAndColor>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::RPalette::OrdinalAndColor>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::RPalette::OrdinalAndColor> : new vector<ROOT::Experimental::RPalette::OrdinalAndColor>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::RPalette::OrdinalAndColor>[nElements] : new vector<ROOT::Experimental::RPalette::OrdinalAndColor>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR(void *p) {
      delete ((vector<ROOT::Experimental::RPalette::OrdinalAndColor>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR(void *p) {
      delete [] ((vector<ROOT::Experimental::RPalette::OrdinalAndColor>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRPalettecLcLOrdinalAndColorgR(void *p) {
      typedef vector<ROOT::Experimental::RPalette::OrdinalAndColor> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RPalette::OrdinalAndColor>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RPadUserAxisBase*>*)
   {
      vector<ROOT::Experimental::RPadUserAxisBase*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RPadUserAxisBase*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RPadUserAxisBase*>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::RPadUserAxisBase*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RPadUserAxisBase*>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RPadUserAxisBase*> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::RPadUserAxisBase*>","std::vector<ROOT::Experimental::RPadUserAxisBase*, std::allocator<ROOT::Experimental::RPadUserAxisBase*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::RPadUserAxisBase*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::RPadUserAxisBase*>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::RPadUserAxisBase*> : new vector<ROOT::Experimental::RPadUserAxisBase*>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::RPadUserAxisBase*>[nElements] : new vector<ROOT::Experimental::RPadUserAxisBase*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR(void *p) {
      delete ((vector<ROOT::Experimental::RPadUserAxisBase*>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR(void *p) {
      delete [] ((vector<ROOT::Experimental::RPadUserAxisBase*>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRPadUserAxisBasemUgR(void *p) {
      typedef vector<ROOT::Experimental::RPadUserAxisBase*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RPadUserAxisBase*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RDisplayItem*>*)
   {
      vector<ROOT::Experimental::RDisplayItem*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RDisplayItem*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RDisplayItem*>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::RDisplayItem*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RDisplayItem*>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RDisplayItem*> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::RDisplayItem*>","std::vector<ROOT::Experimental::RDisplayItem*, std::allocator<ROOT::Experimental::RDisplayItem*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::RDisplayItem*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::RDisplayItem*>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::RDisplayItem*> : new vector<ROOT::Experimental::RDisplayItem*>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::RDisplayItem*>[nElements] : new vector<ROOT::Experimental::RDisplayItem*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR(void *p) {
      delete ((vector<ROOT::Experimental::RDisplayItem*>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR(void *p) {
      delete [] ((vector<ROOT::Experimental::RDisplayItem*>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRDisplayItemmUgR(void *p) {
      typedef vector<ROOT::Experimental::RDisplayItem*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RDisplayItem*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RAttrMap::Value_t*>*)
   {
      vector<ROOT::Experimental::RAttrMap::Value_t*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RAttrMap::Value_t*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RAttrMap::Value_t*>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::RAttrMap::Value_t*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RAttrMap::Value_t*>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RAttrMap::Value_t*> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::RAttrMap::Value_t*>","std::vector<ROOT::Experimental::RAttrMap::Value_t*, std::allocator<ROOT::Experimental::RAttrMap::Value_t*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::RAttrMap::Value_t*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::RAttrMap::Value_t*>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::RAttrMap::Value_t*> : new vector<ROOT::Experimental::RAttrMap::Value_t*>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::RAttrMap::Value_t*>[nElements] : new vector<ROOT::Experimental::RAttrMap::Value_t*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p) {
      delete ((vector<ROOT::Experimental::RAttrMap::Value_t*>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p) {
      delete [] ((vector<ROOT::Experimental::RAttrMap::Value_t*>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p) {
      typedef vector<ROOT::Experimental::RAttrMap::Value_t*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RAttrMap::Value_t*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >*)
   {
      vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> > >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >","std::vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable>, std::allocator<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> > : new vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >[nElements] : new vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR(void *p) {
      delete ((vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR(void *p) {
      delete [] ((vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLInternalcLcLRIOSharedlEROOTcLcLExperimentalcLcLRDrawablegRsPgR(void *p) {
      typedef vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::Internal::RIOShared<ROOT::Experimental::RDrawable> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::Detail::RMenuItem*>*)
   {
      vector<ROOT::Experimental::Detail::RMenuItem*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::Detail::RMenuItem*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::Detail::RMenuItem*>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::Detail::RMenuItem*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Experimental::Detail::RMenuItem*>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::Detail::RMenuItem*> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::Detail::RMenuItem*>","std::vector<ROOT::Experimental::Detail::RMenuItem*, std::allocator<ROOT::Experimental::Detail::RMenuItem*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::Detail::RMenuItem*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::Detail::RMenuItem*>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::Detail::RMenuItem*> : new vector<ROOT::Experimental::Detail::RMenuItem*>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::Detail::RMenuItem*>[nElements] : new vector<ROOT::Experimental::Detail::RMenuItem*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR(void *p) {
      delete ((vector<ROOT::Experimental::Detail::RMenuItem*>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR(void *p) {
      delete [] ((vector<ROOT::Experimental::Detail::RMenuItem*>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuItemmUgR(void *p) {
      typedef vector<ROOT::Experimental::Detail::RMenuItem*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::Detail::RMenuItem*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::Detail::RMenuArgument>*)
   {
      vector<ROOT::Experimental::Detail::RMenuArgument> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::Detail::RMenuArgument>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::Detail::RMenuArgument>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::Detail::RMenuArgument>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Experimental::Detail::RMenuArgument>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::Detail::RMenuArgument> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::Detail::RMenuArgument>","std::vector<ROOT::Experimental::Detail::RMenuArgument, std::allocator<ROOT::Experimental::Detail::RMenuArgument> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::Detail::RMenuArgument>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::Detail::RMenuArgument>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::Detail::RMenuArgument> : new vector<ROOT::Experimental::Detail::RMenuArgument>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::Detail::RMenuArgument>[nElements] : new vector<ROOT::Experimental::Detail::RMenuArgument>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR(void *p) {
      delete ((vector<ROOT::Experimental::Detail::RMenuArgument>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR(void *p) {
      delete [] ((vector<ROOT::Experimental::Detail::RMenuArgument>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLDetailcLcLRMenuArgumentgR(void *p) {
      typedef vector<ROOT::Experimental::Detail::RMenuArgument> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::Detail::RMenuArgument>

namespace ROOT {
   static TClass *unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_Dictionary();
   static void unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p = 0);
   static void *newArray_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p);
   static void deleteArray_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p);
   static void destruct_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>*)
   {
      unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>", -2, "unordered_map", 102,
                  typeid(unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>) );
      instance.SetNew(&new_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR);
      instance.SetDelete(&delete_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*> >()));

      ::ROOT::AddClassAlternate("unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>","std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, ROOT::Experimental::RAttrMap::Value_t*, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, ROOT::Experimental::RAttrMap::Value_t*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>*)0x0)->GetClass();
      unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*> : new unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>;
   }
   static void *newArray_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>[nElements] : new unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p) {
      delete ((unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>*)p);
   }
   static void deleteArray_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p) {
      delete [] ((unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>*)p);
   }
   static void destruct_unordered_maplEstringcOROOTcLcLExperimentalcLcLRAttrMapcLcLValue_tmUgR(void *p) {
      typedef unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,ROOT::Experimental::RAttrMap::Value_t*>

namespace ROOT {
   static TClass *listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR_Dictionary();
   static void listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR_TClassManip(TClass*);
   static void *new_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR(void *p = 0);
   static void *newArray_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR(Long_t size, void *p);
   static void delete_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR(void *p);
   static void deleteArray_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR(void *p);
   static void destruct_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<ROOT::Experimental::RStyle::Block_t>*)
   {
      list<ROOT::Experimental::RStyle::Block_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<ROOT::Experimental::RStyle::Block_t>));
      static ::ROOT::TGenericClassInfo 
         instance("list<ROOT::Experimental::RStyle::Block_t>", -2, "list", 552,
                  typeid(list<ROOT::Experimental::RStyle::Block_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR_Dictionary, isa_proxy, 0,
                  sizeof(list<ROOT::Experimental::RStyle::Block_t>) );
      instance.SetNew(&new_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR);
      instance.SetNewArray(&newArray_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR);
      instance.SetDelete(&delete_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR);
      instance.SetDeleteArray(&deleteArray_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR);
      instance.SetDestructor(&destruct_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<ROOT::Experimental::RStyle::Block_t> >()));

      ::ROOT::AddClassAlternate("list<ROOT::Experimental::RStyle::Block_t>","std::__cxx11::list<ROOT::Experimental::RStyle::Block_t, std::allocator<ROOT::Experimental::RStyle::Block_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<ROOT::Experimental::RStyle::Block_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<ROOT::Experimental::RStyle::Block_t>*)0x0)->GetClass();
      listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Experimental::RStyle::Block_t> : new list<ROOT::Experimental::RStyle::Block_t>;
   }
   static void *newArray_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Experimental::RStyle::Block_t>[nElements] : new list<ROOT::Experimental::RStyle::Block_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR(void *p) {
      delete ((list<ROOT::Experimental::RStyle::Block_t>*)p);
   }
   static void deleteArray_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR(void *p) {
      delete [] ((list<ROOT::Experimental::RStyle::Block_t>*)p);
   }
   static void destruct_listlEROOTcLcLExperimentalcLcLRStylecLcLBlock_tgR(void *p) {
      typedef list<ROOT::Experimental::RStyle::Block_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<ROOT::Experimental::RStyle::Block_t>

namespace {
  void TriggerDictionaryInitialization_libROOTGpadv7_Impl() {
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
      TROOT::RegisterModule("libROOTGpadv7",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTGpadv7_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTGpadv7_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTGpadv7() {
  TriggerDictionaryInitialization_libROOTGpadv7_Impl();
}
