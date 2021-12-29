#ifndef org_apache_lucene_search_spans_SpanNearQuery_H
#define org_apache_lucene_search_spans_SpanNearQuery_H

#include "org/apache/lucene/search/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace spans {
          class SpanNearQuery$Builder;
          class SpanWeight;
        }
        class IndexSearcher;
        class Query;
        class QueryVisitor;
        class ScoreMode;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Cloneable;
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

          class SpanNearQuery : public ::org::apache::lucene::search::spans::SpanQuery {
           public:
            enum {
              mid_init$_10326dbf4d880677,
              mid_createWeight_5baab4cc5ccc46b6,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getClauses_55969f275130ff39,
              mid_getField_db9b55ba01e03e4b,
              mid_getSlop_9972fcc56b44e79d,
              mid_hashCode_9972fcc56b44e79d,
              mid_isInOrder_8454bd5aa23fd11e,
              mid_newOrderedNearQuery_59f027fe1d203ba9,
              mid_newUnorderedNearQuery_59f027fe1d203ba9,
              mid_rewrite_bb52f19a8254555c,
              mid_toString_9bfa75c9f141b67f,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNearQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNearQuery(const SpanNearQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            SpanNearQuery(const JArray< ::org::apache::lucene::search::spans::SpanQuery > &, jint, jboolean);

            ::org::apache::lucene::search::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            JArray< ::org::apache::lucene::search::spans::SpanQuery > getClauses() const;
            ::java::lang::String getField() const;
            jint getSlop() const;
            jint hashCode() const;
            jboolean isInOrder() const;
            static ::org::apache::lucene::search::spans::SpanNearQuery$Builder newOrderedNearQuery(const ::java::lang::String &);
            static ::org::apache::lucene::search::spans::SpanNearQuery$Builder newUnorderedNearQuery(const ::java::lang::String &);
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanNearQuery);
          extern PyTypeObject *PY_TYPE(SpanNearQuery);

          class t_SpanNearQuery {
          public:
            PyObject_HEAD
            SpanNearQuery object;
            static PyObject *wrap_Object(const SpanNearQuery&);
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
