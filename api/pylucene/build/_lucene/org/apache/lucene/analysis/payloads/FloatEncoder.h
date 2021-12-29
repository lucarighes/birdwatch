#ifndef org_apache_lucene_analysis_payloads_FloatEncoder_H
#define org_apache_lucene_analysis_payloads_FloatEncoder_H

#include "org/apache/lucene/analysis/payloads/AbstractEncoder.h"

namespace org {
  namespace apache {
    namespace lucene {
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
      namespace analysis {
        namespace payloads {

          class FloatEncoder : public ::org::apache::lucene::analysis::payloads::AbstractEncoder {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_encode_785adfa8e7d32a0b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FloatEncoder(jobject obj) : ::org::apache::lucene::analysis::payloads::AbstractEncoder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatEncoder(const FloatEncoder& obj) : ::org::apache::lucene::analysis::payloads::AbstractEncoder(obj) {}

            FloatEncoder();

            ::org::apache::lucene::util::BytesRef encode(const JArray< jchar > &, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(FloatEncoder);
          extern PyTypeObject *PY_TYPE(FloatEncoder);

          class t_FloatEncoder {
          public:
            PyObject_HEAD
            FloatEncoder object;
            static PyObject *wrap_Object(const FloatEncoder&);
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
