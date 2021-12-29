#ifndef org_apache_lucene_analysis_fi_FinnishLightStemmer_H
#define org_apache_lucene_analysis_fi_FinnishLightStemmer_H

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
        namespace fi {

          class FinnishLightStemmer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_stem_d4655f2a19359017,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FinnishLightStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FinnishLightStemmer(const FinnishLightStemmer& obj) : ::java::lang::Object(obj) {}

            FinnishLightStemmer();

            jint stem(const JArray< jchar > &, jint) const;
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
        namespace fi {
          extern PyType_Def PY_TYPE_DEF(FinnishLightStemmer);
          extern PyTypeObject *PY_TYPE(FinnishLightStemmer);

          class t_FinnishLightStemmer {
          public:
            PyObject_HEAD
            FinnishLightStemmer object;
            static PyObject *wrap_Object(const FinnishLightStemmer&);
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
