#ifndef org_apache_lucene_analysis_GraphTokenFilter_H
#define org_apache_lucene_analysis_GraphTokenFilter_H

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

        class GraphTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
         public:
          enum {
            mid_init$_c26756868a754f4e,
            mid_end_f2cc1bce94666404,
            mid_getTrailingPositions_9972fcc56b44e79d,
            mid_reset_f2cc1bce94666404,
            mid_incrementGraph_8454bd5aa23fd11e,
            mid_incrementBaseToken_8454bd5aa23fd11e,
            mid_incrementGraphToken_8454bd5aa23fd11e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GraphTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GraphTokenFilter(const GraphTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          static jint MAX_GRAPH_STACK_SIZE;
          static jint MAX_TOKEN_CACHE_SIZE;

          GraphTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          void end() const;
          jint getTrailingPositions() const;
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
        extern PyType_Def PY_TYPE_DEF(GraphTokenFilter);
        extern PyTypeObject *PY_TYPE(GraphTokenFilter);

        class t_GraphTokenFilter {
        public:
          PyObject_HEAD
          GraphTokenFilter object;
          static PyObject *wrap_Object(const GraphTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
