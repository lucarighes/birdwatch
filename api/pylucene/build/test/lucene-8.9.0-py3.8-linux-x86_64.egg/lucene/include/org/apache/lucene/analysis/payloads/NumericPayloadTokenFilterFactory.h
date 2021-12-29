#ifndef org_apache_lucene_analysis_payloads_NumericPayloadTokenFilterFactory_H
#define org_apache_lucene_analysis_payloads_NumericPayloadTokenFilterFactory_H

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
        namespace payloads {
          class NumericPayloadTokenFilter;
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
        namespace payloads {

          class NumericPayloadTokenFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_8b01fa03bc1bf766,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NumericPayloadTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NumericPayloadTokenFilterFactory(const NumericPayloadTokenFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            NumericPayloadTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::payloads::NumericPayloadTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(NumericPayloadTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(NumericPayloadTokenFilterFactory);

          class t_NumericPayloadTokenFilterFactory {
          public:
            PyObject_HEAD
            NumericPayloadTokenFilterFactory object;
            static PyObject *wrap_Object(const NumericPayloadTokenFilterFactory&);
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
