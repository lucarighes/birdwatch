#ifndef org_apache_lucene_search_BlendedTermQuery_H
#define org_apache_lucene_search_BlendedTermQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class BlendedTermQuery$RewriteMethod;
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
      namespace search {

        class BlendedTermQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
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

          explicit BlendedTermQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BlendedTermQuery(const BlendedTermQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          static ::org::apache::lucene::search::BlendedTermQuery$RewriteMethod *BOOLEAN_REWRITE;
          static ::org::apache::lucene::search::BlendedTermQuery$RewriteMethod *DISJUNCTION_MAX_REWRITE;

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

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(BlendedTermQuery);
        extern PyTypeObject *PY_TYPE(BlendedTermQuery);

        class t_BlendedTermQuery {
        public:
          PyObject_HEAD
          BlendedTermQuery object;
          static PyObject *wrap_Object(const BlendedTermQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
