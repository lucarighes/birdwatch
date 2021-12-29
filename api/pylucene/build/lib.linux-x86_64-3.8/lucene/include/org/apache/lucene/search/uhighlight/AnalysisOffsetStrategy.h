#ifndef org_apache_lucene_search_uhighlight_AnalysisOffsetStrategy_H
#define org_apache_lucene_search_uhighlight_AnalysisOffsetStrategy_H

#include "org/apache/lucene/search/uhighlight/FieldOffsetStrategy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class UnifiedHighlighter$OffsetSource;
          class UHComponents;
        }
      }
      namespace analysis {
        class Analyzer;
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
      namespace search {
        namespace uhighlight {

          class AnalysisOffsetStrategy : public ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy {
           public:
            enum {
              mid_init$_969950458d02784c,
              mid_getOffsetSource_d592a7a3fc9567b1,
              mid_tokenStream_b515bf040ef8400a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AnalysisOffsetStrategy(jobject obj) : ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AnalysisOffsetStrategy(const AnalysisOffsetStrategy& obj) : ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy(obj) {}

            AnalysisOffsetStrategy(const ::org::apache::lucene::search::uhighlight::UHComponents &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$OffsetSource getOffsetSource() const;
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
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(AnalysisOffsetStrategy);
          extern PyTypeObject *PY_TYPE(AnalysisOffsetStrategy);

          class t_AnalysisOffsetStrategy {
          public:
            PyObject_HEAD
            AnalysisOffsetStrategy object;
            static PyObject *wrap_Object(const AnalysisOffsetStrategy&);
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
