#ifndef org_apache_lucene_search_DocValuesFieldExistsQuery_H
#define org_apache_lucene_search_DocValuesFieldExistsQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class DocIdSetIterator;
        class QueryVisitor;
        class ScoreMode;
        class Weight;
      }
      namespace index {
        class LeafReader;
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

        class DocValuesFieldExistsQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_9fd2eb66a64e6f0f,
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getDocValuesDocIdSetIterator_b55c641563610133,
            mid_getField_db9b55ba01e03e4b,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesFieldExistsQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesFieldExistsQuery(const DocValuesFieldExistsQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          DocValuesFieldExistsQuery(const ::java::lang::String &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          static ::org::apache::lucene::search::DocIdSetIterator getDocValuesDocIdSetIterator(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReader &);
          ::java::lang::String getField() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesFieldExistsQuery);
        extern PyTypeObject *PY_TYPE(DocValuesFieldExistsQuery);

        class t_DocValuesFieldExistsQuery {
        public:
          PyObject_HEAD
          DocValuesFieldExistsQuery object;
          static PyObject *wrap_Object(const DocValuesFieldExistsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
