#ifndef org_apache_lucene_search_spans_SpanMultiTermQueryWrapper_H
#define org_apache_lucene_search_spans_SpanMultiTermQueryWrapper_H

#include "org/apache/lucene/search/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class IndexSearcher;
        namespace spans {
          class SpanWeight;
          class SpanMultiTermQueryWrapper$SpanRewriteMethod;
        }
        class Query;
        class QueryVisitor;
        class MultiTermQuery;
        class ScoreMode;
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
        namespace spans {

          class SpanMultiTermQueryWrapper : public ::org::apache::lucene::search::spans::SpanQuery {
           public:
            enum {
              mid_init$_304a6c9d92f0ee27,
              mid_createWeight_5baab4cc5ccc46b6,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getField_db9b55ba01e03e4b,
              mid_getRewriteMethod_92d032528eebf7d1,
              mid_getWrappedQuery_cbf839a480265450,
              mid_hashCode_9972fcc56b44e79d,
              mid_rewrite_bb52f19a8254555c,
              mid_setRewriteMethod_c3a332ad9b6c0a8a,
              mid_toString_9bfa75c9f141b67f,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanMultiTermQueryWrapper(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanMultiTermQueryWrapper(const SpanMultiTermQueryWrapper& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            static ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod *SCORING_SPAN_QUERY_REWRITE;

            SpanMultiTermQueryWrapper(const ::org::apache::lucene::search::MultiTermQuery &);

            ::org::apache::lucene::search::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod getRewriteMethod() const;
            ::org::apache::lucene::search::Query getWrappedQuery() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            void setRewriteMethod(const ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanMultiTermQueryWrapper);
          extern PyTypeObject *PY_TYPE(SpanMultiTermQueryWrapper);

          class t_SpanMultiTermQueryWrapper {
          public:
            PyObject_HEAD
            SpanMultiTermQueryWrapper object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanMultiTermQueryWrapper *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
