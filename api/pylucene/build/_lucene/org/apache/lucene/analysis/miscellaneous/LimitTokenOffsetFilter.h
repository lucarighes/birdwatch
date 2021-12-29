#ifndef org_apache_lucene_analysis_miscellaneous_LimitTokenOffsetFilter_H
#define org_apache_lucene_analysis_miscellaneous_LimitTokenOffsetFilter_H

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
        namespace miscellaneous {

          class LimitTokenOffsetFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ec84dcad1ccbb797,
              mid_init$_66cff404b0168626,
              mid_incrementToken_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitTokenOffsetFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LimitTokenOffsetFilter(const LimitTokenOffsetFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            LimitTokenOffsetFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            LimitTokenOffsetFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jboolean);

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
          extern PyType_Def PY_TYPE_DEF(LimitTokenOffsetFilter);
          extern PyTypeObject *PY_TYPE(LimitTokenOffsetFilter);

          class t_LimitTokenOffsetFilter {
          public:
            PyObject_HEAD
            LimitTokenOffsetFilter object;
            static PyObject *wrap_Object(const LimitTokenOffsetFilter&);
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
