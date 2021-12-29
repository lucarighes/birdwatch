#ifndef org_apache_lucene_search_IndriQuery_H
#define org_apache_lucene_search_IndriQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
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

        class IndriQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_d03990be0130160d,
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getClauses_49ec78390f08338a,
            mid_hashCode_9972fcc56b44e79d,
            mid_iterator_233a192dadb0917d,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriQuery(const IndriQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          IndriQuery(const ::java::util::List &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::List getClauses() const;
          jint hashCode() const;
          ::java::util::Iterator iterator() const;
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
        extern PyType_Def PY_TYPE_DEF(IndriQuery);
        extern PyTypeObject *PY_TYPE(IndriQuery);

        class t_IndriQuery {
        public:
          PyObject_HEAD
          IndriQuery object;
          static PyObject *wrap_Object(const IndriQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
