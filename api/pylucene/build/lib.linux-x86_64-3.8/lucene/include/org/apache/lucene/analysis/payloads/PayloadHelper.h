#ifndef org_apache_lucene_analysis_payloads_PayloadHelper_H
#define org_apache_lucene_analysis_payloads_PayloadHelper_H

#include "java/lang/Object.h"

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

          class PayloadHelper : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_decodeFloat_294f94628b07c96d,
              mid_decodeFloat_2431569bab1a7ba7,
              mid_decodeInt_7cdc0fb0850d95a0,
              mid_encodeFloat_a069e3c989eaf648,
              mid_encodeFloat_e0d63b67e3969044,
              mid_encodeInt_81fae1e0e2d0070b,
              mid_encodeInt_4f1a8b36495fc9b0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadHelper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadHelper(const PayloadHelper& obj) : ::java::lang::Object(obj) {}

            PayloadHelper();

            static jfloat decodeFloat(const JArray< jbyte > &);
            static jfloat decodeFloat(const JArray< jbyte > &, jint);
            static jint decodeInt(const JArray< jbyte > &, jint);
            static JArray< jbyte > encodeFloat(jfloat);
            static JArray< jbyte > encodeFloat(jfloat, const JArray< jbyte > &, jint);
            static JArray< jbyte > encodeInt(jint);
            static JArray< jbyte > encodeInt(jint, const JArray< jbyte > &, jint);
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
          extern PyType_Def PY_TYPE_DEF(PayloadHelper);
          extern PyTypeObject *PY_TYPE(PayloadHelper);

          class t_PayloadHelper {
          public:
            PyObject_HEAD
            PayloadHelper object;
            static PyObject *wrap_Object(const PayloadHelper&);
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
