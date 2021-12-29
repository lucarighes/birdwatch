#ifndef org_apache_pylucene_analysis_PythonFilteringTokenFilter_H
#define org_apache_pylucene_analysis_PythonFilteringTokenFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
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
    namespace pylucene {
      namespace analysis {

        class PythonFilteringTokenFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
         public:
          enum {
            mid_init$_c26756868a754f4e,
            mid_accept_8454bd5aa23fd11e,
            mid_finalize_f2cc1bce94666404,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFilteringTokenFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFilteringTokenFilter(const PythonFilteringTokenFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

          PythonFilteringTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          jboolean accept() const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(PythonFilteringTokenFilter);
        extern PyTypeObject *PY_TYPE(PythonFilteringTokenFilter);

        class t_PythonFilteringTokenFilter {
        public:
          PyObject_HEAD
          PythonFilteringTokenFilter object;
          static PyObject *wrap_Object(const PythonFilteringTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
