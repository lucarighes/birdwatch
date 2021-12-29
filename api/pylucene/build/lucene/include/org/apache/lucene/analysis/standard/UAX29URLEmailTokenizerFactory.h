#ifndef org_apache_lucene_analysis_standard_UAX29URLEmailTokenizerFactory_H
#define org_apache_lucene_analysis_standard_UAX29URLEmailTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace standard {
          class UAX29URLEmailTokenizer;
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
        namespace standard {

          class UAX29URLEmailTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_1ce961404f7f52b0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UAX29URLEmailTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UAX29URLEmailTokenizerFactory(const UAX29URLEmailTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            UAX29URLEmailTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::standard::UAX29URLEmailTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace standard {
          extern PyType_Def PY_TYPE_DEF(UAX29URLEmailTokenizerFactory);
          extern PyTypeObject *PY_TYPE(UAX29URLEmailTokenizerFactory);

          class t_UAX29URLEmailTokenizerFactory {
          public:
            PyObject_HEAD
            UAX29URLEmailTokenizerFactory object;
            static PyObject *wrap_Object(const UAX29URLEmailTokenizerFactory&);
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
