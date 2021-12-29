#ifndef org_apache_lucene_search_MultiTermQuery_H
#define org_apache_lucene_search_MultiTermQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Terms;
        class TermsEnum;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MultiTermQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_9fd2eb66a64e6f0f,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getField_db9b55ba01e03e4b,
            mid_getRewriteMethod_aed18a8b23332eb7,
            mid_getTermsEnum_eeaa7baef2944dcc,
            mid_hashCode_9972fcc56b44e79d,
            mid_rewrite_bb52f19a8254555c,
            mid_setRewriteMethod_4bd3a81cb6936220,
            mid_getTermsEnum_e75dd6286a51776d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery(const MultiTermQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_BOOLEAN_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *SCORING_BOOLEAN_REWRITE;

          MultiTermQuery(const ::java::lang::String &);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getRewriteMethod() const;
          ::org::apache::lucene::index::TermsEnum getTermsEnum(const ::org::apache::lucene::index::Terms &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          void setRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiTermQuery);
        extern PyTypeObject *PY_TYPE(MultiTermQuery);

        class t_MultiTermQuery {
        public:
          PyObject_HEAD
          MultiTermQuery object;
          static PyObject *wrap_Object(const MultiTermQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
