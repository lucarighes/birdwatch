#ifndef org_apache_lucene_analysis_util_TokenizerFactory_H
#define org_apache_lucene_analysis_util_TokenizerFactory_H

#include "org/apache/lucene/analysis/util/AbstractAnalysisFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace util {
          class TokenizerFactory;
        }
        class Tokenizer;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class TokenizerFactory : public ::org::apache::lucene::analysis::util::AbstractAnalysisFactory {
           public:
            enum {
              mid_availableTokenizers_7dcf4034c6d1a92a,
              mid_create_ad7699b1db6da82a,
              mid_create_824583f10752bea9,
              mid_findSPIName_1d6fc28577e5ff15,
              mid_forName_a1b9620978f4a6ec,
              mid_lookupClass_337d52b895d55b49,
              mid_reloadTokenizers_98a876e82795b112,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenizerFactory(const TokenizerFactory& obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {}

            static ::java::util::Set availableTokenizers();
            ::org::apache::lucene::analysis::Tokenizer create() const;
            ::org::apache::lucene::analysis::Tokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
            static ::java::lang::String findSPIName(const ::java::lang::Class &);
            static TokenizerFactory forName(const ::java::lang::String &, const ::java::util::Map &);
            static ::java::lang::Class lookupClass(const ::java::lang::String &);
            static void reloadTokenizers(const ::java::lang::ClassLoader &);
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
          extern PyType_Def PY_TYPE_DEF(TokenizerFactory);
          extern PyTypeObject *PY_TYPE(TokenizerFactory);

          class t_TokenizerFactory {
          public:
            PyObject_HEAD
            TokenizerFactory object;
            static PyObject *wrap_Object(const TokenizerFactory&);
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
