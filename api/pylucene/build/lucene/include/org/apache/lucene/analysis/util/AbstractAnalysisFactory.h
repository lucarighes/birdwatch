#ifndef org_apache_lucene_analysis_util_AbstractAnalysisFactory_H
#define org_apache_lucene_analysis_util_AbstractAnalysisFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class AbstractAnalysisFactory : public ::java::lang::Object {
           public:
            enum {
              mid_get_d835200e8f3690ea,
              mid_get_45e20f04061b8932,
              mid_get_28d5d0ea7a096b22,
              mid_get_315878521a3cf3b6,
              mid_get_c34752479b6d5945,
              mid_getChar_32dcfd560ce20708,
              mid_getClassArg_db9b55ba01e03e4b,
              mid_getLuceneMatchVersion_6b68647131bbda98,
              mid_getOriginalArgs_1c3426541413a55d,
              mid_getSet_eb8dc935a5b9e7c1,
              mid_isExplicitLuceneMatchVersion_8454bd5aa23fd11e,
              mid_require_d835200e8f3690ea,
              mid_require_28d5d0ea7a096b22,
              mid_require_dceffcb70f000d89,
              mid_requireChar_f4e7b079b9069df1,
              mid_setExplicitLuceneMatchVersion_9d72768e8fdce2b7,
              mid_requireInt_0a6bbabb4635dec2,
              mid_requireBoolean_5f61e8c540e73442,
              mid_requireFloat_0d3696ee71a6063a,
              mid_getPattern_9a0f33070a740efb,
              mid_getWordSet_be9f150f05b1dfcb,
              mid_getLines_ac5123aff794b30b,
              mid_getSnowballWordSet_be9f150f05b1dfcb,
              mid_splitFileNames_25278b4b3ab80e37,
              mid_splitAt_7d679f377356b44f,
              mid_getBoolean_3363c3c05ce5cff0,
              mid_getInt_1f0426e4a6765a77,
              mid_getFloat_704af808bb0362b8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractAnalysisFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractAnalysisFactory(const AbstractAnalysisFactory& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *LUCENE_MATCH_VERSION_PARAM;

            ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &) const;
            ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::lang::String &) const;
            ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &) const;
            ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, const ::java::lang::String &) const;
            ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, const ::java::lang::String &, jboolean) const;
            jchar getChar(const ::java::util::Map &, const ::java::lang::String &, jchar) const;
            ::java::lang::String getClassArg() const;
            ::org::apache::lucene::util::Version getLuceneMatchVersion() const;
            ::java::util::Map getOriginalArgs() const;
            ::java::util::Set getSet(const ::java::util::Map &, const ::java::lang::String &) const;
            jboolean isExplicitLuceneMatchVersion() const;
            ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &) const;
            ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &) const;
            ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, jboolean) const;
            jchar requireChar(const ::java::util::Map &, const ::java::lang::String &) const;
            void setExplicitLuceneMatchVersion(jboolean) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(AbstractAnalysisFactory);
          extern PyTypeObject *PY_TYPE(AbstractAnalysisFactory);

          class t_AbstractAnalysisFactory {
          public:
            PyObject_HEAD
            AbstractAnalysisFactory object;
            static PyObject *wrap_Object(const AbstractAnalysisFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
