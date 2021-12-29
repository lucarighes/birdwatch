#ifndef org_apache_lucene_search_NamedMatches_H
#define org_apache_lucene_search_NamedMatches_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Iterator;
    class List;
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
        class NamedMatches;
        class Query;
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

        class NamedMatches : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8cad8bc7419f33f6,
            mid_findNamedMatches_9f0db6b673de6281,
            mid_getMatches_c8ade3d4cb307f38,
            mid_getName_db9b55ba01e03e4b,
            mid_getSubMatches_d4dfbf7a26ff41df,
            mid_iterator_233a192dadb0917d,
            mid_wrapQuery_5304f30bb9d5ab9b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NamedMatches(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NamedMatches(const NamedMatches& obj) : ::java::lang::Object(obj) {}

          NamedMatches(const ::java::lang::String &, const ::org::apache::lucene::search::Matches &);

          static ::java::util::List findNamedMatches(const ::org::apache::lucene::search::Matches &);
          ::org::apache::lucene::search::MatchesIterator getMatches(const ::java::lang::String &) const;
          ::java::lang::String getName() const;
          ::java::util::Collection getSubMatches() const;
          ::java::util::Iterator iterator() const;
          static ::org::apache::lucene::search::Query wrapQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &);
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
        extern PyType_Def PY_TYPE_DEF(NamedMatches);
        extern PyTypeObject *PY_TYPE(NamedMatches);

        class t_NamedMatches {
        public:
          PyObject_HEAD
          NamedMatches object;
          static PyObject *wrap_Object(const NamedMatches&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
