// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME DictOutput
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
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

// Header files passed as explicit arguments
#include "/usr/local/include/edm4eic/CalorimeterHitData.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace edm4eic {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *edm4eic_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("edm4eic", 0 /*version*/, "edm4eic/CalorimeterHitData.h", 9,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &edm4eic_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *edm4eic_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *edm4eiccLcLCalorimeterHitData_Dictionary();
   static void edm4eiccLcLCalorimeterHitData_TClassManip(TClass*);
   static void *new_edm4eiccLcLCalorimeterHitData(void *p = nullptr);
   static void *newArray_edm4eiccLcLCalorimeterHitData(Long_t size, void *p);
   static void delete_edm4eiccLcLCalorimeterHitData(void *p);
   static void deleteArray_edm4eiccLcLCalorimeterHitData(void *p);
   static void destruct_edm4eiccLcLCalorimeterHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm4eic::CalorimeterHitData*)
   {
      ::edm4eic::CalorimeterHitData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm4eic::CalorimeterHitData));
      static ::ROOT::TGenericClassInfo 
         instance("edm4eic::CalorimeterHitData", "edm4eic/CalorimeterHitData.h", 16,
                  typeid(::edm4eic::CalorimeterHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edm4eiccLcLCalorimeterHitData_Dictionary, isa_proxy, 4,
                  sizeof(::edm4eic::CalorimeterHitData) );
      instance.SetNew(&new_edm4eiccLcLCalorimeterHitData);
      instance.SetNewArray(&newArray_edm4eiccLcLCalorimeterHitData);
      instance.SetDelete(&delete_edm4eiccLcLCalorimeterHitData);
      instance.SetDeleteArray(&deleteArray_edm4eiccLcLCalorimeterHitData);
      instance.SetDestructor(&destruct_edm4eiccLcLCalorimeterHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm4eic::CalorimeterHitData*)
   {
      return GenerateInitInstanceLocal(static_cast<::edm4eic::CalorimeterHitData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::edm4eic::CalorimeterHitData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edm4eiccLcLCalorimeterHitData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::edm4eic::CalorimeterHitData*>(nullptr))->GetClass();
      edm4eiccLcLCalorimeterHitData_TClassManip(theClass);
   return theClass;
   }

   static void edm4eiccLcLCalorimeterHitData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_edm4eiccLcLCalorimeterHitData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm4eic::CalorimeterHitData : new ::edm4eic::CalorimeterHitData;
   }
   static void *newArray_edm4eiccLcLCalorimeterHitData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm4eic::CalorimeterHitData[nElements] : new ::edm4eic::CalorimeterHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_edm4eiccLcLCalorimeterHitData(void *p) {
      delete (static_cast<::edm4eic::CalorimeterHitData*>(p));
   }
   static void deleteArray_edm4eiccLcLCalorimeterHitData(void *p) {
      delete [] (static_cast<::edm4eic::CalorimeterHitData*>(p));
   }
   static void destruct_edm4eiccLcLCalorimeterHitData(void *p) {
      typedef ::edm4eic::CalorimeterHitData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::edm4eic::CalorimeterHitData

namespace ROOT {
   static TClass *vectorlEedm4eiccLcLCalorimeterHitDatagR_Dictionary();
   static void vectorlEedm4eiccLcLCalorimeterHitDatagR_TClassManip(TClass*);
   static void *new_vectorlEedm4eiccLcLCalorimeterHitDatagR(void *p = nullptr);
   static void *newArray_vectorlEedm4eiccLcLCalorimeterHitDatagR(Long_t size, void *p);
   static void delete_vectorlEedm4eiccLcLCalorimeterHitDatagR(void *p);
   static void deleteArray_vectorlEedm4eiccLcLCalorimeterHitDatagR(void *p);
   static void destruct_vectorlEedm4eiccLcLCalorimeterHitDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm4eic::CalorimeterHitData>*)
   {
      vector<edm4eic::CalorimeterHitData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm4eic::CalorimeterHitData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm4eic::CalorimeterHitData>", -2, "vector", 423,
                  typeid(vector<edm4eic::CalorimeterHitData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedm4eiccLcLCalorimeterHitDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm4eic::CalorimeterHitData>) );
      instance.SetNew(&new_vectorlEedm4eiccLcLCalorimeterHitDatagR);
      instance.SetNewArray(&newArray_vectorlEedm4eiccLcLCalorimeterHitDatagR);
      instance.SetDelete(&delete_vectorlEedm4eiccLcLCalorimeterHitDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEedm4eiccLcLCalorimeterHitDatagR);
      instance.SetDestructor(&destruct_vectorlEedm4eiccLcLCalorimeterHitDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm4eic::CalorimeterHitData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<edm4eic::CalorimeterHitData>","std::vector<edm4eic::CalorimeterHitData, std::allocator<edm4eic::CalorimeterHitData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<edm4eic::CalorimeterHitData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedm4eiccLcLCalorimeterHitDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<edm4eic::CalorimeterHitData>*>(nullptr))->GetClass();
      vectorlEedm4eiccLcLCalorimeterHitDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedm4eiccLcLCalorimeterHitDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedm4eiccLcLCalorimeterHitDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm4eic::CalorimeterHitData> : new vector<edm4eic::CalorimeterHitData>;
   }
   static void *newArray_vectorlEedm4eiccLcLCalorimeterHitDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm4eic::CalorimeterHitData>[nElements] : new vector<edm4eic::CalorimeterHitData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedm4eiccLcLCalorimeterHitDatagR(void *p) {
      delete (static_cast<vector<edm4eic::CalorimeterHitData>*>(p));
   }
   static void deleteArray_vectorlEedm4eiccLcLCalorimeterHitDatagR(void *p) {
      delete [] (static_cast<vector<edm4eic::CalorimeterHitData>*>(p));
   }
   static void destruct_vectorlEedm4eiccLcLCalorimeterHitDatagR(void *p) {
      typedef vector<edm4eic::CalorimeterHitData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<edm4eic::CalorimeterHitData>

namespace {
  void TriggerDictionaryInitialization_DictOutput_Impl() {
    static const char* headers[] = {
"/usr/local/include/edm4eic/CalorimeterHitData.h",
nullptr
    };
    static const char* includePaths[] = {
"/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/root-6.28.06-tfoeqk7sfxudfwx3clo5xi2aaqm6itku/include/root",
"/home/xihe/eic-project/simulation/output/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DictOutput dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace edm4eic{class __attribute__((annotate("$clingAutoload$/usr/local/include/edm4eic/CalorimeterHitData.h")))  CalorimeterHitData;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DictOutput dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/usr/local/include/edm4eic/CalorimeterHitData.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"edm4eic::CalorimeterHitData", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DictOutput",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DictOutput_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DictOutput_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DictOutput() {
  TriggerDictionaryInitialization_DictOutput_Impl();
}
