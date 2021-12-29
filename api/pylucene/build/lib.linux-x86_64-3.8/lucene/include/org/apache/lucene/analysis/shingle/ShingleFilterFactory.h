#ifndef org_apache_lucene_analysis_shingle_ShingleFilterFactory_H
#define org_apache_lucene_analysis_shingle_ShingleFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace shingle {
          class ShingleFilter;
        }
        class TokenStream;
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
        namespace shingle {

          class ShingleFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_a89fb339fee584b7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ShingleFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ShingleFilterFactory(const ShingleFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            ShingleFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::shingle::ShingleFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace shingle {
          extern PyType_Def PY_TYPE_DEF(ShingleFilterFactory);
          extern PyTypeObject *PY_TYPE(ShingleFilterFactory);

          class t_ShingleFilterFactory {
          public:
            PyObject_HEAD
            ShingleFilterFactory object;
            static PyObject *wrap_Object(const ShingleFilterFactory&);
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
