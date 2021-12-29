#ifndef org_apache_lucene_analysis_payloads_TypeAsPayloadTokenFilterFactory_H
#define org_apache_lucene_analysis_payloads_TypeAsPayloadTokenFilterFactory_H

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
        namespace payloads {
          class TypeAsPayloadTokenFilter;
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
        namespace payloads {

          class TypeAsPayloadTokenFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_d5966de02d36dcd8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeAsPayloadTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TypeAsPayloadTokenFilterFactory(const TypeAsPayloadTokenFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            TypeAsPayloadTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::payloads::TypeAsPayloadTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(TypeAsPayloadTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(TypeAsPayloadTokenFilterFactory);

          class t_TypeAsPayloadTokenFilterFactory {
          public:
            PyObject_HEAD
            TypeAsPayloadTokenFilterFactory object;
            static PyObject *wrap_Object(const TypeAsPayloadTokenFilterFactory&);
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
