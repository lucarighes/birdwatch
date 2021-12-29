#ifndef org_apache_lucene_analysis_pt_PortugueseStemmer_H
#define org_apache_lucene_analysis_pt_PortugueseStemmer_H

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

          class PortugueseStemmer : public ::org::apache::lucene::analysis::pt::RSLPStemmerBase {
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

            explicit PortugueseStemmer(jobject obj) : ::org::apache::lucene::analysis::pt::RSLPStemmerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PortugueseStemmer(const PortugueseStemmer& obj) : ::org::apache::lucene::analysis::pt::RSLPStemmerBase(obj) {}

            PortugueseStemmer();

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
          extern PyType_Def PY_TYPE_DEF(PortugueseStemmer);
          extern PyTypeObject *PY_TYPE(PortugueseStemmer);

          class t_PortugueseStemmer {
          public:
            PyObject_HEAD
            PortugueseStemmer object;
            static PyObject *wrap_Object(const PortugueseStemmer&);
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
