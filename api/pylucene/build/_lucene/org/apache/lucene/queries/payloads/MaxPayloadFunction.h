#ifndef org_apache_lucene_queries_payloads_MaxPayloadFunction_H
#define org_apache_lucene_queries_payloads_MaxPayloadFunction_H

#include "org/apache/lucene/queries/payloads/PayloadFunction.h"

namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class MaxPayloadFunction : public ::org::apache::lucene::queries::payloads::PayloadFunction {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_currentScore_0a14f13874ab46d9,
              mid_docScore_6294fc7b7308f6b0,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MaxPayloadFunction(jobject obj) : ::org::apache::lucene::queries::payloads::PayloadFunction(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MaxPayloadFunction(const MaxPayloadFunction& obj) : ::org::apache::lucene::queries::payloads::PayloadFunction(obj) {}

            MaxPayloadFunction();

            jfloat currentScore(jint, const ::java::lang::String &, jint, jint, jint, jfloat, jfloat) const;
            jfloat docScore(jint, const ::java::lang::String &, jint, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(MaxPayloadFunction);
          extern PyTypeObject *PY_TYPE(MaxPayloadFunction);

          class t_MaxPayloadFunction {
          public:
            PyObject_HEAD
            MaxPayloadFunction object;
            static PyObject *wrap_Object(const MaxPayloadFunction&);
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
