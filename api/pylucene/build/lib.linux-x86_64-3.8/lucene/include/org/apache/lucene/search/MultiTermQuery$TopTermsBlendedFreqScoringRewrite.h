#ifndef org_apache_lucene_search_MultiTermQuery$TopTermsBlendedFreqScoringRewrite_H
#define org_apache_lucene_search_MultiTermQuery$TopTermsBlendedFreqScoringRewrite_H

#include "org/apache/lucene/search/TopTermsRewrite.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BlendedTermQuery$Builder;
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

        class MultiTermQuery$TopTermsBlendedFreqScoringRewrite : public ::org::apache::lucene::search::TopTermsRewrite {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_build_859d636a62fa4035,
            mid_addClause_e43adb8557864c19,
            mid_getTopLevelBuilder_90fefd3f8cd70fab,
            mid_getMaxSize_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQuery$TopTermsBlendedFreqScoringRewrite(jobject obj) : ::org::apache::lucene::search::TopTermsRewrite(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery$TopTermsBlendedFreqScoringRewrite(const MultiTermQuery$TopTermsBlendedFreqScoringRewrite& obj) : ::org::apache::lucene::search::TopTermsRewrite(obj) {}

          MultiTermQuery$TopTermsBlendedFreqScoringRewrite(jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(MultiTermQuery$TopTermsBlendedFreqScoringRewrite);
        extern PyTypeObject *PY_TYPE(MultiTermQuery$TopTermsBlendedFreqScoringRewrite);

        class t_MultiTermQuery$TopTermsBlendedFreqScoringRewrite {
        public:
          PyObject_HEAD
          MultiTermQuery$TopTermsBlendedFreqScoringRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiTermQuery$TopTermsBlendedFreqScoringRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiTermQuery$TopTermsBlendedFreqScoringRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiTermQuery$TopTermsBlendedFreqScoringRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
