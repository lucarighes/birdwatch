#ifndef org_apache_lucene_queries_payloads_SumPayloadFunction_H
#define org_apache_lucene_queries_payloads_SumPayloadFunction_H

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

          class SumPayloadFunction : public ::org::apache::lucene::queries::payloads::PayloadFunction {
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

            explicit SumPayloadFunction(jobject obj) : ::org::apache::lucene::queries::payloads::PayloadFunction(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SumPayloadFunction(const SumPayloadFunction& obj) : ::org::apache::lucene::queries::payloads::PayloadFunction(obj) {}

            SumPayloadFunction();

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
          extern PyType_Def PY_TYPE_DEF(SumPayloadFunction);
          extern PyTypeObject *PY_TYPE(SumPayloadFunction);

          class t_SumPayloadFunction {
          public:
            PyObject_HEAD
            SumPayloadFunction object;
            static PyObject *wrap_Object(const SumPayloadFunction&);
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
