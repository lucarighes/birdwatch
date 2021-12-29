#ifndef org_apache_lucene_analysis_it_ItalianLightStemmer_H
#define org_apache_lucene_analysis_it_ItalianLightStemmer_H

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
        namespace it {

          class ItalianLightStemmer : public ::java::lang::Object {
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

            explicit ItalianLightStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ItalianLightStemmer(const ItalianLightStemmer& obj) : ::java::lang::Object(obj) {}

            ItalianLightStemmer();

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
        namespace it {
          extern PyType_Def PY_TYPE_DEF(ItalianLightStemmer);
          extern PyTypeObject *PY_TYPE(ItalianLightStemmer);

          class t_ItalianLightStemmer {
          public:
            PyObject_HEAD
            ItalianLightStemmer object;
            static PyObject *wrap_Object(const ItalianLightStemmer&);
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
