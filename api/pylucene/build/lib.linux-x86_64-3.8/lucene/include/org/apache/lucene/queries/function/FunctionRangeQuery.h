#ifndef org_apache_lucene_queries_function_FunctionRangeQuery_H
#define org_apache_lucene_queries_function_FunctionRangeQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace lang {
    class Number;
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
      namespace queries {
        namespace function {
          class ValueSource;
        }
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

          class FunctionRangeQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_9ee9bbba5945833a,
              mid_init$_cafaf093ab3a1441,
              mid_createWeight_f0ef0b5ea369ac06,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getLowerVal_db9b55ba01e03e4b,
              mid_getUpperVal_db9b55ba01e03e4b,
              mid_getValueSource_4e635fdab1789701,
              mid_hashCode_9972fcc56b44e79d,
              mid_isIncludeLower_8454bd5aa23fd11e,
              mid_isIncludeUpper_8454bd5aa23fd11e,
              mid_toString_9bfa75c9f141b67f,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionRangeQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionRangeQuery(const FunctionRangeQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FunctionRangeQuery(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::lang::Number &, const ::java::lang::Number &, jboolean, jboolean);
            FunctionRangeQuery(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getLowerVal() const;
            ::java::lang::String getUpperVal() const;
            ::org::apache::lucene::queries::function::ValueSource getValueSource() const;
            jint hashCode() const;
            jboolean isIncludeLower() const;
            jboolean isIncludeUpper() const;
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
          extern PyType_Def PY_TYPE_DEF(FunctionRangeQuery);
          extern PyTypeObject *PY_TYPE(FunctionRangeQuery);

          class t_FunctionRangeQuery {
          public:
            PyObject_HEAD
            FunctionRangeQuery object;
            static PyObject *wrap_Object(const FunctionRangeQuery&);
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
