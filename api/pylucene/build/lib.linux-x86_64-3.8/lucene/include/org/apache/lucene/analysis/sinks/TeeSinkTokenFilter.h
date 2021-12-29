#ifndef org_apache_lucene_analysis_sinks_TeeSinkTokenFilter_H
#define org_apache_lucene_analysis_sinks_TeeSinkTokenFilter_H

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
        namespace sinks {

          class TeeSinkTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_consumeAllTokens_f2cc1bce94666404,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_newSinkTokenStream_53a594dacf37f73d,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TeeSinkTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TeeSinkTokenFilter(const TeeSinkTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            TeeSinkTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

            void consumeAllTokens() const;
            void end() const;
            jboolean incrementToken() const;
            ::org::apache::lucene::analysis::TokenStream newSinkTokenStream() const;
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
        namespace sinks {
          extern PyType_Def PY_TYPE_DEF(TeeSinkTokenFilter);
          extern PyTypeObject *PY_TYPE(TeeSinkTokenFilter);

          class t_TeeSinkTokenFilter {
          public:
            PyObject_HEAD
            TeeSinkTokenFilter object;
            static PyObject *wrap_Object(const TeeSinkTokenFilter&);
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
