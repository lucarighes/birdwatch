#ifndef org_apache_lucene_search_SearcherLifetimeManager$PruneByAge_H
#define org_apache_lucene_search_SearcherLifetimeManager$PruneByAge_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SearcherLifetimeManager$Pruner;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SearcherLifetimeManager$PruneByAge : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3c435f10a3b1e038,
            mid_doPrune_730c836a2963ba3c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearcherLifetimeManager$PruneByAge(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SearcherLifetimeManager$PruneByAge(const SearcherLifetimeManager$PruneByAge& obj) : ::java::lang::Object(obj) {}

          SearcherLifetimeManager$PruneByAge(jdouble);

          jboolean doPrune(jdouble, const ::org::apache::lucene::search::IndexSearcher &) const;
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
        extern PyType_Def PY_TYPE_DEF(SearcherLifetimeManager$PruneByAge);
        extern PyTypeObject *PY_TYPE(SearcherLifetimeManager$PruneByAge);

        class t_SearcherLifetimeManager$PruneByAge {
        public:
          PyObject_HEAD
          SearcherLifetimeManager$PruneByAge object;
          static PyObject *wrap_Object(const SearcherLifetimeManager$PruneByAge&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
