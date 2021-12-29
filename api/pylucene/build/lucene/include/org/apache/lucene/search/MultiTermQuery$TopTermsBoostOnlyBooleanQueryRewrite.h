#ifndef org_apache_lucene_search_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite_H
#define org_apache_lucene_search_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite_H

#include "org/apache/lucene/search/TopTermsRewrite.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanQuery$Builder;
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

        class MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite : public ::org::apache::lucene::search::TopTermsRewrite {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_build_f9a1c1df37d5da9b,
            mid_addClause_deba14d568ed29a2,
            mid_getTopLevelBuilder_a51b33134513d073,
            mid_getMaxSize_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite(jobject obj) : ::org::apache::lucene::search::TopTermsRewrite(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite(const MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite& obj) : ::org::apache::lucene::search::TopTermsRewrite(obj) {}

          MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite(jint);
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
        extern PyType_Def PY_TYPE_DEF(MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite);
        extern PyTypeObject *PY_TYPE(MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite);

        class t_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite {
        public:
          PyObject_HEAD
          MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
