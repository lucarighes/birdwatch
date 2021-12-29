#ifndef org_apache_lucene_facet_FacetQuery_H
#define org_apache_lucene_facet_FacetQuery_H

#include "org/apache/lucene/search/TermQuery.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetQuery : public ::org::apache::lucene::search::TermQuery {
         public:
          enum {
            mid_init$_e15507bf45c25446,
            mid_init$_b4ad911b759a344b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetQuery(jobject obj) : ::org::apache::lucene::search::TermQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetQuery(const FacetQuery& obj) : ::org::apache::lucene::search::TermQuery(obj) {}

          FacetQuery(const ::java::lang::String &, const JArray< ::java::lang::String > &);
          FacetQuery(const ::org::apache::lucene::facet::FacetsConfig &, const ::java::lang::String &, const JArray< ::java::lang::String > &);
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
        extern PyType_Def PY_TYPE_DEF(FacetQuery);
        extern PyTypeObject *PY_TYPE(FacetQuery);

        class t_FacetQuery {
        public:
          PyObject_HEAD
          FacetQuery object;
          static PyObject *wrap_Object(const FacetQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
