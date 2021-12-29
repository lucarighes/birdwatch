#ifndef org_apache_lucene_analysis_util_TokenFilterFactory_H
#define org_apache_lucene_analysis_util_TokenFilterFactory_H

#include "org/apache/lucene/analysis/util/AbstractAnalysisFactory.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class TokenFilterFactory;
        }
        class TokenStream;
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

          class TokenFilterFactory : public ::org::apache::lucene::analysis::util::AbstractAnalysisFactory {
           public:
            enum {
              mid_availableTokenFilters_7dcf4034c6d1a92a,
              mid_create_6de1e28d9d10cd9e,
              mid_findSPIName_1d6fc28577e5ff15,
              mid_forName_ba73db39a6da1f70,
              mid_lookupClass_337d52b895d55b49,
              mid_normalize_6de1e28d9d10cd9e,
              mid_reloadTokenFilters_98a876e82795b112,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenFilterFactory(const TokenFilterFactory& obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {}

            static ::java::util::Set availableTokenFilters();
            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            static ::java::lang::String findSPIName(const ::java::lang::Class &);
            static TokenFilterFactory forName(const ::java::lang::String &, const ::java::util::Map &);
            static ::java::lang::Class lookupClass(const ::java::lang::String &);
            ::org::apache::lucene::analysis::TokenStream normalize(const ::org::apache::lucene::analysis::TokenStream &) const;
            static void reloadTokenFilters(const ::java::lang::ClassLoader &);
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
          extern PyType_Def PY_TYPE_DEF(TokenFilterFactory);
          extern PyTypeObject *PY_TYPE(TokenFilterFactory);

          class t_TokenFilterFactory {
          public:
            PyObject_HEAD
            TokenFilterFactory object;
            static PyObject *wrap_Object(const TokenFilterFactory&);
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
