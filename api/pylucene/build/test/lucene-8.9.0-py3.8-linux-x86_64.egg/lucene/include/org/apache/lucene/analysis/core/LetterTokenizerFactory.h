#ifndef org_apache_lucene_analysis_core_LetterTokenizerFactory_H
#define org_apache_lucene_analysis_core_LetterTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace core {
          class LetterTokenizer;
        }
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

          class LetterTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_5123b15b58931df4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LetterTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LetterTokenizerFactory(const LetterTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            LetterTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::core::LetterTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
          extern PyType_Def PY_TYPE_DEF(LetterTokenizerFactory);
          extern PyTypeObject *PY_TYPE(LetterTokenizerFactory);

          class t_LetterTokenizerFactory {
          public:
            PyObject_HEAD
            LetterTokenizerFactory object;
            static PyObject *wrap_Object(const LetterTokenizerFactory&);
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
