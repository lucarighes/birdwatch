#ifndef org_apache_lucene_analysis_pattern_PatternReplaceFilter_H
#define org_apache_lucene_analysis_pattern_PatternReplaceFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {

          class PatternReplaceFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_0fbe2a9163e7f811,
              mid_incrementToken_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternReplaceFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternReplaceFilter(const PatternReplaceFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            PatternReplaceFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::regex::Pattern &, const ::java::lang::String &, jboolean);

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
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(PatternReplaceFilter);
          extern PyTypeObject *PY_TYPE(PatternReplaceFilter);

          class t_PatternReplaceFilter {
          public:
            PyObject_HEAD
            PatternReplaceFilter object;
            static PyObject *wrap_Object(const PatternReplaceFilter&);
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
