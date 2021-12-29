#ifndef org_apache_lucene_analysis_fr_FrenchMinimalStemmer_H
#define org_apache_lucene_analysis_fr_FrenchMinimalStemmer_H

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
        namespace fr {

          class FrenchMinimalStemmer : public ::java::lang::Object {
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

            explicit FrenchMinimalStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FrenchMinimalStemmer(const FrenchMinimalStemmer& obj) : ::java::lang::Object(obj) {}

            FrenchMinimalStemmer();

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
        namespace fr {
          extern PyType_Def PY_TYPE_DEF(FrenchMinimalStemmer);
          extern PyTypeObject *PY_TYPE(FrenchMinimalStemmer);

          class t_FrenchMinimalStemmer {
          public:
            PyObject_HEAD
            FrenchMinimalStemmer object;
            static PyObject *wrap_Object(const FrenchMinimalStemmer&);
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
