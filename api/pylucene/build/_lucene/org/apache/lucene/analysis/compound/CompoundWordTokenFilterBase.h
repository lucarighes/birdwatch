#ifndef org_apache_lucene_analysis_compound_CompoundWordTokenFilterBase_H
#define org_apache_lucene_analysis_compound_CompoundWordTokenFilterBase_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {

          class CompoundWordTokenFilterBase : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              mid_decompose_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompoundWordTokenFilterBase(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompoundWordTokenFilterBase(const CompoundWordTokenFilterBase& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MAX_SUBWORD_SIZE;
            static jint DEFAULT_MIN_SUBWORD_SIZE;
            static jint DEFAULT_MIN_WORD_SIZE;

            jboolean incrementToken() const;
            void reset() const;
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
        namespace compound {
          extern PyType_Def PY_TYPE_DEF(CompoundWordTokenFilterBase);
          extern PyTypeObject *PY_TYPE(CompoundWordTokenFilterBase);

          class t_CompoundWordTokenFilterBase {
          public:
            PyObject_HEAD
            CompoundWordTokenFilterBase object;
            static PyObject *wrap_Object(const CompoundWordTokenFilterBase&);
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
