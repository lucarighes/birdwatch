#ifndef org_apache_lucene_queries_intervals_IntervalQuery_H
#define org_apache_lucene_queries_intervals_IntervalQuery_H

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
      namespace queries {
        namespace intervals {
          class IntervalsSource;
        }
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
      namespace queries {
        namespace intervals {

          class IntervalQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_1e32a8f89fb4c908,
              mid_init$_02cdd3d78792d3d1,
              mid_init$_c25966ea9ca1cf54,
              mid_createWeight_f0ef0b5ea369ac06,
              mid_equals_8b72f2dcdde6fd1d,
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

            explicit IntervalQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalQuery(const IntervalQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            IntervalQuery(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            IntervalQuery(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &, jfloat);
            IntervalQuery(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &, jfloat, jfloat);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
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
      namespace queries {
        namespace intervals {
          extern PyType_Def PY_TYPE_DEF(IntervalQuery);
          extern PyTypeObject *PY_TYPE(IntervalQuery);

          class t_IntervalQuery {
          public:
            PyObject_HEAD
            IntervalQuery object;
            static PyObject *wrap_Object(const IntervalQuery&);
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
