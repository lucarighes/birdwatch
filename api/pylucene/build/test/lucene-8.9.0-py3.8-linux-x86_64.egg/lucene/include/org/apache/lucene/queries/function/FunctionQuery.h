#ifndef org_apache_lucene_queries_function_FunctionQuery_H
#define org_apache_lucene_queries_function_FunctionQuery_H

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
        namespace function {
          class ValueSource;
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
        namespace function {

          class FunctionQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_31c80a0040f07e19,
              mid_createWeight_f0ef0b5ea369ac06,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getValueSource_4e635fdab1789701,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_9bfa75c9f141b67f,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionQuery(const FunctionQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FunctionQuery(const ::org::apache::lucene::queries::function::ValueSource &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::queries::function::ValueSource getValueSource() const;
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
          extern PyType_Def PY_TYPE_DEF(FunctionQuery);
          extern PyTypeObject *PY_TYPE(FunctionQuery);

          class t_FunctionQuery {
          public:
            PyObject_HEAD
            FunctionQuery object;
            static PyObject *wrap_Object(const FunctionQuery&);
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
