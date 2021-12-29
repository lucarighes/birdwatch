#ifndef org_apache_lucene_analysis_bg_BulgarianStemmer_H
#define org_apache_lucene_analysis_bg_BulgarianStemmer_H

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
        namespace bg {

          class BulgarianStemmer : public ::java::lang::Object {
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

            explicit BulgarianStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BulgarianStemmer(const BulgarianStemmer& obj) : ::java::lang::Object(obj) {}

            BulgarianStemmer();

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
        namespace bg {
          extern PyType_Def PY_TYPE_DEF(BulgarianStemmer);
          extern PyTypeObject *PY_TYPE(BulgarianStemmer);

          class t_BulgarianStemmer {
          public:
            PyObject_HEAD
            BulgarianStemmer object;
            static PyObject *wrap_Object(const BulgarianStemmer&);
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
