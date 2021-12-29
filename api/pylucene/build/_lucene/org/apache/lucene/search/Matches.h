#ifndef org_apache_lucene_search_Matches_H
#define org_apache_lucene_search_Matches_H

#include "java/lang/Iterable.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
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
        class MatchesIterator;
        class Matches;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Matches : public ::java::lang::Iterable {
         public:
          enum {
            mid_getMatches_c8ade3d4cb307f38,
            mid_getSubMatches_d4dfbf7a26ff41df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Matches(jobject obj) : ::java::lang::Iterable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Matches(const Matches& obj) : ::java::lang::Iterable(obj) {}

          ::org::apache::lucene::search::MatchesIterator getMatches(const ::java::lang::String &) const;
          ::java::util::Collection getSubMatches() const;
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
        extern PyType_Def PY_TYPE_DEF(Matches);
        extern PyTypeObject *PY_TYPE(Matches);

        class t_Matches {
        public:
          PyObject_HEAD
          Matches object;
          static PyObject *wrap_Object(const Matches&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
