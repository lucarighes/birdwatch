#ifndef org_apache_lucene_analysis_bn_BengaliStemFilterFactory_H
#define org_apache_lucene_analysis_bn_BengaliStemFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
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
        namespace bn {

          class BengaliStemFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_6de1e28d9d10cd9e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BengaliStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BengaliStemFilterFactory(const BengaliStemFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            BengaliStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace bn {
          extern PyType_Def PY_TYPE_DEF(BengaliStemFilterFactory);
          extern PyTypeObject *PY_TYPE(BengaliStemFilterFactory);

          class t_BengaliStemFilterFactory {
          public:
            PyObject_HEAD
            BengaliStemFilterFactory object;
            static PyObject *wrap_Object(const BengaliStemFilterFactory&);
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
