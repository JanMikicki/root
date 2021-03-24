// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTEve
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
#include "ROOT/REveChunkManager.hxx"
#include "ROOT/REveClient.hxx"
#include "ROOT/REveCompound.hxx"
#include "ROOT/REveBox.hxx"
#include "ROOT/REveBoxSet.hxx"
#include "ROOT/REveCaloData.hxx"
#include "ROOT/REveCalo.hxx"
#include "ROOT/REveDataCollection.hxx"
#include "ROOT/REveDataProxyBuilderBase.hxx"
#include "ROOT/REveDataSimpleProxyBuilder.hxx"
#include "ROOT/REveDataSimpleProxyBuilderTemplate.hxx"
#include "ROOT/REveDataTable.hxx"
#include "ROOT/REveDigitSet.hxx"
#include "ROOT/REveElement.hxx"
#include "ROOT/REveFrameBox.hxx"
#include "ROOT/REveGeoPolyShape.hxx"
#include "ROOT/REveGeoShapeExtract.hxx"
#include "ROOT/REveGeoShape.hxx"
#include "ROOT/REveGeomData.hxx"
#include "ROOT/REveGeomViewer.hxx"
#include "ROOT/REveGluTess.hxx"
#include "ROOT/REveJetCone.hxx"
#include "ROOT/REveEllipsoid.hxx"
#include "ROOT/REveLine.hxx"
#include "ROOT/REveManager.hxx"
#include "ROOT/REvePathMark.hxx"
#include "ROOT/REvePointSet.hxx"
#include "ROOT/REvePolygonSetProjected.hxx"
#include "ROOT/REveProjectionBases.hxx"
#include "ROOT/REveProjectionManager.hxx"
#include "ROOT/REveProjections.hxx"
#include "ROOT/REveRenderData.hxx"
#include "ROOT/REveRGBAPalette.hxx"
#include "ROOT/REveScalableStraightLineSet.hxx"
#include "ROOT/REveScene.hxx"
#include "ROOT/REveSceneInfo.hxx"
#include "ROOT/REveSecondarySelectable.hxx"
#include "ROOT/REveSelection.hxx"
#include "ROOT/REveShape.hxx"
#include "ROOT/REveStraightLineSet.hxx"
#include "ROOT/REveTableInfo.hxx"
#include "ROOT/REveTableProxyBuilder.hxx"
#include "ROOT/REveTrack.hxx"
#include "ROOT/REveTrackProjected.hxx"
#include "ROOT/REveTrackPropagator.hxx"
#include "ROOT/REveTrans.hxx"
#include "ROOT/REveTreeTools.hxx"
#include "ROOT/REveTypes.hxx"
#include "ROOT/REveUtil.hxx"
#include "ROOT/REveVector.hxx"
#include "ROOT/REveViewer.hxx"
#include "ROOT/REveViewContext.hxx"
#include "ROOT/REveVSD.hxx"
#include "ROOT/REveVSDStructs.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveException_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveException_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveException(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveException(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveException(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveException(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveException(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveException*)
   {
      ::ROOT::Experimental::REveException *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveException));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveException", "ROOT/REveTypes.hxx", 40,
                  typeid(::ROOT::Experimental::REveException), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveException_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveException) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveException);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveException);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveException);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveException);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveException);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveException*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveException*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveException*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveException_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveException*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveException_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveException_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveUtil_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveUtil_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveUtil(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveUtil(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveUtil(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveUtil(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveUtil(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveUtil*)
   {
      ::ROOT::Experimental::REveUtil *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveUtil));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveUtil", "ROOT/REveUtil.hxx", 39,
                  typeid(::ROOT::Experimental::REveUtil), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveUtil_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveUtil) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveUtil);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveUtil);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveUtil);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveUtil);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveUtil);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveUtil*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveUtil*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveUtil*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveUtil_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveUtil*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveUtil_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveUtil_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeoManagerHolder_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeoManagerHolder_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoManagerHolder*)
   {
      ::ROOT::Experimental::REveGeoManagerHolder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeoManagerHolder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoManagerHolder", "ROOT/REveUtil.hxx", 90,
                  typeid(::ROOT::Experimental::REveGeoManagerHolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeoManagerHolder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoManagerHolder) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoManagerHolder);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoManagerHolder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoManagerHolder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoManagerHolder*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeoManagerHolder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoManagerHolder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeoManagerHolder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoManagerHolder*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeoManagerHolder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeoManagerHolder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRefCnt_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRefCnt_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRefCnt(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRefCnt(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRefCnt(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRefCnt(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRefCnt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRefCnt*)
   {
      ::ROOT::Experimental::REveRefCnt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRefCnt));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRefCnt", "ROOT/REveUtil.hxx", 106,
                  typeid(::ROOT::Experimental::REveRefCnt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRefCnt_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRefCnt) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRefCnt);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRefCnt);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRefCnt);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRefCnt);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRefCnt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRefCnt*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRefCnt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRefCnt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRefCnt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRefCnt*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveRefCnt_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRefCnt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRefBackPtr_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRefBackPtr_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRefBackPtr(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRefBackPtr*)
   {
      ::ROOT::Experimental::REveRefBackPtr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRefBackPtr));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRefBackPtr", "ROOT/REveUtil.hxx", 133,
                  typeid(::ROOT::Experimental::REveRefBackPtr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRefBackPtr_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRefBackPtr) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRefBackPtr);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRefBackPtr);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRefBackPtr);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRefBackPtr);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRefBackPtr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRefBackPtr*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRefBackPtr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRefBackPtr*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRefBackPtr_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRefBackPtr*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveRefBackPtr_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRefBackPtr_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveChunkManager_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveChunkManager_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveChunkManager(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveChunkManager(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveChunkManager(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveChunkManager(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveChunkManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveChunkManager*)
   {
      ::ROOT::Experimental::REveChunkManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveChunkManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveChunkManager", "ROOT/REveChunkManager.hxx", 28,
                  typeid(::ROOT::Experimental::REveChunkManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveChunkManager_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveChunkManager) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveChunkManager);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveChunkManager);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveChunkManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveChunkManager);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveChunkManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveChunkManager*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveChunkManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveChunkManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveChunkManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveChunkManager*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveChunkManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveChunkManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveChunkManager::iterator*)
   {
      ::ROOT::Experimental::REveChunkManager::iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveChunkManager::iterator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveChunkManager::iterator", "ROOT/REveChunkManager.hxx", 71,
                  typeid(::ROOT::Experimental::REveChunkManager::iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Experimental::REveChunkManager::iterator) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveChunkManager::iterator*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveChunkManager::iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveChunkManager::iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveChunkManager::iterator*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVectorT<float>*)
   {
      ::ROOT::Experimental::REveVectorT<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVectorT<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVectorT<float>", "ROOT/REveVector.hxx", 29,
                  typeid(::ROOT::Experimental::REveVectorT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVectorT<float>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::REveVectorT<float>","ROOT::Experimental::REveVectorT<Float_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVectorT<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveVectorT<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVectorT<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVectorT<float>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVectorT<double>*)
   {
      ::ROOT::Experimental::REveVectorT<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVectorT<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVectorT<double>", "ROOT/REveVector.hxx", 29,
                  typeid(::ROOT::Experimental::REveVectorT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVectorT<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::REveVectorT<double>","ROOT::Experimental::REveVectorT<Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVectorT<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveVectorT<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVectorT<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVectorT<double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVector4T<float>*)
   {
      ::ROOT::Experimental::REveVector4T<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVector4T<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVector4T<float>", "ROOT/REveVector.hxx", 238,
                  typeid(::ROOT::Experimental::REveVector4T<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVector4T<float>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::REveVector4T<float>","ROOT::Experimental::REveVector4T<Float_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVector4T<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveVector4T<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVector4T<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVector4T<float>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVector4T<double>*)
   {
      ::ROOT::Experimental::REveVector4T<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVector4T<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVector4T<double>", "ROOT/REveVector.hxx", 238,
                  typeid(::ROOT::Experimental::REveVector4T<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVector4T<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::REveVector4T<double>","ROOT::Experimental::REveVector4T<Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVector4T<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveVector4T<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVector4T<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVector4T<double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVector2T<float>*)
   {
      ::ROOT::Experimental::REveVector2T<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVector2T<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVector2T<float>", "ROOT/REveVector.hxx", 304,
                  typeid(::ROOT::Experimental::REveVector2T<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVector2T<float>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::REveVector2T<float>","ROOT::Experimental::REveVector2T<Float_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVector2T<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveVector2T<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVector2T<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVector2T<float>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVector2T<double>*)
   {
      ::ROOT::Experimental::REveVector2T<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVector2T<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVector2T<double>", "ROOT/REveVector.hxx", 304,
                  typeid(::ROOT::Experimental::REveVector2T<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVector2T<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::REveVector2T<double>","ROOT::Experimental::REveVector2T<Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVector2T<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveVector2T<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVector2T<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVector2T<double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveProjectable_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveProjectable_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveProjectable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveProjectable*)
   {
      ::ROOT::Experimental::REveProjectable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveProjectable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveProjectable", "ROOT/REveProjectionBases.hxx", 37,
                  typeid(::ROOT::Experimental::REveProjectable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveProjectable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveProjectable) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveProjectable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveProjectable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveProjectable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveProjectable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveProjectable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveProjectable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveProjectable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveProjectable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveProjectable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveProjectable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveProjected_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveProjected*)
   {
      ::ROOT::Experimental::REveProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveProjected", "ROOT/REveProjectionBases.hxx", 81,
                  typeid(::ROOT::Experimental::REveProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveProjected) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveElement_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveElement_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveElement(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveElement(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveElement(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveElement(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveElement*)
   {
      ::ROOT::Experimental::REveElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveElement", "ROOT/REveElement.hxx", 40,
                  typeid(::ROOT::Experimental::REveElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveElement_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveElement) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveElement);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveElement);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveElement);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveElement);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveElement*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveElement_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveElement*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveElement_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveElement_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveAunt_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveAunt_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveAunt(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveAunt(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveAunt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveAunt*)
   {
      ::ROOT::Experimental::REveAunt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveAunt));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveAunt", "ROOT/REveElement.hxx", 364,
                  typeid(::ROOT::Experimental::REveAunt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveAunt_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveAunt) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveAunt);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveAunt);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveAunt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveAunt*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveAunt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveAunt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveAunt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveAunt*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveAunt_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveAunt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveAuntAsList_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveAuntAsList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveAuntAsList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveAuntAsList*)
   {
      ::ROOT::Experimental::REveAuntAsList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveAuntAsList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveAuntAsList", "ROOT/REveElement.hxx", 397,
                  typeid(::ROOT::Experimental::REveAuntAsList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveAuntAsList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveAuntAsList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveAuntAsList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveAuntAsList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveAuntAsList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveAuntAsList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveAuntAsList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveAuntAsList*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveAuntAsList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveAuntAsList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveAuntAsList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveAuntAsList*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveAuntAsList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveAuntAsList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCompound_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCompound_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCompound(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCompound(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCompound(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCompound(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCompound(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCompound*)
   {
      ::ROOT::Experimental::REveCompound *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCompound));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCompound", "ROOT/REveCompound.hxx", 26,
                  typeid(::ROOT::Experimental::REveCompound), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCompound_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCompound) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCompound);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCompound);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCompound);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCompound);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCompound);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCompound*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCompound*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCompound*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCompound_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCompound*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCompound_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCompound_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCompoundProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCompoundProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCompoundProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCompoundProjected*)
   {
      ::ROOT::Experimental::REveCompoundProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCompoundProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCompoundProjected", "ROOT/REveCompound.hxx", 64,
                  typeid(::ROOT::Experimental::REveCompoundProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCompoundProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCompoundProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCompoundProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCompoundProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCompoundProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCompoundProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCompoundProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCompoundProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCompoundProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCompoundProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCompoundProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCompoundProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCompoundProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCompoundProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveShape_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveShape_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveShape(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveShape(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveShape*)
   {
      ::ROOT::Experimental::REveShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveShape));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveShape", "ROOT/REveShape.hxx", 29,
                  typeid(::ROOT::Experimental::REveShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveShape_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveShape) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveShape);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveShape);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveShape*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveShape_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveShape*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveShape_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveShape_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveBox_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveBox_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveBox(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveBox(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveBox(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBox(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveBox*)
   {
      ::ROOT::Experimental::REveBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveBox));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveBox", "ROOT/REveBox.hxx", 24,
                  typeid(::ROOT::Experimental::REveBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveBox_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveBox) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveBox);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveBox);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveBox);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveBox);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveBox*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveBox*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveBox_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveBoxProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveBoxProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveBoxProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveBoxProjected*)
   {
      ::ROOT::Experimental::REveBoxProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveBoxProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveBoxProjected", "ROOT/REveBox.hxx", 58,
                  typeid(::ROOT::Experimental::REveBoxProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveBoxProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveBoxProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveBoxProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveBoxProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveBoxProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveBoxProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveBoxProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveBoxProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveBoxProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveBoxProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveBoxProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveBoxProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveBoxProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveBoxProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveFrameBox_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveFrameBox_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveFrameBox(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveFrameBox(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveFrameBox(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveFrameBox(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveFrameBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveFrameBox*)
   {
      ::ROOT::Experimental::REveFrameBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveFrameBox));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveFrameBox", "ROOT/REveFrameBox.hxx", 20,
                  typeid(::ROOT::Experimental::REveFrameBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveFrameBox_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveFrameBox) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveFrameBox);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveFrameBox);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveFrameBox);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveFrameBox);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveFrameBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveFrameBox*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveFrameBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveFrameBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveFrameBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveFrameBox*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveFrameBox_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveFrameBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRGBAPalette(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRGBAPalette*)
   {
      ::ROOT::Experimental::REveRGBAPalette *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveRGBAPalette >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRGBAPalette", ::ROOT::Experimental::REveRGBAPalette::Class_Version(), "ROOT/REveRGBAPalette.hxx", 24,
                  typeid(::ROOT::Experimental::REveRGBAPalette), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveRGBAPalette::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRGBAPalette) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRGBAPalette);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRGBAPalette);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRGBAPalette);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRGBAPalette);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRGBAPalette);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRGBAPalette*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRGBAPalette*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRGBAPalette*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveSecondarySelectable_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveSecondarySelectable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveSecondarySelectable*)
   {
      ::ROOT::Experimental::REveSecondarySelectable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveSecondarySelectable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveSecondarySelectable", "ROOT/REveSecondarySelectable.hxx", 24,
                  typeid(::ROOT::Experimental::REveSecondarySelectable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveSecondarySelectable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveSecondarySelectable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveSecondarySelectable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveSecondarySelectable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveSecondarySelectable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveSecondarySelectable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveSecondarySelectable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSecondarySelectable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveSecondarySelectable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSecondarySelectable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveSecondarySelectable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveSecondarySelectable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDigitSet_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDigitSet_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveDigitSet(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDigitSet(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDigitSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDigitSet*)
   {
      ::ROOT::Experimental::REveDigitSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDigitSet));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDigitSet", "ROOT/REveDigitSet.hxx", 31,
                  typeid(::ROOT::Experimental::REveDigitSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDigitSet_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDigitSet) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDigitSet);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDigitSet);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDigitSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDigitSet*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveDigitSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDigitSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDigitSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDigitSet*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveDigitSet_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDigitSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveBoxSet_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveBoxSet_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveBoxSet(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveBoxSet(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveBoxSet(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBoxSet(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveBoxSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveBoxSet*)
   {
      ::ROOT::Experimental::REveBoxSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveBoxSet));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveBoxSet", "ROOT/REveBoxSet.hxx", 23,
                  typeid(::ROOT::Experimental::REveBoxSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveBoxSet_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveBoxSet) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveBoxSet);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveBoxSet);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveBoxSet);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveBoxSet);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveBoxSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveBoxSet*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveBoxSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveBoxSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveBoxSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveBoxSet*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveBoxSet_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveBoxSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloData_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloData_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloData(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloData(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloData*)
   {
      ::ROOT::Experimental::REveCaloData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloData", "ROOT/REveCaloData.hxx", 30,
                  typeid(::ROOT::Experimental::REveCaloData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCaloData) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloData);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloData*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCaloData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloData*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloData::SliceInfo_t*)
   {
      ::ROOT::Experimental::REveCaloData::SliceInfo_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloData::SliceInfo_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloData::SliceInfo_t", "ROOT/REveCaloData.hxx", 35,
                  typeid(::ROOT::Experimental::REveCaloData::SliceInfo_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCaloData::SliceInfo_t) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloData::SliceInfo_t*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCaloData::SliceInfo_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloData::SliceInfo_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloData::SliceInfo_t*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDataVec_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloDataVec_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloDataVec*)
   {
      ::ROOT::Experimental::REveCaloDataVec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloDataVec));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloDataVec", "ROOT/REveCaloData.hxx", 240,
                  typeid(::ROOT::Experimental::REveCaloDataVec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloDataVec_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Experimental::REveCaloDataVec) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloDataVec);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataVec);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloDataVec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloDataVec*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCaloDataVec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloDataVec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDataVec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloDataVec*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloDataVec_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloDataVec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDataHist_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloDataHist_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCaloDataHist(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloDataHist*)
   {
      ::ROOT::Experimental::REveCaloDataHist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloDataHist));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloDataHist", "ROOT/REveCaloData.hxx", 295,
                  typeid(::ROOT::Experimental::REveCaloDataHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloDataHist_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCaloDataHist) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCaloDataHist);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCaloDataHist);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloDataHist);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataHist);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloDataHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloDataHist*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCaloDataHist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloDataHist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDataHist_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloDataHist*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloDataHist_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloDataHist_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveProjection_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveProjection*)
   {
      ::ROOT::Experimental::REveProjection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveProjection", "ROOT/REveProjections.hxx", 30,
                  typeid(::ROOT::Experimental::REveProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveProjection) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveProjection*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveProjection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveProjection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveProjection*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveProjection::PreScaleEntry_t*)
   {
      ::ROOT::Experimental::REveProjection::PreScaleEntry_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveProjection::PreScaleEntry_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveProjection::PreScaleEntry_t", "ROOT/REveProjections.hxx", 36,
                  typeid(::ROOT::Experimental::REveProjection::PreScaleEntry_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveProjection::PreScaleEntry_t) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveProjection::PreScaleEntry_t*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveProjection::PreScaleEntry_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveProjection::PreScaleEntry_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveProjection::PreScaleEntry_t*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRhoZProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRhoZProjection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRhoZProjection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRhoZProjection*)
   {
      ::ROOT::Experimental::REveRhoZProjection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRhoZProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRhoZProjection", "ROOT/REveProjections.hxx", 155,
                  typeid(::ROOT::Experimental::REveRhoZProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRhoZProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRhoZProjection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRhoZProjection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRhoZProjection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRhoZProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRhoZProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRhoZProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRhoZProjection*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRhoZProjection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRhoZProjection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRhoZProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRhoZProjection*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveRhoZProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRhoZProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRPhiProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRPhiProjection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRPhiProjection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRPhiProjection*)
   {
      ::ROOT::Experimental::REveRPhiProjection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRPhiProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRPhiProjection", "ROOT/REveProjections.hxx", 183,
                  typeid(::ROOT::Experimental::REveRPhiProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRPhiProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRPhiProjection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRPhiProjection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRPhiProjection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRPhiProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRPhiProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRPhiProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRPhiProjection*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRPhiProjection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRPhiProjection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRPhiProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRPhiProjection*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveRPhiProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRPhiProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREve3DProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREve3DProjection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREve3DProjection(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREve3DProjection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREve3DProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREve3DProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREve3DProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REve3DProjection*)
   {
      ::ROOT::Experimental::REve3DProjection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REve3DProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REve3DProjection", "ROOT/REveProjections.hxx", 199,
                  typeid(::ROOT::Experimental::REve3DProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREve3DProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REve3DProjection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREve3DProjection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREve3DProjection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREve3DProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREve3DProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREve3DProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REve3DProjection*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REve3DProjection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REve3DProjection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREve3DProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REve3DProjection*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREve3DProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREve3DProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveProjectionManager_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveProjectionManager_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveProjectionManager(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveProjectionManager*)
   {
      ::ROOT::Experimental::REveProjectionManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveProjectionManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveProjectionManager", "ROOT/REveProjectionManager.hxx", 27,
                  typeid(::ROOT::Experimental::REveProjectionManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveProjectionManager_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveProjectionManager) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveProjectionManager);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveProjectionManager);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveProjectionManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveProjectionManager);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveProjectionManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveProjectionManager*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveProjectionManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveProjectionManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveProjectionManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveProjectionManager*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveProjectionManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveProjectionManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloViz_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloViz_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloViz(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloViz(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloViz(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloViz*)
   {
      ::ROOT::Experimental::REveCaloViz *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloViz));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloViz", "ROOT/REveCalo.hxx", 29,
                  typeid(::ROOT::Experimental::REveCaloViz), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloViz_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCaloViz) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloViz);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloViz);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloViz);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloViz*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCaloViz*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloViz*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloViz_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloViz*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloViz_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloViz_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCalo3D_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCalo3D_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCalo3D(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCalo3D(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCalo3D(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCalo3D(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCalo3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCalo3D*)
   {
      ::ROOT::Experimental::REveCalo3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCalo3D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCalo3D", "ROOT/REveCalo.hxx", 155,
                  typeid(::ROOT::Experimental::REveCalo3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCalo3D_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCalo3D) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCalo3D);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCalo3D);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCalo3D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCalo3D);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCalo3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCalo3D*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCalo3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCalo3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCalo3D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCalo3D*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCalo3D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCalo3D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCalo2D_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCalo2D_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCalo2D(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCalo2D(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCalo2D(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCalo2D(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCalo2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCalo2D*)
   {
      ::ROOT::Experimental::REveCalo2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCalo2D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCalo2D", "ROOT/REveCalo.hxx", 203,
                  typeid(::ROOT::Experimental::REveCalo2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCalo2D_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCalo2D) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCalo2D);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCalo2D);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCalo2D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCalo2D);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCalo2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCalo2D*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCalo2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCalo2D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCalo2D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCalo2D*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCalo2D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCalo2D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloLego_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloLego_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloLego(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloLego(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloLego(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloLego*)
   {
      ::ROOT::Experimental::REveCaloLego *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloLego));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloLego", "ROOT/REveCalo.hxx", 264,
                  typeid(::ROOT::Experimental::REveCaloLego), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloLego_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCaloLego) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloLego);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloLego);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloLego);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloLego*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCaloLego*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloLego*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloLego_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCaloLego*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloLego_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloLego_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataTable_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataTable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveDataTable(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataTable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveDataTable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataTable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataTable*)
   {
      ::ROOT::Experimental::REveDataTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataTable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataTable", "ROOT/REveDataTable.hxx", 23,
                  typeid(::ROOT::Experimental::REveDataTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataTable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataTable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveDataTable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveDataTable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataTable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataTable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataTable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveDataTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataTable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataTable*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveDataTable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataTable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataColumn_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataColumn_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveDataColumn(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataColumn(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveDataColumn(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataColumn(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataColumn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataColumn*)
   {
      ::ROOT::Experimental::REveDataColumn *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataColumn));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataColumn", "ROOT/REveDataTable.hxx", 43,
                  typeid(::ROOT::Experimental::REveDataColumn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataColumn_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataColumn) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveDataColumn);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveDataColumn);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataColumn);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataColumn);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataColumn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataColumn*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveDataColumn*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataColumn*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataColumn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataColumn*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveDataColumn_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataColumn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataItem_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveDataItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataItem*)
   {
      ::ROOT::Experimental::REveDataItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataItem", "ROOT/REveDataCollection.hxx", 31,
                  typeid(::ROOT::Experimental::REveDataItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataItem) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataItem*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveDataItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataItem*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveDataItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataItemList_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataItemList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveDataItemList(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataItemList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveDataItemList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataItemList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataItemList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataItemList*)
   {
      ::ROOT::Experimental::REveDataItemList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataItemList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataItemList", "ROOT/REveDataCollection.hxx", 57,
                  typeid(::ROOT::Experimental::REveDataItemList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataItemList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataItemList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveDataItemList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveDataItemList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataItemList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataItemList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataItemList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataItemList*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveDataItemList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataItemList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataItemList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataItemList*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveDataItemList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataItemList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataCollection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataCollection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveDataCollection(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataCollection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveDataCollection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataCollection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataCollection*)
   {
      ::ROOT::Experimental::REveDataCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataCollection", "ROOT/REveDataCollection.hxx", 109,
                  typeid(::ROOT::Experimental::REveDataCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataCollection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveDataCollection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveDataCollection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataCollection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataCollection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataCollection*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveDataCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataCollection*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveDataCollection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataProxyBuilderBase*)
   {
      ::ROOT::Experimental::REveDataProxyBuilderBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataProxyBuilderBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataProxyBuilderBase", "ROOT/REveDataProxyBuilderBase.hxx", 25,
                  typeid(::ROOT::Experimental::REveDataProxyBuilderBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataProxyBuilderBase) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataProxyBuilderBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveDataProxyBuilderBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataProxyBuilderBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataProxyBuilderBase*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataSimpleProxyBuilder*)
   {
      ::ROOT::Experimental::REveDataSimpleProxyBuilder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataSimpleProxyBuilder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataSimpleProxyBuilder", "ROOT/REveDataSimpleProxyBuilder.hxx", 23,
                  typeid(::ROOT::Experimental::REveDataSimpleProxyBuilder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataSimpleProxyBuilder) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataSimpleProxyBuilder*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveDataSimpleProxyBuilder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataSimpleProxyBuilder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveDataSimpleProxyBuilder*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoPolyShape*)
   {
      ::ROOT::Experimental::REveGeoPolyShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveGeoPolyShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoPolyShape", ::ROOT::Experimental::REveGeoPolyShape::Class_Version(), "ROOT/REveGeoPolyShape.hxx", 28,
                  typeid(::ROOT::Experimental::REveGeoPolyShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveGeoPolyShape::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoPolyShape) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoPolyShape);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoPolyShape);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoPolyShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoPolyShape*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeoPolyShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoPolyShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoShapeExtract*)
   {
      ::ROOT::Experimental::REveGeoShapeExtract *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveGeoShapeExtract >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoShapeExtract", ::ROOT::Experimental::REveGeoShapeExtract::Class_Version(), "ROOT/REveGeoShapeExtract.hxx", 23,
                  typeid(::ROOT::Experimental::REveGeoShapeExtract), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveGeoShapeExtract::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoShapeExtract) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoShapeExtract);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoShapeExtract);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoShapeExtract);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoShapeExtract*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeoShapeExtract*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeExtract*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeoShape_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeoShape_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShape(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShape(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShape(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShape(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoShape*)
   {
      ::ROOT::Experimental::REveGeoShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeoShape));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoShape", "ROOT/REveGeoShape.hxx", 33,
                  typeid(::ROOT::Experimental::REveGeoShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeoShape_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoShape) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoShape);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoShape);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoShape);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoShape);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoShape*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeoShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeoShape_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShape*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeoShape_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeoShape_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeoShapeProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeoShapeProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoShapeProjected*)
   {
      ::ROOT::Experimental::REveGeoShapeProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeoShapeProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoShapeProjected", "ROOT/REveGeoShape.hxx", 85,
                  typeid(::ROOT::Experimental::REveGeoShapeProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeoShapeProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoShapeProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoShapeProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoShapeProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoShapeProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoShapeProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeoShapeProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeoShapeProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeoShapeProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeoShapeProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRenderData_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRenderData_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRenderData(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRenderData(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRenderData(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRenderData(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRenderData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRenderData*)
   {
      ::ROOT::Experimental::REveRenderData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRenderData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRenderData", "ROOT/REveRenderData.hxx", 23,
                  typeid(::ROOT::Experimental::REveRenderData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRenderData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRenderData) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRenderData);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRenderData);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRenderData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRenderData);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRenderData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRenderData*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRenderData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRenderData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRenderData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRenderData*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveRenderData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRenderData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeomNodeBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeomNodeBase_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeomNodeBase(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomNodeBase(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeomNodeBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomNodeBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomNodeBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeomNodeBase*)
   {
      ::ROOT::Experimental::REveGeomNodeBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeomNodeBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeomNodeBase", "ROOT/REveGeomData.hxx", 38,
                  typeid(::ROOT::Experimental::REveGeomNodeBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeomNodeBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeomNodeBase) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeomNodeBase);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeomNodeBase);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeomNodeBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeomNodeBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeomNodeBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeomNodeBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeomNodeBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomNodeBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeomNodeBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomNodeBase*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeomNodeBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeomNodeBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeomNode_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeomNode_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeomNode(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomNode(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeomNode(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomNode(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeomNode*)
   {
      ::ROOT::Experimental::REveGeomNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeomNode));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeomNode", "ROOT/REveGeomData.hxx", 56,
                  typeid(::ROOT::Experimental::REveGeomNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeomNode_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeomNode) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeomNode);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeomNode);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeomNode);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeomNode);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeomNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeomNode*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeomNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeomNode_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomNode*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeomNode_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeomNode_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRGeomRenderInfo_Dictionary();
   static void ROOTcLcLExperimentalcLcLRGeomRenderInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRGeomRenderInfo(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRGeomRenderInfo(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRGeomRenderInfo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRGeomRenderInfo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRGeomRenderInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RGeomRenderInfo*)
   {
      ::ROOT::Experimental::RGeomRenderInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RGeomRenderInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RGeomRenderInfo", "ROOT/REveGeomData.hxx", 72,
                  typeid(::ROOT::Experimental::RGeomRenderInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRGeomRenderInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RGeomRenderInfo) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRGeomRenderInfo);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRGeomRenderInfo);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRGeomRenderInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRGeomRenderInfo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRGeomRenderInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RGeomRenderInfo*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RGeomRenderInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RGeomRenderInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRGeomRenderInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RGeomRenderInfo*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRGeomRenderInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRGeomRenderInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRGeomRawRenderInfo_Dictionary();
   static void ROOTcLcLExperimentalcLcLRGeomRawRenderInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RGeomRawRenderInfo*)
   {
      ::ROOT::Experimental::RGeomRawRenderInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RGeomRawRenderInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RGeomRawRenderInfo", "ROOT/REveGeomData.hxx", 79,
                  typeid(::ROOT::Experimental::RGeomRawRenderInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRGeomRawRenderInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RGeomRawRenderInfo) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RGeomRawRenderInfo*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RGeomRawRenderInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RGeomRawRenderInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRGeomRawRenderInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RGeomRawRenderInfo*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRGeomRawRenderInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRGeomRawRenderInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo_Dictionary();
   static void ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RGeomShapeRenderInfo*)
   {
      ::ROOT::Experimental::RGeomShapeRenderInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RGeomShapeRenderInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RGeomShapeRenderInfo", "ROOT/REveGeomData.hxx", 88,
                  typeid(::ROOT::Experimental::RGeomShapeRenderInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Experimental::RGeomShapeRenderInfo) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RGeomShapeRenderInfo*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::RGeomShapeRenderInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::RGeomShapeRenderInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RGeomShapeRenderInfo*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeomVisible_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeomVisible_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeomVisible(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomVisible(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeomVisible(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomVisible(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomVisible(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeomVisible*)
   {
      ::ROOT::Experimental::REveGeomVisible *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeomVisible));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeomVisible", "ROOT/REveGeomData.hxx", 98,
                  typeid(::ROOT::Experimental::REveGeomVisible), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeomVisible_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeomVisible) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeomVisible);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeomVisible);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeomVisible);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeomVisible);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeomVisible);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeomVisible*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeomVisible*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomVisible*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeomVisible_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomVisible*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeomVisible_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeomVisible_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeomConfig_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeomConfig_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeomConfig(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomConfig(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeomConfig(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomConfig(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeomConfig*)
   {
      ::ROOT::Experimental::REveGeomConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeomConfig));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeomConfig", "ROOT/REveGeomData.hxx", 115,
                  typeid(::ROOT::Experimental::REveGeomConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeomConfig_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeomConfig) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeomConfig);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeomConfig);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeomConfig);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeomConfig);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeomConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeomConfig*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeomConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomConfig*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeomConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomConfig*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeomConfig_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeomConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeomDrawing_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeomDrawing_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeomDrawing(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomDrawing(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeomDrawing(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomDrawing(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomDrawing(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeomDrawing*)
   {
      ::ROOT::Experimental::REveGeomDrawing *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeomDrawing));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeomDrawing", "ROOT/REveGeomData.hxx", 130,
                  typeid(::ROOT::Experimental::REveGeomDrawing), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeomDrawing_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeomDrawing) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeomDrawing);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeomDrawing);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeomDrawing);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeomDrawing);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeomDrawing);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeomDrawing*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeomDrawing*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomDrawing*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeomDrawing_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomDrawing*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeomDrawing_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeomDrawing_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeomRequest_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeomRequest_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeomRequest(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomRequest(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeomRequest(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomRequest(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeomRequest*)
   {
      ::ROOT::Experimental::REveGeomRequest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeomRequest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeomRequest", "ROOT/REveGeomData.hxx", 140,
                  typeid(::ROOT::Experimental::REveGeomRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeomRequest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeomRequest) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeomRequest);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeomRequest);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeomRequest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeomRequest);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeomRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeomRequest*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeomRequest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomRequest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeomRequest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomRequest*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeomRequest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeomRequest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeomNodeInfo_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeomNodeInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeomNodeInfo(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomNodeInfo(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeomNodeInfo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomNodeInfo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomNodeInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeomNodeInfo*)
   {
      ::ROOT::Experimental::REveGeomNodeInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeomNodeInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeomNodeInfo", "ROOT/REveGeomData.hxx", 147,
                  typeid(::ROOT::Experimental::REveGeomNodeInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeomNodeInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeomNodeInfo) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeomNodeInfo);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeomNodeInfo);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeomNodeInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeomNodeInfo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeomNodeInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeomNodeInfo*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeomNodeInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomNodeInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeomNodeInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomNodeInfo*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeomNodeInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeomNodeInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeomDescription_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeomDescription_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeomDescription(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomDescription(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeomDescription(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomDescription(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomDescription(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeomDescription*)
   {
      ::ROOT::Experimental::REveGeomDescription *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeomDescription));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeomDescription", "ROOT/REveGeomData.hxx", 161,
                  typeid(::ROOT::Experimental::REveGeomDescription), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeomDescription_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeomDescription) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeomDescription);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeomDescription);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeomDescription);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeomDescription);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeomDescription);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeomDescription*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveGeomDescription*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomDescription*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeomDescription_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeomDescription*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveGeomDescription_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeomDescription_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveJetCone_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveJetCone_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveJetCone(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveJetCone(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveJetCone(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveJetCone(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveJetCone(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveJetCone*)
   {
      ::ROOT::Experimental::REveJetCone *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveJetCone));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveJetCone", "ROOT/REveJetCone.hxx", 25,
                  typeid(::ROOT::Experimental::REveJetCone), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveJetCone_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveJetCone) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveJetCone);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveJetCone);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveJetCone);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveJetCone);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveJetCone);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveJetCone*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveJetCone*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveJetCone*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveJetCone_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveJetCone*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveJetCone_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveJetCone_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveJetConeProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveJetConeProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveJetConeProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveJetConeProjected*)
   {
      ::ROOT::Experimental::REveJetConeProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveJetConeProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveJetConeProjected", "ROOT/REveJetCone.hxx", 82,
                  typeid(::ROOT::Experimental::REveJetConeProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveJetConeProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveJetConeProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveJetConeProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveJetConeProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveJetConeProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveJetConeProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveJetConeProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveJetConeProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveJetConeProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveJetConeProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveJetConeProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveJetConeProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveJetConeProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveJetConeProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveTrans(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrans(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrans(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrans(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrans(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLREveTrans(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrans*)
   {
      ::ROOT::Experimental::REveTrans *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveTrans >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrans", ::ROOT::Experimental::REveTrans::Class_Version(), "ROOT/REveTrans.hxx", 29,
                  typeid(::ROOT::Experimental::REveTrans), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveTrans::Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::REveTrans) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrans);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrans);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrans);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrans);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrans);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLREveTrans);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrans*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveTrans*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrans*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveStraightLineSet_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveStraightLineSet_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveStraightLineSet(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveStraightLineSet*)
   {
      ::ROOT::Experimental::REveStraightLineSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveStraightLineSet));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveStraightLineSet", "ROOT/REveStraightLineSet.hxx", 36,
                  typeid(::ROOT::Experimental::REveStraightLineSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveStraightLineSet_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveStraightLineSet) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveStraightLineSet);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveStraightLineSet);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveStraightLineSet);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSet);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveStraightLineSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveStraightLineSet*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveStraightLineSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveStraightLineSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveStraightLineSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveStraightLineSet*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveStraightLineSet_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveStraightLineSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveStraightLineSetProjected*)
   {
      ::ROOT::Experimental::REveStraightLineSetProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveStraightLineSetProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveStraightLineSetProjected", "ROOT/REveStraightLineSet.hxx", 130,
                  typeid(::ROOT::Experimental::REveStraightLineSetProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveStraightLineSetProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveStraightLineSetProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveStraightLineSetProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveStraightLineSetProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveStraightLineSetProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveEllipsoid_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveEllipsoid_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveEllipsoid(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveEllipsoid*)
   {
      ::ROOT::Experimental::REveEllipsoid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveEllipsoid));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveEllipsoid", "ROOT/REveEllipsoid.hxx", 27,
                  typeid(::ROOT::Experimental::REveEllipsoid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveEllipsoid_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveEllipsoid) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveEllipsoid);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveEllipsoid);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveEllipsoid);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoid);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveEllipsoid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveEllipsoid*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveEllipsoid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveEllipsoid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveEllipsoid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveEllipsoid*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveEllipsoid_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveEllipsoid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveEllipsoidProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveEllipsoidProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveEllipsoidProjected*)
   {
      ::ROOT::Experimental::REveEllipsoidProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveEllipsoidProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveEllipsoidProjected", "ROOT/REveEllipsoid.hxx", 60,
                  typeid(::ROOT::Experimental::REveEllipsoidProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveEllipsoidProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveEllipsoidProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveEllipsoidProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveEllipsoidProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveEllipsoidProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveEllipsoidProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveEllipsoidProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveEllipsoidProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveEllipsoidProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveEllipsoidProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveEllipsoidProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveEllipsoidProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePointSet_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePointSet_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREvePointSet(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSet(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePointSet(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSet(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePointSet*)
   {
      ::ROOT::Experimental::REvePointSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePointSet));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePointSet", "ROOT/REvePointSet.hxx", 34,
                  typeid(::ROOT::Experimental::REvePointSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePointSet_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePointSet) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePointSet);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePointSet);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePointSet);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePointSet);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePointSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePointSet*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REvePointSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePointSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSet*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREvePointSet_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePointSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePointSetArray_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePointSetArray_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePointSetArray*)
   {
      ::ROOT::Experimental::REvePointSetArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePointSetArray));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePointSetArray", "ROOT/REvePointSet.hxx", 93,
                  typeid(::ROOT::Experimental::REvePointSetArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePointSetArray_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePointSetArray) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePointSetArray);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePointSetArray);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePointSetArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePointSetArray*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REvePointSetArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSetArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePointSetArray_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSetArray*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREvePointSetArray_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePointSetArray_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePointSetProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePointSetProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSetProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePointSetProjected*)
   {
      ::ROOT::Experimental::REvePointSetProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePointSetProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePointSetProjected", "ROOT/REvePointSet.hxx", 146,
                  typeid(::ROOT::Experimental::REvePointSetProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePointSetProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePointSetProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePointSetProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePointSetProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePointSetProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePointSetProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePointSetProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePointSetProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REvePointSetProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSetProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePointSetProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSetProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREvePointSetProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePointSetProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveLine_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveLine_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveLine(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveLine(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveLine(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveLine(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveLine*)
   {
      ::ROOT::Experimental::REveLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveLine));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveLine", "ROOT/REveLine.hxx", 28,
                  typeid(::ROOT::Experimental::REveLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveLine_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveLine) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveLine);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveLine);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveLine);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveLine);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveLine*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveLine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveLine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveLine*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveLine_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveLine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveLineProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveLineProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveLineProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveLineProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveLineProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveLineProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveLineProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveLineProjected*)
   {
      ::ROOT::Experimental::REveLineProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveLineProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveLineProjected", "ROOT/REveLine.hxx", 81,
                  typeid(::ROOT::Experimental::REveLineProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveLineProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveLineProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveLineProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveLineProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveLineProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveLineProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveLineProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveLineProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveLineProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveLineProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveLineProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveLineProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveLineProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveLineProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveManager_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveManager_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveManager(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveManager(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveManager(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveManager(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveManager*)
   {
      ::ROOT::Experimental::REveManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveManager", "ROOT/REveManager.hxx", 43,
                  typeid(::ROOT::Experimental::REveManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveManager_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveManager) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveManager);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveManager);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveManager);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveManager*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveManager*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveManager::RRedrawDisabler*)
   {
      ::ROOT::Experimental::REveManager::RRedrawDisabler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveManager::RRedrawDisabler));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveManager::RRedrawDisabler", "ROOT/REveManager.hxx", 49,
                  typeid(::ROOT::Experimental::REveManager::RRedrawDisabler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveManager::RRedrawDisabler) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveManager::RRedrawDisabler*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveManager::RRedrawDisabler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveManager::RRedrawDisabler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveManager::RRedrawDisabler*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveManager::RExceptionHandler*)
   {
      ::ROOT::Experimental::REveManager::RExceptionHandler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveManager::RExceptionHandler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveManager::RExceptionHandler", ::ROOT::Experimental::REveManager::RExceptionHandler::Class_Version(), "ROOT/REveManager.hxx", 69,
                  typeid(::ROOT::Experimental::REveManager::RExceptionHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveManager::RExceptionHandler::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveManager::RExceptionHandler) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveManager::RExceptionHandler*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveManager::RExceptionHandler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveManager::RExceptionHandler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePathMarkT<float>*)
   {
      ::ROOT::Experimental::REvePathMarkT<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePathMarkT<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePathMarkT<float>", "ROOT/REvePathMark.hxx", 25,
                  typeid(::ROOT::Experimental::REvePathMarkT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePathMarkT<float>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::REvePathMarkT<float>","ROOT::Experimental::REvePathMarkT<Float_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePathMarkT<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REvePathMarkT<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePathMarkT<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePathMarkT<float>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePathMarkT<double>*)
   {
      ::ROOT::Experimental::REvePathMarkT<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePathMarkT<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePathMarkT<double>", "ROOT/REvePathMark.hxx", 25,
                  typeid(::ROOT::Experimental::REvePathMarkT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePathMarkT<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::REvePathMarkT<double>","ROOT::Experimental::REvePathMarkT<Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePathMarkT<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REvePathMarkT<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePathMarkT<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePathMarkT<double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePolygonSetProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePolygonSetProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePolygonSetProjected*)
   {
      ::ROOT::Experimental::REvePolygonSetProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePolygonSetProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePolygonSetProjected", "ROOT/REvePolygonSetProjected.hxx", 30,
                  typeid(::ROOT::Experimental::REvePolygonSetProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePolygonSetProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePolygonSetProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePolygonSetProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePolygonSetProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePolygonSetProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePolygonSetProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REvePolygonSetProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePolygonSetProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePolygonSetProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePolygonSetProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREvePolygonSetProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePolygonSetProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveScene_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveScene_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveScene(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveScene(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveScene(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveScene(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveScene(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveScene*)
   {
      ::ROOT::Experimental::REveScene *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveScene));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveScene", "ROOT/REveScene.hxx", 33,
                  typeid(::ROOT::Experimental::REveScene), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveScene_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveScene) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveScene);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveScene);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveScene);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveScene);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveScene);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveScene*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveScene*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveScene*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveScene_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveScene*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveScene_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveScene_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveSceneList_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveSceneList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveSceneList(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveSceneList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveSceneList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSceneList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveSceneList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveSceneList*)
   {
      ::ROOT::Experimental::REveSceneList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveSceneList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveSceneList", "ROOT/REveScene.hxx", 129,
                  typeid(::ROOT::Experimental::REveSceneList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveSceneList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveSceneList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveSceneList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveSceneList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveSceneList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveSceneList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveSceneList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveSceneList*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveSceneList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSceneList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveSceneList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSceneList*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveSceneList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveSceneList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveSceneInfo_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveSceneInfo_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveSceneInfo*)
   {
      ::ROOT::Experimental::REveSceneInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveSceneInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveSceneInfo", "ROOT/REveSceneInfo.hxx", 28,
                  typeid(::ROOT::Experimental::REveSceneInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveSceneInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveSceneInfo) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveSceneInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveSceneInfo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveSceneInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveSceneInfo*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveSceneInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSceneInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveSceneInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSceneInfo*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveSceneInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveSceneInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveSelection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveSelection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveSelection(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveSelection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveSelection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSelection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveSelection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveSelection*)
   {
      ::ROOT::Experimental::REveSelection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveSelection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveSelection", "ROOT/REveSelection.hxx", 27,
                  typeid(::ROOT::Experimental::REveSelection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveSelection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveSelection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveSelection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveSelection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveSelection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveSelection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveSelection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveSelection*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveSelection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveSelection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelection*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveSelection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveSelection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTableViewInfo_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTableViewInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTableViewInfo(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTableViewInfo*)
   {
      ::ROOT::Experimental::REveTableViewInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTableViewInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTableViewInfo", "ROOT/REveTableInfo.hxx", 87,
                  typeid(::ROOT::Experimental::REveTableViewInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTableViewInfo_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Experimental::REveTableViewInfo) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTableViewInfo);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTableViewInfo);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTableViewInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTableViewInfo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTableViewInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTableViewInfo*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveTableViewInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTableViewInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTableViewInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTableViewInfo*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveTableViewInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTableViewInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveMCTrack(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveMCTrack(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveMCTrack(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMCTrack(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveMCTrack*)
   {
      ::ROOT::Experimental::REveMCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveMCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveMCTrack", ::ROOT::Experimental::REveMCTrack::Class_Version(), "ROOT/REveVSDStructs.hxx", 44,
                  typeid(::ROOT::Experimental::REveMCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveMCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveMCTrack) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveMCTrack);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveMCTrack);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveMCTrack);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveMCTrack);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveMCTrack*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveMCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveHit_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveHit_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveHit(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveHit(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveHit(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveHit(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveHit*)
   {
      ::ROOT::Experimental::REveHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveHit));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveHit", "ROOT/REveVSDStructs.hxx", 82,
                  typeid(::ROOT::Experimental::REveHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveHit_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveHit) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveHit);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveHit);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveHit);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveHit);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveHit*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveHit*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveHit_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCluster_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCluster_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCluster(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCluster(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCluster(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCluster(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCluster*)
   {
      ::ROOT::Experimental::REveCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCluster));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCluster", "ROOT/REveVSDStructs.hxx", 106,
                  typeid(::ROOT::Experimental::REveCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCluster_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCluster) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCluster);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCluster);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCluster);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCluster);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCluster*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveCluster*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveCluster_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRecTrackT<float>*)
   {
      ::ROOT::Experimental::REveRecTrackT<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRecTrackT<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRecTrackT<float>", "ROOT/REveVSDStructs.hxx", 129,
                  typeid(::ROOT::Experimental::REveRecTrackT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRecTrackT<float>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::REveRecTrackT<float>","ROOT::Experimental::REveRecTrackT<Float_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRecTrackT<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRecTrackT<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRecTrackT<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRecTrackT<float>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRecTrackT<double>*)
   {
      ::ROOT::Experimental::REveRecTrackT<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRecTrackT<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRecTrackT<double>", "ROOT/REveVSDStructs.hxx", 129,
                  typeid(::ROOT::Experimental::REveRecTrackT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRecTrackT<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Experimental::REveRecTrackT<double>","ROOT::Experimental::REveRecTrackT<Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRecTrackT<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRecTrackT<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRecTrackT<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRecTrackT<double>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRecKink_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRecKink_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRecKink(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecKink(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRecKink(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecKink(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRecKink(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRecKink*)
   {
      ::ROOT::Experimental::REveRecKink *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRecKink));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRecKink", "ROOT/REveVSDStructs.hxx", 161,
                  typeid(::ROOT::Experimental::REveRecKink), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRecKink_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRecKink) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRecKink);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRecKink);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRecKink);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRecKink);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRecKink);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRecKink*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRecKink*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRecKink*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRecKink_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRecKink*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveRecKink_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRecKink_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRecV0_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRecV0_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRecV0(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecV0(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRecV0(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecV0(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRecV0(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRecV0*)
   {
      ::ROOT::Experimental::REveRecV0 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRecV0));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRecV0", "ROOT/REveVSDStructs.hxx", 192,
                  typeid(::ROOT::Experimental::REveRecV0), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRecV0_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRecV0) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRecV0);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRecV0);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRecV0);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRecV0);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRecV0);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRecV0*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRecV0*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRecV0*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRecV0_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRecV0*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveRecV0_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRecV0_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRecCascade_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRecCascade_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRecCascade(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecCascade(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRecCascade(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecCascade(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRecCascade(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRecCascade*)
   {
      ::ROOT::Experimental::REveRecCascade *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRecCascade));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRecCascade", "ROOT/REveVSDStructs.hxx", 218,
                  typeid(::ROOT::Experimental::REveRecCascade), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRecCascade_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRecCascade) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRecCascade);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRecCascade);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRecCascade);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRecCascade);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRecCascade);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRecCascade*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveRecCascade*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRecCascade*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRecCascade_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRecCascade*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveRecCascade_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRecCascade_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveMCRecCrossRef_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveMCRecCrossRef_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveMCRecCrossRef*)
   {
      ::ROOT::Experimental::REveMCRecCrossRef *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveMCRecCrossRef));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveMCRecCrossRef", "ROOT/REveVSDStructs.hxx", 243,
                  typeid(::ROOT::Experimental::REveMCRecCrossRef), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveMCRecCrossRef_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveMCRecCrossRef) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveMCRecCrossRef);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveMCRecCrossRef);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveMCRecCrossRef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveMCRecCrossRef*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveMCRecCrossRef*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCRecCrossRef*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveMCRecCrossRef_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCRecCrossRef*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveMCRecCrossRef_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveMCRecCrossRef_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTrack_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTrack_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTrack(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrack(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrack(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrack(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrack*)
   {
      ::ROOT::Experimental::REveTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTrack));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrack", "ROOT/REveTrack.hxx", 39,
                  typeid(::ROOT::Experimental::REveTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTrack_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveTrack) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrack);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrack);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrack);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrack);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrack*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrack*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveTrack_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTrackList_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTrackList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTrackList(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrackList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrackList*)
   {
      ::ROOT::Experimental::REveTrackList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTrackList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrackList", "ROOT/REveTrack.hxx", 142,
                  typeid(::ROOT::Experimental::REveTrackList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTrackList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveTrackList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrackList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrackList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrackList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrackList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrackList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrackList*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveTrackList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrackList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTrackList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrackList*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveTrackList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTrackList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTrackProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTrackProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrackProjected*)
   {
      ::ROOT::Experimental::REveTrackProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTrackProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrackProjected", "ROOT/REveTrackProjected.hxx", 26,
                  typeid(::ROOT::Experimental::REveTrackProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTrackProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveTrackProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrackProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrackProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrackProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrackProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrackProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrackProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveTrackProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrackProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTrackProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrackProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveTrackProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTrackProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTrackListProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTrackListProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackListProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrackListProjected*)
   {
      ::ROOT::Experimental::REveTrackListProjected *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTrackListProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrackListProjected", "ROOT/REveTrackProjected.hxx", 65,
                  typeid(::ROOT::Experimental::REveTrackListProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTrackListProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveTrackListProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrackListProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrackListProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrackListProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrackListProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrackListProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrackListProjected*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveTrackListProjected*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrackListProjected*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTrackListProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrackListProjected*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveTrackListProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTrackListProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveMagField_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveMagField_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveMagField(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagField(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveMagField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveMagField*)
   {
      ::ROOT::Experimental::REveMagField *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveMagField));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveMagField", "ROOT/REveTrackPropagator.hxx", 33,
                  typeid(::ROOT::Experimental::REveMagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveMagField_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveMagField) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveMagField);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveMagField);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveMagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveMagField*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveMagField*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMagField*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveMagField_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMagField*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveMagField_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveMagField_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveMagFieldConst_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveMagFieldConst_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveMagFieldConst*)
   {
      ::ROOT::Experimental::REveMagFieldConst *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveMagFieldConst));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveMagFieldConst", "ROOT/REveTrackPropagator.hxx", 61,
                  typeid(::ROOT::Experimental::REveMagFieldConst), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveMagFieldConst_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveMagFieldConst) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveMagFieldConst);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldConst);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveMagFieldConst);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveMagFieldConst*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveMagFieldConst*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMagFieldConst*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveMagFieldConst_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMagFieldConst*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveMagFieldConst_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveMagFieldConst_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveMagFieldDuo_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveMagFieldDuo_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveMagFieldDuo*)
   {
      ::ROOT::Experimental::REveMagFieldDuo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveMagFieldDuo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveMagFieldDuo", "ROOT/REveTrackPropagator.hxx", 79,
                  typeid(::ROOT::Experimental::REveMagFieldDuo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveMagFieldDuo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveMagFieldDuo) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveMagFieldDuo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldDuo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveMagFieldDuo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveMagFieldDuo*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveMagFieldDuo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMagFieldDuo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveMagFieldDuo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMagFieldDuo*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveMagFieldDuo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveMagFieldDuo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTrackPropagator_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTrackPropagator_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackPropagator(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrackPropagator*)
   {
      ::ROOT::Experimental::REveTrackPropagator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTrackPropagator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrackPropagator", "ROOT/REveTrackPropagator.hxx", 111,
                  typeid(::ROOT::Experimental::REveTrackPropagator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTrackPropagator_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveTrackPropagator) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrackPropagator);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrackPropagator);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrackPropagator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrackPropagator);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrackPropagator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrackPropagator*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveTrackPropagator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrackPropagator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTrackPropagator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrackPropagator*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveTrackPropagator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTrackPropagator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveSelectorToEventList*)
   {
      ::ROOT::Experimental::REveSelectorToEventList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveSelectorToEventList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveSelectorToEventList", ::ROOT::Experimental::REveSelectorToEventList::Class_Version(), "ROOT/REveTreeTools.hxx", 26,
                  typeid(::ROOT::Experimental::REveSelectorToEventList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveSelectorToEventList::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveSelectorToEventList) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveSelectorToEventList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveSelectorToEventList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveSelectorToEventList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveSelectorToEventList*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveSelectorToEventList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelectorToEventList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePointSelectorConsumer*)
   {
      ::ROOT::Experimental::REvePointSelectorConsumer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePointSelectorConsumer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePointSelectorConsumer", "ROOT/REveTreeTools.hxx", 52,
                  typeid(::ROOT::Experimental::REvePointSelectorConsumer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePointSelectorConsumer) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePointSelectorConsumer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REvePointSelectorConsumer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelectorConsumer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelectorConsumer*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREvePointSelector(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSelector(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePointSelector(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSelector(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePointSelector*)
   {
      ::ROOT::Experimental::REvePointSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REvePointSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePointSelector", ::ROOT::Experimental::REvePointSelector::Class_Version(), "ROOT/REveTreeTools.hxx", 76,
                  typeid(::ROOT::Experimental::REvePointSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REvePointSelector::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePointSelector) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePointSelector);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePointSelector);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePointSelector);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePointSelector);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePointSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePointSelector*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REvePointSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveViewer_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveViewer_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveViewer(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewer(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveViewer(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewer(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveViewer*)
   {
      ::ROOT::Experimental::REveViewer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveViewer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveViewer", "ROOT/REveViewer.hxx", 27,
                  typeid(::ROOT::Experimental::REveViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveViewer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveViewer) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveViewer);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveViewer);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveViewer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveViewer);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveViewer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveViewer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveViewer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveViewer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveViewer*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveViewer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveViewer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveViewerList_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveViewerList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveViewerList(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewerList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveViewerList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewerList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveViewerList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveViewerList*)
   {
      ::ROOT::Experimental::REveViewerList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveViewerList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveViewerList", "ROOT/REveViewer.hxx", 52,
                  typeid(::ROOT::Experimental::REveViewerList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveViewerList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveViewerList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveViewerList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveViewerList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveViewerList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveViewerList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveViewerList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveViewerList*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveViewerList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveViewerList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveViewerList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveViewerList*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveViewerList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveViewerList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveViewContext_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveViewContext_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveViewContext(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewContext(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveViewContext(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewContext(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveViewContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveViewContext*)
   {
      ::ROOT::Experimental::REveViewContext *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveViewContext));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveViewContext", "ROOT/REveViewContext.hxx", 21,
                  typeid(::ROOT::Experimental::REveViewContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveViewContext_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveViewContext) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveViewContext);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveViewContext);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveViewContext);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveViewContext);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveViewContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveViewContext*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveViewContext*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveViewContext*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveViewContext_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveViewContext*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLREveViewContext_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveViewContext_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveVSD(void *p = 0);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVSD(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVSD(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVSD(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVSD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVSD*)
   {
      ::ROOT::Experimental::REveVSD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveVSD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVSD", ::ROOT::Experimental::REveVSD::Class_Version(), "ROOT/REveVSD.hxx", 25,
                  typeid(::ROOT::Experimental::REveVSD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveVSD::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVSD) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVSD);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVSD);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVSD);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVSD);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVSD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVSD*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::REveVSD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVSD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveRGBAPalette::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *REveRGBAPalette::Class_Name()
{
   return "ROOT::Experimental::REveRGBAPalette";
}

//______________________________________________________________________________
const char *REveRGBAPalette::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRGBAPalette*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int REveRGBAPalette::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRGBAPalette*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveRGBAPalette::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRGBAPalette*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveRGBAPalette::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveRGBAPalette*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveGeoPolyShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *REveGeoPolyShape::Class_Name()
{
   return "ROOT::Experimental::REveGeoPolyShape";
}

//______________________________________________________________________________
const char *REveGeoPolyShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoPolyShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int REveGeoPolyShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoPolyShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveGeoPolyShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoPolyShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveGeoPolyShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoPolyShape*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveGeoShapeExtract::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *REveGeoShapeExtract::Class_Name()
{
   return "ROOT::Experimental::REveGeoShapeExtract";
}

//______________________________________________________________________________
const char *REveGeoShapeExtract::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeExtract*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int REveGeoShapeExtract::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeExtract*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveGeoShapeExtract::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeExtract*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveGeoShapeExtract::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeExtract*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveTrans::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *REveTrans::Class_Name()
{
   return "ROOT::Experimental::REveTrans";
}

//______________________________________________________________________________
const char *REveTrans::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrans*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int REveTrans::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrans*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveTrans::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrans*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveTrans::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrans*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveManager::RExceptionHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *REveManager::RExceptionHandler::Class_Name()
{
   return "ROOT::Experimental::REveManager::RExceptionHandler";
}

//______________________________________________________________________________
const char *REveManager::RExceptionHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveManager::RExceptionHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int REveManager::RExceptionHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveManager::RExceptionHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveManager::RExceptionHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveManager::RExceptionHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveManager::RExceptionHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveManager::RExceptionHandler*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveMCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *REveMCTrack::Class_Name()
{
   return "ROOT::Experimental::REveMCTrack";
}

//______________________________________________________________________________
const char *REveMCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int REveMCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveMCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveMCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveSelectorToEventList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *REveSelectorToEventList::Class_Name()
{
   return "ROOT::Experimental::REveSelectorToEventList";
}

//______________________________________________________________________________
const char *REveSelectorToEventList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelectorToEventList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int REveSelectorToEventList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelectorToEventList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveSelectorToEventList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelectorToEventList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveSelectorToEventList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelectorToEventList*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REvePointSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *REvePointSelector::Class_Name()
{
   return "ROOT::Experimental::REvePointSelector";
}

//______________________________________________________________________________
const char *REvePointSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int REvePointSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REvePointSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REvePointSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelector*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveVSD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *REveVSD::Class_Name()
{
   return "ROOT::Experimental::REveVSD";
}

//______________________________________________________________________________
const char *REveVSD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVSD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int REveVSD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVSD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveVSD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVSD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveVSD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVSD*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveException(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveException : new ::ROOT::Experimental::REveException;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveException(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveException[nElements] : new ::ROOT::Experimental::REveException[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveException(void *p) {
      delete ((::ROOT::Experimental::REveException*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveException(void *p) {
      delete [] ((::ROOT::Experimental::REveException*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveException(void *p) {
      typedef ::ROOT::Experimental::REveException current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveException

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveUtil(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveUtil : new ::ROOT::Experimental::REveUtil;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveUtil(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveUtil[nElements] : new ::ROOT::Experimental::REveUtil[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveUtil(void *p) {
      delete ((::ROOT::Experimental::REveUtil*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveUtil(void *p) {
      delete [] ((::ROOT::Experimental::REveUtil*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveUtil(void *p) {
      typedef ::ROOT::Experimental::REveUtil current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveUtil

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeoManagerHolder : new ::ROOT::Experimental::REveGeoManagerHolder;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeoManagerHolder[nElements] : new ::ROOT::Experimental::REveGeoManagerHolder[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p) {
      delete ((::ROOT::Experimental::REveGeoManagerHolder*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p) {
      delete [] ((::ROOT::Experimental::REveGeoManagerHolder*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p) {
      typedef ::ROOT::Experimental::REveGeoManagerHolder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoManagerHolder

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRefCnt(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRefCnt : new ::ROOT::Experimental::REveRefCnt;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRefCnt(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRefCnt[nElements] : new ::ROOT::Experimental::REveRefCnt[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRefCnt(void *p) {
      delete ((::ROOT::Experimental::REveRefCnt*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRefCnt(void *p) {
      delete [] ((::ROOT::Experimental::REveRefCnt*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRefCnt(void *p) {
      typedef ::ROOT::Experimental::REveRefCnt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRefCnt

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRefBackPtr : new ::ROOT::Experimental::REveRefBackPtr;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRefBackPtr(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRefBackPtr[nElements] : new ::ROOT::Experimental::REveRefBackPtr[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p) {
      delete ((::ROOT::Experimental::REveRefBackPtr*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p) {
      delete [] ((::ROOT::Experimental::REveRefBackPtr*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p) {
      typedef ::ROOT::Experimental::REveRefBackPtr current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRefBackPtr

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveChunkManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveChunkManager : new ::ROOT::Experimental::REveChunkManager;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveChunkManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveChunkManager[nElements] : new ::ROOT::Experimental::REveChunkManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveChunkManager(void *p) {
      delete ((::ROOT::Experimental::REveChunkManager*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveChunkManager(void *p) {
      delete [] ((::ROOT::Experimental::REveChunkManager*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveChunkManager(void *p) {
      typedef ::ROOT::Experimental::REveChunkManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveChunkManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p) {
      delete ((::ROOT::Experimental::REveChunkManager::iterator*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p) {
      delete [] ((::ROOT::Experimental::REveChunkManager::iterator*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p) {
      typedef ::ROOT::Experimental::REveChunkManager::iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveChunkManager::iterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVectorT<float> : new ::ROOT::Experimental::REveVectorT<float>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVectorT<float>[nElements] : new ::ROOT::Experimental::REveVectorT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p) {
      delete ((::ROOT::Experimental::REveVectorT<float>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p) {
      delete [] ((::ROOT::Experimental::REveVectorT<float>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::REveVectorT<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVectorT<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVectorT<double> : new ::ROOT::Experimental::REveVectorT<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVectorT<double>[nElements] : new ::ROOT::Experimental::REveVectorT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p) {
      delete ((::ROOT::Experimental::REveVectorT<double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::REveVectorT<double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::REveVectorT<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVectorT<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVector4T<float> : new ::ROOT::Experimental::REveVector4T<float>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVector4T<float>[nElements] : new ::ROOT::Experimental::REveVector4T<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p) {
      delete ((::ROOT::Experimental::REveVector4T<float>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p) {
      delete [] ((::ROOT::Experimental::REveVector4T<float>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::REveVector4T<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVector4T<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVector4T<double> : new ::ROOT::Experimental::REveVector4T<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVector4T<double>[nElements] : new ::ROOT::Experimental::REveVector4T<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p) {
      delete ((::ROOT::Experimental::REveVector4T<double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::REveVector4T<double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::REveVector4T<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVector4T<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVector2T<float> : new ::ROOT::Experimental::REveVector2T<float>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVector2T<float>[nElements] : new ::ROOT::Experimental::REveVector2T<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p) {
      delete ((::ROOT::Experimental::REveVector2T<float>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p) {
      delete [] ((::ROOT::Experimental::REveVector2T<float>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::REveVector2T<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVector2T<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVector2T<double> : new ::ROOT::Experimental::REveVector2T<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveVector2T<double>[nElements] : new ::ROOT::Experimental::REveVector2T<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p) {
      delete ((::ROOT::Experimental::REveVector2T<double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::REveVector2T<double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::REveVector2T<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVector2T<double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveProjectable(void *p) {
      delete ((::ROOT::Experimental::REveProjectable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectable(void *p) {
      delete [] ((::ROOT::Experimental::REveProjectable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectable(void *p) {
      typedef ::ROOT::Experimental::REveProjectable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveProjectable

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveProjected(void *p) {
      delete ((::ROOT::Experimental::REveProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjected(void *p) {
      delete [] ((::ROOT::Experimental::REveProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveProjected(void *p) {
      typedef ::ROOT::Experimental::REveProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveElement(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveElement : new ::ROOT::Experimental::REveElement;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveElement(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveElement[nElements] : new ::ROOT::Experimental::REveElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveElement(void *p) {
      delete ((::ROOT::Experimental::REveElement*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveElement(void *p) {
      delete [] ((::ROOT::Experimental::REveElement*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveElement(void *p) {
      typedef ::ROOT::Experimental::REveElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveElement

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveAunt(void *p) {
      delete ((::ROOT::Experimental::REveAunt*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveAunt(void *p) {
      delete [] ((::ROOT::Experimental::REveAunt*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveAunt(void *p) {
      typedef ::ROOT::Experimental::REveAunt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveAunt

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveAuntAsList : new ::ROOT::Experimental::REveAuntAsList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveAuntAsList(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveAuntAsList[nElements] : new ::ROOT::Experimental::REveAuntAsList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p) {
      delete ((::ROOT::Experimental::REveAuntAsList*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p) {
      delete [] ((::ROOT::Experimental::REveAuntAsList*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p) {
      typedef ::ROOT::Experimental::REveAuntAsList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveAuntAsList

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCompound(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCompound : new ::ROOT::Experimental::REveCompound;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCompound(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCompound[nElements] : new ::ROOT::Experimental::REveCompound[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCompound(void *p) {
      delete ((::ROOT::Experimental::REveCompound*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCompound(void *p) {
      delete [] ((::ROOT::Experimental::REveCompound*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCompound(void *p) {
      typedef ::ROOT::Experimental::REveCompound current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCompound

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCompoundProjected : new ::ROOT::Experimental::REveCompoundProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCompoundProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCompoundProjected[nElements] : new ::ROOT::Experimental::REveCompoundProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p) {
      delete ((::ROOT::Experimental::REveCompoundProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p) {
      delete [] ((::ROOT::Experimental::REveCompoundProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p) {
      typedef ::ROOT::Experimental::REveCompoundProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCompoundProjected

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveShape(void *p) {
      delete ((::ROOT::Experimental::REveShape*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveShape(void *p) {
      delete [] ((::ROOT::Experimental::REveShape*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveShape(void *p) {
      typedef ::ROOT::Experimental::REveShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveShape

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveBox(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveBox : new ::ROOT::Experimental::REveBox;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveBox(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveBox[nElements] : new ::ROOT::Experimental::REveBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveBox(void *p) {
      delete ((::ROOT::Experimental::REveBox*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBox(void *p) {
      delete [] ((::ROOT::Experimental::REveBox*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveBox(void *p) {
      typedef ::ROOT::Experimental::REveBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveBoxProjected : new ::ROOT::Experimental::REveBoxProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveBoxProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveBoxProjected[nElements] : new ::ROOT::Experimental::REveBoxProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p) {
      delete ((::ROOT::Experimental::REveBoxProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p) {
      delete [] ((::ROOT::Experimental::REveBoxProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p) {
      typedef ::ROOT::Experimental::REveBoxProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveBoxProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveFrameBox(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveFrameBox : new ::ROOT::Experimental::REveFrameBox;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveFrameBox(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveFrameBox[nElements] : new ::ROOT::Experimental::REveFrameBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveFrameBox(void *p) {
      delete ((::ROOT::Experimental::REveFrameBox*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveFrameBox(void *p) {
      delete [] ((::ROOT::Experimental::REveFrameBox*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveFrameBox(void *p) {
      typedef ::ROOT::Experimental::REveFrameBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveFrameBox

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveRGBAPalette::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveRGBAPalette.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveRGBAPalette::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveRGBAPalette::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveRGBAPalette : new ::ROOT::Experimental::REveRGBAPalette;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRGBAPalette(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveRGBAPalette[nElements] : new ::ROOT::Experimental::REveRGBAPalette[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p) {
      delete ((::ROOT::Experimental::REveRGBAPalette*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p) {
      delete [] ((::ROOT::Experimental::REveRGBAPalette*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p) {
      typedef ::ROOT::Experimental::REveRGBAPalette current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRGBAPalette

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveSecondarySelectable : new ::ROOT::Experimental::REveSecondarySelectable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveSecondarySelectable[nElements] : new ::ROOT::Experimental::REveSecondarySelectable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p) {
      delete ((::ROOT::Experimental::REveSecondarySelectable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p) {
      delete [] ((::ROOT::Experimental::REveSecondarySelectable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p) {
      typedef ::ROOT::Experimental::REveSecondarySelectable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveSecondarySelectable

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDigitSet(void *p) {
      delete ((::ROOT::Experimental::REveDigitSet*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDigitSet(void *p) {
      delete [] ((::ROOT::Experimental::REveDigitSet*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDigitSet(void *p) {
      typedef ::ROOT::Experimental::REveDigitSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDigitSet

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveBoxSet(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveBoxSet : new ::ROOT::Experimental::REveBoxSet;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveBoxSet(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveBoxSet[nElements] : new ::ROOT::Experimental::REveBoxSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveBoxSet(void *p) {
      delete ((::ROOT::Experimental::REveBoxSet*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBoxSet(void *p) {
      delete [] ((::ROOT::Experimental::REveBoxSet*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveBoxSet(void *p) {
      typedef ::ROOT::Experimental::REveBoxSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveBoxSet

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloData(void *p) {
      delete ((::ROOT::Experimental::REveCaloData*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloData(void *p) {
      delete [] ((::ROOT::Experimental::REveCaloData*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloData(void *p) {
      typedef ::ROOT::Experimental::REveCaloData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCaloData::SliceInfo_t : new ::ROOT::Experimental::REveCaloData::SliceInfo_t;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCaloData::SliceInfo_t[nElements] : new ::ROOT::Experimental::REveCaloData::SliceInfo_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p) {
      delete ((::ROOT::Experimental::REveCaloData::SliceInfo_t*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p) {
      delete [] ((::ROOT::Experimental::REveCaloData::SliceInfo_t*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p) {
      typedef ::ROOT::Experimental::REveCaloData::SliceInfo_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloData::SliceInfo_t

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p) {
      delete ((::ROOT::Experimental::REveCaloDataVec*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p) {
      delete [] ((::ROOT::Experimental::REveCaloDataVec*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p) {
      typedef ::ROOT::Experimental::REveCaloDataVec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloDataVec

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCaloDataHist : new ::ROOT::Experimental::REveCaloDataHist;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCaloDataHist(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCaloDataHist[nElements] : new ::ROOT::Experimental::REveCaloDataHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p) {
      delete ((::ROOT::Experimental::REveCaloDataHist*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p) {
      delete [] ((::ROOT::Experimental::REveCaloDataHist*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p) {
      typedef ::ROOT::Experimental::REveCaloDataHist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloDataHist

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveProjection(void *p) {
      delete ((::ROOT::Experimental::REveProjection*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjection(void *p) {
      delete [] ((::ROOT::Experimental::REveProjection*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveProjection(void *p) {
      typedef ::ROOT::Experimental::REveProjection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveProjection::PreScaleEntry_t : new ::ROOT::Experimental::REveProjection::PreScaleEntry_t;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveProjection::PreScaleEntry_t[nElements] : new ::ROOT::Experimental::REveProjection::PreScaleEntry_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p) {
      delete ((::ROOT::Experimental::REveProjection::PreScaleEntry_t*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p) {
      delete [] ((::ROOT::Experimental::REveProjection::PreScaleEntry_t*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p) {
      typedef ::ROOT::Experimental::REveProjection::PreScaleEntry_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveProjection::PreScaleEntry_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRhoZProjection : new ::ROOT::Experimental::REveRhoZProjection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRhoZProjection(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRhoZProjection[nElements] : new ::ROOT::Experimental::REveRhoZProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p) {
      delete ((::ROOT::Experimental::REveRhoZProjection*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p) {
      delete [] ((::ROOT::Experimental::REveRhoZProjection*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p) {
      typedef ::ROOT::Experimental::REveRhoZProjection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRhoZProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRPhiProjection : new ::ROOT::Experimental::REveRPhiProjection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRPhiProjection(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRPhiProjection[nElements] : new ::ROOT::Experimental::REveRPhiProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p) {
      delete ((::ROOT::Experimental::REveRPhiProjection*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p) {
      delete [] ((::ROOT::Experimental::REveRPhiProjection*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p) {
      typedef ::ROOT::Experimental::REveRPhiProjection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRPhiProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREve3DProjection(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REve3DProjection : new ::ROOT::Experimental::REve3DProjection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREve3DProjection(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REve3DProjection[nElements] : new ::ROOT::Experimental::REve3DProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREve3DProjection(void *p) {
      delete ((::ROOT::Experimental::REve3DProjection*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREve3DProjection(void *p) {
      delete [] ((::ROOT::Experimental::REve3DProjection*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREve3DProjection(void *p) {
      typedef ::ROOT::Experimental::REve3DProjection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REve3DProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveProjectionManager : new ::ROOT::Experimental::REveProjectionManager;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveProjectionManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveProjectionManager[nElements] : new ::ROOT::Experimental::REveProjectionManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p) {
      delete ((::ROOT::Experimental::REveProjectionManager*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p) {
      delete [] ((::ROOT::Experimental::REveProjectionManager*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p) {
      typedef ::ROOT::Experimental::REveProjectionManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveProjectionManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloViz(void *p) {
      delete ((::ROOT::Experimental::REveCaloViz*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloViz(void *p) {
      delete [] ((::ROOT::Experimental::REveCaloViz*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloViz(void *p) {
      typedef ::ROOT::Experimental::REveCaloViz current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloViz

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCalo3D(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCalo3D : new ::ROOT::Experimental::REveCalo3D;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCalo3D(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCalo3D[nElements] : new ::ROOT::Experimental::REveCalo3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCalo3D(void *p) {
      delete ((::ROOT::Experimental::REveCalo3D*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCalo3D(void *p) {
      delete [] ((::ROOT::Experimental::REveCalo3D*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCalo3D(void *p) {
      typedef ::ROOT::Experimental::REveCalo3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCalo3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCalo2D(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCalo2D : new ::ROOT::Experimental::REveCalo2D;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCalo2D(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCalo2D[nElements] : new ::ROOT::Experimental::REveCalo2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCalo2D(void *p) {
      delete ((::ROOT::Experimental::REveCalo2D*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCalo2D(void *p) {
      delete [] ((::ROOT::Experimental::REveCalo2D*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCalo2D(void *p) {
      typedef ::ROOT::Experimental::REveCalo2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCalo2D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloLego(void *p) {
      delete ((::ROOT::Experimental::REveCaloLego*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloLego(void *p) {
      delete [] ((::ROOT::Experimental::REveCaloLego*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloLego(void *p) {
      typedef ::ROOT::Experimental::REveCaloLego current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloLego

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveDataTable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveDataTable : new ::ROOT::Experimental::REveDataTable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataTable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveDataTable[nElements] : new ::ROOT::Experimental::REveDataTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataTable(void *p) {
      delete ((::ROOT::Experimental::REveDataTable*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataTable(void *p) {
      delete [] ((::ROOT::Experimental::REveDataTable*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataTable(void *p) {
      typedef ::ROOT::Experimental::REveDataTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataTable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveDataColumn(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveDataColumn : new ::ROOT::Experimental::REveDataColumn;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataColumn(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveDataColumn[nElements] : new ::ROOT::Experimental::REveDataColumn[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataColumn(void *p) {
      delete ((::ROOT::Experimental::REveDataColumn*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataColumn(void *p) {
      delete [] ((::ROOT::Experimental::REveDataColumn*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataColumn(void *p) {
      typedef ::ROOT::Experimental::REveDataColumn current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataColumn

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataItem(void *p) {
      delete ((::ROOT::Experimental::REveDataItem*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataItem(void *p) {
      delete [] ((::ROOT::Experimental::REveDataItem*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataItem(void *p) {
      typedef ::ROOT::Experimental::REveDataItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveDataItemList(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveDataItemList : new ::ROOT::Experimental::REveDataItemList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataItemList(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveDataItemList[nElements] : new ::ROOT::Experimental::REveDataItemList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataItemList(void *p) {
      delete ((::ROOT::Experimental::REveDataItemList*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataItemList(void *p) {
      delete [] ((::ROOT::Experimental::REveDataItemList*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataItemList(void *p) {
      typedef ::ROOT::Experimental::REveDataItemList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataItemList

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveDataCollection(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveDataCollection : new ::ROOT::Experimental::REveDataCollection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataCollection(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveDataCollection[nElements] : new ::ROOT::Experimental::REveDataCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataCollection(void *p) {
      delete ((::ROOT::Experimental::REveDataCollection*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataCollection(void *p) {
      delete [] ((::ROOT::Experimental::REveDataCollection*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataCollection(void *p) {
      typedef ::ROOT::Experimental::REveDataCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataCollection

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p) {
      delete ((::ROOT::Experimental::REveDataProxyBuilderBase*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p) {
      delete [] ((::ROOT::Experimental::REveDataProxyBuilderBase*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p) {
      typedef ::ROOT::Experimental::REveDataProxyBuilderBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataProxyBuilderBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p) {
      delete ((::ROOT::Experimental::REveDataSimpleProxyBuilder*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p) {
      delete [] ((::ROOT::Experimental::REveDataSimpleProxyBuilder*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p) {
      typedef ::ROOT::Experimental::REveDataSimpleProxyBuilder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataSimpleProxyBuilder

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveGeoPolyShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveGeoPolyShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveGeoPolyShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveGeoPolyShape::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveGeoPolyShape : new ::ROOT::Experimental::REveGeoPolyShape;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveGeoPolyShape[nElements] : new ::ROOT::Experimental::REveGeoPolyShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p) {
      delete ((::ROOT::Experimental::REveGeoPolyShape*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p) {
      delete [] ((::ROOT::Experimental::REveGeoPolyShape*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p) {
      typedef ::ROOT::Experimental::REveGeoPolyShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoPolyShape

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveGeoShapeExtract::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveGeoShapeExtract.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveGeoShapeExtract::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveGeoShapeExtract::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveGeoShapeExtract : new ::ROOT::Experimental::REveGeoShapeExtract;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveGeoShapeExtract[nElements] : new ::ROOT::Experimental::REveGeoShapeExtract[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p) {
      delete ((::ROOT::Experimental::REveGeoShapeExtract*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p) {
      delete [] ((::ROOT::Experimental::REveGeoShapeExtract*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p) {
      typedef ::ROOT::Experimental::REveGeoShapeExtract current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoShapeExtract

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShape(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeoShape : new ::ROOT::Experimental::REveGeoShape;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShape(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeoShape[nElements] : new ::ROOT::Experimental::REveGeoShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShape(void *p) {
      delete ((::ROOT::Experimental::REveGeoShape*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShape(void *p) {
      delete [] ((::ROOT::Experimental::REveGeoShape*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShape(void *p) {
      typedef ::ROOT::Experimental::REveGeoShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoShape

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeoShapeProjected : new ::ROOT::Experimental::REveGeoShapeProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeoShapeProjected[nElements] : new ::ROOT::Experimental::REveGeoShapeProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p) {
      delete ((::ROOT::Experimental::REveGeoShapeProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p) {
      delete [] ((::ROOT::Experimental::REveGeoShapeProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p) {
      typedef ::ROOT::Experimental::REveGeoShapeProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoShapeProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRenderData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRenderData : new ::ROOT::Experimental::REveRenderData;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRenderData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRenderData[nElements] : new ::ROOT::Experimental::REveRenderData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRenderData(void *p) {
      delete ((::ROOT::Experimental::REveRenderData*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRenderData(void *p) {
      delete [] ((::ROOT::Experimental::REveRenderData*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRenderData(void *p) {
      typedef ::ROOT::Experimental::REveRenderData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRenderData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeomNodeBase(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomNodeBase : new ::ROOT::Experimental::REveGeomNodeBase;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomNodeBase(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomNodeBase[nElements] : new ::ROOT::Experimental::REveGeomNodeBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeomNodeBase(void *p) {
      delete ((::ROOT::Experimental::REveGeomNodeBase*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomNodeBase(void *p) {
      delete [] ((::ROOT::Experimental::REveGeomNodeBase*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomNodeBase(void *p) {
      typedef ::ROOT::Experimental::REveGeomNodeBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeomNodeBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeomNode(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomNode : new ::ROOT::Experimental::REveGeomNode;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomNode(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomNode[nElements] : new ::ROOT::Experimental::REveGeomNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeomNode(void *p) {
      delete ((::ROOT::Experimental::REveGeomNode*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomNode(void *p) {
      delete [] ((::ROOT::Experimental::REveGeomNode*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomNode(void *p) {
      typedef ::ROOT::Experimental::REveGeomNode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeomNode

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRGeomRenderInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RGeomRenderInfo : new ::ROOT::Experimental::RGeomRenderInfo;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRGeomRenderInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RGeomRenderInfo[nElements] : new ::ROOT::Experimental::RGeomRenderInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRGeomRenderInfo(void *p) {
      delete ((::ROOT::Experimental::RGeomRenderInfo*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRGeomRenderInfo(void *p) {
      delete [] ((::ROOT::Experimental::RGeomRenderInfo*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRGeomRenderInfo(void *p) {
      typedef ::ROOT::Experimental::RGeomRenderInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RGeomRenderInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RGeomRawRenderInfo : new ::ROOT::Experimental::RGeomRawRenderInfo;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RGeomRawRenderInfo[nElements] : new ::ROOT::Experimental::RGeomRawRenderInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo(void *p) {
      delete ((::ROOT::Experimental::RGeomRawRenderInfo*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo(void *p) {
      delete [] ((::ROOT::Experimental::RGeomRawRenderInfo*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRGeomRawRenderInfo(void *p) {
      typedef ::ROOT::Experimental::RGeomRawRenderInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RGeomRawRenderInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RGeomShapeRenderInfo : new ::ROOT::Experimental::RGeomShapeRenderInfo;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::RGeomShapeRenderInfo[nElements] : new ::ROOT::Experimental::RGeomShapeRenderInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo(void *p) {
      delete ((::ROOT::Experimental::RGeomShapeRenderInfo*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo(void *p) {
      delete [] ((::ROOT::Experimental::RGeomShapeRenderInfo*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLRGeomShapeRenderInfo(void *p) {
      typedef ::ROOT::Experimental::RGeomShapeRenderInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RGeomShapeRenderInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeomVisible(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomVisible : new ::ROOT::Experimental::REveGeomVisible;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomVisible(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomVisible[nElements] : new ::ROOT::Experimental::REveGeomVisible[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeomVisible(void *p) {
      delete ((::ROOT::Experimental::REveGeomVisible*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomVisible(void *p) {
      delete [] ((::ROOT::Experimental::REveGeomVisible*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomVisible(void *p) {
      typedef ::ROOT::Experimental::REveGeomVisible current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeomVisible

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeomConfig(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomConfig : new ::ROOT::Experimental::REveGeomConfig;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomConfig(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomConfig[nElements] : new ::ROOT::Experimental::REveGeomConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeomConfig(void *p) {
      delete ((::ROOT::Experimental::REveGeomConfig*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomConfig(void *p) {
      delete [] ((::ROOT::Experimental::REveGeomConfig*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomConfig(void *p) {
      typedef ::ROOT::Experimental::REveGeomConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeomConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeomDrawing(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomDrawing : new ::ROOT::Experimental::REveGeomDrawing;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomDrawing(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomDrawing[nElements] : new ::ROOT::Experimental::REveGeomDrawing[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeomDrawing(void *p) {
      delete ((::ROOT::Experimental::REveGeomDrawing*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomDrawing(void *p) {
      delete [] ((::ROOT::Experimental::REveGeomDrawing*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomDrawing(void *p) {
      typedef ::ROOT::Experimental::REveGeomDrawing current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeomDrawing

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeomRequest(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomRequest : new ::ROOT::Experimental::REveGeomRequest;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomRequest(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomRequest[nElements] : new ::ROOT::Experimental::REveGeomRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeomRequest(void *p) {
      delete ((::ROOT::Experimental::REveGeomRequest*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomRequest(void *p) {
      delete [] ((::ROOT::Experimental::REveGeomRequest*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomRequest(void *p) {
      typedef ::ROOT::Experimental::REveGeomRequest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeomRequest

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeomNodeInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomNodeInfo : new ::ROOT::Experimental::REveGeomNodeInfo;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomNodeInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomNodeInfo[nElements] : new ::ROOT::Experimental::REveGeomNodeInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeomNodeInfo(void *p) {
      delete ((::ROOT::Experimental::REveGeomNodeInfo*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomNodeInfo(void *p) {
      delete [] ((::ROOT::Experimental::REveGeomNodeInfo*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomNodeInfo(void *p) {
      typedef ::ROOT::Experimental::REveGeomNodeInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeomNodeInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeomDescription(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomDescription : new ::ROOT::Experimental::REveGeomDescription;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeomDescription(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveGeomDescription[nElements] : new ::ROOT::Experimental::REveGeomDescription[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeomDescription(void *p) {
      delete ((::ROOT::Experimental::REveGeomDescription*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeomDescription(void *p) {
      delete [] ((::ROOT::Experimental::REveGeomDescription*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeomDescription(void *p) {
      typedef ::ROOT::Experimental::REveGeomDescription current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeomDescription

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveJetCone(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveJetCone : new ::ROOT::Experimental::REveJetCone;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveJetCone(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveJetCone[nElements] : new ::ROOT::Experimental::REveJetCone[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveJetCone(void *p) {
      delete ((::ROOT::Experimental::REveJetCone*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveJetCone(void *p) {
      delete [] ((::ROOT::Experimental::REveJetCone*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveJetCone(void *p) {
      typedef ::ROOT::Experimental::REveJetCone current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveJetCone

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveJetConeProjected : new ::ROOT::Experimental::REveJetConeProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveJetConeProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveJetConeProjected[nElements] : new ::ROOT::Experimental::REveJetConeProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p) {
      delete ((::ROOT::Experimental::REveJetConeProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p) {
      delete [] ((::ROOT::Experimental::REveJetConeProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p) {
      typedef ::ROOT::Experimental::REveJetConeProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveJetConeProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrans(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveTrans : new ::ROOT::Experimental::REveTrans;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrans(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveTrans[nElements] : new ::ROOT::Experimental::REveTrans[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrans(void *p) {
      delete ((::ROOT::Experimental::REveTrans*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrans(void *p) {
      delete [] ((::ROOT::Experimental::REveTrans*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrans(void *p) {
      typedef ::ROOT::Experimental::REveTrans current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLREveTrans(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::REveTrans*)obj)->::ROOT::Experimental::REveTrans::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrans

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveStraightLineSet : new ::ROOT::Experimental::REveStraightLineSet;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveStraightLineSet(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveStraightLineSet[nElements] : new ::ROOT::Experimental::REveStraightLineSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p) {
      delete ((::ROOT::Experimental::REveStraightLineSet*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p) {
      delete [] ((::ROOT::Experimental::REveStraightLineSet*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p) {
      typedef ::ROOT::Experimental::REveStraightLineSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveStraightLineSet

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveStraightLineSetProjected : new ::ROOT::Experimental::REveStraightLineSetProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveStraightLineSetProjected[nElements] : new ::ROOT::Experimental::REveStraightLineSetProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p) {
      delete ((::ROOT::Experimental::REveStraightLineSetProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p) {
      delete [] ((::ROOT::Experimental::REveStraightLineSetProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p) {
      typedef ::ROOT::Experimental::REveStraightLineSetProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveStraightLineSetProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveEllipsoid : new ::ROOT::Experimental::REveEllipsoid;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveEllipsoid(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveEllipsoid[nElements] : new ::ROOT::Experimental::REveEllipsoid[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p) {
      delete ((::ROOT::Experimental::REveEllipsoid*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p) {
      delete [] ((::ROOT::Experimental::REveEllipsoid*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p) {
      typedef ::ROOT::Experimental::REveEllipsoid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveEllipsoid

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveEllipsoidProjected : new ::ROOT::Experimental::REveEllipsoidProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveEllipsoidProjected[nElements] : new ::ROOT::Experimental::REveEllipsoidProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p) {
      delete ((::ROOT::Experimental::REveEllipsoidProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p) {
      delete [] ((::ROOT::Experimental::REveEllipsoidProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p) {
      typedef ::ROOT::Experimental::REveEllipsoidProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveEllipsoidProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePointSet(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REvePointSet : new ::ROOT::Experimental::REvePointSet;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSet(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REvePointSet[nElements] : new ::ROOT::Experimental::REvePointSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePointSet(void *p) {
      delete ((::ROOT::Experimental::REvePointSet*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSet(void *p) {
      delete [] ((::ROOT::Experimental::REvePointSet*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSet(void *p) {
      typedef ::ROOT::Experimental::REvePointSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePointSet

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p) {
      delete ((::ROOT::Experimental::REvePointSetArray*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p) {
      delete [] ((::ROOT::Experimental::REvePointSetArray*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p) {
      typedef ::ROOT::Experimental::REvePointSetArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePointSetArray

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REvePointSetProjected : new ::ROOT::Experimental::REvePointSetProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSetProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REvePointSetProjected[nElements] : new ::ROOT::Experimental::REvePointSetProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p) {
      delete ((::ROOT::Experimental::REvePointSetProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p) {
      delete [] ((::ROOT::Experimental::REvePointSetProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p) {
      typedef ::ROOT::Experimental::REvePointSetProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePointSetProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveLine(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveLine : new ::ROOT::Experimental::REveLine;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveLine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveLine[nElements] : new ::ROOT::Experimental::REveLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveLine(void *p) {
      delete ((::ROOT::Experimental::REveLine*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveLine(void *p) {
      delete [] ((::ROOT::Experimental::REveLine*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveLine(void *p) {
      typedef ::ROOT::Experimental::REveLine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveLine

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveLineProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveLineProjected : new ::ROOT::Experimental::REveLineProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveLineProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveLineProjected[nElements] : new ::ROOT::Experimental::REveLineProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveLineProjected(void *p) {
      delete ((::ROOT::Experimental::REveLineProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveLineProjected(void *p) {
      delete [] ((::ROOT::Experimental::REveLineProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveLineProjected(void *p) {
      typedef ::ROOT::Experimental::REveLineProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveLineProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveManager : new ::ROOT::Experimental::REveManager;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveManager[nElements] : new ::ROOT::Experimental::REveManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveManager(void *p) {
      delete ((::ROOT::Experimental::REveManager*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveManager(void *p) {
      delete [] ((::ROOT::Experimental::REveManager*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveManager(void *p) {
      typedef ::ROOT::Experimental::REveManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler(void *p) {
      delete ((::ROOT::Experimental::REveManager::RRedrawDisabler*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler(void *p) {
      delete [] ((::ROOT::Experimental::REveManager::RRedrawDisabler*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveManagercLcLRRedrawDisabler(void *p) {
      typedef ::ROOT::Experimental::REveManager::RRedrawDisabler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveManager::RRedrawDisabler

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveManager::RExceptionHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveManager::RExceptionHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveManager::RExceptionHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveManager::RExceptionHandler::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveManager::RExceptionHandler : new ::ROOT::Experimental::REveManager::RExceptionHandler;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveManager::RExceptionHandler[nElements] : new ::ROOT::Experimental::REveManager::RExceptionHandler[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler(void *p) {
      delete ((::ROOT::Experimental::REveManager::RExceptionHandler*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler(void *p) {
      delete [] ((::ROOT::Experimental::REveManager::RExceptionHandler*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveManagercLcLRExceptionHandler(void *p) {
      typedef ::ROOT::Experimental::REveManager::RExceptionHandler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveManager::RExceptionHandler

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REvePathMarkT<float> : new ::ROOT::Experimental::REvePathMarkT<float>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REvePathMarkT<float>[nElements] : new ::ROOT::Experimental::REvePathMarkT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p) {
      delete ((::ROOT::Experimental::REvePathMarkT<float>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p) {
      delete [] ((::ROOT::Experimental::REvePathMarkT<float>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::REvePathMarkT<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePathMarkT<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REvePathMarkT<double> : new ::ROOT::Experimental::REvePathMarkT<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REvePathMarkT<double>[nElements] : new ::ROOT::Experimental::REvePathMarkT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p) {
      delete ((::ROOT::Experimental::REvePathMarkT<double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::REvePathMarkT<double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::REvePathMarkT<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePathMarkT<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REvePolygonSetProjected : new ::ROOT::Experimental::REvePolygonSetProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REvePolygonSetProjected[nElements] : new ::ROOT::Experimental::REvePolygonSetProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p) {
      delete ((::ROOT::Experimental::REvePolygonSetProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p) {
      delete [] ((::ROOT::Experimental::REvePolygonSetProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p) {
      typedef ::ROOT::Experimental::REvePolygonSetProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePolygonSetProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveScene(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveScene : new ::ROOT::Experimental::REveScene;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveScene(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveScene[nElements] : new ::ROOT::Experimental::REveScene[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveScene(void *p) {
      delete ((::ROOT::Experimental::REveScene*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveScene(void *p) {
      delete [] ((::ROOT::Experimental::REveScene*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveScene(void *p) {
      typedef ::ROOT::Experimental::REveScene current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveScene

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveSceneList(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveSceneList : new ::ROOT::Experimental::REveSceneList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveSceneList(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveSceneList[nElements] : new ::ROOT::Experimental::REveSceneList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveSceneList(void *p) {
      delete ((::ROOT::Experimental::REveSceneList*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSceneList(void *p) {
      delete [] ((::ROOT::Experimental::REveSceneList*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveSceneList(void *p) {
      typedef ::ROOT::Experimental::REveSceneList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveSceneList

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p) {
      delete ((::ROOT::Experimental::REveSceneInfo*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p) {
      delete [] ((::ROOT::Experimental::REveSceneInfo*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p) {
      typedef ::ROOT::Experimental::REveSceneInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveSceneInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveSelection(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveSelection : new ::ROOT::Experimental::REveSelection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveSelection(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveSelection[nElements] : new ::ROOT::Experimental::REveSelection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveSelection(void *p) {
      delete ((::ROOT::Experimental::REveSelection*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSelection(void *p) {
      delete [] ((::ROOT::Experimental::REveSelection*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveSelection(void *p) {
      typedef ::ROOT::Experimental::REveSelection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveSelection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTableViewInfo : new ::ROOT::Experimental::REveTableViewInfo;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTableViewInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTableViewInfo[nElements] : new ::ROOT::Experimental::REveTableViewInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p) {
      delete ((::ROOT::Experimental::REveTableViewInfo*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p) {
      delete [] ((::ROOT::Experimental::REveTableViewInfo*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p) {
      typedef ::ROOT::Experimental::REveTableViewInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTableViewInfo

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveMCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveMCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveMCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveMCTrack::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveMCTrack(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveMCTrack : new ::ROOT::Experimental::REveMCTrack;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveMCTrack[nElements] : new ::ROOT::Experimental::REveMCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveMCTrack(void *p) {
      delete ((::ROOT::Experimental::REveMCTrack*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMCTrack(void *p) {
      delete [] ((::ROOT::Experimental::REveMCTrack*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveMCTrack(void *p) {
      typedef ::ROOT::Experimental::REveMCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveMCTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveHit(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveHit : new ::ROOT::Experimental::REveHit;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveHit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveHit[nElements] : new ::ROOT::Experimental::REveHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveHit(void *p) {
      delete ((::ROOT::Experimental::REveHit*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveHit(void *p) {
      delete [] ((::ROOT::Experimental::REveHit*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveHit(void *p) {
      typedef ::ROOT::Experimental::REveHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCluster(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCluster : new ::ROOT::Experimental::REveCluster;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCluster(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveCluster[nElements] : new ::ROOT::Experimental::REveCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCluster(void *p) {
      delete ((::ROOT::Experimental::REveCluster*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCluster(void *p) {
      delete [] ((::ROOT::Experimental::REveCluster*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCluster(void *p) {
      typedef ::ROOT::Experimental::REveCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRecTrackT<float> : new ::ROOT::Experimental::REveRecTrackT<float>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRecTrackT<float>[nElements] : new ::ROOT::Experimental::REveRecTrackT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p) {
      delete ((::ROOT::Experimental::REveRecTrackT<float>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p) {
      delete [] ((::ROOT::Experimental::REveRecTrackT<float>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::REveRecTrackT<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRecTrackT<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRecTrackT<double> : new ::ROOT::Experimental::REveRecTrackT<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRecTrackT<double>[nElements] : new ::ROOT::Experimental::REveRecTrackT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p) {
      delete ((::ROOT::Experimental::REveRecTrackT<double>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p) {
      delete [] ((::ROOT::Experimental::REveRecTrackT<double>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::REveRecTrackT<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRecTrackT<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRecKink(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRecKink : new ::ROOT::Experimental::REveRecKink;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecKink(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRecKink[nElements] : new ::ROOT::Experimental::REveRecKink[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRecKink(void *p) {
      delete ((::ROOT::Experimental::REveRecKink*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecKink(void *p) {
      delete [] ((::ROOT::Experimental::REveRecKink*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRecKink(void *p) {
      typedef ::ROOT::Experimental::REveRecKink current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRecKink

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRecV0(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRecV0 : new ::ROOT::Experimental::REveRecV0;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecV0(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRecV0[nElements] : new ::ROOT::Experimental::REveRecV0[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRecV0(void *p) {
      delete ((::ROOT::Experimental::REveRecV0*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecV0(void *p) {
      delete [] ((::ROOT::Experimental::REveRecV0*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRecV0(void *p) {
      typedef ::ROOT::Experimental::REveRecV0 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRecV0

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRecCascade(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRecCascade : new ::ROOT::Experimental::REveRecCascade;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecCascade(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveRecCascade[nElements] : new ::ROOT::Experimental::REveRecCascade[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRecCascade(void *p) {
      delete ((::ROOT::Experimental::REveRecCascade*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecCascade(void *p) {
      delete [] ((::ROOT::Experimental::REveRecCascade*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRecCascade(void *p) {
      typedef ::ROOT::Experimental::REveRecCascade current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRecCascade

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveMCRecCrossRef : new ::ROOT::Experimental::REveMCRecCrossRef;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveMCRecCrossRef[nElements] : new ::ROOT::Experimental::REveMCRecCrossRef[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p) {
      delete ((::ROOT::Experimental::REveMCRecCrossRef*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p) {
      delete [] ((::ROOT::Experimental::REveMCRecCrossRef*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p) {
      typedef ::ROOT::Experimental::REveMCRecCrossRef current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveMCRecCrossRef

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrack(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTrack : new ::ROOT::Experimental::REveTrack;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTrack[nElements] : new ::ROOT::Experimental::REveTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrack(void *p) {
      delete ((::ROOT::Experimental::REveTrack*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrack(void *p) {
      delete [] ((::ROOT::Experimental::REveTrack*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrack(void *p) {
      typedef ::ROOT::Experimental::REveTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrackList(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTrackList : new ::ROOT::Experimental::REveTrackList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackList(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTrackList[nElements] : new ::ROOT::Experimental::REveTrackList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrackList(void *p) {
      delete ((::ROOT::Experimental::REveTrackList*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackList(void *p) {
      delete [] ((::ROOT::Experimental::REveTrackList*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackList(void *p) {
      typedef ::ROOT::Experimental::REveTrackList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrackList

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTrackProjected : new ::ROOT::Experimental::REveTrackProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTrackProjected[nElements] : new ::ROOT::Experimental::REveTrackProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p) {
      delete ((::ROOT::Experimental::REveTrackProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p) {
      delete [] ((::ROOT::Experimental::REveTrackProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p) {
      typedef ::ROOT::Experimental::REveTrackProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrackProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTrackListProjected : new ::ROOT::Experimental::REveTrackListProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackListProjected(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTrackListProjected[nElements] : new ::ROOT::Experimental::REveTrackListProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p) {
      delete ((::ROOT::Experimental::REveTrackListProjected*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p) {
      delete [] ((::ROOT::Experimental::REveTrackListProjected*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p) {
      typedef ::ROOT::Experimental::REveTrackListProjected current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrackListProjected

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveMagField(void *p) {
      delete ((::ROOT::Experimental::REveMagField*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagField(void *p) {
      delete [] ((::ROOT::Experimental::REveMagField*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveMagField(void *p) {
      typedef ::ROOT::Experimental::REveMagField current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveMagField

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p) {
      delete ((::ROOT::Experimental::REveMagFieldConst*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p) {
      delete [] ((::ROOT::Experimental::REveMagFieldConst*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p) {
      typedef ::ROOT::Experimental::REveMagFieldConst current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveMagFieldConst

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p) {
      delete ((::ROOT::Experimental::REveMagFieldDuo*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p) {
      delete [] ((::ROOT::Experimental::REveMagFieldDuo*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p) {
      typedef ::ROOT::Experimental::REveMagFieldDuo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveMagFieldDuo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTrackPropagator : new ::ROOT::Experimental::REveTrackPropagator;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackPropagator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveTrackPropagator[nElements] : new ::ROOT::Experimental::REveTrackPropagator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p) {
      delete ((::ROOT::Experimental::REveTrackPropagator*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p) {
      delete [] ((::ROOT::Experimental::REveTrackPropagator*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p) {
      typedef ::ROOT::Experimental::REveTrackPropagator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrackPropagator

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveSelectorToEventList::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveSelectorToEventList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveSelectorToEventList::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveSelectorToEventList::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p) {
      delete ((::ROOT::Experimental::REveSelectorToEventList*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p) {
      delete [] ((::ROOT::Experimental::REveSelectorToEventList*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p) {
      typedef ::ROOT::Experimental::REveSelectorToEventList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveSelectorToEventList

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p) {
      delete ((::ROOT::Experimental::REvePointSelectorConsumer*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p) {
      delete [] ((::ROOT::Experimental::REvePointSelectorConsumer*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p) {
      typedef ::ROOT::Experimental::REvePointSelectorConsumer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePointSelectorConsumer

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REvePointSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REvePointSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REvePointSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REvePointSelector::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePointSelector(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REvePointSelector : new ::ROOT::Experimental::REvePointSelector;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSelector(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REvePointSelector[nElements] : new ::ROOT::Experimental::REvePointSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePointSelector(void *p) {
      delete ((::ROOT::Experimental::REvePointSelector*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSelector(void *p) {
      delete [] ((::ROOT::Experimental::REvePointSelector*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSelector(void *p) {
      typedef ::ROOT::Experimental::REvePointSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePointSelector

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveViewer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveViewer : new ::ROOT::Experimental::REveViewer;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveViewer[nElements] : new ::ROOT::Experimental::REveViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveViewer(void *p) {
      delete ((::ROOT::Experimental::REveViewer*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewer(void *p) {
      delete [] ((::ROOT::Experimental::REveViewer*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveViewer(void *p) {
      typedef ::ROOT::Experimental::REveViewer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveViewer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveViewerList(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveViewerList : new ::ROOT::Experimental::REveViewerList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewerList(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveViewerList[nElements] : new ::ROOT::Experimental::REveViewerList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveViewerList(void *p) {
      delete ((::ROOT::Experimental::REveViewerList*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewerList(void *p) {
      delete [] ((::ROOT::Experimental::REveViewerList*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveViewerList(void *p) {
      typedef ::ROOT::Experimental::REveViewerList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveViewerList

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveViewContext(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveViewContext : new ::ROOT::Experimental::REveViewContext;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewContext(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Experimental::REveViewContext[nElements] : new ::ROOT::Experimental::REveViewContext[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveViewContext(void *p) {
      delete ((::ROOT::Experimental::REveViewContext*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewContext(void *p) {
      delete [] ((::ROOT::Experimental::REveViewContext*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveViewContext(void *p) {
      typedef ::ROOT::Experimental::REveViewContext current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveViewContext

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveVSD::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveVSD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveVSD::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveVSD::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVSD(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveVSD : new ::ROOT::Experimental::REveVSD;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVSD(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveVSD[nElements] : new ::ROOT::Experimental::REveVSD[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVSD(void *p) {
      delete ((::ROOT::Experimental::REveVSD*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVSD(void *p) {
      delete [] ((::ROOT::Experimental::REveVSD*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVSD(void *p) {
      typedef ::ROOT::Experimental::REveVSD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVSD

namespace ROOT {
   static TClass *vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_Dictionary();
   static void vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p = 0);
   static void *newArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p);
   static void deleteArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p);
   static void destruct_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>*)
   {
      vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>", -2, "vector", 386,
                  typeid(vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>) );
      instance.SetNew(&new_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR);
      instance.SetDelete(&delete_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*> >()));

      ::ROOT::AddClassAlternate("vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>","std::vector<std::vector<ROOT::Experimental::REveCaloData::CellId_t, std::allocator<ROOT::Experimental::REveCaloData::CellId_t> >*, std::allocator<std::vector<ROOT::Experimental::REveCaloData::CellId_t, std::allocator<ROOT::Experimental::REveCaloData::CellId_t> >*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>*)0x0)->GetClass();
      vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*> : new vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>;
   }
   static void *newArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>[nElements] : new vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p) {
      delete ((vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>*)p);
   }
   static void deleteArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p) {
      delete [] ((vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>*)p);
   }
   static void destruct_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p) {
      typedef vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 386,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      ::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

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
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 386,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      ::ROOT::AddClassAlternate("vector<float>","std::vector<float, std::allocator<float> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

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
   static TClass *vectorlETArrayCmUgR_Dictionary();
   static void vectorlETArrayCmUgR_TClassManip(TClass*);
   static void *new_vectorlETArrayCmUgR(void *p = 0);
   static void *newArray_vectorlETArrayCmUgR(Long_t size, void *p);
   static void delete_vectorlETArrayCmUgR(void *p);
   static void deleteArray_vectorlETArrayCmUgR(void *p);
   static void destruct_vectorlETArrayCmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArrayC*>*)
   {
      vector<TArrayC*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArrayC*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArrayC*>", -2, "vector", 386,
                  typeid(vector<TArrayC*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArrayCmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArrayC*>) );
      instance.SetNew(&new_vectorlETArrayCmUgR);
      instance.SetNewArray(&newArray_vectorlETArrayCmUgR);
      instance.SetDelete(&delete_vectorlETArrayCmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArrayCmUgR);
      instance.SetDestructor(&destruct_vectorlETArrayCmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArrayC*> >()));

      ::ROOT::AddClassAlternate("vector<TArrayC*>","std::vector<TArrayC*, std::allocator<TArrayC*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArrayC*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArrayCmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArrayC*>*)0x0)->GetClass();
      vectorlETArrayCmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArrayCmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArrayCmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArrayC*> : new vector<TArrayC*>;
   }
   static void *newArray_vectorlETArrayCmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArrayC*>[nElements] : new vector<TArrayC*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArrayCmUgR(void *p) {
      delete ((vector<TArrayC*>*)p);
   }
   static void deleteArray_vectorlETArrayCmUgR(void *p) {
      delete [] ((vector<TArrayC*>*)p);
   }
   static void destruct_vectorlETArrayCmUgR(void *p) {
      typedef vector<TArrayC*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArrayC*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveVectorT<float> >*)
   {
      vector<ROOT::Experimental::REveVectorT<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveVectorT<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveVectorT<float> >", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveVectorT<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveVectorT<float> >) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveVectorT<float> > >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveVectorT<float> >","std::vector<ROOT::Experimental::REveVectorT<float>, std::allocator<ROOT::Experimental::REveVectorT<float> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveVectorT<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveVectorT<float> >*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveVectorT<float> > : new vector<ROOT::Experimental::REveVectorT<float> >;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveVectorT<float> >[nElements] : new vector<ROOT::Experimental::REveVectorT<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p) {
      delete ((vector<ROOT::Experimental::REveVectorT<float> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveVectorT<float> >*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p) {
      typedef vector<ROOT::Experimental::REveVectorT<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveVectorT<float> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveVector4T<double> >*)
   {
      vector<ROOT::Experimental::REveVector4T<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveVector4T<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveVector4T<double> >", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveVector4T<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveVector4T<double> >) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveVector4T<double> > >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveVector4T<double> >","std::vector<ROOT::Experimental::REveVector4T<double>, std::allocator<ROOT::Experimental::REveVector4T<double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveVector4T<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveVector4T<double> >*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveVector4T<double> > : new vector<ROOT::Experimental::REveVector4T<double> >;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveVector4T<double> >[nElements] : new vector<ROOT::Experimental::REveVector4T<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p) {
      delete ((vector<ROOT::Experimental::REveVector4T<double> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveVector4T<double> >*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p) {
      typedef vector<ROOT::Experimental::REveVector4T<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveVector4T<double> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveVector2T<float> >*)
   {
      vector<ROOT::Experimental::REveVector2T<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveVector2T<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveVector2T<float> >", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveVector2T<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveVector2T<float> >) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveVector2T<float> > >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveVector2T<float> >","std::vector<ROOT::Experimental::REveVector2T<float>, std::allocator<ROOT::Experimental::REveVector2T<float> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveVector2T<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveVector2T<float> >*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveVector2T<float> > : new vector<ROOT::Experimental::REveVector2T<float> >;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveVector2T<float> >[nElements] : new vector<ROOT::Experimental::REveVector2T<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p) {
      delete ((vector<ROOT::Experimental::REveVector2T<float> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveVector2T<float> >*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p) {
      typedef vector<ROOT::Experimental::REveVector2T<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveVector2T<float> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>*)
   {
      vector<ROOT::Experimental::REveProjection::PreScaleEntry_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveProjection::PreScaleEntry_t> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>","std::vector<ROOT::Experimental::REveProjection::PreScaleEntry_t, std::allocator<ROOT::Experimental::REveProjection::PreScaleEntry_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveProjection::PreScaleEntry_t> : new vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>[nElements] : new vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p) {
      delete ((vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p) {
      typedef vector<ROOT::Experimental::REveProjection::PreScaleEntry_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REvePathMarkT<double> >*)
   {
      vector<ROOT::Experimental::REvePathMarkT<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REvePathMarkT<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REvePathMarkT<double> >", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REvePathMarkT<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REvePathMarkT<double> >) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REvePathMarkT<double> > >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REvePathMarkT<double> >","std::vector<ROOT::Experimental::REvePathMarkT<double>, std::allocator<ROOT::Experimental::REvePathMarkT<double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REvePathMarkT<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REvePathMarkT<double> >*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REvePathMarkT<double> > : new vector<ROOT::Experimental::REvePathMarkT<double> >;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REvePathMarkT<double> >[nElements] : new vector<ROOT::Experimental::REvePathMarkT<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p) {
      delete ((vector<ROOT::Experimental::REvePathMarkT<double> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REvePathMarkT<double> >*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p) {
      typedef vector<ROOT::Experimental::REvePathMarkT<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REvePathMarkT<double> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveManager::Conn>*)
   {
      vector<ROOT::Experimental::REveManager::Conn> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveManager::Conn>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveManager::Conn>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveManager::Conn>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveManager::Conn>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveManager::Conn> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveManager::Conn>","std::vector<ROOT::Experimental::REveManager::Conn, std::allocator<ROOT::Experimental::REveManager::Conn> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveManager::Conn>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveManager::Conn>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveManager::Conn> : new vector<ROOT::Experimental::REveManager::Conn>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveManager::Conn>[nElements] : new vector<ROOT::Experimental::REveManager::Conn>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p) {
      delete ((vector<ROOT::Experimental::REveManager::Conn>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveManager::Conn>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p) {
      typedef vector<ROOT::Experimental::REveManager::Conn> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveManager::Conn>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveGeomVisible>*)
   {
      vector<ROOT::Experimental::REveGeomVisible> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveGeomVisible>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveGeomVisible>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveGeomVisible>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveGeomVisible>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveGeomVisible> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveGeomVisible>","std::vector<ROOT::Experimental::REveGeomVisible, std::allocator<ROOT::Experimental::REveGeomVisible> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveGeomVisible>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveGeomVisible>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveGeomVisible> : new vector<ROOT::Experimental::REveGeomVisible>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveGeomVisible>[nElements] : new vector<ROOT::Experimental::REveGeomVisible>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR(void *p) {
      delete ((vector<ROOT::Experimental::REveGeomVisible>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveGeomVisible>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveGeomVisiblegR(void *p) {
      typedef vector<ROOT::Experimental::REveGeomVisible> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveGeomVisible>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveGeomNode>*)
   {
      vector<ROOT::Experimental::REveGeomNode> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveGeomNode>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveGeomNode>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveGeomNode>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveGeomNode>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveGeomNode> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveGeomNode>","std::vector<ROOT::Experimental::REveGeomNode, std::allocator<ROOT::Experimental::REveGeomNode> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveGeomNode>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveGeomNode>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveGeomNode> : new vector<ROOT::Experimental::REveGeomNode>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveGeomNode>[nElements] : new vector<ROOT::Experimental::REveGeomNode>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR(void *p) {
      delete ((vector<ROOT::Experimental::REveGeomNode>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveGeomNode>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveGeomNodegR(void *p) {
      typedef vector<ROOT::Experimental::REveGeomNode> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveGeomNode>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveGeomNode*>*)
   {
      vector<ROOT::Experimental::REveGeomNode*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveGeomNode*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveGeomNode*>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveGeomNode*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveGeomNode*>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveGeomNode*> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveGeomNode*>","std::vector<ROOT::Experimental::REveGeomNode*, std::allocator<ROOT::Experimental::REveGeomNode*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveGeomNode*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveGeomNode*>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveGeomNode*> : new vector<ROOT::Experimental::REveGeomNode*>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveGeomNode*>[nElements] : new vector<ROOT::Experimental::REveGeomNode*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR(void *p) {
      delete ((vector<ROOT::Experimental::REveGeomNode*>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveGeomNode*>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveGeomNodemUgR(void *p) {
      typedef vector<ROOT::Experimental::REveGeomNode*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveGeomNode*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>*)
   {
      vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>","std::vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*, std::allocator<ROOT::Experimental::REveDataProxyBuilderBase::Product*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*> : new vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>[nElements] : new vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p) {
      delete ((vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p) {
      typedef vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveDataItemList::TTip>*)
   {
      vector<ROOT::Experimental::REveDataItemList::TTip> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveDataItemList::TTip>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveDataItemList::TTip>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveDataItemList::TTip>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveDataItemList::TTip>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveDataItemList::TTip> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveDataItemList::TTip>","std::vector<ROOT::Experimental::REveDataItemList::TTip, std::allocator<ROOT::Experimental::REveDataItemList::TTip> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveDataItemList::TTip>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveDataItemList::TTip>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveDataItemList::TTip> : new vector<ROOT::Experimental::REveDataItemList::TTip>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveDataItemList::TTip>[nElements] : new vector<ROOT::Experimental::REveDataItemList::TTip>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR(void *p) {
      delete ((vector<ROOT::Experimental::REveDataItemList::TTip>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveDataItemList::TTip>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipgR(void *p) {
      typedef vector<ROOT::Experimental::REveDataItemList::TTip> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveDataItemList::TTip>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveDataItem*>*)
   {
      vector<ROOT::Experimental::REveDataItem*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveDataItem*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveDataItem*>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveDataItem*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveDataItem*>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveDataItem*> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveDataItem*>","std::vector<ROOT::Experimental::REveDataItem*, std::allocator<ROOT::Experimental::REveDataItem*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveDataItem*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveDataItem*>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveDataItem*> : new vector<ROOT::Experimental::REveDataItem*>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveDataItem*>[nElements] : new vector<ROOT::Experimental::REveDataItem*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p) {
      delete ((vector<ROOT::Experimental::REveDataItem*>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveDataItem*>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p) {
      typedef vector<ROOT::Experimental::REveDataItem*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveDataItem*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveCaloData::SliceInfo_t>*)
   {
      vector<ROOT::Experimental::REveCaloData::SliceInfo_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveCaloData::SliceInfo_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveCaloData::SliceInfo_t>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveCaloData::SliceInfo_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveCaloData::SliceInfo_t>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveCaloData::SliceInfo_t> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveCaloData::SliceInfo_t>","std::vector<ROOT::Experimental::REveCaloData::SliceInfo_t, std::allocator<ROOT::Experimental::REveCaloData::SliceInfo_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveCaloData::SliceInfo_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveCaloData::SliceInfo_t>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveCaloData::SliceInfo_t> : new vector<ROOT::Experimental::REveCaloData::SliceInfo_t>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveCaloData::SliceInfo_t>[nElements] : new vector<ROOT::Experimental::REveCaloData::SliceInfo_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p) {
      delete ((vector<ROOT::Experimental::REveCaloData::SliceInfo_t>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveCaloData::SliceInfo_t>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p) {
      typedef vector<ROOT::Experimental::REveCaloData::SliceInfo_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveCaloData::SliceInfo_t>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveCaloData::CellId_t>*)
   {
      vector<ROOT::Experimental::REveCaloData::CellId_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveCaloData::CellId_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveCaloData::CellId_t>", -2, "vector", 386,
                  typeid(vector<ROOT::Experimental::REveCaloData::CellId_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveCaloData::CellId_t>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveCaloData::CellId_t> >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveCaloData::CellId_t>","std::vector<ROOT::Experimental::REveCaloData::CellId_t, std::allocator<ROOT::Experimental::REveCaloData::CellId_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveCaloData::CellId_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Experimental::REveCaloData::CellId_t>*)0x0)->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveCaloData::CellId_t> : new vector<ROOT::Experimental::REveCaloData::CellId_t>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Experimental::REveCaloData::CellId_t>[nElements] : new vector<ROOT::Experimental::REveCaloData::CellId_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p) {
      delete ((vector<ROOT::Experimental::REveCaloData::CellId_t>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p) {
      delete [] ((vector<ROOT::Experimental::REveCaloData::CellId_t>*)p);
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p) {
      typedef vector<ROOT::Experimental::REveCaloData::CellId_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveCaloData::CellId_t>

namespace ROOT {
   static TClass *unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary();
   static void unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass*);
   static void *new_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p = 0);
   static void *newArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(Long_t size, void *p);
   static void delete_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void deleteArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void destruct_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<unsigned int,ROOT::Experimental::REveElement*>*)
   {
      unordered_map<unsigned int,ROOT::Experimental::REveElement*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<unsigned int,ROOT::Experimental::REveElement*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<unsigned int,ROOT::Experimental::REveElement*>", -2, "unordered_map", 102,
                  typeid(unordered_map<unsigned int,ROOT::Experimental::REveElement*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<unsigned int,ROOT::Experimental::REveElement*>) );
      instance.SetNew(&new_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetNewArray(&newArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDelete(&delete_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDestructor(&destruct_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<unsigned int,ROOT::Experimental::REveElement*> >()));

      ::ROOT::AddClassAlternate("unordered_map<unsigned int,ROOT::Experimental::REveElement*>","std::unordered_map<unsigned int, ROOT::Experimental::REveElement*, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<unsigned int const, ROOT::Experimental::REveElement*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<unsigned int,ROOT::Experimental::REveElement*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<unsigned int,ROOT::Experimental::REveElement*>*)0x0)->GetClass();
      unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<unsigned int,ROOT::Experimental::REveElement*> : new unordered_map<unsigned int,ROOT::Experimental::REveElement*>;
   }
   static void *newArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<unsigned int,ROOT::Experimental::REveElement*>[nElements] : new unordered_map<unsigned int,ROOT::Experimental::REveElement*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete ((unordered_map<unsigned int,ROOT::Experimental::REveElement*>*)p);
   }
   static void deleteArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete [] ((unordered_map<unsigned int,ROOT::Experimental::REveElement*>*)p);
   }
   static void destruct_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      typedef unordered_map<unsigned int,ROOT::Experimental::REveElement*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<unsigned int,ROOT::Experimental::REveElement*>

namespace ROOT {
   static TClass *setlEintgR_Dictionary();
   static void setlEintgR_TClassManip(TClass*);
   static void *new_setlEintgR(void *p = 0);
   static void *newArray_setlEintgR(Long_t size, void *p);
   static void delete_setlEintgR(void *p);
   static void deleteArray_setlEintgR(void *p);
   static void destruct_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<int>*)
   {
      set<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<int>", -2, "set", 94,
                  typeid(set<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<int>) );
      instance.SetNew(&new_setlEintgR);
      instance.SetNewArray(&newArray_setlEintgR);
      instance.SetDelete(&delete_setlEintgR);
      instance.SetDeleteArray(&deleteArray_setlEintgR);
      instance.SetDestructor(&destruct_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<int> >()));

      ::ROOT::AddClassAlternate("set<int>","std::set<int, std::less<int>, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const set<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const set<int>*)0x0)->GetClass();
      setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<int> : new set<int>;
   }
   static void *newArray_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<int>[nElements] : new set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEintgR(void *p) {
      delete ((set<int>*)p);
   }
   static void deleteArray_setlEintgR(void *p) {
      delete [] ((set<int>*)p);
   }
   static void destruct_setlEintgR(void *p) {
      typedef set<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class set<int>

namespace ROOT {
   static TClass *setlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary();
   static void setlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass*);
   static void *new_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p = 0);
   static void *newArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR(Long_t size, void *p);
   static void delete_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void deleteArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void destruct_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<ROOT::Experimental::REveElement*>*)
   {
      set<ROOT::Experimental::REveElement*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<ROOT::Experimental::REveElement*>));
      static ::ROOT::TGenericClassInfo 
         instance("set<ROOT::Experimental::REveElement*>", -2, "set", 94,
                  typeid(set<ROOT::Experimental::REveElement*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary, isa_proxy, 4,
                  sizeof(set<ROOT::Experimental::REveElement*>) );
      instance.SetNew(&new_setlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetNewArray(&newArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDelete(&delete_setlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDeleteArray(&deleteArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDestructor(&destruct_setlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<ROOT::Experimental::REveElement*> >()));

      ::ROOT::AddClassAlternate("set<ROOT::Experimental::REveElement*>","std::set<ROOT::Experimental::REveElement*, std::less<ROOT::Experimental::REveElement*>, std::allocator<ROOT::Experimental::REveElement*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const set<ROOT::Experimental::REveElement*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const set<ROOT::Experimental::REveElement*>*)0x0)->GetClass();
      setlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<ROOT::Experimental::REveElement*> : new set<ROOT::Experimental::REveElement*>;
   }
   static void *newArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<ROOT::Experimental::REveElement*>[nElements] : new set<ROOT::Experimental::REveElement*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete ((set<ROOT::Experimental::REveElement*>*)p);
   }
   static void deleteArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete [] ((set<ROOT::Experimental::REveElement*>*)p);
   }
   static void destruct_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      typedef set<ROOT::Experimental::REveElement*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class set<ROOT::Experimental::REveElement*>

namespace ROOT {
   static TClass *maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_Dictionary();
   static void maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_TClassManip(TClass*);
   static void *new_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p = 0);
   static void *newArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(Long_t size, void *p);
   static void delete_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p);
   static void deleteArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p);
   static void destruct_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<ROOT::Experimental::REveElement*,int>*)
   {
      map<ROOT::Experimental::REveElement*,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<ROOT::Experimental::REveElement*,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<ROOT::Experimental::REveElement*,int>", -2, "map", 100,
                  typeid(map<ROOT::Experimental::REveElement*,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<ROOT::Experimental::REveElement*,int>) );
      instance.SetNew(&new_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR);
      instance.SetNewArray(&newArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR);
      instance.SetDelete(&delete_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR);
      instance.SetDestructor(&destruct_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<ROOT::Experimental::REveElement*,int> >()));

      ::ROOT::AddClassAlternate("map<ROOT::Experimental::REveElement*,int>","std::map<ROOT::Experimental::REveElement*, int, std::less<ROOT::Experimental::REveElement*>, std::allocator<std::pair<ROOT::Experimental::REveElement* const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<ROOT::Experimental::REveElement*,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<ROOT::Experimental::REveElement*,int>*)0x0)->GetClass();
      maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<ROOT::Experimental::REveElement*,int> : new map<ROOT::Experimental::REveElement*,int>;
   }
   static void *newArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<ROOT::Experimental::REveElement*,int>[nElements] : new map<ROOT::Experimental::REveElement*,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p) {
      delete ((map<ROOT::Experimental::REveElement*,int>*)p);
   }
   static void deleteArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p) {
      delete [] ((map<ROOT::Experimental::REveElement*,int>*)p);
   }
   static void destruct_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p) {
      typedef map<ROOT::Experimental::REveElement*,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<ROOT::Experimental::REveElement*,int>

namespace ROOT {
   static TClass *listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_Dictionary();
   static void listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_TClassManip(TClass*);
   static void *new_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p = 0);
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(Long_t size, void *p);
   static void delete_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p);
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p);
   static void destruct_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<ROOT::Experimental::REveProjected*>*)
   {
      list<ROOT::Experimental::REveProjected*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<ROOT::Experimental::REveProjected*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<ROOT::Experimental::REveProjected*>", -2, "list", 552,
                  typeid(list<ROOT::Experimental::REveProjected*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<ROOT::Experimental::REveProjected*>) );
      instance.SetNew(&new_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR);
      instance.SetNewArray(&newArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR);
      instance.SetDelete(&delete_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR);
      instance.SetDeleteArray(&deleteArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR);
      instance.SetDestructor(&destruct_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<ROOT::Experimental::REveProjected*> >()));

      ::ROOT::AddClassAlternate("list<ROOT::Experimental::REveProjected*>","std::__cxx11::list<ROOT::Experimental::REveProjected*, std::allocator<ROOT::Experimental::REveProjected*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<ROOT::Experimental::REveProjected*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<ROOT::Experimental::REveProjected*>*)0x0)->GetClass();
      listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Experimental::REveProjected*> : new list<ROOT::Experimental::REveProjected*>;
   }
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Experimental::REveProjected*>[nElements] : new list<ROOT::Experimental::REveProjected*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p) {
      delete ((list<ROOT::Experimental::REveProjected*>*)p);
   }
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p) {
      delete [] ((list<ROOT::Experimental::REveProjected*>*)p);
   }
   static void destruct_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p) {
      typedef list<ROOT::Experimental::REveProjected*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<ROOT::Experimental::REveProjected*>

namespace ROOT {
   static TClass *listlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary();
   static void listlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass*);
   static void *new_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p = 0);
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR(Long_t size, void *p);
   static void delete_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void destruct_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<ROOT::Experimental::REveElement*>*)
   {
      list<ROOT::Experimental::REveElement*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<ROOT::Experimental::REveElement*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<ROOT::Experimental::REveElement*>", -2, "list", 552,
                  typeid(list<ROOT::Experimental::REveElement*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary, isa_proxy, 4,
                  sizeof(list<ROOT::Experimental::REveElement*>) );
      instance.SetNew(&new_listlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetNewArray(&newArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDelete(&delete_listlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDeleteArray(&deleteArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDestructor(&destruct_listlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<ROOT::Experimental::REveElement*> >()));

      ::ROOT::AddClassAlternate("list<ROOT::Experimental::REveElement*>","std::__cxx11::list<ROOT::Experimental::REveElement*, std::allocator<ROOT::Experimental::REveElement*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<ROOT::Experimental::REveElement*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<ROOT::Experimental::REveElement*>*)0x0)->GetClass();
      listlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Experimental::REveElement*> : new list<ROOT::Experimental::REveElement*>;
   }
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Experimental::REveElement*>[nElements] : new list<ROOT::Experimental::REveElement*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete ((list<ROOT::Experimental::REveElement*>*)p);
   }
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete [] ((list<ROOT::Experimental::REveElement*>*)p);
   }
   static void destruct_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      typedef list<ROOT::Experimental::REveElement*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<ROOT::Experimental::REveElement*>

namespace ROOT {
   static TClass *listlEROOTcLcLExperimentalcLcLREveAuntmUgR_Dictionary();
   static void listlEROOTcLcLExperimentalcLcLREveAuntmUgR_TClassManip(TClass*);
   static void *new_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p = 0);
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(Long_t size, void *p);
   static void delete_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p);
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p);
   static void destruct_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<ROOT::Experimental::REveAunt*>*)
   {
      list<ROOT::Experimental::REveAunt*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<ROOT::Experimental::REveAunt*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<ROOT::Experimental::REveAunt*>", -2, "list", 552,
                  typeid(list<ROOT::Experimental::REveAunt*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEROOTcLcLExperimentalcLcLREveAuntmUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<ROOT::Experimental::REveAunt*>) );
      instance.SetNew(&new_listlEROOTcLcLExperimentalcLcLREveAuntmUgR);
      instance.SetNewArray(&newArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR);
      instance.SetDelete(&delete_listlEROOTcLcLExperimentalcLcLREveAuntmUgR);
      instance.SetDeleteArray(&deleteArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR);
      instance.SetDestructor(&destruct_listlEROOTcLcLExperimentalcLcLREveAuntmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<ROOT::Experimental::REveAunt*> >()));

      ::ROOT::AddClassAlternate("list<ROOT::Experimental::REveAunt*>","std::__cxx11::list<ROOT::Experimental::REveAunt*, std::allocator<ROOT::Experimental::REveAunt*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<ROOT::Experimental::REveAunt*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEROOTcLcLExperimentalcLcLREveAuntmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<ROOT::Experimental::REveAunt*>*)0x0)->GetClass();
      listlEROOTcLcLExperimentalcLcLREveAuntmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEROOTcLcLExperimentalcLcLREveAuntmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Experimental::REveAunt*> : new list<ROOT::Experimental::REveAunt*>;
   }
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Experimental::REveAunt*>[nElements] : new list<ROOT::Experimental::REveAunt*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p) {
      delete ((list<ROOT::Experimental::REveAunt*>*)p);
   }
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p) {
      delete [] ((list<ROOT::Experimental::REveAunt*>*)p);
   }
   static void destruct_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p) {
      typedef list<ROOT::Experimental::REveAunt*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<ROOT::Experimental::REveAunt*>

namespace {
  void TriggerDictionaryInitialization_libROOTEve_Impl() {
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
      TROOT::RegisterModule("libROOTEve",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTEve_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTEve_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTEve() {
  TriggerDictionaryInitialization_libROOTEve_Impl();
}
