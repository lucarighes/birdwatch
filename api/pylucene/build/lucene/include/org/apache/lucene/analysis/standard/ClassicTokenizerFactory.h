#ifndef org_apache_lucene_analysis_standard_ClassicTokenizerFactory_H
#define org_apache_lucene_analysis_standard_ClassicTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace standard {
          class ClassicTokenizer;
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

          class ClassicTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_fa8cc467004411a0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClassicTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ClassicTokenizerFactory(const ClassicTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            ClassicTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::standard::ClassicTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
          extern PyType_Def PY_TYPE_DEF(ClassicTokenizerFactory);
          extern PyTypeObject *PY_TYPE(ClassicTokenizerFactory);

          class t_ClassicTokenizerFactory {
          public:
            PyObject_HEAD
            ClassicTokenizerFactory object;
            static PyObject *wrap_Object(const ClassicTokenizerFactory&);
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
