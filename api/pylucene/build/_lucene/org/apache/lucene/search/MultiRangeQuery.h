#ifndef org_apache_lucene_search_MultiRangeQuery_H
#define org_apache_lucene_search_MultiRangeQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
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

        class MultiRangeQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getBytesPerDim_9972fcc56b44e79d,
            mid_getField_db9b55ba01e03e4b,
            mid_getNumDims_9972fcc56b44e79d,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            mid_toString_3b5a1335c24253e0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiRangeQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiRangeQuery(const MultiRangeQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint getBytesPerDim() const;
          ::java::lang::String getField() const;
          jint getNumDims() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiRangeQuery);
        extern PyTypeObject *PY_TYPE(MultiRangeQuery);

        class t_MultiRangeQuery {
        public:
          PyObject_HEAD
          MultiRangeQuery object;
          static PyObject *wrap_Object(const MultiRangeQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
