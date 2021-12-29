#ifndef org_apache_lucene_analysis_pt_PortugueseMinimalStemmer_H
#define org_apache_lucene_analysis_pt_PortugueseMinimalStemmer_H

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
        namespace pt {

          class PortugueseMinimalStemmer : public ::org::apache::lucene::analysis::pt::RSLPStemmerBase {
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

            explicit PortugueseMinimalStemmer(jobject obj) : ::org::apache::lucene::analysis::pt::RSLPStemmerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PortugueseMinimalStemmer(const PortugueseMinimalStemmer& obj) : ::org::apache::lucene::analysis::pt::RSLPStemmerBase(obj) {}

            PortugueseMinimalStemmer();

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
        namespace pt {
          extern PyType_Def PY_TYPE_DEF(PortugueseMinimalStemmer);
          extern PyTypeObject *PY_TYPE(PortugueseMinimalStemmer);

          class t_PortugueseMinimalStemmer {
          public:
            PyObject_HEAD
            PortugueseMinimalStemmer object;
            static PyObject *wrap_Object(const PortugueseMinimalStemmer&);
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
