#ifndef org_apache_lucene_classification_utils_NearestFuzzyQuery_H
#define org_apache_lucene_classification_utils_NearestFuzzyQuery_H

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
      namespace classification {
        namespace utils {

          class NearestFuzzyQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_651b708fb3f85e6e,
              mid_addTerms_15b72f6a44ff93f2,
              mid_equals_8b72f2dcdde6fd1d,
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

            explicit NearestFuzzyQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NearestFuzzyQuery(const NearestFuzzyQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            NearestFuzzyQuery(const ::org::apache::lucene::analysis::Analyzer &);

            void addTerms(const ::java::lang::String &, const ::java::lang::String &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
      namespace classification {
        namespace utils {
          extern PyType_Def PY_TYPE_DEF(NearestFuzzyQuery);
          extern PyTypeObject *PY_TYPE(NearestFuzzyQuery);

          class t_NearestFuzzyQuery {
          public:
            PyObject_HEAD
            NearestFuzzyQuery object;
            static PyObject *wrap_Object(const NearestFuzzyQuery&);
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
