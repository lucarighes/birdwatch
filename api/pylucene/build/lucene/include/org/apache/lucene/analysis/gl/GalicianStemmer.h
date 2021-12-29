#ifndef org_apache_lucene_analysis_gl_GalicianStemmer_H
#define org_apache_lucene_analysis_gl_GalicianStemmer_H

#include "org/apache/lucene/analysis/pt/RSLPStemmerBase.h"

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
        namespace gl {

          class GalicianStemmer : public ::org::apache::lucene::analysis::pt::RSLPStemmerBase {
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

            explicit GalicianStemmer(jobject obj) : ::org::apache::lucene::analysis::pt::RSLPStemmerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GalicianStemmer(const GalicianStemmer& obj) : ::org::apache::lucene::analysis::pt::RSLPStemmerBase(obj) {}

            GalicianStemmer();

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
        namespace gl {
          extern PyType_Def PY_TYPE_DEF(GalicianStemmer);
          extern PyTypeObject *PY_TYPE(GalicianStemmer);

          class t_GalicianStemmer {
          public:
            PyObject_HEAD
            GalicianStemmer object;
            static PyObject *wrap_Object(const GalicianStemmer&);
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
