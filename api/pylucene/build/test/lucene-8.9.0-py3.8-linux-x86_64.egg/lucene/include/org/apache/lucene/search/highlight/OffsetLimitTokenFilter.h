#ifndef org_apache_lucene_search_highlight_OffsetLimitTokenFilter_H
#define org_apache_lucene_search_highlight_OffsetLimitTokenFilter_H

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
      namespace search {
        namespace highlight {

          class OffsetLimitTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ec84dcad1ccbb797,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetLimitTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetLimitTokenFilter(const OffsetLimitTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            OffsetLimitTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);

            jboolean incrementToken() const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(OffsetLimitTokenFilter);
          extern PyTypeObject *PY_TYPE(OffsetLimitTokenFilter);

          class t_OffsetLimitTokenFilter {
          public:
            PyObject_HEAD
            OffsetLimitTokenFilter object;
            static PyObject *wrap_Object(const OffsetLimitTokenFilter&);
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
