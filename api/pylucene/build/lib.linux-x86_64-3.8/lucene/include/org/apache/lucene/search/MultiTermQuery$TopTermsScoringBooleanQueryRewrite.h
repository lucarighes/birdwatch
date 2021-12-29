#ifndef org_apache_lucene_search_MultiTermQuery$TopTermsScoringBooleanQueryRewrite_H
#define org_apache_lucene_search_MultiTermQuery$TopTermsScoringBooleanQueryRewrite_H

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

        class MultiTermQuery$TopTermsScoringBooleanQueryRewrite : public ::org::apache::lucene::search::TopTermsRewrite {
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

          explicit MultiTermQuery$TopTermsScoringBooleanQueryRewrite(jobject obj) : ::org::apache::lucene::search::TopTermsRewrite(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery$TopTermsScoringBooleanQueryRewrite(const MultiTermQuery$TopTermsScoringBooleanQueryRewrite& obj) : ::org::apache::lucene::search::TopTermsRewrite(obj) {}

          MultiTermQuery$TopTermsScoringBooleanQueryRewrite(jint);
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
        extern PyType_Def PY_TYPE_DEF(MultiTermQuery$TopTermsScoringBooleanQueryRewrite);
        extern PyTypeObject *PY_TYPE(MultiTermQuery$TopTermsScoringBooleanQueryRewrite);

        class t_MultiTermQuery$TopTermsScoringBooleanQueryRewrite {
        public:
          PyObject_HEAD
          MultiTermQuery$TopTermsScoringBooleanQueryRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiTermQuery$TopTermsScoringBooleanQueryRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiTermQuery$TopTermsScoringBooleanQueryRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiTermQuery$TopTermsScoringBooleanQueryRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
