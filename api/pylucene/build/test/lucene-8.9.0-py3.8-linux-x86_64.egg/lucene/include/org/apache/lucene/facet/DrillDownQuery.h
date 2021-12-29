#ifndef org_apache_lucene_facet_DrillDownQuery_H
#define org_apache_lucene_facet_DrillDownQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Term;
      }
      namespace facet {
        class DrillDownQuery;
        class FacetsConfig;
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
      namespace facet {

        class DrillDownQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_0d3b7412b5899d32,
            mid_init$_dc4aa9d4f9421600,
            mid_add_e15507bf45c25446,
            mid_add_d9e232bc64b71af0,
            mid_clone_a02b694f45580309,
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_rewrite_bb52f19a8254555c,
            mid_term_69c081e62d1b5d42,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillDownQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DrillDownQuery(const DrillDownQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          DrillDownQuery(const ::org::apache::lucene::facet::FacetsConfig &);
          DrillDownQuery(const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::search::Query &);

          void add(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          void add(const ::java::lang::String &, const ::org::apache::lucene::search::Query &) const;
          DrillDownQuery clone() const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          static ::org::apache::lucene::index::Term term(const ::java::lang::String &, const ::java::lang::String &, const JArray< ::java::lang::String > &);
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
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(DrillDownQuery);
        extern PyTypeObject *PY_TYPE(DrillDownQuery);

        class t_DrillDownQuery {
        public:
          PyObject_HEAD
          DrillDownQuery object;
          static PyObject *wrap_Object(const DrillDownQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
