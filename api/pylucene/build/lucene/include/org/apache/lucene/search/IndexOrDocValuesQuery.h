#ifndef org_apache_lucene_search_IndexOrDocValuesQuery_H
#define org_apache_lucene_search_IndexOrDocValuesQuery_H

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

        class IndexOrDocValuesQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_e16fb791c00cdb62,
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getIndexQuery_cbf839a480265450,
            mid_getRandomAccessQuery_cbf839a480265450,
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

          explicit IndexOrDocValuesQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexOrDocValuesQuery(const IndexOrDocValuesQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          IndexOrDocValuesQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Query &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::Query getIndexQuery() const;
          ::org::apache::lucene::search::Query getRandomAccessQuery() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexOrDocValuesQuery);
        extern PyTypeObject *PY_TYPE(IndexOrDocValuesQuery);

        class t_IndexOrDocValuesQuery {
        public:
          PyObject_HEAD
          IndexOrDocValuesQuery object;
          static PyObject *wrap_Object(const IndexOrDocValuesQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
