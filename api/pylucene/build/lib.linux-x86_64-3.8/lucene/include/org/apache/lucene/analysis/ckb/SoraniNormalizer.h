#ifndef org_apache_lucene_analysis_ckb_SoraniNormalizer_H
#define org_apache_lucene_analysis_ckb_SoraniNormalizer_H

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
        namespace ckb {

          class SoraniNormalizer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_normalize_d4655f2a19359017,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SoraniNormalizer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SoraniNormalizer(const SoraniNormalizer& obj) : ::java::lang::Object(obj) {}

            SoraniNormalizer();

            jint normalize(const JArray< jchar > &, jint) const;
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
        namespace ckb {
          extern PyType_Def PY_TYPE_DEF(SoraniNormalizer);
          extern PyTypeObject *PY_TYPE(SoraniNormalizer);

          class t_SoraniNormalizer {
          public:
            PyObject_HEAD
            SoraniNormalizer object;
            static PyObject *wrap_Object(const SoraniNormalizer&);
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
