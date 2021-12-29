#ifndef org_apache_lucene_analysis_br_BrazilianStemmer_H
#define org_apache_lucene_analysis_br_BrazilianStemmer_H

#include "java/lang/Object.h"

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
      namespace analysis {
        namespace br {

          class BrazilianStemmer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_log_db9b55ba01e03e4b,
              mid_stem_9bfa75c9f141b67f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BrazilianStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BrazilianStemmer(const BrazilianStemmer& obj) : ::java::lang::Object(obj) {}

            BrazilianStemmer();

            ::java::lang::String log() const;
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
        namespace br {
          extern PyType_Def PY_TYPE_DEF(BrazilianStemmer);
          extern PyTypeObject *PY_TYPE(BrazilianStemmer);

          class t_BrazilianStemmer {
          public:
            PyObject_HEAD
            BrazilianStemmer object;
            static PyObject *wrap_Object(const BrazilianStemmer&);
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
