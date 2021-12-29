#ifndef org_apache_lucene_analysis_miscellaneous_FixBrokenOffsetsFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_FixBrokenOffsetsFilterFactory_H

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
        namespace miscellaneous {

          class FixBrokenOffsetsFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
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

            explicit FixBrokenOffsetsFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FixBrokenOffsetsFilterFactory(const FixBrokenOffsetsFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            FixBrokenOffsetsFilterFactory(const ::java::util::Map &);

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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(FixBrokenOffsetsFilterFactory);
          extern PyTypeObject *PY_TYPE(FixBrokenOffsetsFilterFactory);

          class t_FixBrokenOffsetsFilterFactory {
          public:
            PyObject_HEAD
            FixBrokenOffsetsFilterFactory object;
            static PyObject *wrap_Object(const FixBrokenOffsetsFilterFactory&);
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
