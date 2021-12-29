#ifndef org_apache_lucene_search_spans_SpanPositionCheckQuery_H
#define org_apache_lucene_search_spans_SpanPositionCheckQuery_H

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
        }
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

          class SpanPositionCheckQuery : public ::org::apache::lucene::search::spans::SpanQuery {
           public:
            enum {
              mid_init$_2407f75ccc2bd356,
              mid_createWeight_5baab4cc5ccc46b6,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getField_db9b55ba01e03e4b,
              mid_getMatch_5a8903ceec80d1b9,
              mid_hashCode_9972fcc56b44e79d,
              mid_rewrite_bb52f19a8254555c,
              mid_visit_f9e6207006c5b6c1,
              mid_acceptPosition_ab707424c19ac906,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPositionCheckQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPositionCheckQuery(const SpanPositionCheckQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            SpanPositionCheckQuery(const ::org::apache::lucene::search::spans::SpanQuery &);

            ::org::apache::lucene::search::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::SpanQuery getMatch() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanPositionCheckQuery);
          extern PyTypeObject *PY_TYPE(SpanPositionCheckQuery);

          class t_SpanPositionCheckQuery {
          public:
            PyObject_HEAD
            SpanPositionCheckQuery object;
            static PyObject *wrap_Object(const SpanPositionCheckQuery&);
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
