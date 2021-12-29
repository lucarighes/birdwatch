#ifndef org_apache_lucene_search_DocValuesNumbersQuery_H
#define org_apache_lucene_search_DocValuesNumbersQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace lang {
    class Long;
    class Class;
    class Object;
    class String;
  }
  namespace util {
    class Collection;
    class Set;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class QueryVisitor;
        class ScoreMode;
        class Weight;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocValuesNumbersQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_713574b80c0518e2,
            mid_init$_1ed5ff6d18f5a13e,
            mid_init$_1933a485e060f4cd,
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getField_db9b55ba01e03e4b,
            mid_getNumbers_7dcf4034c6d1a92a,
            mid_hashCode_9972fcc56b44e79d,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesNumbersQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesNumbersQuery(const DocValuesNumbersQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          DocValuesNumbersQuery(const ::java::lang::String &, const JArray< jlong > &);
          DocValuesNumbersQuery(const ::java::lang::String &, const JArray< ::java::lang::Long > &);
          DocValuesNumbersQuery(const ::java::lang::String &, const ::java::util::Collection &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          ::java::util::Set getNumbers() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesNumbersQuery);
        extern PyTypeObject *PY_TYPE(DocValuesNumbersQuery);

        class t_DocValuesNumbersQuery {
        public:
          PyObject_HEAD
          DocValuesNumbersQuery object;
          static PyObject *wrap_Object(const DocValuesNumbersQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
