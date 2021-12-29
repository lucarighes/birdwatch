#ifndef org_apache_lucene_queries_function_FunctionMatchQuery_H
#define org_apache_lucene_queries_function_FunctionMatchQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace util {
    namespace function {
      class DoublePredicate;
    }
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
        class DoubleValuesSource;
        class QueryVisitor;
        class ScoreMode;
        class Weight;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          class FunctionMatchQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_bfc4ebaa405971dc,
              mid_init$_7de7c43118dd85a2,
              mid_createWeight_f0ef0b5ea369ac06,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_9bfa75c9f141b67f,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionMatchQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionMatchQuery(const FunctionMatchQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FunctionMatchQuery(const ::org::apache::lucene::search::DoubleValuesSource &, const ::java::util::function::DoublePredicate &);
            FunctionMatchQuery(const ::org::apache::lucene::search::DoubleValuesSource &, const ::java::util::function::DoublePredicate &, jfloat);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
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
        namespace function {
          extern PyType_Def PY_TYPE_DEF(FunctionMatchQuery);
          extern PyTypeObject *PY_TYPE(FunctionMatchQuery);

          class t_FunctionMatchQuery {
          public:
            PyObject_HEAD
            FunctionMatchQuery object;
            static PyObject *wrap_Object(const FunctionMatchQuery&);
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
