#ifndef org_apache_lucene_analysis_br_BrazilianStemFilterFactory_H
#define org_apache_lucene_analysis_br_BrazilianStemFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace br {
          class BrazilianStemFilter;
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
        namespace br {

          class BrazilianStemFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_5d8ba3a3902b3d65,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BrazilianStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BrazilianStemFilterFactory(const BrazilianStemFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            BrazilianStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::br::BrazilianStemFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace br {
          extern PyType_Def PY_TYPE_DEF(BrazilianStemFilterFactory);
          extern PyTypeObject *PY_TYPE(BrazilianStemFilterFactory);

          class t_BrazilianStemFilterFactory {
          public:
            PyObject_HEAD
            BrazilianStemFilterFactory object;
            static PyObject *wrap_Object(const BrazilianStemFilterFactory&);
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
