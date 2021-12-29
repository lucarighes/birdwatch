#ifndef org_apache_lucene_analysis_ru_RussianLightStemmer_H
#define org_apache_lucene_analysis_ru_RussianLightStemmer_H

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
        namespace ru {

          class RussianLightStemmer : public ::java::lang::Object {
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

            explicit RussianLightStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RussianLightStemmer(const RussianLightStemmer& obj) : ::java::lang::Object(obj) {}

            RussianLightStemmer();

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
        namespace ru {
          extern PyType_Def PY_TYPE_DEF(RussianLightStemmer);
          extern PyTypeObject *PY_TYPE(RussianLightStemmer);

          class t_RussianLightStemmer {
          public:
            PyObject_HEAD
            RussianLightStemmer object;
            static PyObject *wrap_Object(const RussianLightStemmer&);
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
