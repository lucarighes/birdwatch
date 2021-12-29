#ifndef org_apache_lucene_analysis_TokenFilter_H
#define org_apache_lucene_analysis_TokenFilter_H

#include "org/apache/lucene/analysis/TokenStream.h"

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

        class TokenFilter : public ::org::apache::lucene::analysis::TokenStream {
         public:
          enum {
            mid_close_f2cc1bce94666404,
            mid_end_f2cc1bce94666404,
            mid_reset_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenFilter(const TokenFilter& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

          void close() const;
          void end() const;
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
        extern PyType_Def PY_TYPE_DEF(TokenFilter);
        extern PyTypeObject *PY_TYPE(TokenFilter);

        class t_TokenFilter {
        public:
          PyObject_HEAD
          TokenFilter object;
          static PyObject *wrap_Object(const TokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
