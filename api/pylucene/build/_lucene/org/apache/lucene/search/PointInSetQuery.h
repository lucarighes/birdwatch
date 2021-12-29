#ifndef org_apache_lucene_search_PointInSetQuery_H
#define org_apache_lucene_search_PointInSetQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
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

        class PointInSetQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getBytesPerDim_9972fcc56b44e79d,
            mid_getField_db9b55ba01e03e4b,
            mid_getNumDims_9972fcc56b44e79d,
            mid_getPackedPoints_d4dfbf7a26ff41df,
            mid_hashCode_9972fcc56b44e79d,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            mid_toString_724cde42c4d4b340,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointInSetQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointInSetQuery(const PointInSetQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint getBytesPerDim() const;
          ::java::lang::String getField() const;
          jint getNumDims() const;
          ::java::util::Collection getPackedPoints() const;
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
        extern PyType_Def PY_TYPE_DEF(PointInSetQuery);
        extern PyTypeObject *PY_TYPE(PointInSetQuery);

        class t_PointInSetQuery {
        public:
          PyObject_HEAD
          PointInSetQuery object;
          static PyObject *wrap_Object(const PointInSetQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
