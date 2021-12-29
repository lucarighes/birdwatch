#ifndef org_apache_lucene_analysis_en_PorterStemFilterFactory_H
#define org_apache_lucene_analysis_en_PorterStemFilterFactory_H

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
        class TokenStream;
        namespace en {
          class PorterStemFilter;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace en {

          class PorterStemFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_d217117f84e508f7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PorterStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PorterStemFilterFactory(const PorterStemFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            PorterStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::en::PorterStemFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace en {
          extern PyType_Def PY_TYPE_DEF(PorterStemFilterFactory);
          extern PyTypeObject *PY_TYPE(PorterStemFilterFactory);

          class t_PorterStemFilterFactory {
          public:
            PyObject_HEAD
            PorterStemFilterFactory object;
            static PyObject *wrap_Object(const PorterStemFilterFactory&);
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
