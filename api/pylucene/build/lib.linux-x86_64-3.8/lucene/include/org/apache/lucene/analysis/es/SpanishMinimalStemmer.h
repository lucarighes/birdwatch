#ifndef org_apache_lucene_analysis_es_SpanishMinimalStemmer_H
#define org_apache_lucene_analysis_es_SpanishMinimalStemmer_H

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
        namespace es {

          class SpanishMinimalStemmer : public ::java::lang::Object {
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

            explicit SpanishMinimalStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanishMinimalStemmer(const SpanishMinimalStemmer& obj) : ::java::lang::Object(obj) {}

            SpanishMinimalStemmer();

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
        namespace es {
          extern PyType_Def PY_TYPE_DEF(SpanishMinimalStemmer);
          extern PyTypeObject *PY_TYPE(SpanishMinimalStemmer);

          class t_SpanishMinimalStemmer {
          public:
            PyObject_HEAD
            SpanishMinimalStemmer object;
            static PyObject *wrap_Object(const SpanishMinimalStemmer&);
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
