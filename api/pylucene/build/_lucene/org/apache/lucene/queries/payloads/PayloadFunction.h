#ifndef org_apache_lucene_queries_payloads_PayloadFunction_H
#define org_apache_lucene_queries_payloads_PayloadFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
      }
    }
  }
}
namespace java {
  namespace lang {
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

          class PayloadFunction : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_currentScore_0a14f13874ab46d9,
              mid_docScore_6294fc7b7308f6b0,
              mid_equals_8b72f2dcdde6fd1d,
              mid_explain_a704e831bc4bdcca,
              mid_hashCode_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadFunction(const PayloadFunction& obj) : ::java::lang::Object(obj) {}

            PayloadFunction();

            jfloat currentScore(jint, const ::java::lang::String &, jint, jint, jint, jfloat, jfloat) const;
            jfloat docScore(jint, const ::java::lang::String &, jint, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::Explanation explain(jint, const ::java::lang::String &, jint, jfloat) const;
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
          extern PyType_Def PY_TYPE_DEF(PayloadFunction);
          extern PyTypeObject *PY_TYPE(PayloadFunction);

          class t_PayloadFunction {
          public:
            PyObject_HEAD
            PayloadFunction object;
            static PyObject *wrap_Object(const PayloadFunction&);
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
