#ifndef org_apache_lucene_analysis_en_EnglishMinimalStemmer_H
#define org_apache_lucene_analysis_en_EnglishMinimalStemmer_H

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
        namespace en {

          class EnglishMinimalStemmer : public ::java::lang::Object {
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

            explicit EnglishMinimalStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EnglishMinimalStemmer(const EnglishMinimalStemmer& obj) : ::java::lang::Object(obj) {}

            EnglishMinimalStemmer();

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
        namespace en {
          extern PyType_Def PY_TYPE_DEF(EnglishMinimalStemmer);
          extern PyTypeObject *PY_TYPE(EnglishMinimalStemmer);

          class t_EnglishMinimalStemmer {
          public:
            PyObject_HEAD
            EnglishMinimalStemmer object;
            static PyObject *wrap_Object(const EnglishMinimalStemmer&);
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
