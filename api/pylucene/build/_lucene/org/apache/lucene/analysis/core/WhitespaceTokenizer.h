#ifndef org_apache_lucene_analysis_core_WhitespaceTokenizer_H
#define org_apache_lucene_analysis_core_WhitespaceTokenizer_H

#include "org/apache/lucene/analysis/util/CharTokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
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
        namespace core {

          class WhitespaceTokenizer : public ::org::apache::lucene::analysis::util::CharTokenizer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_a55a4d78167a7843,
              mid_init$_040c4cd0390c5aff,
              mid_init$_541d20dfedf4268e,
              mid_isTokenChar_a1d30e1ee40c89a2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WhitespaceTokenizer(jobject obj) : ::org::apache::lucene::analysis::util::CharTokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WhitespaceTokenizer(const WhitespaceTokenizer& obj) : ::org::apache::lucene::analysis::util::CharTokenizer(obj) {}

            WhitespaceTokenizer();
            WhitespaceTokenizer(const ::org::apache::lucene::util::AttributeFactory &);
            WhitespaceTokenizer(jint);
            WhitespaceTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint);
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(WhitespaceTokenizer);
          extern PyTypeObject *PY_TYPE(WhitespaceTokenizer);

          class t_WhitespaceTokenizer {
          public:
            PyObject_HEAD
            WhitespaceTokenizer object;
            static PyObject *wrap_Object(const WhitespaceTokenizer&);
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
