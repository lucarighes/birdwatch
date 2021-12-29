#ifndef org_apache_lucene_analysis_miscellaneous_PatternKeywordMarkerFilter_H
#define org_apache_lucene_analysis_miscellaneous_PatternKeywordMarkerFilter_H

#include "org/apache/lucene/analysis/miscellaneous/KeywordMarkerFilter.h"

namespace java {
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
  namespace lang {
    class Class;
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
        namespace miscellaneous {

          class PatternKeywordMarkerFilter : public ::org::apache::lucene::analysis::miscellaneous::KeywordMarkerFilter {
           public:
            enum {
              mid_init$_b590dbc211a93745,
              mid_isKeyword_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternKeywordMarkerFilter(jobject obj) : ::org::apache::lucene::analysis::miscellaneous::KeywordMarkerFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternKeywordMarkerFilter(const PatternKeywordMarkerFilter& obj) : ::org::apache::lucene::analysis::miscellaneous::KeywordMarkerFilter(obj) {}

            PatternKeywordMarkerFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::regex::Pattern &);
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
          extern PyType_Def PY_TYPE_DEF(PatternKeywordMarkerFilter);
          extern PyTypeObject *PY_TYPE(PatternKeywordMarkerFilter);

          class t_PatternKeywordMarkerFilter {
          public:
            PyObject_HEAD
            PatternKeywordMarkerFilter object;
            static PyObject *wrap_Object(const PatternKeywordMarkerFilter&);
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
