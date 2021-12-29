#ifndef org_apache_lucene_sandbox_queries_FuzzyLikeThisQuery_H
#define org_apache_lucene_sandbox_queries_FuzzyLikeThisQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class QueryVisitor;
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
      namespace sandbox {
        namespace queries {

          class FuzzyLikeThisQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_60979da64a006878,
              mid_addTerms_9fc9c55693028477,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_isIgnoreTF_8454bd5aa23fd11e,
              mid_rewrite_bb52f19a8254555c,
              mid_setIgnoreTF_9d72768e8fdce2b7,
              mid_toString_9bfa75c9f141b67f,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FuzzyLikeThisQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FuzzyLikeThisQuery(const FuzzyLikeThisQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FuzzyLikeThisQuery(jint, const ::org::apache::lucene::analysis::Analyzer &);

            void addTerms(const ::java::lang::String &, const ::java::lang::String &, jfloat, jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isIgnoreTF() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            void setIgnoreTF(jboolean) const;
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
      namespace sandbox {
        namespace queries {
          extern PyType_Def PY_TYPE_DEF(FuzzyLikeThisQuery);
          extern PyTypeObject *PY_TYPE(FuzzyLikeThisQuery);

          class t_FuzzyLikeThisQuery {
          public:
            PyObject_HEAD
            FuzzyLikeThisQuery object;
            static PyObject *wrap_Object(const FuzzyLikeThisQuery&);
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
