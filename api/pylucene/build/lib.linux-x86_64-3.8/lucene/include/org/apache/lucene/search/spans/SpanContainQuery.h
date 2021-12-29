#ifndef org_apache_lucene_search_spans_SpanContainQuery_H
#define org_apache_lucene_search_spans_SpanContainQuery_H

#include "org/apache/lucene/search/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
        class QueryVisitor;
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

          class SpanContainQuery : public ::org::apache::lucene::search::spans::SpanQuery {
           public:
            enum {
              mid_equals_8b72f2dcdde6fd1d,
              mid_getBig_5a8903ceec80d1b9,
              mid_getField_db9b55ba01e03e4b,
              mid_getLittle_5a8903ceec80d1b9,
              mid_hashCode_9972fcc56b44e79d,
              mid_rewrite_bb52f19a8254555c,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainQuery(const SpanContainQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::spans::SpanQuery getBig() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::SpanQuery getLittle() const;
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
          extern PyType_Def PY_TYPE_DEF(SpanContainQuery);
          extern PyTypeObject *PY_TYPE(SpanContainQuery);

          class t_SpanContainQuery {
          public:
            PyObject_HEAD
            SpanContainQuery object;
            static PyObject *wrap_Object(const SpanContainQuery&);
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
