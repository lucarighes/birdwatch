#ifndef org_apache_lucene_analysis_miscellaneous_KeywordMarkerFilter_H
#define org_apache_lucene_analysis_miscellaneous_KeywordMarkerFilter_H

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
        namespace miscellaneous {

          class KeywordMarkerFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_incrementToken_8454bd5aa23fd11e,
              mid_isKeyword_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordMarkerFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KeywordMarkerFilter(const KeywordMarkerFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            jboolean incrementToken() const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(KeywordMarkerFilter);
          extern PyTypeObject *PY_TYPE(KeywordMarkerFilter);

          class t_KeywordMarkerFilter {
          public:
            PyObject_HEAD
            KeywordMarkerFilter object;
            static PyObject *wrap_Object(const KeywordMarkerFilter&);
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
