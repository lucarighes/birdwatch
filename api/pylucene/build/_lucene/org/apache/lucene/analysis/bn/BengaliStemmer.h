#ifndef org_apache_lucene_analysis_bn_BengaliStemmer_H
#define org_apache_lucene_analysis_bn_BengaliStemmer_H

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
        namespace bn {

          class BengaliStemmer : public ::java::lang::Object {
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

            explicit BengaliStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BengaliStemmer(const BengaliStemmer& obj) : ::java::lang::Object(obj) {}

            BengaliStemmer();

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
        namespace bn {
          extern PyType_Def PY_TYPE_DEF(BengaliStemmer);
          extern PyTypeObject *PY_TYPE(BengaliStemmer);

          class t_BengaliStemmer {
          public:
            PyObject_HEAD
            BengaliStemmer object;
            static PyObject *wrap_Object(const BengaliStemmer&);
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
