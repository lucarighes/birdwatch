#ifndef org_apache_lucene_analysis_core_WhitespaceTokenizerFactory_H
#define org_apache_lucene_analysis_core_WhitespaceTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        class Tokenizer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {

          class WhitespaceTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_824583f10752bea9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WhitespaceTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WhitespaceTokenizerFactory(const WhitespaceTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;
            static ::java::lang::String *RULE_JAVA;
            static ::java::lang::String *RULE_UNICODE;

            WhitespaceTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::Tokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(WhitespaceTokenizerFactory);
          extern PyTypeObject *PY_TYPE(WhitespaceTokenizerFactory);

          class t_WhitespaceTokenizerFactory {
          public:
            PyObject_HEAD
            WhitespaceTokenizerFactory object;
            static PyObject *wrap_Object(const WhitespaceTokenizerFactory&);
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
