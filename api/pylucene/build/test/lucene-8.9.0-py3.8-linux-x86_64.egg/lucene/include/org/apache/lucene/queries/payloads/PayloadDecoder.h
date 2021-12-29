#ifndef org_apache_lucene_queries_payloads_PayloadDecoder_H
#define org_apache_lucene_queries_payloads_PayloadDecoder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {
          class PayloadDecoder;
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class PayloadDecoder : public ::java::lang::Object {
           public:
            enum {
              mid_computePayloadFactor_4a3180a3fc317019,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadDecoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadDecoder(const PayloadDecoder& obj) : ::java::lang::Object(obj) {}

            static PayloadDecoder *FLOAT_DECODER;

            jfloat computePayloadFactor(const ::org::apache::lucene::util::BytesRef &) const;
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
      namespace queries {
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(PayloadDecoder);
          extern PyTypeObject *PY_TYPE(PayloadDecoder);

          class t_PayloadDecoder {
          public:
            PyObject_HEAD
            PayloadDecoder object;
            static PyObject *wrap_Object(const PayloadDecoder&);
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
