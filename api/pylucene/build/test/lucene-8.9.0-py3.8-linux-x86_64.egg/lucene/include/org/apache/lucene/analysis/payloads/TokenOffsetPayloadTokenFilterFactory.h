#ifndef org_apache_lucene_analysis_payloads_TokenOffsetPayloadTokenFilterFactory_H
#define org_apache_lucene_analysis_payloads_TokenOffsetPayloadTokenFilterFactory_H

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
          class TokenOffsetPayloadTokenFilter;
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

          class TokenOffsetPayloadTokenFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_0040958a64fc3910,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenOffsetPayloadTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenOffsetPayloadTokenFilterFactory(const TokenOffsetPayloadTokenFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            TokenOffsetPayloadTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::payloads::TokenOffsetPayloadTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(TokenOffsetPayloadTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(TokenOffsetPayloadTokenFilterFactory);

          class t_TokenOffsetPayloadTokenFilterFactory {
          public:
            PyObject_HEAD
            TokenOffsetPayloadTokenFilterFactory object;
            static PyObject *wrap_Object(const TokenOffsetPayloadTokenFilterFactory&);
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
