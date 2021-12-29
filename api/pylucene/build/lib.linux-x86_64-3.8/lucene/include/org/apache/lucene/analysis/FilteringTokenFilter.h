#ifndef org_apache_lucene_analysis_FilteringTokenFilter_H
#define org_apache_lucene_analysis_FilteringTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace io {
    class IOException;
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

        class FilteringTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
         public:
          enum {
            mid_init$_c26756868a754f4e,
            mid_end_f2cc1bce94666404,
            mid_incrementToken_8454bd5aa23fd11e,
            mid_reset_f2cc1bce94666404,
            mid_accept_8454bd5aa23fd11e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilteringTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilteringTokenFilter(const FilteringTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          FilteringTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          void end() const;
          jboolean incrementToken() const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(FilteringTokenFilter);
        extern PyTypeObject *PY_TYPE(FilteringTokenFilter);

        class t_FilteringTokenFilter {
        public:
          PyObject_HEAD
          FilteringTokenFilter object;
          static PyObject *wrap_Object(const FilteringTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
