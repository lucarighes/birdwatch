#ifndef org_apache_lucene_search_BooleanQuery_H
#define org_apache_lucene_search_BooleanQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class IndexSearcher;
        class QueryVisitor;
        class BooleanClause;
        class ScoreMode;
        class Weight;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class Iterable;
    class String;
  }
  namespace util {
    class Iterator;
    class List;
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

        class BooleanQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_clauses_49ec78390f08338a,
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getMaxClauseCount_9972fcc56b44e79d,
            mid_getMinimumNumberShouldMatch_9972fcc56b44e79d,
            mid_hashCode_9972fcc56b44e79d,
            mid_iterator_233a192dadb0917d,
            mid_rewrite_bb52f19a8254555c,
            mid_setMaxClauseCount_040c4cd0390c5aff,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanQuery(const BooleanQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ::java::util::List clauses() const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          static jint getMaxClauseCount();
          jint getMinimumNumberShouldMatch() const;
          jint hashCode() const;
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          static void setMaxClauseCount(jint);
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
        extern PyType_Def PY_TYPE_DEF(BooleanQuery);
        extern PyTypeObject *PY_TYPE(BooleanQuery);

        class t_BooleanQuery {
        public:
          PyObject_HEAD
          BooleanQuery object;
          static PyObject *wrap_Object(const BooleanQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
