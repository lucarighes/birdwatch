#ifndef org_apache_lucene_search_spans_SpanTermQuery_H
#define org_apache_lucene_search_spans_SpanTermQuery_H

#include "org/apache/lucene/search/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        namespace spans {
          class SpanWeight;
        }
        class QueryVisitor;
        class ScoreMode;
      }
      namespace index {
        class Term;
        class TermStates;
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

          class SpanTermQuery : public ::org::apache::lucene::search::spans::SpanQuery {
           public:
            enum {
              mid_init$_32784f9c0ee449e6,
              mid_init$_98ee6fb07d5bdf57,
              mid_createWeight_5baab4cc5ccc46b6,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getField_db9b55ba01e03e4b,
              mid_getTerm_5e734526802c58d9,
              mid_getTermStates_656ab7adb8fbc7f7,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_9bfa75c9f141b67f,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanTermQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanTermQuery(const SpanTermQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            SpanTermQuery(const ::org::apache::lucene::index::Term &);
            SpanTermQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::index::TermStates &);

            ::org::apache::lucene::search::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::index::Term getTerm() const;
            ::org::apache::lucene::index::TermStates getTermStates() const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(SpanTermQuery);
          extern PyTypeObject *PY_TYPE(SpanTermQuery);

          class t_SpanTermQuery {
          public:
            PyObject_HEAD
            SpanTermQuery object;
            static PyObject *wrap_Object(const SpanTermQuery&);
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
