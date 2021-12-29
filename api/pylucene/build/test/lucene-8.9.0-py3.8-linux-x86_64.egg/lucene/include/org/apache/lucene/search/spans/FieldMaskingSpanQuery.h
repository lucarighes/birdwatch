#ifndef org_apache_lucene_search_spans_FieldMaskingSpanQuery_H
#define org_apache_lucene_search_spans_FieldMaskingSpanQuery_H

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

          class FieldMaskingSpanQuery : public ::org::apache::lucene::search::spans::SpanQuery {
           public:
            enum {
              mid_init$_7825308d44347e54,
              mid_createWeight_5baab4cc5ccc46b6,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getField_db9b55ba01e03e4b,
              mid_getMaskedQuery_5a8903ceec80d1b9,
              mid_hashCode_9972fcc56b44e79d,
              mid_rewrite_bb52f19a8254555c,
              mid_toString_9bfa75c9f141b67f,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldMaskingSpanQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldMaskingSpanQuery(const FieldMaskingSpanQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            FieldMaskingSpanQuery(const ::org::apache::lucene::search::spans::SpanQuery &, const ::java::lang::String &);

            ::org::apache::lucene::search::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::search::spans::SpanQuery getMaskedQuery() const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldMaskingSpanQuery);
          extern PyTypeObject *PY_TYPE(FieldMaskingSpanQuery);

          class t_FieldMaskingSpanQuery {
          public:
            PyObject_HEAD
            FieldMaskingSpanQuery object;
            static PyObject *wrap_Object(const FieldMaskingSpanQuery&);
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
