#ifndef org_apache_lucene_analysis_miscellaneous_ScandinavianNormalizationFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_ScandinavianNormalizationFilterFactory_H

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
        namespace miscellaneous {
          class ScandinavianNormalizationFilter;
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
        namespace miscellaneous {

          class ScandinavianNormalizationFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_ae635f5a19900f45,
              mid_normalize_6de1e28d9d10cd9e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScandinavianNormalizationFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScandinavianNormalizationFilterFactory(const ScandinavianNormalizationFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            ScandinavianNormalizationFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::miscellaneous::ScandinavianNormalizationFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::org::apache::lucene::analysis::TokenStream normalize(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(ScandinavianNormalizationFilterFactory);
          extern PyTypeObject *PY_TYPE(ScandinavianNormalizationFilterFactory);

          class t_ScandinavianNormalizationFilterFactory {
          public:
            PyObject_HEAD
            ScandinavianNormalizationFilterFactory object;
            static PyObject *wrap_Object(const ScandinavianNormalizationFilterFactory&);
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
